/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_title;
    QPushButton *button_return;
    QTabWidget *tabWidget_main;
    QWidget *tab_weather;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_all;
    QPushButton *pushButton_tempreture;
    QPushButton *pushButton_humidity;
    QPushButton *pushButton_windspeed;
    QPushButton *pushButton_winddirection;
    QPushButton *pushButton_pressure;
    QFrame *frame_tab_weather;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_5;
    QPushButton *pushButton_start;
    QWidget *widget_tab_weather;
    QTableWidget *table_tabWeather;
    QWidget *tab_flowfiled;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_all_flowfiled;
    QPushButton *pushButton_WPLspeed;
    QPushButton *pushButton_WPLtemperature;
    QPushButton *pushButton_WPLpressure;
    QPushButton *pushButton_start_2;
    QTableWidget *table_tabflowfield;
    QFrame *frame_tab_flowfiled;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDateTimeEdit *dateTimeEdit_2;
    QWidget *widget_tab_flowfiled;
    QWidget *tab_AVG;
    QFrame *frame_tab_AVG;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit_3;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout;
    QWidget *widget_AVG_1;
    QWidget *widget_AVG_2;
    QWidget *widget_AVG_3;
    QWidget *widget_AVG_4;
    QWidget *tab_4;
    QWidget *tab_RP;
    QFrame *frame_tab_RP;
    QWidget *layoutWidget_5;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QDateTimeEdit *dateTimeEdit_4;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QCheckBox *checkBox_14;
    QCheckBox *checkBox_15;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_RP_1;
    QWidget *widget_RP_2;
    QWidget *widget_RP_3;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_6;
    QTableWidget *table_tabRP_1;
    QTableWidget *table_tabRP_2;
    QTableWidget *table_tabRP_3;
    QWidget *tab_6;
    QButtonGroup *buttonGroup;
    QButtonGroup *buttonGroup_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1920, 1080);
        MainWindow->setAutoFillBackground(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_title = new QLabel(centralwidget);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        label_title->setGeometry(QRect(0, 0, 1920, 40));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        button_return = new QPushButton(centralwidget);
        button_return->setObjectName(QString::fromUtf8("button_return"));
        button_return->setGeometry(QRect(1850, 5, 50, 30));
        tabWidget_main = new QTabWidget(centralwidget);
        tabWidget_main->setObjectName(QString::fromUtf8("tabWidget_main"));
        tabWidget_main->setGeometry(QRect(30, 60, 1860, 1000));
        tab_weather = new QWidget();
        tab_weather->setObjectName(QString::fromUtf8("tab_weather"));
        layoutWidget = new QWidget(tab_weather);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 50, 111, 366));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_all = new QPushButton(layoutWidget);
        buttonGroup_2 = new QButtonGroup(MainWindow);
        buttonGroup_2->setObjectName(QString::fromUtf8("buttonGroup_2"));
        buttonGroup_2->addButton(pushButton_all);
        pushButton_all->setObjectName(QString::fromUtf8("pushButton_all"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_all->sizePolicy().hasHeightForWidth());
        pushButton_all->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/all.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/icon/all_checked.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_all->setIcon(icon);
        pushButton_all->setIconSize(QSize(16, 16));
        pushButton_all->setCheckable(true);
        pushButton_all->setChecked(true);

        verticalLayout->addWidget(pushButton_all);

        pushButton_tempreture = new QPushButton(layoutWidget);
        buttonGroup_2->addButton(pushButton_tempreture);
        pushButton_tempreture->setObjectName(QString::fromUtf8("pushButton_tempreture"));
        sizePolicy1.setHeightForWidth(pushButton_tempreture->sizePolicy().hasHeightForWidth());
        pushButton_tempreture->setSizePolicy(sizePolicy1);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/field.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/icon/field_checked.png"), QSize(), QIcon::Normal, QIcon::On);
        pushButton_tempreture->setIcon(icon1);
        pushButton_tempreture->setIconSize(QSize(10, 10));
        pushButton_tempreture->setCheckable(true);

        verticalLayout->addWidget(pushButton_tempreture);

        pushButton_humidity = new QPushButton(layoutWidget);
        buttonGroup_2->addButton(pushButton_humidity);
        pushButton_humidity->setObjectName(QString::fromUtf8("pushButton_humidity"));
        sizePolicy1.setHeightForWidth(pushButton_humidity->sizePolicy().hasHeightForWidth());
        pushButton_humidity->setSizePolicy(sizePolicy1);
        pushButton_humidity->setIcon(icon1);
        pushButton_humidity->setIconSize(QSize(10, 10));
        pushButton_humidity->setCheckable(true);

        verticalLayout->addWidget(pushButton_humidity);

        pushButton_windspeed = new QPushButton(layoutWidget);
        buttonGroup_2->addButton(pushButton_windspeed);
        pushButton_windspeed->setObjectName(QString::fromUtf8("pushButton_windspeed"));
        sizePolicy1.setHeightForWidth(pushButton_windspeed->sizePolicy().hasHeightForWidth());
        pushButton_windspeed->setSizePolicy(sizePolicy1);
        pushButton_windspeed->setIcon(icon1);
        pushButton_windspeed->setIconSize(QSize(10, 10));
        pushButton_windspeed->setCheckable(true);

        verticalLayout->addWidget(pushButton_windspeed);

        pushButton_winddirection = new QPushButton(layoutWidget);
        buttonGroup_2->addButton(pushButton_winddirection);
        pushButton_winddirection->setObjectName(QString::fromUtf8("pushButton_winddirection"));
        sizePolicy1.setHeightForWidth(pushButton_winddirection->sizePolicy().hasHeightForWidth());
        pushButton_winddirection->setSizePolicy(sizePolicy1);
        pushButton_winddirection->setIcon(icon1);
        pushButton_winddirection->setIconSize(QSize(10, 10));
        pushButton_winddirection->setCheckable(true);

        verticalLayout->addWidget(pushButton_winddirection);

        pushButton_pressure = new QPushButton(layoutWidget);
        buttonGroup_2->addButton(pushButton_pressure);
        pushButton_pressure->setObjectName(QString::fromUtf8("pushButton_pressure"));
        sizePolicy1.setHeightForWidth(pushButton_pressure->sizePolicy().hasHeightForWidth());
        pushButton_pressure->setSizePolicy(sizePolicy1);
        pushButton_pressure->setIcon(icon1);
        pushButton_pressure->setIconSize(QSize(10, 10));
        pushButton_pressure->setCheckable(true);

        verticalLayout->addWidget(pushButton_pressure);

        frame_tab_weather = new QFrame(tab_weather);
        frame_tab_weather->setObjectName(QString::fromUtf8("frame_tab_weather"));
        frame_tab_weather->setGeometry(QRect(120, 50, 1551, 61));
        frame_tab_weather->setFrameShape(QFrame::StyledPanel);
        frame_tab_weather->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame_tab_weather);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 10, 1341, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(layoutWidget1);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateTimeEdit->setAlignment(Qt::AlignCenter);
        dateTimeEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateTimeEdit);

        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setFont(font);
        checkBox->setLayoutDirection(Qt::RightToLeft);
        checkBox->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkBox);

        checkBox_2 = new QCheckBox(layoutWidget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setFont(font);
        checkBox_2->setLayoutDirection(Qt::RightToLeft);
        checkBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget1);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setFont(font);
        checkBox_3->setLayoutDirection(Qt::RightToLeft);
        checkBox_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(layoutWidget1);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setFont(font);
        checkBox_4->setLayoutDirection(Qt::RightToLeft);
        checkBox_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkBox_4);

        checkBox_5 = new QCheckBox(layoutWidget1);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setFont(font);
        checkBox_5->setLayoutDirection(Qt::RightToLeft);
        checkBox_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(checkBox_5);

        pushButton_start = new QPushButton(tab_weather);
        pushButton_start->setObjectName(QString::fromUtf8("pushButton_start"));
        pushButton_start->setGeometry(QRect(1690, 50, 121, 61));
        pushButton_start->setFont(font);
        widget_tab_weather = new QWidget(tab_weather);
        widget_tab_weather->setObjectName(QString::fromUtf8("widget_tab_weather"));
        widget_tab_weather->setGeometry(QRect(120, 130, 1711, 571));
        table_tabWeather = new QTableWidget(tab_weather);
        table_tabWeather->setObjectName(QString::fromUtf8("table_tabWeather"));
        table_tabWeather->setGeometry(QRect(0, 700, 1841, 261));
        table_tabWeather->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 13, 102);\n"
"color: rgb(255, 255, 255);"));
        tabWidget_main->addTab(tab_weather, QString());
        tab_flowfiled = new QWidget();
        tab_flowfiled->setObjectName(QString::fromUtf8("tab_flowfiled"));
        layoutWidget_2 = new QWidget(tab_flowfiled);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(0, 50, 111, 301));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_all_flowfiled = new QPushButton(layoutWidget_2);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(pushButton_all_flowfiled);
        pushButton_all_flowfiled->setObjectName(QString::fromUtf8("pushButton_all_flowfiled"));
        sizePolicy1.setHeightForWidth(pushButton_all_flowfiled->sizePolicy().hasHeightForWidth());
        pushButton_all_flowfiled->setSizePolicy(sizePolicy1);
        pushButton_all_flowfiled->setIcon(icon);
        pushButton_all_flowfiled->setIconSize(QSize(16, 16));
        pushButton_all_flowfiled->setCheckable(true);
        pushButton_all_flowfiled->setChecked(true);

        verticalLayout_2->addWidget(pushButton_all_flowfiled);

        pushButton_WPLspeed = new QPushButton(layoutWidget_2);
        buttonGroup->addButton(pushButton_WPLspeed);
        pushButton_WPLspeed->setObjectName(QString::fromUtf8("pushButton_WPLspeed"));
        sizePolicy1.setHeightForWidth(pushButton_WPLspeed->sizePolicy().hasHeightForWidth());
        pushButton_WPLspeed->setSizePolicy(sizePolicy1);
        pushButton_WPLspeed->setIcon(icon1);
        pushButton_WPLspeed->setIconSize(QSize(10, 10));
        pushButton_WPLspeed->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_WPLspeed);

        pushButton_WPLtemperature = new QPushButton(layoutWidget_2);
        buttonGroup->addButton(pushButton_WPLtemperature);
        pushButton_WPLtemperature->setObjectName(QString::fromUtf8("pushButton_WPLtemperature"));
        sizePolicy1.setHeightForWidth(pushButton_WPLtemperature->sizePolicy().hasHeightForWidth());
        pushButton_WPLtemperature->setSizePolicy(sizePolicy1);
        pushButton_WPLtemperature->setIcon(icon1);
        pushButton_WPLtemperature->setIconSize(QSize(10, 10));
        pushButton_WPLtemperature->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_WPLtemperature);

        pushButton_WPLpressure = new QPushButton(layoutWidget_2);
        buttonGroup->addButton(pushButton_WPLpressure);
        pushButton_WPLpressure->setObjectName(QString::fromUtf8("pushButton_WPLpressure"));
        sizePolicy1.setHeightForWidth(pushButton_WPLpressure->sizePolicy().hasHeightForWidth());
        pushButton_WPLpressure->setSizePolicy(sizePolicy1);
        pushButton_WPLpressure->setIcon(icon1);
        pushButton_WPLpressure->setIconSize(QSize(10, 10));
        pushButton_WPLpressure->setCheckable(true);

        verticalLayout_2->addWidget(pushButton_WPLpressure);

        pushButton_start_2 = new QPushButton(tab_flowfiled);
        pushButton_start_2->setObjectName(QString::fromUtf8("pushButton_start_2"));
        pushButton_start_2->setGeometry(QRect(1690, 50, 121, 61));
        pushButton_start_2->setFont(font);
        table_tabflowfield = new QTableWidget(tab_flowfiled);
        table_tabflowfield->setObjectName(QString::fromUtf8("table_tabflowfield"));
        table_tabflowfield->setGeometry(QRect(0, 700, 1841, 261));
        table_tabflowfield->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 13, 102);\n"
"color: rgb(255, 255, 255);"));
        frame_tab_flowfiled = new QFrame(tab_flowfiled);
        frame_tab_flowfiled->setObjectName(QString::fromUtf8("frame_tab_flowfiled"));
        frame_tab_flowfiled->setGeometry(QRect(120, 50, 1551, 61));
        frame_tab_flowfiled->setFrameShape(QFrame::StyledPanel);
        frame_tab_flowfiled->setFrameShadow(QFrame::Raised);
        layoutWidget_3 = new QWidget(frame_tab_flowfiled);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 361, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setSpacing(30);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        dateTimeEdit_2 = new QDateTimeEdit(layoutWidget_3);
        dateTimeEdit_2->setObjectName(QString::fromUtf8("dateTimeEdit_2"));
        dateTimeEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateTimeEdit_2->setAlignment(Qt::AlignCenter);
        dateTimeEdit_2->setCalendarPopup(true);

        horizontalLayout_2->addWidget(dateTimeEdit_2);

        widget_tab_flowfiled = new QWidget(tab_flowfiled);
        widget_tab_flowfiled->setObjectName(QString::fromUtf8("widget_tab_flowfiled"));
        widget_tab_flowfiled->setGeometry(QRect(120, 120, 1711, 571));
        tabWidget_main->addTab(tab_flowfiled, QString());
        tab_AVG = new QWidget();
        tab_AVG->setObjectName(QString::fromUtf8("tab_AVG"));
        frame_tab_AVG = new QFrame(tab_AVG);
        frame_tab_AVG->setObjectName(QString::fromUtf8("frame_tab_AVG"));
        frame_tab_AVG->setGeometry(QRect(30, 20, 1811, 61));
        frame_tab_AVG->setFrameShape(QFrame::StyledPanel);
        frame_tab_AVG->setFrameShadow(QFrame::Raised);
        layoutWidget_4 = new QWidget(frame_tab_AVG);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(10, 10, 1581, 41));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_3->setSpacing(30);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        dateTimeEdit_3 = new QDateTimeEdit(layoutWidget_4);
        dateTimeEdit_3->setObjectName(QString::fromUtf8("dateTimeEdit_3"));
        dateTimeEdit_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateTimeEdit_3->setAlignment(Qt::AlignCenter);
        dateTimeEdit_3->setCalendarPopup(true);

        horizontalLayout_3->addWidget(dateTimeEdit_3);

        checkBox_6 = new QCheckBox(layoutWidget_4);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setFont(font);
        checkBox_6->setLayoutDirection(Qt::RightToLeft);
        checkBox_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(checkBox_6);

        checkBox_7 = new QCheckBox(layoutWidget_4);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setFont(font);
        checkBox_7->setLayoutDirection(Qt::RightToLeft);
        checkBox_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(checkBox_7);

        checkBox_8 = new QCheckBox(layoutWidget_4);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setFont(font);
        checkBox_8->setLayoutDirection(Qt::RightToLeft);
        checkBox_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(checkBox_8);

        checkBox_9 = new QCheckBox(layoutWidget_4);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setFont(font);
        checkBox_9->setLayoutDirection(Qt::RightToLeft);
        checkBox_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(checkBox_9);

        checkBox_10 = new QCheckBox(layoutWidget_4);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setFont(font);
        checkBox_10->setLayoutDirection(Qt::RightToLeft);
        checkBox_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(checkBox_10);

        layoutWidget2 = new QWidget(tab_AVG);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 110, 1761, 841));
        gridLayout = new QGridLayout(layoutWidget2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        widget_AVG_1 = new QWidget(layoutWidget2);
        widget_AVG_1->setObjectName(QString::fromUtf8("widget_AVG_1"));

        gridLayout->addWidget(widget_AVG_1, 0, 0, 1, 1);

        widget_AVG_2 = new QWidget(layoutWidget2);
        widget_AVG_2->setObjectName(QString::fromUtf8("widget_AVG_2"));

        gridLayout->addWidget(widget_AVG_2, 0, 1, 1, 1);

        widget_AVG_3 = new QWidget(layoutWidget2);
        widget_AVG_3->setObjectName(QString::fromUtf8("widget_AVG_3"));

        gridLayout->addWidget(widget_AVG_3, 1, 0, 1, 1);

        widget_AVG_4 = new QWidget(layoutWidget2);
        widget_AVG_4->setObjectName(QString::fromUtf8("widget_AVG_4"));

        gridLayout->addWidget(widget_AVG_4, 1, 1, 1, 1);

        tabWidget_main->addTab(tab_AVG, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget_main->addTab(tab_4, QString());
        tab_RP = new QWidget();
        tab_RP->setObjectName(QString::fromUtf8("tab_RP"));
        frame_tab_RP = new QFrame(tab_RP);
        frame_tab_RP->setObjectName(QString::fromUtf8("frame_tab_RP"));
        frame_tab_RP->setGeometry(QRect(30, 20, 1811, 61));
        frame_tab_RP->setFrameShape(QFrame::StyledPanel);
        frame_tab_RP->setFrameShadow(QFrame::Raised);
        layoutWidget_5 = new QWidget(frame_tab_RP);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 10, 1581, 41));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_5);
        horizontalLayout_4->setSpacing(30);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("border: none;\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        dateTimeEdit_4 = new QDateTimeEdit(layoutWidget_5);
        dateTimeEdit_4->setObjectName(QString::fromUtf8("dateTimeEdit_4"));
        dateTimeEdit_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dateTimeEdit_4->setAlignment(Qt::AlignCenter);
        dateTimeEdit_4->setCalendarPopup(true);

        horizontalLayout_4->addWidget(dateTimeEdit_4);

        checkBox_11 = new QCheckBox(layoutWidget_5);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setFont(font);
        checkBox_11->setLayoutDirection(Qt::RightToLeft);
        checkBox_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(checkBox_11);

        checkBox_12 = new QCheckBox(layoutWidget_5);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        checkBox_12->setFont(font);
        checkBox_12->setLayoutDirection(Qt::RightToLeft);
        checkBox_12->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(checkBox_12);

        checkBox_13 = new QCheckBox(layoutWidget_5);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        checkBox_13->setFont(font);
        checkBox_13->setLayoutDirection(Qt::RightToLeft);
        checkBox_13->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(checkBox_13);

        checkBox_14 = new QCheckBox(layoutWidget_5);
        checkBox_14->setObjectName(QString::fromUtf8("checkBox_14"));
        checkBox_14->setFont(font);
        checkBox_14->setLayoutDirection(Qt::RightToLeft);
        checkBox_14->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(checkBox_14);

        checkBox_15 = new QCheckBox(layoutWidget_5);
        checkBox_15->setObjectName(QString::fromUtf8("checkBox_15"));
        checkBox_15->setFont(font);
        checkBox_15->setLayoutDirection(Qt::RightToLeft);
        checkBox_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(checkBox_15);

        layoutWidget3 = new QWidget(tab_RP);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(40, 110, 1761, 571));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_5->setSpacing(30);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_RP_1 = new QWidget(layoutWidget3);
        widget_RP_1->setObjectName(QString::fromUtf8("widget_RP_1"));

        horizontalLayout_5->addWidget(widget_RP_1);

        widget_RP_2 = new QWidget(layoutWidget3);
        widget_RP_2->setObjectName(QString::fromUtf8("widget_RP_2"));

        horizontalLayout_5->addWidget(widget_RP_2);

        widget_RP_3 = new QWidget(layoutWidget3);
        widget_RP_3->setObjectName(QString::fromUtf8("widget_RP_3"));

        horizontalLayout_5->addWidget(widget_RP_3);

        layoutWidget4 = new QWidget(tab_RP);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(40, 690, 1761, 251));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_6->setSpacing(60);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        table_tabRP_1 = new QTableWidget(layoutWidget4);
        table_tabRP_1->setObjectName(QString::fromUtf8("table_tabRP_1"));
        table_tabRP_1->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 13, 102);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(table_tabRP_1);

        table_tabRP_2 = new QTableWidget(layoutWidget4);
        table_tabRP_2->setObjectName(QString::fromUtf8("table_tabRP_2"));
        table_tabRP_2->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 13, 102);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(table_tabRP_2);

        table_tabRP_3 = new QTableWidget(layoutWidget4);
        table_tabRP_3->setObjectName(QString::fromUtf8("table_tabRP_3"));
        table_tabRP_3->setStyleSheet(QString::fromUtf8("background-color: rgb(11, 13, 102);\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(table_tabRP_3);

        tabWidget_main->addTab(tab_RP, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tabWidget_main->addTab(tab_6, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(button_return, SIGNAL(clicked()), MainWindow, SLOT(close()));

        tabWidget_main->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "\345\244\232\347\211\251\347\220\206\345\234\272\346\225\260\346\215\256\350\236\215\345\220\210\345\220\214\346\255\245\346\265\213\346\216\247\350\275\257\344\273\266", nullptr));
        button_return->setText(QCoreApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        pushButton_all->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
        pushButton_tempreture->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246", nullptr));
        pushButton_humidity->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246", nullptr));
        pushButton_windspeed->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237", nullptr));
        pushButton_winddirection->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221", nullptr));
        pushButton_pressure->setText(QCoreApplication::translate("MainWindow", "\346\260\224\345\216\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\345\231\250", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\345\200\274", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\345\200\274", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237\345\200\274", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221\345\200\274", nullptr));
        checkBox_5->setText(QCoreApplication::translate("MainWindow", "\346\260\224\345\216\213\345\200\274", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_weather), QCoreApplication::translate("MainWindow", "\351\233\206\346\210\220\346\260\224\350\261\241\347\253\231\346\216\247\345\210\266", nullptr));
        pushButton_all_flowfiled->setText(QCoreApplication::translate("MainWindow", "\345\205\250\351\203\250", nullptr));
        pushButton_WPLspeed->setText(QCoreApplication::translate("MainWindow", "WPL\351\200\237\345\272\246", nullptr));
        pushButton_WPLtemperature->setText(QCoreApplication::translate("MainWindow", "WPL\346\270\251\345\272\246", nullptr));
        pushButton_WPLpressure->setText(QCoreApplication::translate("MainWindow", "WPL\346\260\224\345\216\213", nullptr));
        pushButton_start_2->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\345\231\250", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_flowfiled), QCoreApplication::translate("MainWindow", "\350\275\246\350\275\275\345\260\276\346\265\201\345\234\272\350\257\225\351\252\214\346\216\247\345\210\266", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\345\231\250", nullptr));
        checkBox_6->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\345\200\274", nullptr));
        checkBox_7->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\345\200\274", nullptr));
        checkBox_8->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237\345\200\274", nullptr));
        checkBox_9->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221\345\200\274", nullptr));
        checkBox_10->setText(QCoreApplication::translate("MainWindow", "\346\260\224\345\216\213\345\200\274", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_AVG), QCoreApplication::translate("MainWindow", "AGV\350\275\246\350\275\275\350\256\276\345\244\207\346\216\247\345\210\266", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_4), QCoreApplication::translate("MainWindow", "\350\257\225\351\252\214\350\277\207\347\250\213\347\233\221\346\216\247\347\263\273\347\273\237\346\216\247\345\210\266", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\347\255\233\351\200\211\345\231\250", nullptr));
        checkBox_11->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246\345\200\274", nullptr));
        checkBox_12->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246\345\200\274", nullptr));
        checkBox_13->setText(QCoreApplication::translate("MainWindow", "\351\243\216\351\200\237\345\200\274", nullptr));
        checkBox_14->setText(QCoreApplication::translate("MainWindow", "\351\243\216\345\220\221\345\200\274", nullptr));
        checkBox_15->setText(QCoreApplication::translate("MainWindow", "\346\260\224\345\216\213\345\200\274", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_RP), QCoreApplication::translate("MainWindow", "\345\261\225\347\244\272\346\225\260\346\215\256\345\233\236\346\224\276\346\216\247\345\210\266", nullptr));
        tabWidget_main->setTabText(tabWidget_main->indexOf(tab_6), QCoreApplication::translate("MainWindow", "\347\272\242\345\244\226\347\203\255\345\203\217\344\273\252\346\216\247\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
