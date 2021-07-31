#ifndef DATABASE_H
#define DATABASE_H

#include <QWidget>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QtSql>
#include <QSqlDatabase>
#include "../logger/logger.h"
#include "../main_data/data.h"

class Database
{
public:
    QString first_start();
    QString create_table();
    QList<QList<QString>> get_users();
	QString add_user(const QList<QString> &data_user, const QByteArray &image_bytes1, const QByteArray &image_bytes2, const QByteArray &image_bytes3, const QByteArray &image_bytes4);
	QString update_user(const QList<QString> &data_user, const QString &id, const QByteArray &image_bytes1, const QByteArray &image_bytes2, const QByteArray &image_bytes3, const QByteArray &image_bytes4);
    int generate_id(const QString &table_);
	QList<QString> get_data_user(const QString &id);
	QList<QByteArray> get_bytes_photo(const QString &id);
	QList<QString> get_tables();
	void get_data_filter();
	QString add_new_table(const QString &new_name_table);
	QString delete_table(const QString &delete_name_table);
	int get_count_table();

private:
    QSqlDatabase db;
    QSqlQuery sql;
	QString name_table = g_table;
    QString str_requests;
};

#endif // DATABASE_H
