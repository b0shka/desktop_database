/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QFrame *frame_5;
    QPushButton *close;
    QPushButton *hide;
    QLabel *title;
    QLineEdit *search;
    QListWidget *all_users;
    QPushButton *add_user;
    QPushButton *filter;
    QPushButton *update;
    QPushButton *new_database;
    QPushButton *open_db;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(410, 588);
        MainWindow->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-size: 14px;\n"
"background-color: #2a2a2a;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 5px;"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 411, 586));
        frame->setMinimumSize(QSize(411, 586));
        frame->setMaximumSize(QSize(411, 586));
        frame->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 411, 26));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_5);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(390, 5, 16, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        close->setFont(font);
        close->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 20px;\n"
"	background-color: #f73643;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #d63a44;\n"
"	color: black;\n"
"}"));
        hide = new QPushButton(frame_5);
        hide->setObjectName(QString::fromUtf8("hide"));
        hide->setGeometry(QRect(365, 5, 16, 16));
        hide->setFont(font);
        hide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding-bottom: 4px;\n"
"	font-size: 20px;\n"
"	background-color: #47fc65;\n"
"	border-radius: 8px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #49cc5f;\n"
"}"));
        title = new QLabel(frame_5);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(165, 5, 81, 16));
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: white;"));
        search = new QLineEdit(frame);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(10, 40, 211, 36));
        search->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	font-size: 14px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"	padding-left: 7px;\n"
"}\n"
"\n"
"QLineEdit::hover {\n"
"	background-color: #949494;\n"
"}"));
        all_users = new QListWidget(frame);
        all_users->setObjectName(QString::fromUtf8("all_users"));
        all_users->setGeometry(QRect(10, 90, 391, 491));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        all_users->setFont(font1);
        all_users->setStyleSheet(QString::fromUtf8("QListWidget {\n"
"	border: none;\n"
"	font-size:15px;\n"
"	background-color: #2a2a2a;\n"
"	color: white;\n"
"	padding: 0px 2px;;\n"
"}\n"
"\n"
"QListWidget::item {\n"
"	margin-top: 4px;\n"
"	padding-left: 5px;\n"
"	padding-top: 1px;\n"
"	background-color: #424242;\n"
"	height: 35px;\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"}\n"
"QListWidget::item:hover {\n"
"	background-color: #949494;\n"
"}"));
        all_users->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        all_users->setAutoScroll(true);
        all_users->setProperty("showDropIndicator", QVariant(true));
        add_user = new QPushButton(frame);
        add_user->setObjectName(QString::fromUtf8("add_user"));
        add_user->setGeometry(QRect(355, 535, 41, 41));
        add_user->setFont(font);
        add_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 25px;\n"
"	color: #2a2a2a;\n"
"	background-color: #6accc1;\n"
"	border-radius: 20px;\n"
"	padding-bottom: 3px;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        filter = new QPushButton(frame);
        filter->setObjectName(QString::fromUtf8("filter"));
        filter->setGeometry(QRect(230, 40, 36, 36));
        filter->setFont(font);
        filter->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 20px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        update = new QPushButton(frame);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(275, 40, 36, 36));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        update->setFont(font2);
        update->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	padding-top: 4px;\n"
"	font-size: 18px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        new_database = new QPushButton(frame);
        new_database->setObjectName(QString::fromUtf8("new_database"));
        new_database->setGeometry(QRect(320, 40, 36, 36));
        new_database->setFont(font2);
        new_database->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 22px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        open_db = new QPushButton(frame);
        open_db->setObjectName(QString::fromUtf8("open_db"));
        open_db->setGeometry(QRect(365, 40, 36, 36));
        open_db->setFont(font2);
        open_db->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 18px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"	font-weight: bold;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #949494;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        close->setText(QString());
        hide->setText(QString());
        title->setText(QApplication::translate("MainWindow", "Database", nullptr));
        search->setText(QString());
        search->setPlaceholderText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272...", nullptr));
        add_user->setText(QApplication::translate("MainWindow", "+", nullptr));
        filter->setText(QApplication::translate("MainWindow", "\342\213\256", nullptr));
        update->setText(QApplication::translate("MainWindow", "\342\255\257", nullptr));
        new_database->setText(QApplication::translate("MainWindow", "+", nullptr));
        open_db->setText(QApplication::translate("MainWindow", "\360\237\227\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
