/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Add_user
{
public:
    QFrame *frame;
    QFrame *frame_5;
    QPushButton *close;
    QPushButton *hide;
    QLabel *title;
    QLineEdit *first_name;
    QLineEdit *last_name;
    QLineEdit *patronymic;
    QLineEdit *age;
    QPushButton *add_save_user;
    QLineEdit *birth;
    QLineEdit *country_city;
    QLineEdit *address;
    QLineEdit *index_;
    QLineEdit *number_phone;
    QLineEdit *passport;
    QLineEdit *snils;
    QLineEdit *car;
    QLineEdit *email;
    QLineEdit *vk;
    QLineEdit *instagram;
    QLineEdit *telegram;
    QTextEdit *relatives;
    QTextEdit *other;
    QTextEdit *other_social;
    QPushButton *add_photo;
    QLabel *photo_1;
    QLabel *photo_2;
    QLabel *photo_3;
    QLabel *photo_4;
    QPushButton *add_doc;
    QPushButton *delete_photo_1;
    QPushButton *delete_photo_2;
    QPushButton *delete_photo_3;
    QPushButton *delete_photo_4;
    QComboBox *list_table;
    QPushButton *delete_user;
    QLabel *doc_1;
    QLabel *doc_2;
    QLabel *doc_3;
    QPushButton *delete_doc_1;
    QPushButton *delete_doc_2;
    QPushButton *delete_doc_3;
    QPushButton *download_doc_1;
    QPushButton *download_doc_2;
    QPushButton *download_doc_3;
    QPushButton *download_photo_1;
    QPushButton *download_photo_2;
    QPushButton *download_photo_3;
    QPushButton *download_photo_4;
    QTextEdit *education;
    QTextEdit *place_work;
    QTextEdit *hobby;
    QPushButton *convert;
    QLineEdit *phone;

    void setupUi(QDialog *Add_user)
    {
        if (Add_user->objectName().isEmpty())
            Add_user->setObjectName(QString::fromUtf8("Add_user"));
        Add_user->resize(677, 724);
        Add_user->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame = new QFrame(Add_user);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 671, 711));
        frame->setMinimumSize(QSize(636, 581));
        frame->setMaximumSize(QSize(5555, 5555));
        frame->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 676, 26));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_5);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(655, 5, 16, 16));
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
        hide->setGeometry(QRect(630, 5, 16, 16));
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
        title->setGeometry(QRect(290, 5, 41, 16));
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: white;"));
        first_name = new QLineEdit(frame);
        first_name->setObjectName(QString::fromUtf8("first_name"));
        first_name->setGeometry(QRect(10, 40, 211, 36));
        first_name->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        last_name = new QLineEdit(frame);
        last_name->setObjectName(QString::fromUtf8("last_name"));
        last_name->setGeometry(QRect(10, 85, 211, 36));
        last_name->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        patronymic = new QLineEdit(frame);
        patronymic->setObjectName(QString::fromUtf8("patronymic"));
        patronymic->setGeometry(QRect(10, 130, 211, 36));
        patronymic->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        age = new QLineEdit(frame);
        age->setObjectName(QString::fromUtf8("age"));
        age->setGeometry(QRect(10, 175, 211, 36));
        age->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        add_save_user = new QPushButton(frame);
        add_save_user->setObjectName(QString::fromUtf8("add_save_user"));
        add_save_user->setGeometry(QRect(565, 675, 106, 31));
        QFont font1;
        font1.setBold(false);
        font1.setWeight(50);
        add_save_user->setFont(font1);
        add_save_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        birth = new QLineEdit(frame);
        birth->setObjectName(QString::fromUtf8("birth"));
        birth->setGeometry(QRect(10, 220, 211, 36));
        birth->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        country_city = new QLineEdit(frame);
        country_city->setObjectName(QString::fromUtf8("country_city"));
        country_city->setGeometry(QRect(10, 265, 211, 36));
        country_city->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        address = new QLineEdit(frame);
        address->setObjectName(QString::fromUtf8("address"));
        address->setGeometry(QRect(10, 310, 211, 36));
        address->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        index_ = new QLineEdit(frame);
        index_->setObjectName(QString::fromUtf8("index_"));
        index_->setGeometry(QRect(10, 355, 211, 36));
        index_->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        number_phone = new QLineEdit(frame);
        number_phone->setObjectName(QString::fromUtf8("number_phone"));
        number_phone->setGeometry(QRect(10, 400, 211, 36));
        number_phone->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        passport = new QLineEdit(frame);
        passport->setObjectName(QString::fromUtf8("passport"));
        passport->setGeometry(QRect(10, 490, 211, 36));
        passport->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        snils = new QLineEdit(frame);
        snils->setObjectName(QString::fromUtf8("snils"));
        snils->setGeometry(QRect(10, 535, 211, 36));
        snils->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        car = new QLineEdit(frame);
        car->setObjectName(QString::fromUtf8("car"));
        car->setGeometry(QRect(10, 580, 211, 36));
        car->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        email = new QLineEdit(frame);
        email->setObjectName(QString::fromUtf8("email"));
        email->setGeometry(QRect(230, 130, 231, 36));
        email->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        vk = new QLineEdit(frame);
        vk->setObjectName(QString::fromUtf8("vk"));
        vk->setGeometry(QRect(230, 175, 231, 36));
        vk->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        instagram = new QLineEdit(frame);
        instagram->setObjectName(QString::fromUtf8("instagram"));
        instagram->setGeometry(QRect(230, 220, 231, 36));
        instagram->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        telegram = new QLineEdit(frame);
        telegram->setObjectName(QString::fromUtf8("telegram"));
        telegram->setGeometry(QRect(230, 265, 231, 36));
        telegram->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        relatives = new QTextEdit(frame);
        relatives->setObjectName(QString::fromUtf8("relatives"));
        relatives->setGeometry(QRect(470, 40, 201, 171));
        relatives->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        relatives->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        other = new QTextEdit(frame);
        other->setObjectName(QString::fromUtf8("other"));
        other->setGeometry(QRect(230, 535, 231, 171));
        other->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        other->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        other_social = new QTextEdit(frame);
        other_social->setObjectName(QString::fromUtf8("other_social"));
        other_social->setGeometry(QRect(230, 310, 231, 126));
        other_social->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        other_social->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        add_photo = new QPushButton(frame);
        add_photo->setObjectName(QString::fromUtf8("add_photo"));
        add_photo->setGeometry(QRect(470, 400, 201, 36));
        add_photo->setFont(font1);
        add_photo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        photo_1 = new QLabel(frame);
        photo_1->setObjectName(QString::fromUtf8("photo_1"));
        photo_1->setGeometry(QRect(470, 220, 96, 81));
        photo_1->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b"));
        photo_1->setAlignment(Qt::AlignCenter);
        photo_2 = new QLabel(frame);
        photo_2->setObjectName(QString::fromUtf8("photo_2"));
        photo_2->setGeometry(QRect(575, 220, 96, 81));
        photo_2->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b"));
        photo_2->setAlignment(Qt::AlignCenter);
        photo_3 = new QLabel(frame);
        photo_3->setObjectName(QString::fromUtf8("photo_3"));
        photo_3->setGeometry(QRect(470, 310, 96, 81));
        photo_3->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b"));
        photo_3->setAlignment(Qt::AlignCenter);
        photo_4 = new QLabel(frame);
        photo_4->setObjectName(QString::fromUtf8("photo_4"));
        photo_4->setGeometry(QRect(575, 310, 96, 81));
        photo_4->setStyleSheet(QString::fromUtf8("background-color: #3b3b3b"));
        photo_4->setAlignment(Qt::AlignCenter);
        add_doc = new QPushButton(frame);
        add_doc->setObjectName(QString::fromUtf8("add_doc"));
        add_doc->setGeometry(QRect(470, 445, 201, 36));
        add_doc->setFont(font1);
        add_doc->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        delete_photo_1 = new QPushButton(frame);
        delete_photo_1->setObjectName(QString::fromUtf8("delete_photo_1"));
        delete_photo_1->setGeometry(QRect(545, 220, 21, 21));
        delete_photo_1->setFont(font);
        delete_photo_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        delete_photo_2 = new QPushButton(frame);
        delete_photo_2->setObjectName(QString::fromUtf8("delete_photo_2"));
        delete_photo_2->setGeometry(QRect(650, 220, 21, 21));
        delete_photo_2->setFont(font);
        delete_photo_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        delete_photo_3 = new QPushButton(frame);
        delete_photo_3->setObjectName(QString::fromUtf8("delete_photo_3"));
        delete_photo_3->setGeometry(QRect(545, 310, 21, 21));
        delete_photo_3->setFont(font);
        delete_photo_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        delete_photo_4 = new QPushButton(frame);
        delete_photo_4->setObjectName(QString::fromUtf8("delete_photo_4"));
        delete_photo_4->setGeometry(QRect(650, 310, 21, 21));
        delete_photo_4->setFont(font);
        delete_photo_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        list_table = new QComboBox(frame);
        list_table->setObjectName(QString::fromUtf8("list_table"));
        list_table->setGeometry(QRect(565, 635, 106, 31));
        list_table->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	border: none;\n"
"	border-radius: 5px;\n"
"	color: white;\n"
"	font-size: 14px;\n"
"	padding-left: 5px;\n"
"	background-color: #404040;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"	border:  none;;\n"
"	border-radius: 2px;\n"
" }\n"
"\n"
"QComboBox::drop-down::hover {\n"
"	background-color: #949494;\n"
" }\n"
""));
        list_table->setEditable(false);
        list_table->setDuplicatesEnabled(false);
        list_table->setFrame(true);
        delete_user = new QPushButton(frame);
        delete_user->setObjectName(QString::fromUtf8("delete_user"));
        delete_user->setGeometry(QRect(470, 675, 86, 31));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        delete_user->setFont(font2);
        delete_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	color: #2a2a2a;\n"
"	background-color: #fc889e;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #fc7991;\n"
"}"));
        doc_1 = new QLabel(frame);
        doc_1->setObjectName(QString::fromUtf8("doc_1"));
        doc_1->setGeometry(QRect(470, 495, 136, 17));
        doc_1->setStyleSheet(QString::fromUtf8("font-size: 14px;"));
        doc_2 = new QLabel(frame);
        doc_2->setObjectName(QString::fromUtf8("doc_2"));
        doc_2->setGeometry(QRect(470, 525, 136, 17));
        doc_2->setStyleSheet(QString::fromUtf8("font-size: 14px;"));
        doc_3 = new QLabel(frame);
        doc_3->setObjectName(QString::fromUtf8("doc_3"));
        doc_3->setGeometry(QRect(470, 555, 136, 17));
        doc_3->setStyleSheet(QString::fromUtf8("font-size: 14px;"));
        delete_doc_1 = new QPushButton(frame);
        delete_doc_1->setObjectName(QString::fromUtf8("delete_doc_1"));
        delete_doc_1->setGeometry(QRect(640, 490, 26, 26));
        delete_doc_1->setFont(font);
        delete_doc_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        delete_doc_2 = new QPushButton(frame);
        delete_doc_2->setObjectName(QString::fromUtf8("delete_doc_2"));
        delete_doc_2->setGeometry(QRect(640, 520, 26, 26));
        delete_doc_2->setFont(font);
        delete_doc_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        delete_doc_3 = new QPushButton(frame);
        delete_doc_3->setObjectName(QString::fromUtf8("delete_doc_3"));
        delete_doc_3->setGeometry(QRect(640, 550, 26, 26));
        delete_doc_3->setFont(font);
        delete_doc_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #ffb0be;\n"
"	color: black;\n"
"}"));
        download_doc_1 = new QPushButton(frame);
        download_doc_1->setObjectName(QString::fromUtf8("download_doc_1"));
        download_doc_1->setGeometry(QRect(610, 490, 26, 26));
        download_doc_1->setFont(font);
        download_doc_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        download_doc_2 = new QPushButton(frame);
        download_doc_2->setObjectName(QString::fromUtf8("download_doc_2"));
        download_doc_2->setGeometry(QRect(610, 520, 26, 26));
        download_doc_2->setFont(font);
        download_doc_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        download_doc_3 = new QPushButton(frame);
        download_doc_3->setObjectName(QString::fromUtf8("download_doc_3"));
        download_doc_3->setGeometry(QRect(610, 550, 26, 26));
        download_doc_3->setFont(font);
        download_doc_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 15px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        download_photo_1 = new QPushButton(frame);
        download_photo_1->setObjectName(QString::fromUtf8("download_photo_1"));
        download_photo_1->setGeometry(QRect(525, 220, 21, 21));
        download_photo_1->setFont(font);
        download_photo_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        download_photo_2 = new QPushButton(frame);
        download_photo_2->setObjectName(QString::fromUtf8("download_photo_2"));
        download_photo_2->setGeometry(QRect(630, 220, 21, 21));
        download_photo_2->setFont(font);
        download_photo_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        download_photo_3 = new QPushButton(frame);
        download_photo_3->setObjectName(QString::fromUtf8("download_photo_3"));
        download_photo_3->setGeometry(QRect(525, 310, 21, 21));
        download_photo_3->setFont(font);
        download_photo_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        download_photo_4 = new QPushButton(frame);
        download_photo_4->setObjectName(QString::fromUtf8("download_photo_4"));
        download_photo_4->setGeometry(QRect(630, 310, 21, 21));
        download_photo_4->setFont(font);
        download_photo_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	height: 28px;\n"
"	color: white;\n"
"	background-color: #3b3b3b;\n"
"	border-radius: 5px;\n"
"	padding-top: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"	color: black;\n"
"}"));
        education = new QTextEdit(frame);
        education->setObjectName(QString::fromUtf8("education"));
        education->setGeometry(QRect(10, 625, 211, 81));
        education->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        education->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        place_work = new QTextEdit(frame);
        place_work->setObjectName(QString::fromUtf8("place_work"));
        place_work->setGeometry(QRect(230, 40, 231, 81));
        place_work->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        place_work->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        hobby = new QTextEdit(frame);
        hobby->setObjectName(QString::fromUtf8("hobby"));
        hobby->setGeometry(QRect(230, 445, 231, 81));
        hobby->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));
        hobby->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        convert = new QPushButton(frame);
        convert->setObjectName(QString::fromUtf8("convert"));
        convert->setGeometry(QRect(525, 635, 31, 31));
        QFont font3;
        font3.setBold(true);
        font3.setItalic(false);
        font3.setWeight(75);
        convert->setFont(font3);
        convert->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        phone = new QLineEdit(frame);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setGeometry(QRect(10, 445, 211, 36));
        phone->setStyleSheet(QString::fromUtf8("font-size: 13px;\n"
"color: white;\n"
"background-color: #404040;\n"
"border-radius: 5px;\n"
"padding-left: 5px;"));

        retranslateUi(Add_user);

        QMetaObject::connectSlotsByName(Add_user);
    } // setupUi

    void retranslateUi(QDialog *Add_user)
    {
        Add_user->setWindowTitle(QApplication::translate("Add_user", "Dialog", nullptr));
        close->setText(QString());
        hide->setText(QString());
        title->setText(QApplication::translate("Add_user", "User", nullptr));
        first_name->setText(QString());
        first_name->setPlaceholderText(QApplication::translate("Add_user", "\320\230\320\274\321\217", nullptr));
        last_name->setText(QString());
        last_name->setPlaceholderText(QApplication::translate("Add_user", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        patronymic->setText(QString());
        patronymic->setPlaceholderText(QApplication::translate("Add_user", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        age->setText(QString());
        age->setPlaceholderText(QApplication::translate("Add_user", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        add_save_user->setText(QString());
        birth->setText(QString());
        birth->setPlaceholderText(QApplication::translate("Add_user", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        country_city->setText(QString());
        country_city->setPlaceholderText(QApplication::translate("Add_user", "\320\241\321\202\321\200\320\260\320\275\320\260, \320\263\320\276\321\200\320\276\320\264", nullptr));
        address->setText(QString());
        address->setPlaceholderText(QApplication::translate("Add_user", "\320\220\320\264\321\200\320\265\321\201", nullptr));
        index_->setText(QString());
        index_->setPlaceholderText(QApplication::translate("Add_user", "\320\230\320\275\320\264\320\265\320\272\321\201", nullptr));
        number_phone->setText(QString());
        number_phone->setPlaceholderText(QApplication::translate("Add_user", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
        passport->setText(QString());
        passport->setPlaceholderText(QApplication::translate("Add_user", "\320\237\320\260\321\201\320\277\320\276\321\200\321\202", nullptr));
        snils->setText(QString());
        snils->setPlaceholderText(QApplication::translate("Add_user", "\320\241\320\275\320\270\320\273\321\201", nullptr));
        car->setText(QString());
        car->setPlaceholderText(QApplication::translate("Add_user", "\320\234\320\260\321\210\320\270\320\275\320\260", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QApplication::translate("Add_user", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        vk->setText(QString());
        vk->setPlaceholderText(QApplication::translate("Add_user", "\320\222\320\232\320\276\320\275\321\202\320\260\320\272\321\202\320\265", nullptr));
        instagram->setText(QString());
        instagram->setPlaceholderText(QApplication::translate("Add_user", "\320\230\320\275\321\201\321\202\320\260\320\263\321\200\320\260\320\274", nullptr));
        telegram->setText(QString());
        telegram->setPlaceholderText(QApplication::translate("Add_user", "\320\242\320\265\320\273\320\265\320\263\321\200\320\260\320\274", nullptr));
        relatives->setPlaceholderText(QApplication::translate("Add_user", "\320\240\320\276\320\264\321\201\321\202\320\262\320\265\320\275\320\275\320\270\320\272\320\270", nullptr));
        other->setPlaceholderText(QApplication::translate("Add_user", "\320\236\321\201\321\202\320\260\320\273\321\214\320\275\320\276\320\265", nullptr));
        other_social->setPlaceholderText(QApplication::translate("Add_user", "\320\224\321\200\321\203\320\263\320\270\320\265 \321\201\320\276\321\206. \321\201\320\265\321\202\320\270", nullptr));
        add_photo->setText(QApplication::translate("Add_user", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\204\320\276\321\202\320\276", nullptr));
        photo_1->setText(QString());
        photo_2->setText(QString());
        photo_3->setText(QString());
        photo_4->setText(QString());
        add_doc->setText(QApplication::translate("Add_user", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\264\320\276\320\272\321\203\320\274\320\265\320\275\321\202", nullptr));
        delete_photo_1->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        delete_photo_2->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        delete_photo_3->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        delete_photo_4->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        delete_user->setText(QApplication::translate("Add_user", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        doc_1->setText(QString());
        doc_2->setText(QString());
        doc_3->setText(QString());
        delete_doc_1->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        delete_doc_2->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        delete_doc_3->setText(QApplication::translate("Add_user", "\342\234\230", nullptr));
        download_doc_1->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        download_doc_2->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        download_doc_3->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        download_photo_1->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        download_photo_2->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        download_photo_3->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        download_photo_4->setText(QApplication::translate("Add_user", "\360\237\240\227", nullptr));
        education->setPlaceholderText(QApplication::translate("Add_user", "\320\236\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\320\265", nullptr));
        place_work->setPlaceholderText(QApplication::translate("Add_user", "\320\234\320\265\321\201\321\202\320\276 \321\200\320\260\320\261\320\276\321\202\321\213/\321\203\321\207\321\221\320\261\321\213", nullptr));
        hobby->setPlaceholderText(QApplication::translate("Add_user", "\320\245\320\276\320\261\320\261\320\270", nullptr));
        convert->setText(QApplication::translate("Add_user", "\360\237\227\230", nullptr));
        phone->setText(QString());
        phone->setPlaceholderText(QApplication::translate("Add_user", "\320\242\320\265\320\273\320\265\321\204\320\276\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Add_user: public Ui_Add_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H
