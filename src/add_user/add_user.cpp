#include "add_user.h"
#include "ui_add_user.h"

Add_user::Add_user(const QString &mode, const QString &id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add_user)
{
    ui->setupUi(this);
    popUp = new popup();

    setWindowFlags(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);

	if (mode == "ADD")
	{
		g_mode = "ADD";
		ui->add_save_user->setText("Создать");
		ui->first_name->setFocus();

		ui->delete_user->setHidden(true);
		ui->convert->setHidden(true);
		ui->delete_photo_1->setHidden(true);
		ui->delete_photo_2->setHidden(true);
		ui->delete_photo_3->setHidden(true);
		ui->delete_photo_4->setHidden(true);
		ui->download_photo_1->setHidden(true);
		ui->download_photo_2->setHidden(true);
		ui->download_photo_3->setHidden(true);
		ui->download_photo_4->setHidden(true);
		ui->delete_doc_1->setHidden(true);
		ui->delete_doc_2->setHidden(true);
		ui->delete_doc_3->setHidden(true);
		ui->download_doc_1->setHidden(true);
		ui->download_doc_2->setHidden(true);
		ui->download_doc_3->setHidden(true);
	}
	else if (mode == "EDIT")
	{
		g_mode = "EDIT";
		g_id = id;
		ui->add_save_user->setText("Сохранить");

		QList<QString> data_user = database.get_data_user(id);
		QList<QByteArray> bytes_photo = database.get_bytes_photo(id);

		if (data_user.at(0) == "ERROR")
		{
			popUp->setPopupText("Не удается получить данные пользователя");
			popUp->show();
			close();
		}
		else
			add_info_user(data_user, bytes_photo);
	}

	QList<QString> list_tables = database.get_tables();
	list_tables.removeOne(g_table);
	ui->list_table->addItem(g_table);
	ui->list_table->addItems(list_tables);
}

Add_user::~Add_user()
{
    delete ui;
}

void Add_user::add_info_user(const QList<QString> &data_user, const QList<QByteArray> &bytes_photo)
{
	ui->first_name->setText(data_user.at(0));
	ui->last_name->setText(data_user.at(1));
	ui->patronymic->setText(data_user.at(2));
	ui->age->setText(data_user.at(3));
	ui->birth->setText(data_user.at(4));
	ui->country_city->setText(data_user.at(5));
	ui->address->setText(data_user.at(6));
	ui->index_->setText(data_user.at(7));
	ui->number_phone->setText(data_user.at(8));
	ui->passport->setText(data_user.at(9));
	ui->snils->setText(data_user.at(10));
	ui->car->setText(data_user.at(11));
	ui->education->setText(data_user.at(12));
	ui->place_work->setText(data_user.at(13));
	ui->email->setText(data_user.at(14));
	ui->vk->setText(data_user.at(15));
	ui->instagram->setText(data_user.at(16));
	ui->telegram->setText(data_user.at(17));
	ui->other_social->setText(data_user.at(18));
	ui->hobby->setText(data_user.at(19));
	ui->other->setText(data_user.at(20));
	ui->relatives->setText(data_user.at(21));
	ui->doc_1->setText(data_user.at(22));
	ui->doc_2->setText(data_user.at(23));
	ui->doc_3->setText(data_user.at(24));

	if (bytes_photo.size() == 0)
	{
		qDebug(logError) << "Получение байтов изображения из БД";
		popUp->setPopupText("Ошибка при получении фотографий из БД");
		popUp->show();
	}
	else
	{
		one_Pixmap.loadFromData(bytes_photo[0]);
		two_Pixmap.loadFromData(bytes_photo[1]);
		three_Pixmap.loadFromData(bytes_photo[2]);
		four_Pixmap.loadFromData(bytes_photo[3]);

		int width = ui->photo_1->width();
		int height = ui->photo_1->height();

		ui->photo_1->setPixmap(one_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		ui->photo_2->setPixmap(two_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		ui->photo_3->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		ui->photo_4->setPixmap(four_Pixmap.scaled(width, height, Qt::KeepAspectRatio));

		if (one_Pixmap.isNull())
		{
			ui->delete_photo_1->setHidden(true);
			ui->download_photo_1->setHidden(true);
		}
		if (two_Pixmap.isNull())
		{
			ui->delete_photo_2->setHidden(true);
			ui->download_photo_2->setHidden(true);
		}
		if (three_Pixmap.isNull())
		{
			ui->delete_photo_3->setHidden(true);
			ui->download_photo_3->setHidden(true);
		}
		if (four_Pixmap.isNull())
		{
			ui->delete_photo_4->setHidden(true);
			ui->download_photo_4->setHidden(true);
		}

		imageBytes1 = bytes_photo[0];
		imageBytes2 = bytes_photo[1];
		imageBytes3 = bytes_photo[2];
		imageBytes4 = bytes_photo[3];
	}

	if (ui->doc_1->text() == nullptr)
	{
		ui->delete_doc_1->setHidden(true);
		ui->download_doc_1->setHidden(true);
	}
	if (ui->doc_2->text() == nullptr)
	{
		ui->delete_doc_2->setHidden(true);
		ui->download_doc_2->setHidden(true);
	}
	if (ui->doc_3->text() == nullptr)
	{
		ui->delete_doc_3->setHidden(true);
		ui->download_doc_3->setHidden(true);
	}
}

void Add_user::on_add_save_user_clicked()
{
	QString first_name, check_first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, hobby, other, relatives, name_doc_1, name_doc_2, name_doc_3;

    first_name = ui->first_name->text();
	check_first_name = first_name.replace(" ", "");

	if (check_first_name.size() == 0)
	{
		ui->first_name->setFocus();
		ui->first_name->setStyleSheet(lock_style);
	}
	else
	{
		ui->first_name->setStyleSheet(default_style);

		last_name = ui->last_name->text();
		patronymic = ui->patronymic->text();
		age = ui->age->text();
		birth = ui->birth->text();
		country_city = ui->country_city->text();
		address = ui->address->text();
		index_ = ui->index_->text();
		number_phone = ui->number_phone->text();
		passport = ui->passport->text();
		snils = ui->snils->text();
		car = ui->car->text();
		education = ui->education->toPlainText();
		place_work = ui->place_work->toPlainText();
		email = ui->email->text();
		vk = ui->vk->text();
		instagram = ui->instagram->text();
		telegram = ui->telegram->text();
		other_social = ui->other_social->toPlainText();
		hobby = ui->hobby->toPlainText();
		other = ui->other->toPlainText();
		relatives = ui->relatives->toPlainText();
		name_doc_1 = ui->doc_1->text();
		name_doc_2 = ui->doc_2->text();
		name_doc_3 = ui->doc_3->text();

		QList<QString> data_user = {first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, hobby, other, relatives};
		QString result_add;
		QString old_table = g_table;
		g_table = ui->list_table->currentText();

		if (g_mode == "ADD")
			result_add = database.add_user(data_user, imageBytes1, imageBytes2, imageBytes3, imageBytes4, name_doc_1, docBytes1, name_doc_2, docBytes2, name_doc_3, docBytes3);
		else if (g_mode == "EDIT")
		{
			if (old_table != g_table)
			{
				result_add = database.add_user(data_user, imageBytes1, imageBytes2, imageBytes3, imageBytes4, name_doc_1, docBytes1, name_doc_2, docBytes2, name_doc_3, docBytes3);
				database.delete_user(old_table, g_id);
			}
			else
				result_add = database.update_user(data_user, g_id, imageBytes1, imageBytes2, imageBytes3, imageBytes4, name_doc_1, docBytes1, name_doc_2, docBytes2, name_doc_3, docBytes3);
		}

		if (result_add == "Success")
		{
			qDebug(logInfo()) << "Добавление/изменение записи";
			popUp->setPopupText("Запись успешно добавлена/изменена");
			popUp->show();
			close();
		}
		else if (result_add == "ERROR")
		{
			popUp->setPopupText("Ошибка при добавлении/изменении записи");
			popUp->show();
		}
	}
}

void Add_user::on_delete_user_clicked()
{
	QMessageBox::Button reply = QMessageBox::question(this, "Подтверждение удаления", "Вы уверены?", QMessageBox::Yes | QMessageBox::No);

	if (reply == QMessageBox::Yes)
	{
		database.delete_user(g_table, g_id);
		qDebug(logInfo) << "Запись удалена";
		popUp->setPopupText("Запись удалена");
		popUp->show();
		close();
	}
}

void Add_user::on_convert_clicked()
{
	QString first_name, check_first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, hobby, other, relatives, name_file;

	first_name = ui->first_name->text();
	check_first_name = first_name.replace(" ", "");

	if (check_first_name.size() == 0)
	{
		ui->first_name->setFocus();
		ui->first_name->setStyleSheet(lock_style);
	}
	else
	{
		ui->first_name->setStyleSheet(default_style);

		last_name = ui->last_name->text();
		patronymic = ui->patronymic->text();
		age = ui->age->text();
		birth = ui->birth->text();
		country_city = ui->country_city->text();
		address = ui->address->text();
		index_ = ui->index_->text();
		number_phone = ui->number_phone->text();
		passport = ui->passport->text();
		snils = ui->snils->text();
		car = ui->car->text();
		education = ui->education->toPlainText();
		place_work = ui->place_work->toPlainText();
		email = ui->email->text();
		vk = ui->vk->text();
		instagram = ui->instagram->text();
		telegram = ui->telegram->text();
		other_social = ui->other_social->toPlainText();
		hobby = ui->hobby->toPlainText();
		other = ui->other->toPlainText();
		relatives = ui->relatives->toPlainText();
		name_file = first_name + " " + last_name + ".txt";

		ofstream file_txt(name_file.toUtf8().constData());

		file_txt << first_name.toUtf8().constData();
		file_txt << " " << last_name.toUtf8().constData();
		file_txt << " " << patronymic.toUtf8().constData() << ":\n";
		file_txt << "Дата рождения: " << birth.toUtf8().constData() << " (" << age.toUtf8().constData() << ")\n";
		file_txt << country_city.toUtf8().constData() << "\n";
		file_txt << "Адрес: " << address.toUtf8().constData() << " " << index_.toUtf8().constData() << "\n";
		file_txt << "Номер телефона: " << number_phone.toUtf8().constData() << "\n";
		file_txt << "Паспорт: " << passport.toUtf8().constData() << "\n";
		file_txt << "Снилс: " << snils.toUtf8().constData() << "\n";
		file_txt << "Машина: " << car.toUtf8().constData() << "\n";
		file_txt << "Образование: " << education.toUtf8().constData() << "\n";
		file_txt << "Место работы/учёбы: " << place_work.toUtf8().constData() << "\n";
		file_txt << "Хобби: " << hobby.toUtf8().constData() << "\n\n";
		file_txt << "Социальные сети:\nПочта: " << email.toUtf8().constData() << "\n";
		file_txt << "ВКонтакте: " << vk.toUtf8().constData() << "\n";
		file_txt << "Инстаграм: " << instagram.toUtf8().constData() << "\n";
		file_txt << "Телеграм: " << telegram.toUtf8().constData() << "\n";
		file_txt << "Другие соц. сети: " << other_social.toUtf8().constData() << "\n\n";
		file_txt << "Родственники: " << relatives.toUtf8().constData() << "\n\n";
		file_txt << "Другое:\n" << other.toUtf8().constData();

		file_txt.close();
	}
}

void Add_user::on_close_clicked()
{
	close();
}

void Add_user::on_hide_clicked()
{
	showMinimized();
}

void Add_user::on_add_doc_clicked()
{
	QString filename = QFileDialog::getOpenFileName(this,
			tr("Choose document"), "", tr("Image Files (*.*)"));
	QList<QString> list_path = filename.split("/");
	QString doc_name;
	for (QString i : list_path)
		doc_name = i;

	if (filename != nullptr)
	{
		if (ui->doc_1->text() == "")
			count_doc = 0;
		else if (ui->doc_2->text() == "")
			count_doc = 1;
		else if (ui->doc_3->text() == "")
			count_doc = 2;
		else
			count_doc = 3;
	}

	if (count_doc == 0 || count_doc == 3)
	{
		ui->doc_1->setText(doc_name);
		QFile file(filename);
		if (!file.open(QIODevice::ReadOnly))
			qDebug(logError()) << "Ошибка при открытии файла";
		else
			docBytes1 = file.readAll();
		file.close();
		ui->delete_doc_1->setHidden(false);
		ui->download_doc_1->setHidden(false);
	}
	else if (count_doc == 1)
	{
		ui->doc_2->setText(doc_name);
		QFile file(filename);
		if (!file.open(QIODevice::ReadOnly))
			qDebug(logError()) << "Ошибка при открытии файла";
		else
			docBytes2 = file.readAll();
		file.close();
		ui->delete_doc_2->setHidden(false);
		ui->download_doc_2->setHidden(false);
	}
	else if (count_doc == 2)
	{
		ui->doc_3->setText(doc_name);
		QFile file(filename);
		if (!file.open(QIODevice::ReadOnly))
			qDebug(logError()) << "Ошибка при открытии файла";
		else
			docBytes3 = file.readAll();
		file.close();
		ui->delete_doc_3->setHidden(false);
		ui->download_doc_3->setHidden(false);
	}

	popUp->setPopupText("Документ добавлен");
	popUp->show();
}

void Add_user::on_add_photo_clicked()
{
	QString filename = QFileDialog::getOpenFileName(this,
			tr("Choose image"), "", tr("Image Files (*.png *.jpg *.bmp)"));

	if (filename != nullptr)
	{
		if (one_Pixmap.isNull())
			count_photo = 0;
		else if (two_Pixmap.isNull())
			count_photo = 1;
		else if (three_Pixmap.isNull())
			count_photo = 2;
		else if (four_Pixmap.isNull())
			count_photo = 3;
		else
			count_photo = 4;

		int width = ui->photo_1->width();
		int height = ui->photo_1->height();

		if (count_photo == 0 || count_photo == 4)
		{
			one_Pixmap.load(filename);
			ui->photo_1->setPixmap(one_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
			QBuffer buffer(&imageBytes1);
			buffer.open(QIODevice::WriteOnly);

			if (filename.split(".")[1] == "png")
				one_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				one_Pixmap.save(&buffer, "JPG");
			ui->delete_photo_1->setHidden(false);
			ui->download_photo_1->setHidden(false);
		}
		else if (count_photo == 1)
		{
			two_Pixmap.load(filename);
			ui->photo_2->setPixmap(two_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
			QBuffer buffer(&imageBytes2);
			buffer.open(QIODevice::WriteOnly);

			if (filename.split(".")[1] == "png")
				two_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				two_Pixmap.save(&buffer, "JPG");
			ui->delete_photo_2->setHidden(false);
			ui->download_photo_2->setHidden(false);
		}
		else if (count_photo == 2)
		{
			three_Pixmap.load(filename);
			ui->photo_3->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
			QBuffer buffer(&imageBytes3);
			buffer.open(QIODevice::WriteOnly);

			if (filename.split(".")[1] == "png")
				three_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				three_Pixmap.save(&buffer, "JPG");
			ui->delete_photo_3->setHidden(false);
			ui->download_photo_3->setHidden(false);
		}
		else if (count_photo == 3)
		{
			four_Pixmap.load(filename);
			ui->photo_4->setPixmap(four_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
			count_photo = 4;
			QBuffer buffer(&imageBytes4);
			buffer.open(QIODevice::WriteOnly);

			if (filename.split(".")[1] == "png")
				four_Pixmap.save(&buffer, "PNG");
			else if (filename.split(".")[1] == "jpg" || filename.split(".")[1] == "jpeg")
				four_Pixmap.save(&buffer, "JPG");
			ui->delete_photo_4->setHidden(false);
			ui->download_photo_4->setHidden(false);
		}

		popUp->setPopupText("Фотография добавлена");
		popUp->show();
	}
}

void Add_user::on_delete_photo_1_clicked()
{
	int width = ui->photo_1->width();
	int height = ui->photo_1->height();

	if (two_Pixmap.isNull())
	{
		ui->photo_1->clear();
		ui->delete_photo_1->setHidden(true);
		ui->download_photo_1->setHidden(true);
		one_Pixmap.loadFromData(nullptr);
		imageBytes1.clear();
	}
	else
		ui->photo_1->setPixmap(two_Pixmap.scaled(width, height, Qt::KeepAspectRatio));

	if (three_Pixmap.isNull())
	{
		ui->photo_2->clear();
		ui->delete_photo_2->setHidden(true);
		ui->download_photo_2->setHidden(true);
		two_Pixmap.loadFromData(nullptr);
		imageBytes2.clear();
	}
	else
	{
		ui->photo_2->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		two_Pixmap = three_Pixmap;

		if (four_Pixmap.isNull())
		{
			ui->photo_3->clear();
			ui->delete_photo_3->setHidden(true);
			ui->download_photo_3->setHidden(true);
			three_Pixmap.loadFromData(nullptr);
			imageBytes3.clear();
		}
		else
		{
			ui->photo_3->setPixmap(four_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
			three_Pixmap = four_Pixmap;
			ui->photo_4->clear();
			ui->delete_photo_4->setHidden(true);
			ui->download_photo_4->setHidden(true);
			four_Pixmap.loadFromData(nullptr);
			imageBytes4.clear();
		}
	}
}

void Add_user::on_delete_photo_2_clicked()
{
	int width = ui->photo_1->width();
	int height = ui->photo_1->height();

	if (three_Pixmap.isNull())
	{
		ui->photo_2->clear();
		ui->delete_photo_2->setHidden(true);
		ui->download_photo_2->setHidden(true);
		two_Pixmap.loadFromData(nullptr);
		imageBytes2.clear();
	}
	else
	{
		ui->photo_2->setPixmap(three_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		two_Pixmap = three_Pixmap;

		if (four_Pixmap.isNull())
		{
			ui->photo_3->clear();
			ui->delete_photo_3->setHidden(true);
			ui->download_photo_3->setHidden(true);
			three_Pixmap.loadFromData(nullptr);
			imageBytes3.clear();
		}
		else
		{
			ui->photo_3->setPixmap(four_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
			three_Pixmap = four_Pixmap;
			ui->photo_4->clear();
			ui->delete_photo_4->setHidden(true);
			ui->download_photo_4->setHidden(true);
			four_Pixmap.loadFromData(nullptr);
			imageBytes4.clear();
		}
	}
}

void Add_user::on_delete_photo_3_clicked()
{
	int width = ui->photo_1->width();
	int height = ui->photo_1->height();

	if (four_Pixmap.isNull())
	{
		ui->photo_3->clear();
		ui->delete_photo_3->setHidden(true);
		ui->download_photo_3->setHidden(true);
		three_Pixmap.loadFromData(nullptr);
		imageBytes3.clear();
	}
	else
	{
		ui->photo_3->setPixmap(four_Pixmap.scaled(width, height, Qt::KeepAspectRatio));
		three_Pixmap = four_Pixmap;
		ui->photo_4->clear();
		ui->delete_photo_4->setHidden(true);
		ui->download_photo_4->setHidden(true);
		four_Pixmap.loadFromData(nullptr);
		imageBytes4.clear();
	}
}

void Add_user::on_delete_photo_4_clicked()
{
	ui->photo_4->clear();
	ui->delete_photo_4->setHidden(true);
	ui->download_photo_4->setHidden(true);
	four_Pixmap.loadFromData(nullptr);
	imageBytes4.clear();
}

void Add_user::on_download_photo_1_clicked()
{
	QFile file("photo_1.png");

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии фото";
	else
		file.write(imageBytes1);

	file.close();

	popUp->setPopupText("Фотография скачалась");
	popUp->show();
}

void Add_user::on_download_photo_2_clicked()
{
	QFile file("photo_2.png");

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии фото";
	else
		file.write(imageBytes2);

	file.close();

	popUp->setPopupText("Фотография скачалась");
	popUp->show();
}

void Add_user::on_download_photo_3_clicked()
{
	QFile file("photo_3.png");

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии фото";
	else
		file.write(imageBytes3);

	file.close();

	popUp->setPopupText("Фотография скачалась");
	popUp->show();
}

void Add_user::on_download_photo_4_clicked()
{
	QFile file("photo_4.png");

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии фото";
	else
		file.write(imageBytes4);

	file.close();

	popUp->setPopupText("Фотография скачалась");
	popUp->show();
}

void Add_user::on_delete_doc_1_clicked()
{
	if (ui->doc_2->text() == "")
	{
		ui->doc_1->clear();
		docBytes1.clear();
		ui->delete_doc_1->setHidden(true);
		ui->download_doc_1->setHidden(true);
	}
	else
		ui->doc_1->setText(ui->doc_2->text());

	if (ui->doc_3->text() == "")
	{
		ui->doc_2->clear();
		docBytes1 = docBytes2;
		docBytes2.clear();
		ui->delete_doc_2->setHidden(true);
		ui->download_doc_2->setHidden(true);
	}
	else
	{
		ui->doc_2->setText(ui->doc_3->text());
		ui->doc_3->clear();
		docBytes2 = docBytes3;
		docBytes3.clear();
		ui->delete_doc_3->setHidden(true);
		ui->download_doc_3->setHidden(true);
	}
}

void Add_user::on_delete_doc_2_clicked()
{
	if (ui->doc_3->text() == "")
	{
		ui->doc_2->clear();
		docBytes1 = docBytes2;
		docBytes2.clear();
		ui->delete_doc_2->setHidden(true);
		ui->download_doc_2->setHidden(true);
	}
	else
	{
		ui->doc_2->setText(ui->doc_3->text());
		ui->doc_3->clear();
		docBytes2 = docBytes3;
		docBytes3.clear();
		ui->delete_doc_3->setHidden(true);
		ui->download_doc_3->setHidden(true);
	}
}

void Add_user::on_delete_doc_3_clicked()
{
	ui->doc_3->clear();
	docBytes3.clear();
	ui->delete_doc_3->setHidden(true);
	ui->download_doc_3->setHidden(true);
}

void Add_user::on_download_doc_1_clicked()
{
	QString filename = ui->doc_1->text();
	QList<QByteArray> bytes_doc = database.get_bytes_document(g_id);
	docBytes1 = bytes_doc.at(0);
	QFile file(filename);

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии файла";
	else
		file.write(docBytes1);

	file.close();

	popUp->setPopupText("Документ скачался");
	popUp->show();
}

void Add_user::on_download_doc_2_clicked()
{
	QString filename = ui->doc_2->text();
	QList<QByteArray> bytes_doc = database.get_bytes_document(g_id);
	docBytes2 = bytes_doc.at(1);
	QFile file(filename);

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии файла";
	else
		file.write(docBytes2);

	file.close();

	popUp->setPopupText("Документ скачался");
	popUp->show();
}

void Add_user::on_download_doc_3_clicked()
{
	QString filename = ui->doc_3->text();
	QList<QByteArray> bytes_doc = database.get_bytes_document(g_id);
	docBytes3 = bytes_doc.at(2);
	QFile file(filename);

	if (!file.open(QIODevice::WriteOnly))
		qDebug(logError()) << "Ошибка при открытии файла";
	else
		file.write(docBytes3);

	file.close();

	popUp->setPopupText("Документ скачался");
	popUp->show();
}

void Add_user::mousePressEvent(QMouseEvent *event)
{
	if (event->button() == Qt::LeftButton) {
		m_mousePoint = event->globalPos() - frameGeometry().topLeft();
		event->accept();
	}
}

void Add_user::mouseMoveEvent(QMouseEvent *event)
{
	if (event->buttons() & Qt::LeftButton )
	{
		move(event->globalPos() - m_mousePoint);
		event->accept();
	}
}

void Add_user::keyPressEvent(QKeyEvent *event)
{
	switch (event->key())
	{
		case Qt::Key_Escape:
			close();
			break;
	}
}

