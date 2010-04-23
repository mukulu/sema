/********************************************************************************
** Form generated from reading ui file 'sema.ui'
**
** Created: Thu Apr 15 21:20:43 2010
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SEMA_H
#define UI_SEMA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionPreference;
    QAction *actionAbout;
    QAction *actionOpen_File;
    QAction *actionRead_File;
    QAction *actionPause_File;
    QAction *actionStop_Reading;
    QAction *actionClose_Window;
    QAction *actionExit;
    QAction *actionChange_pitch;
    QAction *actionChange_speed_of_words;
    QAction *actionChange_voice_type;
    QAction *actionChange_language;
    QAction *actionPreference_2;
    QAction *actionAmplitude_up;
    QAction *actionAmplitude_down;
    QAction *actionPause;
    QAction *actionStart;
    QAction *actionStart_Reading;
    QAction *actionPitch;
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QVBoxLayout *mainFrame;
    QFrame *searchFrame;
    QHBoxLayout *horizontalLayout;
    QToolButton *searchCloseButton;
    QLabel *label;
    QLineEdit *searchText;
    QToolButton *searchPrevious;
    QToolButton *searchNext;
    QCheckBox *searchCaseSensitive;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *controlFrame;
    QToolButton *openFileButton;
    QToolButton *readPauseButton;
    QToolButton *previousButton;
    QToolButton *stopButton;
    QToolButton *nextButton;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuChange_amplitude;
    QMenu *menuHelp;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(600, 400);
        actionPreference = new QAction(MainWindow);
        actionPreference->setObjectName(QString::fromUtf8("actionPreference"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOpen_File = new QAction(MainWindow);
        actionOpen_File->setObjectName(QString::fromUtf8("actionOpen_File"));
        actionRead_File = new QAction(MainWindow);
        actionRead_File->setObjectName(QString::fromUtf8("actionRead_File"));
        actionPause_File = new QAction(MainWindow);
        actionPause_File->setObjectName(QString::fromUtf8("actionPause_File"));
        actionStop_Reading = new QAction(MainWindow);
        actionStop_Reading->setObjectName(QString::fromUtf8("actionStop_Reading"));
        actionClose_Window = new QAction(MainWindow);
        actionClose_Window->setObjectName(QString::fromUtf8("actionClose_Window"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionChange_pitch = new QAction(MainWindow);
        actionChange_pitch->setObjectName(QString::fromUtf8("actionChange_pitch"));
        actionChange_speed_of_words = new QAction(MainWindow);
        actionChange_speed_of_words->setObjectName(QString::fromUtf8("actionChange_speed_of_words"));
        actionChange_voice_type = new QAction(MainWindow);
        actionChange_voice_type->setObjectName(QString::fromUtf8("actionChange_voice_type"));
        actionChange_language = new QAction(MainWindow);
        actionChange_language->setObjectName(QString::fromUtf8("actionChange_language"));
        actionPreference_2 = new QAction(MainWindow);
        actionPreference_2->setObjectName(QString::fromUtf8("actionPreference_2"));
        actionAmplitude_up = new QAction(MainWindow);
        actionAmplitude_up->setObjectName(QString::fromUtf8("actionAmplitude_up"));
        actionAmplitude_down = new QAction(MainWindow);
        actionAmplitude_down->setObjectName(QString::fromUtf8("actionAmplitude_down"));
        actionPause = new QAction(MainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStart_Reading = new QAction(MainWindow);
        actionStart_Reading->setObjectName(QString::fromUtf8("actionStart_Reading"));
        actionPitch = new QAction(MainWindow);
        actionPitch->setObjectName(QString::fromUtf8("actionPitch"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 551, 341));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        mainFrame = new QVBoxLayout();
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        searchFrame = new QFrame(layoutWidget);
        searchFrame->setObjectName(QString::fromUtf8("searchFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchFrame->sizePolicy().hasHeightForWidth());
        searchFrame->setSizePolicy(sizePolicy);
        searchFrame->setFrameShape(QFrame::NoFrame);
        searchFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(searchFrame);
        horizontalLayout->setMargin(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchCloseButton = new QToolButton(searchFrame);
        searchCloseButton->setObjectName(QString::fromUtf8("searchCloseButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/closetab.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchCloseButton->setIcon(icon);
        searchCloseButton->setAutoRaise(true);

        horizontalLayout->addWidget(searchCloseButton);

        label = new QLabel(searchFrame);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        searchText = new QLineEdit(searchFrame);
        searchText->setObjectName(QString::fromUtf8("searchText"));

        horizontalLayout->addWidget(searchText);

        searchPrevious = new QToolButton(searchFrame);
        searchPrevious->setObjectName(QString::fromUtf8("searchPrevious"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchPrevious->setIcon(icon1);
        searchPrevious->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        searchPrevious->setAutoRaise(true);

        horizontalLayout->addWidget(searchPrevious);

        searchNext = new QToolButton(searchFrame);
        searchNext->setObjectName(QString::fromUtf8("searchNext"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchNext->setIcon(icon2);
        searchNext->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        searchNext->setAutoRaise(true);

        horizontalLayout->addWidget(searchNext);

        searchCaseSensitive = new QCheckBox(searchFrame);
        searchCaseSensitive->setObjectName(QString::fromUtf8("searchCaseSensitive"));

        horizontalLayout->addWidget(searchCaseSensitive);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        mainFrame->addWidget(searchFrame);

        controlFrame = new QHBoxLayout();
        controlFrame->setObjectName(QString::fromUtf8("controlFrame"));
        openFileButton = new QToolButton(layoutWidget);
        openFileButton->setObjectName(QString::fromUtf8("openFileButton"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/eject.png"), QSize(), QIcon::Normal, QIcon::Off);
        openFileButton->setIcon(icon3);

        controlFrame->addWidget(openFileButton);

        readPauseButton = new QToolButton(layoutWidget);
        readPauseButton->setObjectName(QString::fromUtf8("readPauseButton"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/icons/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        readPauseButton->setIcon(icon4);

        controlFrame->addWidget(readPauseButton);

        previousButton = new QToolButton(layoutWidget);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setIcon(icon1);

        controlFrame->addWidget(previousButton);

        stopButton = new QToolButton(layoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        stopButton->setIcon(icon5);

        controlFrame->addWidget(stopButton);

        nextButton = new QToolButton(layoutWidget);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setIcon(icon2);

        controlFrame->addWidget(nextButton);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        controlFrame->addWidget(horizontalSlider);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        controlFrame->addItem(horizontalSpacer_2);


        mainFrame->addLayout(controlFrame);


        verticalLayout->addLayout(mainFrame);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 600, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuChange_amplitude = new QMenu(menuEdit);
        menuChange_amplitude->setObjectName(QString::fromUtf8("menuChange_amplitude"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen_File);
        menuFile->addAction(actionClose_Window);
        menuFile->addAction(actionExit);
        menuEdit->addAction(menuChange_amplitude->menuAction());
        menuEdit->addSeparator();
        menuEdit->addAction(actionChange_speed_of_words);
        menuEdit->addAction(actionPitch);
        menuEdit->addAction(actionChange_voice_type);
        menuEdit->addAction(actionChange_language);
        menuEdit->addAction(actionPreference_2);
        menuChange_amplitude->addAction(actionAmplitude_up);
        menuChange_amplitude->addAction(actionAmplitude_down);
        menuHelp->addAction(actionPreference);
        menuHelp->addAction(actionAbout);
        menuOptions->addAction(actionStart_Reading);
        menuOptions->addAction(actionPause);
        menuOptions->addAction(actionStart);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sema", 0, QApplication::UnicodeUTF8));
        actionPreference->setText(QApplication::translate("MainWindow", "Preference", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionOpen_File->setText(QApplication::translate("MainWindow", "&Open File for reading", 0, QApplication::UnicodeUTF8));
        actionRead_File->setText(QApplication::translate("MainWindow", "&Read/Pause Reading File", 0, QApplication::UnicodeUTF8));
        actionPause_File->setText(QApplication::translate("MainWindow", "Pause File", 0, QApplication::UnicodeUTF8));
        actionStop_Reading->setText(QApplication::translate("MainWindow", "&Stop Reading File", 0, QApplication::UnicodeUTF8));
        actionClose_Window->setText(QApplication::translate("MainWindow", "&Close Window", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindow", "&Exit", 0, QApplication::UnicodeUTF8));
        actionChange_pitch->setText(QApplication::translate("MainWindow", "Pitch", 0, QApplication::UnicodeUTF8));
        actionChange_speed_of_words->setText(QApplication::translate("MainWindow", "Speed of words", 0, QApplication::UnicodeUTF8));
        actionChange_voice_type->setText(QApplication::translate("MainWindow", "Voice type", 0, QApplication::UnicodeUTF8));
        actionChange_language->setText(QApplication::translate("MainWindow", "Language to Read", 0, QApplication::UnicodeUTF8));
        actionPreference_2->setText(QApplication::translate("MainWindow", "Preference", 0, QApplication::UnicodeUTF8));
        actionAmplitude_up->setText(QApplication::translate("MainWindow", "Amplitude up", 0, QApplication::UnicodeUTF8));
        actionAmplitude_down->setText(QApplication::translate("MainWindow", "Amplitude down", 0, QApplication::UnicodeUTF8));
        actionPause->setText(QApplication::translate("MainWindow", "Pause Reading", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "Stop Reading", 0, QApplication::UnicodeUTF8));
        actionStart_Reading->setText(QApplication::translate("MainWindow", "Start Reading", 0, QApplication::UnicodeUTF8));
        actionPitch->setText(QApplication::translate("MainWindow", "Pitch", 0, QApplication::UnicodeUTF8));
        searchCloseButton->setText(QApplication::translate("MainWindow", "x", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Find:", 0, QApplication::UnicodeUTF8));
        searchPrevious->setText(QApplication::translate("MainWindow", "&Previous", 0, QApplication::UnicodeUTF8));
        searchNext->setText(QApplication::translate("MainWindow", "&Next", 0, QApplication::UnicodeUTF8));
        searchNext->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0, QApplication::UnicodeUTF8));
        searchCaseSensitive->setText(QApplication::translate("MainWindow", "&Case Sensitive", 0, QApplication::UnicodeUTF8));
        openFileButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        readPauseButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        previousButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        stopButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        nextButton->setText(QApplication::translate("MainWindow", "...", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuChange_amplitude->setTitle(QApplication::translate("MainWindow", "Amplitude", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        menuOptions->setTitle(QApplication::translate("MainWindow", "Options", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEMA_H
