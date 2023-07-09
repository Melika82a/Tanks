QT       += core gui multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controller.cpp \
    Health.cpp \
    Player.cpp \
    Tank.cpp \
    View.cpp \
    game.cpp \
    main.cpp \
    mapcreator.cpp \
    objects.cpp

HEADERS += \
    Controller.h \
    Health.h \
    Player.h \
    Tank.h \
    View.h \
    game.h \
    mapcreator.h \
    objects.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rs.qrc
