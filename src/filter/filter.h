#ifndef FILTER_H
#define FILTER_H

#include <QDialog>
#include <QMouseEvent>
#include <QPoint>
#include <QMessageBox>
#include "../logger/logger.h"
#include "../popup/popup.h"
#include "../main_data/data.h"
#include "../database/database.h"

namespace Ui {
class Filter;
}

class Filter : public QDialog
{
	Q_OBJECT

public:
	explicit Filter(QWidget *parent = nullptr);
	~Filter();

private slots:
	void on_hide_clicked();
	void on_close_clicked();
    void on_rename_table_clicked();
	void on_new_table_clicked();
	void on_delete_table_clicked();
	void on_save_clicked();
	void on_drop_clicked();
	void keyPressEvent(QKeyEvent *event);
	void mousePressEvent(QMouseEvent* event);
	void mouseMoveEvent(QMouseEvent* event);

	void add_info();

private:
	Ui::Filter *ui;
	QPoint m_mousePoint;
	popup *popUp;
	Database database;
};

#endif // FILTER_H
