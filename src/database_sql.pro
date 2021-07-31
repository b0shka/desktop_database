QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
	add_user/add_user.cpp \
	database/database.cpp \
	filter/filter.cpp \
	logger/logger.cpp \
    main.cpp \
	main_data/data.cpp \
	mainwindow/mainwindow.cpp \
	popup/popup.cpp

HEADERS += \
	add_user/add_user.h \
	database/database.h \
	filter/filter.h \
	logger/logger.h \
	main_data/data.h \
	mainwindow/mainwindow.h \
	popup/popup.h

FORMS += \
	add_user/add_user.ui \
	filter/filter.ui \
	mainwindow/mainwindow.ui

DESTDIR = ../bin/

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
