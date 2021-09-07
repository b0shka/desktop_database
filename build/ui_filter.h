/********************************************************************************
** Form generated from reading UI file 'filter.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILTER_H
#define UI_FILTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Filter
{
public:
    QFrame *frame;
    QFrame *frame_5;
    QPushButton *close;
    QPushButton *hide;
    QLabel *title;
    QLineEdit *min_age;
    QPushButton *save;
    QPushButton *drop;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *max_age;
    QLabel *label_4;
    QComboBox *list_table;
    QPushButton *delete_table;
    QPushButton *new_table;
    QLineEdit *name_table;
    QLineEdit *new_name_table;
    QPushButton *rename_table;

    void setupUi(QDialog *Filter)
    {
        if (Filter->objectName().isEmpty())
            Filter->setObjectName(QString::fromUtf8("Filter"));
        Filter->resize(261, 369);
        Filter->setStyleSheet(QString::fromUtf8("background-color: #2a2a2a;"));
        frame = new QFrame(Filter);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 261, 371));
        frame->setMinimumSize(QSize(0, 371));
        frame->setMaximumSize(QSize(286, 371));
        frame->setStyleSheet(QString::fromUtf8("border: none;\n"
"border-radius: 5px;\n"
"background-color: #2a2a2a;\n"
"color: white;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_5 = new QFrame(frame);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(0, 0, 261, 26));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	border-bottom-left-radius: 0px;\n"
"	border-bottom-right-radius: 0px;\n"
"	background-color: #404040;\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        close = new QPushButton(frame_5);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(235, 5, 16, 16));
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
        hide->setGeometry(QRect(210, 5, 16, 16));
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
        title->setGeometry(QRect(115, 5, 46, 16));
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("font-size: 14px;\n"
"color: white;"));
        min_age = new QLineEdit(frame);
        min_age->setObjectName(QString::fromUtf8("min_age"));
        min_age->setGeometry(QRect(130, 40, 36, 31));
        min_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        save = new QPushButton(frame);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(130, 330, 121, 31));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        save->setFont(font1);
        save->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        drop = new QPushButton(frame);
        drop->setObjectName(QString::fromUtf8("drop"));
        drop->setGeometry(QRect(10, 330, 111, 31));
        drop->setFont(font1);
        drop->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 14px;\n"
"	color: white;\n"
"	background-color: #404040;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #55ada3;\n"
"}"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(15, 50, 76, 21));
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(175, 50, 26, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 50, 21, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        max_age = new QLineEdit(frame);
        max_age->setObjectName(QString::fromUtf8("max_age"));
        max_age->setGeometry(QRect(210, 40, 36, 31));
        max_age->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(15, 100, 81, 21));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("font-size: 16px;"));
        list_table = new QComboBox(frame);
        list_table->setObjectName(QString::fromUtf8("list_table"));
        list_table->setGeometry(QRect(105, 90, 96, 31));
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
        delete_table = new QPushButton(frame);
        delete_table->setObjectName(QString::fromUtf8("delete_table"));
        delete_table->setGeometry(QRect(210, 90, 31, 31));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        delete_table->setFont(font2);
        delete_table->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 20px;\n"
"	color: #2a2a2a;\n"
"	background-color: #fc889e;\n"
"	border-radius: 5px;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #fc7991;\n"
"}"));
        new_table = new QPushButton(frame);
        new_table->setObjectName(QString::fromUtf8("new_table"));
        new_table->setGeometry(QRect(210, 170, 31, 31));
        new_table->setFont(font2);
        new_table->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 22px;\n"
"	color: #2a2a2a;\n"
"	background-color: #73ffa1;\n"
"	border-radius: 5px;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #54ff8d;\n"
"}"));
        name_table = new QLineEdit(frame);
        name_table->setObjectName(QString::fromUtf8("name_table"));
        name_table->setGeometry(QRect(15, 170, 186, 31));
        name_table->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        new_name_table = new QLineEdit(frame);
        new_name_table->setObjectName(QString::fromUtf8("new_name_table"));
        new_name_table->setGeometry(QRect(15, 130, 186, 31));
        new_name_table->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        rename_table = new QPushButton(frame);
        rename_table->setObjectName(QString::fromUtf8("rename_table"));
        rename_table->setGeometry(QRect(210, 130, 31, 31));
        rename_table->setFont(font2);
        rename_table->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	font-size: 22px;\n"
"	color: #2a2a2a;\n"
"	background-color: #73ffa1;\n"
"	border-radius: 5px;\n"
"	font-weight: bold;\n"
"}\n"
"QPushButton::hover {\n"
"	background-color: #54ff8d;\n"
"}"));

        retranslateUi(Filter);

        QMetaObject::connectSlotsByName(Filter);
    } // setupUi

    void retranslateUi(QDialog *Filter)
    {
        Filter->setWindowTitle(QApplication::translate("Filter", "Dialog", nullptr));
        close->setText(QString());
        hide->setText(QString());
        title->setText(QApplication::translate("Filter", "Filter", nullptr));
        min_age->setText(QString());
        min_age->setPlaceholderText(QString());
        save->setText(QApplication::translate("Filter", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        drop->setText(QApplication::translate("Filter", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214", nullptr));
        label->setText(QApplication::translate("Filter", "\320\222\320\276\320\267\321\200\320\260\321\201\321\202", nullptr));
        label_2->setText(QApplication::translate("Filter", "\320\264\320\276", nullptr));
        label_3->setText(QApplication::translate("Filter", "\320\276\321\202", nullptr));
        max_age->setText(QString());
        max_age->setPlaceholderText(QString());
        label_4->setText(QApplication::translate("Filter", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        delete_table->setText(QApplication::translate("Filter", "\342\234\230", nullptr));
        new_table->setText(QApplication::translate("Filter", "+", nullptr));
        name_table->setText(QString());
        name_table->setPlaceholderText(QApplication::translate("Filter", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\202\320\260\320\261\320\273\320\270\321\206\321\213", nullptr));
        new_name_table->setText(QString());
        new_name_table->setPlaceholderText(QApplication::translate("Filter", "\320\237\320\265\321\200\320\265\320\270\320\274\320\265\320\275\320\276\320\262\320\260\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        rename_table->setText(QApplication::translate("Filter", "\342\234\223", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Filter: public Ui_Filter {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILTER_H
