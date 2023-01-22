/********************************************************************************
** Form generated from reading UI file 'kolekcjaplytmuzycznych.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KOLEKCJAPLYTMUZYCZNYCH_H
#define UI_KOLEKCJAPLYTMUZYCZNYCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KolekcjaPlytMuzycznych
{
public:
    QAction *actionSave_Mixtape;
    QAction *actionOpen_Mixtape;
    QAction *actionClear_Current_Mixtape;
    QWidget *centralwidget;
    QTextEdit *Title;
    QTextEdit *Artist;
    QTextEdit *Album;
    QTextBrowser *Baza;
    QPushButton *Add;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *Find;
    QPushButton *ButtonFind;
    QTextBrowser *FindOut;
    QPushButton *ButtonDelete;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *KolekcjaPlytMuzycznych)
    {
        if (KolekcjaPlytMuzycznych->objectName().isEmpty())
            KolekcjaPlytMuzycznych->setObjectName("KolekcjaPlytMuzycznych");
        KolekcjaPlytMuzycznych->resize(800, 600);
        actionSave_Mixtape = new QAction(KolekcjaPlytMuzycznych);
        actionSave_Mixtape->setObjectName("actionSave_Mixtape");
        actionOpen_Mixtape = new QAction(KolekcjaPlytMuzycznych);
        actionOpen_Mixtape->setObjectName("actionOpen_Mixtape");
        actionClear_Current_Mixtape = new QAction(KolekcjaPlytMuzycznych);
        actionClear_Current_Mixtape->setObjectName("actionClear_Current_Mixtape");
        centralwidget = new QWidget(KolekcjaPlytMuzycznych);
        centralwidget->setObjectName("centralwidget");
        Title = new QTextEdit(centralwidget);
        Title->setObjectName("Title");
        Title->setGeometry(QRect(560, 30, 221, 31));
        Title->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Artist = new QTextEdit(centralwidget);
        Artist->setObjectName("Artist");
        Artist->setGeometry(QRect(560, 80, 221, 31));
        Artist->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Album = new QTextEdit(centralwidget);
        Album->setObjectName("Album");
        Album->setGeometry(QRect(560, 130, 221, 31));
        Album->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Baza = new QTextBrowser(centralwidget);
        Baza->setObjectName("Baza");
        Baza->setGeometry(QRect(10, 30, 531, 521));
        Add = new QPushButton(centralwidget);
        Add->setObjectName("Add");
        Add->setGeometry(QRect(700, 160, 80, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(760, 10, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(750, 60, 49, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(740, 110, 41, 16));
        Find = new QTextEdit(centralwidget);
        Find->setObjectName("Find");
        Find->setGeometry(QRect(563, 299, 221, 31));
        Find->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"background-color: gray;\n"
"border: 1px solid gray;\n"
"color: #ffffff;\n"
"}"));
        ButtonFind = new QPushButton(centralwidget);
        ButtonFind->setObjectName("ButtonFind");
        ButtonFind->setGeometry(QRect(700, 330, 80, 24));
        FindOut = new QTextBrowser(centralwidget);
        FindOut->setObjectName("FindOut");
        FindOut->setGeometry(QRect(560, 370, 221, 101));
        ButtonDelete = new QPushButton(centralwidget);
        ButtonDelete->setObjectName("ButtonDelete");
        ButtonDelete->setGeometry(QRect(700, 470, 80, 24));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 49, 16));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(170, 10, 49, 16));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 10, 49, 16));
        KolekcjaPlytMuzycznych->setCentralWidget(centralwidget);
        menubar = new QMenuBar(KolekcjaPlytMuzycznych);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        KolekcjaPlytMuzycznych->setMenuBar(menubar);
        statusbar = new QStatusBar(KolekcjaPlytMuzycznych);
        statusbar->setObjectName("statusbar");
        KolekcjaPlytMuzycznych->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave_Mixtape);
        menuFile->addAction(actionOpen_Mixtape);
        menuFile->addAction(actionClear_Current_Mixtape);

        retranslateUi(KolekcjaPlytMuzycznych);

        QMetaObject::connectSlotsByName(KolekcjaPlytMuzycznych);
    } // setupUi

    void retranslateUi(QMainWindow *KolekcjaPlytMuzycznych)
    {
        KolekcjaPlytMuzycznych->setWindowTitle(QCoreApplication::translate("KolekcjaPlytMuzycznych", "KolekcjaPlytMuzycznych", nullptr));
        actionSave_Mixtape->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Save_Mixtape", nullptr));
        actionOpen_Mixtape->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Open_Mixtape", nullptr));
        actionClear_Current_Mixtape->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Clear_Current_Mixtape", nullptr));
        Add->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Add", nullptr));
        label->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Title", nullptr));
        label_2->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Artist", nullptr));
        label_3->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Album", nullptr));
        ButtonFind->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Find", nullptr));
        ButtonDelete->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Delete", nullptr));
        label_4->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Title", nullptr));
        label_5->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Artist", nullptr));
        label_6->setText(QCoreApplication::translate("KolekcjaPlytMuzycznych", "Album", nullptr));
        menuFile->setTitle(QCoreApplication::translate("KolekcjaPlytMuzycznych", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KolekcjaPlytMuzycznych: public Ui_KolekcjaPlytMuzycznych {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KOLEKCJAPLYTMUZYCZNYCH_H
