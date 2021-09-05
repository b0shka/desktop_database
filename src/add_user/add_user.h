#ifndef ADD_USER_H
#define ADD_USER_H

#include <QDialog>
#include <QMainWindow>
#include <QMouseEvent>
#include <QPoint>
#include <QFileDialog>
#include <QBuffer>
#include <QByteArray>
#include <QFile>
#include <QMessageBox>
#include <fstream>
#include <string>
#include "../database/database.h"
#include "../logger/logger.h"
#include "../popup/popup.h"
#include "../main_data/data.h"

using namespace std;
namespace Ui {
class Add_user;
}

class Add_user : public QDialog
{
    Q_OBJECT

public:
	explicit Add_user(const QString &mode, const QString &id = nullptr, QWidget *parent = nullptr);
    ~Add_user();

private slots:
    void on_close_clicked();
    void on_hide_clicked();
	void on_add_save_user_clicked();
    void on_add_doc_clicked();
    void on_add_photo_clicked();
    void on_delete_photo_1_clicked();
    void on_delete_photo_2_clicked();
    void on_delete_photo_3_clicked();
    void on_delete_photo_4_clicked();
	void on_download_photo_1_clicked();
	void on_download_photo_2_clicked();
	void on_download_photo_3_clicked();
	void on_download_photo_4_clicked();
	void on_delete_doc_1_clicked();
	void on_delete_doc_2_clicked();
	void on_delete_doc_3_clicked();
	void on_download_doc_1_clicked();
	void on_download_doc_2_clicked();
	void on_download_doc_3_clicked();
	void on_delete_user_clicked();
	void on_convert_clicked();
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

	void add_info_user(const QList<QString> &data_user, const QList<QByteArray> &bytes_photo);

private:
    Ui::Add_user *ui;
	QPoint m_mousePoint;
    Database database;
	popup *popUp;
	QPixmap one_Pixmap = QPixmap();
	QPixmap two_Pixmap = QPixmap();
	QPixmap three_Pixmap = QPixmap();
	QPixmap four_Pixmap = QPixmap();
	int count_photo, count_doc;
	QByteArray imageBytes1, imageBytes2, imageBytes3, imageBytes4, docBytes1, docBytes2 ,docBytes3;
	QString g_mode, g_id;
};

#endif // ADD_USER_H
