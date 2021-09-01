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
		ui->all_users->clear();
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

	if (data_user[1].size() < 3)
		title_app = data_user[1] + "\t\t\t" + data_user[2];
	else if (data_user[1].size() > 8)
		title_app = data_user[1] + "\t" + data_user[2];
    else
		title_app = data_user[1] + "\t\t" + data_user[2];

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
	if (g_status_db == 1)
	{
		Add_user add_user("ADD");
		add_user.setModal(true);
		add_user.exec();

		get_users_from_db();
	}
	else
	{
		popUp->setPopupText("Сначала откройте или создайте БД");
		popUp->show();
	}
}

void MainWindow::on_update_clicked()
{
	if (g_status_db == 1)
	{
		database.get_data_filter();
		get_users_from_db();
	}
	else
	{
		popUp->setPopupText("Сначала откройте или создайте БД");
		popUp->show();
	}
}

void MainWindow::on_filter_clicked()
{
	if (g_status_db == 1)
	{
		Filter filter;
		filter.setModal(true);
		filter.exec();

		get_users_from_db();
	}
	else
	{
		popUp->setPopupText("Сначала откройте или создайте БД");
		popUp->show();
	}
}

void MainWindow::on_new_database_clicked()
{
	QString filename = QFileDialog::getSaveFileName(0);
	database.first_start(filename + ".db");

	database.get_data_filter();
	get_users_from_db();
}

void MainWindow::on_open_db_clicked()
{
	QString filename = QFileDialog::getOpenFileName(this,
			tr("Choose database"), "", tr("Image Files (*.db *.sql *.sqlite)"));

	if (filename != nullptr)
	{
		QString result_start = database.first_start(filename);
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
}

void MainWindow::on_all_users_itemDoubleClicked(QListWidgetItem *item)
{
	QString id = item->toolTip();

	Add_user add_user("EDIT", id);
	add_user.setModal(true);
	add_user.exec();

	database.get_data_filter();
	get_users_from_db();
}

void MainWindow::on_search_returnPressed()
{
	if (g_status_db == 1)
	{
		QString search_text = ui->search->text();
		ui->search->clear();
		search(search_text);
	}
	else
	{
		popUp->setPopupText("Сначала откройте или создайте БД");
		popUp->show();
	}
}

void MainWindow::search(QString search_text)
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
			QList<QList<QString>> list_result = {};

			for (auto i : list_users)
			{
				if (check_error(search_text.toLower(), i[0].toLower()) == 1 || check_error(search_text.toLower(), i[1].toLower()) == 1 || check_error(search_text.toLower(), i[2].toLower()) == 1)
					list_result.push_back((i));

				else if (check_word_in_word(search_text.toLower(), i[0].toLower()) == 1 || check_word_in_word(search_text.toLower(), i[1].toLower()) == 1 || check_word_in_word(search_text.toLower(), i[2].toLower()) == 1)
					list_result.push_back((i));
			}
			add_users_to_listWidget(list_result);
			list_users.clear();
			list_result.clear();
		}
	}
	else
	{
		qDebug(logError()) << "Нет записей в БД";
		popUp->setPopupText("Нет записей в БД");
		popUp->show();
	}
}

int MainWindow::check_error(QString search, QString text_main)
{
	if (search.size() > 4)
	{
		int count = 0;
		for (int j = 0; j < search.size(); j++)
		{
			if (text_main[j] != search[j])
				count++;
		}
		if (count <= 1)
			return 1;
		else if (count <= 2 && (text_main.size() - search.size()) < 5)
			return 1;
		else
			return 0;
	}
	return 0;
}

int MainWindow::check_word_in_word(QString search, QString text_main)
{
	bool result = text_main.contains(search);

	if (result == true)
		return 1;
	else
		return 0;
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

