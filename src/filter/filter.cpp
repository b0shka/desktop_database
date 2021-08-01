#include "filter.h"
#include "ui_filter.h"

Filter::Filter(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::Filter)
{
	ui->setupUi(this);
	popUp = new popup();

	setWindowFlags(Qt::FramelessWindowHint);
	setAttribute(Qt::WA_TranslucentBackground);

	add_info();
}

Filter::~Filter()
{
	delete ui;
}

void Filter::add_info()
{
	ui->min_age->setText(QString::number(g_min_age));
	ui->max_age->setText(QString::number(g_max_age));

	ui->list_table->clear();
	QList<QString> list_tables = database.get_tables();
	list_tables.removeOne(g_table);
	ui->list_table->addItem(g_table);
	ui->list_table->addItems(list_tables);
}

void Filter::on_new_table_clicked()
{
	QString name_table = ui->name_table->text();
	if (name_table.size() != 0)
	{
		ui->name_table->setStyleSheet(default_style);

		QString result_create = database.add_new_table(name_table);

		if (result_create == "Success")
		{
			popUp->setPopupText("Таблица " + name_table + " создана");
			popUp->show();
		}
		else if (result_create == "ERROR")
		{
			popUp->setPopupText("Таблица " + name_table + " не создана");
			popUp->show();
		}
		else if (result_create == "EQUAL")
		{
			popUp->setPopupText("Таблица с таким именем уже существует");
			popUp->show();
		}

		ui->name_table->clear();
		add_info();
	}
	else
	{
		ui->name_table->setStyleSheet(lock_style);
		popUp->setPopupText("Вы не запонили поле");
		popUp->show();
	}
}

void Filter::on_delete_table_clicked()
{
	QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);

	if (reply == QMessageBox::Yes)
	{
		QString delete_table = ui->list_table->currentText();
		QString result_delete = database.delete_table(delete_table);

		if (result_delete == "Success")
		{
			popUp->setPopupText("Таблица удалена");
			popUp->show();
		}
		else if (result_delete == "LAST_TABLE")
		{
			popUp->setPopupText("Таблица не может быть удалена, так как она последняя");
			popUp->show();
		}
		else if (result_delete == "ERROR")
		{
			popUp->setPopupText("Не удается удалить таблицу");
			popUp->show();
		}

		add_info();
	}
}

void Filter::on_save_clicked()
{
	if (ui->min_age->text().toInt() > ui->max_age->text().toInt())
	{
		ui->min_age->setStyleSheet(lock_style);
		popUp->setPopupText("Минимальная больше максимальной");
		popUp->show();
	}
	else
	{
		ui->min_age->setStyleSheet(default_style);

		if (ui->max_age->text().replace(" ", "").size() == 0)
			g_max_age = 0;
		else
			g_max_age = ui->max_age->text().toInt();

		if (ui->min_age->text().replace(" ", "").size() == 0)
			g_min_age = 0;
		else
			g_min_age = ui->min_age->text().toInt();

		qDebug(logDebug) << "Фильтры применены";
		popUp->setPopupText("Фильтры применены");
		popUp->show();
		close();
	}

	g_table = ui->list_table->currentText();
}

void Filter::on_drop_clicked()
{
	database.get_data_filter();

	if (g_max_age == 0)
		ui->max_age->setText("");
	else
		ui->max_age->setText(QString::number(g_max_age));

	if (g_min_age == 0)
		ui->min_age->setText("");
	else
		ui->min_age->setText(QString::number(g_min_age));

	qDebug(logDebug) << "Фильтры сброшены";
	popUp->setPopupText("Фильтры сброшены");
	popUp->show();
}

void Filter::on_hide_clicked()
{
	showMinimized();
}


void Filter::on_close_clicked()
{
	close();
}

void Filter::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		m_mousePoint = event->globalPos() - frameGeometry().topLeft();
		event->accept();
	}
}

void Filter::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void Filter::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
		case Qt::Key_Escape:
			close();
			break;
	}
}
