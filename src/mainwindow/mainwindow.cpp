#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    popUp = new popup();

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

    ui->search->setFocus();

    QString result_start = database.first_start();
    if (result_start == "ERROR")
    {
        qDebug(logError()) << "Старт программы";
		popUp->setPopupText("Ошибка при старте прогрммы");
        popUp->show();
    }
    else
	{
		database.get_data_filter();
		get_users_from_db();
	}
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::get_users_from_db()
{
    QList<QList<QString>> list_users = database.get_users();

    if (list_users.size() != 0)
    {
        if (list_users.at(0).at(0) == "ERROR")
        {
            qDebug(logError()) << "Получение программ из БД";
            popUp->setPopupText("Ошибка на стороне сервера");
            popUp->show();
        }
        else
        {
            add_users_to_listWidget(list_users);
            list_users.clear();
        }
    }
    else
    {
        qDebug(logError()) << "Нет записей в БД";
        popUp->setPopupText("Нет записей в БД");
        popUp->show();
    }
}

void MainWindow::add_users_to_listWidget(QList<QList<QString>> list_result)
{
    ui->all_users->clear();

	for (auto i : list_result)
	{
		if (i[3].toInt() >= g_min_age && i[3].toInt() <= g_max_age)
			layout_title_app(i);
	}
}

void MainWindow::layout_title_app(QList<QString> data_user)
{
    QListWidgetItem *item = new QListWidgetItem;
    QString title_app;

	if (data_user[1].size() < 4)
		title_app = data_user[1] + "\t\t" + data_user[2];
    else
		title_app = data_user[1] + "\t" + data_user[2];

    item->setText(title_app);
	item->setToolTip(data_user[0]);
    ui->all_users->addItem(item);
}

void MainWindow::on_close_clicked()
{
    close();
}

void MainWindow::on_hide_clicked()
{
    showMinimized();
}

void MainWindow::on_add_user_clicked()
{
	Add_user add_user("ADD");
    add_user.setModal(true);
    add_user.exec();

    get_users_from_db();
}

void MainWindow::on_update_clicked()
{
    get_users_from_db();
}

void MainWindow::on_filter_clicked()
{
	Filter filter;
	filter.setModal(true);
	filter.exec();

	get_users_from_db();
}

void MainWindow::on_search_returnPressed()
{
    QString search;
    search = ui->search->text();

	ui->search->clear();
}

void MainWindow::on_all_users_itemDoubleClicked(QListWidgetItem *item)
{
	QString id = item->toolTip();

	Add_user add_user("EDIT", id);
	add_user.setModal(true);
	add_user.exec();

	get_users_from_db();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        m_mousePoint = event->globalPos() - frameGeometry().topLeft();
        event->accept();
    }
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton )
    {
        move(event->globalPos() - m_mousePoint);
        event->accept();
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key())
    {
        case Qt::Key_Escape:
            close();
            break;
	    case Qt::Key_F5:
            database.get_data_filter();
            get_users_from_db();
            break;
    }
}

