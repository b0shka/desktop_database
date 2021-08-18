#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidgetItem>
#include <QFileDialog>
#include "../add_user/add_user.h"
#include "../filter/filter.h"
#include "../database/database.h"
#include "../logger/logger.h"
#include "../popup/popup.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void get_users_from_db();

private slots:
    void on_close_clicked();
    void on_hide_clicked();
    void on_add_user_clicked();
    void on_update_clicked();
	void on_filter_clicked();
	void on_new_database_clicked();
	void on_open_db_clicked();
	void on_settings_clicked();
	void on_search_returnPressed();
	void on_all_users_itemDoubleClicked(QListWidgetItem *item);
    void keyPressEvent(QKeyEvent *event);
    void mousePressEvent(QMouseEvent* event);
    void mouseMoveEvent(QMouseEvent* event);

    void add_users_to_listWidget(QList<QList<QString>> list_result);
    void layout_title_app(QList<QString> data_app);

	void search(QString search_text);
	int check_error(QString search, QString text_main);
	int check_word_in_word(QString search, QString text_main);

private:
    Ui::MainWindow *ui;
    QPoint m_mousePoint;
    Database database;
    popup *popUp;
};
#endif // MAINWINDOW_H
