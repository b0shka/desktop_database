#include "database.h"

QString Database::first_start(const QString &name_db)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
	db.setDatabaseName(name_db);
    sql = QSqlQuery(db);
    if (!db.open())
    {
        qDebug(logError) << db.lastError().text();
        return "ERROR";
    }
    QString result_create_table = create_table();
	if (result_create_table == "ERROR")
        return "ERROR";
    else
	{
		g_status_db = 1;
        return "Success";
	}
}

QString Database::create_table()
{
	int count_table = get_count_table();
	QString result_create;

	if (count_table == 0)
	{
		result_create = add_new_table(g_table);
		return result_create;
	}

	return "Success";
}

QList<QList<QString> > Database::get_users()
{
	str_requests = "SELECT id, first_name, last_name, age FROM " + g_table + ";";

    if (!sql.exec(str_requests))
    {
        qDebug(logError) << "Не удается получить данные всех пользователей " << db.lastError().text();
        return {{"ERROR"}};
    }

	QList<QList<QString>> list_apps_name = {};
    QSqlRecord get_data = sql.record();
	QString id, first_name, last_name, age;

    while (sql.next())
    {
		id = sql.value(get_data.indexOf("id")).toString();
        first_name = sql.value(get_data.indexOf("first_name")).toString();
        last_name = sql.value(get_data.indexOf("last_name")).toString();
		age = sql.value(get_data.indexOf("age")).toString();

		list_apps_name.push_back({id, first_name, last_name, age});
    }

	return list_apps_name;
}

QString Database::add_user(const QList<QString> &data_user, const QByteArray &image_bytes1, const QByteArray &image_bytes2, const QByteArray &image_bytes3, const QByteArray &image_bytes4)
{
	int user_id = generate_id(g_table);

    if (user_id == 0)
    {
        qDebug(logError) << "Не удается сгенерировать id: " << db.lastError().text();
        return "ERROR";
    }

	str_requests = "INSERT INTO " + g_table + " (id, first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, other, relatives, user_photo_1, user_photo_2, user_photo_3, user_photo_4) VALUES(:id, :first_name, :last_name, :patronymic, :age, :birth, :country_city, :address, :index_, :number_phone, :passport, :snils, :car, :education, :place_work, :email, :vk, :instagram, :telegram, :other_social, :other, :relatives, :user_photo_1, :user_photo_2, :user_photo_3, :user_photo_4);";
    sql.prepare(str_requests);
    sql.bindValue(":id", user_id);
    sql.bindValue(":first_name", data_user.at(0));
    sql.bindValue(":last_name", data_user.at(1));
    sql.bindValue(":patronymic", data_user.at(2));
    sql.bindValue(":age", data_user.at(3));
    sql.bindValue(":birth", data_user.at(4));
    sql.bindValue(":country_city", data_user.at(5));
    sql.bindValue(":address", data_user.at(6));
    sql.bindValue(":index_", data_user.at(7));
    sql.bindValue(":number_phone", data_user.at(8));
    sql.bindValue(":passport", data_user.at(9));
    sql.bindValue(":snils", data_user.at(10));
    sql.bindValue(":car", data_user.at(11));
    sql.bindValue(":education", data_user.at(12));
    sql.bindValue(":place_work", data_user.at(13));
    sql.bindValue(":email", data_user.at(14));
    sql.bindValue(":vk", data_user.at(15));
    sql.bindValue(":instagram", data_user.at(16));
    sql.bindValue(":telegram", data_user.at(17));
    sql.bindValue(":other_social", data_user.at(18));
    sql.bindValue(":other", data_user.at(19));
    sql.bindValue(":relatives", data_user.at(20));
	sql.bindValue(":user_photo_1", image_bytes1);
	sql.bindValue(":user_photo_2", image_bytes2);
	sql.bindValue(":user_photo_3", image_bytes3);
	sql.bindValue(":user_photo_4", image_bytes4);

    if (!sql.exec())
    {
        qDebug(logError) << "Не удается добавить пользователя в БД " << db.lastError().text();
        return "ERROR";
    }

    db.commit();
	return "Success";
}

QString Database::update_user(const QList<QString> &data_user, const QString &id, const QByteArray &image_bytes1, const QByteArray &image_bytes2, const QByteArray &image_bytes3, const QByteArray &image_bytes4)
{
	str_requests = "UPDATE " + g_table + " SET first_name = (:first_name), last_name = (:last_name), patronymic = (:patronymic), age = (:age), birth = (:birth), country_city = (:country_city), address = (:address), index_ = (:index_), number_phone = (:number_phone), passport = (:passport), snils = (:snils), car = (:car), education = (:education), place_work = (:place_work), email = (:email), vk = (:vk), instagram = (:instagram), telegram = (:telegram), other_social = (:other_social), other = (:other), relatives = (:relatives), user_photo_1 = (:user_photo_1), user_photo_2 = (:user_photo_2), user_photo_3 = (:user_photo_3), user_photo_4 = (:user_photo_4) WHERE id = (:id);";
	sql.prepare(str_requests);
	sql.bindValue(":id", id);
	sql.bindValue(":first_name", data_user.at(0));
	sql.bindValue(":last_name", data_user.at(1));
	sql.bindValue(":patronymic", data_user.at(2));
	sql.bindValue(":age", data_user.at(3));
	sql.bindValue(":birth", data_user.at(4));
	sql.bindValue(":country_city", data_user.at(5));
	sql.bindValue(":address", data_user.at(6));
	sql.bindValue(":index_", data_user.at(7));
	sql.bindValue(":number_phone", data_user.at(8));
	sql.bindValue(":passport", data_user.at(9));
	sql.bindValue(":snils", data_user.at(10));
	sql.bindValue(":car", data_user.at(11));
	sql.bindValue(":education", data_user.at(12));
	sql.bindValue(":place_work", data_user.at(13));
	sql.bindValue(":email", data_user.at(14));
	sql.bindValue(":vk", data_user.at(15));
	sql.bindValue(":instagram", data_user.at(16));
	sql.bindValue(":telegram", data_user.at(17));
	sql.bindValue(":other_social", data_user.at(18));
	sql.bindValue(":other", data_user.at(19));
	sql.bindValue(":relatives", data_user.at(20));
	sql.bindValue(":user_photo_1", image_bytes1);
	sql.bindValue(":user_photo_2", image_bytes2);
	sql.bindValue(":user_photo_3", image_bytes3);
	sql.bindValue(":user_photo_4", image_bytes4);

	if (!sql.exec())
	{
		qDebug(logError) << "Не удается обновить данные пользователя в БД " << db.lastError().text();
		return "ERROR";
	}

	db.commit();
	return "Success";
}

int Database::generate_id(const QString &table_)
{
    str_requests = "SELECT id FROM " + table_;
    sql.exec(str_requests);

    if (!sql.exec(str_requests))
    {
        qDebug(logError) << "Не удается получить данные из БД для генерации id: " << db.lastError().text();
        return 0;
    }

    QSqlRecord get_data = sql.record();
    int new_id = 1;
    int check_id;

    while (sql.next())
    {
        check_id = sql.value(get_data.indexOf("id")).toInt();
        if (new_id == check_id)
            new_id++;
        else
            break;
    }

	return new_id;
}

QList<QString> Database::get_data_user(const QString &id)
{
	str_requests = "SELECT first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, other, relatives FROM " + g_table + " WHERE id = ('%1');";

	if (!sql.exec(str_requests.arg(id)))
	{
		qDebug(logError) << "Не удается получить данные пользователя " << db.lastError().text();
		return {"ERROR"};
	}

	QSqlRecord get_data = sql.record();
	QString first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, other, relatives;

	while (sql.next())
	{
		first_name = sql.value(get_data.indexOf("first_name")).toString();
		last_name = sql.value(get_data.indexOf("last_name")).toString();
		patronymic = sql.value(get_data.indexOf("patronymic")).toString();
		age = sql.value(get_data.indexOf("age")).toString();
		birth = sql.value(get_data.indexOf("birth")).toString();
		country_city = sql.value(get_data.indexOf("country_city")).toString();
		address = sql.value(get_data.indexOf("address")).toString();
		index_ = sql.value(get_data.indexOf("index_")).toString();
		number_phone = sql.value(get_data.indexOf("number_phone")).toString();
		passport = sql.value(get_data.indexOf("passport")).toString();
		snils = sql.value(get_data.indexOf("snils")).toString();
		car = sql.value(get_data.indexOf("car")).toString();
		education = sql.value(get_data.indexOf("education")).toString();
		place_work = sql.value(get_data.indexOf("place_work")).toString();
		email = sql.value(get_data.indexOf("email")).toString();
		vk = sql.value(get_data.indexOf("vk")).toString();
		instagram = sql.value(get_data.indexOf("instagram")).toString();
		telegram = sql.value(get_data.indexOf("telegram")).toString();
		other_social = sql.value(get_data.indexOf("other_social")).toString();
		other = sql.value(get_data.indexOf("other")).toString();
		relatives = sql.value(get_data.indexOf("relatives")).toString();
	}

	QList<QString> data_user = {first_name, last_name, patronymic, age, birth, country_city, address, index_, number_phone, passport, snils, car, education, place_work, email, vk, instagram, telegram, other_social, other, relatives};

	return data_user;
}

QList<QByteArray> Database::get_bytes_photo(const QString &id)
{
	str_requests = "SELECT user_photo_1, user_photo_2, user_photo_3, user_photo_4 FROM " + g_table + " WHERE id = ('%1');";
	if (!sql.exec(str_requests.arg(id)))
	{
		qDebug(logError) << "Не удается получить bytes фото " << db.lastError().text();
		return {nullptr};
	}

	QSqlRecord get_data = sql.record();
	QByteArray user_photo_1, user_photo_2, user_photo_3, user_photo_4;
	while (sql.next())
	{
		user_photo_1 = sql.value(get_data.indexOf("user_photo_1")).toByteArray();
		user_photo_2 = sql.value(get_data.indexOf("user_photo_2")).toByteArray();
		user_photo_3 = sql.value(get_data.indexOf("user_photo_3")).toByteArray();
		user_photo_4 = sql.value(get_data.indexOf("user_photo_4")).toByteArray();
	}

	return {user_photo_1, user_photo_2, user_photo_3, user_photo_4};
}

QList<QString> Database::get_tables()
{
	str_requests = "SELECT name FROM sqlite_master WHERE type = 'table';";
	if (!sql.exec(str_requests))
	{
		qDebug(logError) << "Не удается получить tables " << db.lastError().text();
		return {"ERROR"};
	}

	QSqlRecord get_data = sql.record();
	QList<QString> list_tables = {};

	while (sql.next())
		list_tables.push_back(sql.value(get_data.indexOf("name")).toByteArray());

	return list_tables;
}

void Database::get_data_filter()
{
	QList<QString> list_tables = get_tables();
	g_table = list_tables.at(0);

	str_requests = "SELECT age FROM " + g_table + ";";

	if (!sql.exec(str_requests))
	{
		qDebug(logError) << "Не удалется получить все возраста для определения g_max_min и g_min_age " << db.lastError().text();
		return;
	}

	QSqlRecord get_data = sql.record();
	QString age;
	QList<QString> list_age;

	while (sql.next())
	{
		list_age.push_back(sql.value(get_data.indexOf("age")).toString());

		age = sql.value(get_data.indexOf("age")).toString();
		if (age.toInt() > g_max_age)
			g_max_age = age.toInt();
	}

	if (list_age.size() > 0)
	{
		g_min_age = list_age[0].toInt();
		for (QString i : list_age)
		{
			if (i.toInt() < g_min_age)
				g_min_age = i.toInt();
		}
	}
	else
		g_min_age = 0;
}

QString Database::add_new_table(const QString &new_name_table)
{
	int count_equal = 0;
	QList<QString> list_tables = get_tables();

	for (auto i : list_tables)
	{
		if (i == new_name_table)
			count_equal++;
	}

	if (count_equal == 0)
	{
		str_requests = "CREATE TABLE " + new_name_table + " ("
													"id integer PRIMARY KEY NOT NULL,"
													"first_name VARCHAR (30) NOT NULL,"
													"last_name VARCHAR (40),"
													"patronymic VARCHAR (50),"
													"age VARCHAR (10),"
													"birth TEXT,"
													"country_city TEXT,"
													"address TEXT,"
													"index_ VARCHAR (6),"
													"number_phone VARCHAR (20),"
													"passport TEXT,"
													"snils TEXT,"
													"car TEXT,"
													"education TEXT,"
													"place_work TEXT,"
													"email TEXT,"
													"vk TEXT,"
													"instagram TEXT,"
													"telegram TEXT,"
													"other_social TEXT,"
													"other TEXT,"
													"relatives TEXT,"
													"user_photo_1 BLOB,"
													"user_photo_2 BLOB,"
													"user_photo_3 BLOB,"
													"user_photo_4 BLOB"
													");";

		if (!sql.exec(str_requests))
		{
			qDebug(logInfo) << "Не удается создать таблицу " << new_name_table << " " << db.lastError().text();
			return "ERROR";
		}
		db.commit();
		qDebug(logInfo) << "Создана таблица " << new_name_table;

		return "Success";
	}
	else
	{
		qDebug(logInfo) << "Таблица с таким именем уже существует " << db.lastError().text();
		return "EQUAL";
	}
}

QString Database::delete_table(const QString &delete_name_table)
{
	int count_table = get_count_table();

	if (count_table == 1)
	{
		qDebug(logError) << "Таблица не может быть удалена, так как она последняя";
		return "LAST_TABLE";
	}
	else
	{
		str_requests = "DROP TABLE " + delete_name_table + ";";

		if (!sql.exec(str_requests))
		{
			qDebug(logInfo) << "Не удается удалить таблицу " << delete_name_table << " " << db.lastError().text();
			return "ERROR";
		}

		db.commit();
		qDebug(logInfo) << "Удаление таблицы";
		return "Success";
	}
}

int Database::get_count_table()
{
	str_requests = "SELECT name FROM sqlite_master WHERE type = 'table';";
	sql.exec(str_requests);
	int count_table = 0;

	while (sql.next())
	{
		count_table++;
	}

	return count_table;
}

void Database::delete_user(const QString &table, const QString &id)
{
	str_requests = "DELETE FROM " + table + " WHERE id = ('%1');";

	if (!sql.exec(str_requests.arg(id)))
		qDebug() << "Не удается удалить запись из старой таблицы";

	db.commit();
}
