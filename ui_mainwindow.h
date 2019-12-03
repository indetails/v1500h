/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Main;
    QPushButton *bRecipeMode;
    QPushButton *bFixMode;
    QPushButton *b1500hMode;
    QLabel *rectRecipe;
    QLabel *rectFix;
    QLabel *rect1500h;
    QPushButton *bClearLogTable_2;
    QPushButton *bLightsMain;
    QLabel *laDate;
    QLabel *laTime;
    QStackedWidget *mainPage;
    QWidget *pRecipeMode;
    QComboBox *cbSelectProfileMain;
    QPushButton *bSendProfileMain;
    QPushButton *bStartTest;
    QPushButton *bPauseTest;
    QPushButton *bStopTest;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLabel *laSelectedProfileMain;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *leTTotalCycle;
    QWidget *pFixMode;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *laSetTempValue;
    QLineEdit *leFixTempValue;
    QPushButton *bTemperatureSet;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *bSetTemperatureStart;
    QPushButton *bSetTemperatureStop;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_39;
    QSpacerItem *horizontalSpacer_36;
    QDoubleSpinBox *dsbSetTempCabinAvrTemp;
    QWidget *p1500h;
    QGroupBox *groupBox;
    QLabel *label_8;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox;
    QLabel *label_6;
    QCheckBox *checkBox_2;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_5;
    QCheckBox *checkBox_5;
    QPushButton *bPauseTest1500h;
    QPushButton *bStopTest1500h;
    QPushButton *bStartTest1500h;
    QPushButton *bSendProfile1500h;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_53;
    QLineEdit *leSetTemperature1500h;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_56;
    QLineEdit *leLiquidChangeTemp1500h;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_55;
    QLineEdit *leLiquidChangePeriod1500h;
    QWidget *layoutWidget6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_54;
    QLineEdit *leTotalTestDuration1500h;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_52;
    QLineEdit *leSetPressure1500h;
    QWidget *layoutWidget8;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_57;
    QLineEdit *leLiquidCirculationTime1500h;
    QPushButton *bChooseData;
    QPushButton *bMainDoorInfo;
    QWidget *tab_setTemp;
    QStackedWidget *detailsPages;
    QWidget *detailsMain;
    QStackedWidget *detailsBottomPages;
    QWidget *detailsBottomInfo;
    QLabel *label_26;
    QProgressBar *pb_testProgress;
    QTableWidget *warningTable;
    QStackedWidget *sW_0;
    QWidget *scaklik_ayar;
    QCheckBox *cB_tte_4;
    QWidget *basn_ayar;
    QCheckBox *cB_tte_11;
    QCheckBox *cB_tte_12;
    QCheckBox *cB_tte_10;
    QCheckBox *cB_tte_8;
    QCheckBox *cB_tte_9;
    QCheckBox *cB_tte_13;
    QWidget *hortumkontrolu;
    QCheckBox *cB_tte_22;
    QCheckBox *cB_tte_23;
    QCheckBox *cB_tte_24;
    QCheckBox *cB_tte_25;
    QCheckBox *cB_tte_32;
    QCheckBox *cB_tte_33;
    QWidget *page_9;
    QCheckBox *cB_tte_21;
    QCheckBox *cB_tte_15;
    QCheckBox *cB_tte_19;
    QCheckBox *cB_tte_17;
    QCheckBox *cB_tte_16;
    QCheckBox *cB_tte_18;
    QCheckBox *cB_tte_20;
    QWidget *page_11;
    QCheckBox *cB_tte_26;
    QWidget *page_12;
    QCheckBox *cB_tte_28;
    QCheckBox *cB_tte_29;
    QWidget *page_13;
    QCheckBox *cB_tte_30;
    QCheckBox *cB_tte_31;
    QStackedWidget *stackedWidget_2;
    QWidget *page_5;
    QCheckBox *cB_tte_0;
    QCheckBox *cB_tte_1;
    QCheckBox *cB_tte_2;
    QCheckBox *cB_tte_3;
    QCheckBox *cB_tte_14;
    QCheckBox *cB_tte_6;
    QCheckBox *cB_tte_7;
    QWidget *page_6;
    QProgressBar *pb_testProgress_2;
    QLabel *label_27;
    QWidget *detailsBottomTankLevels;
    QGroupBox *gb_KirliTankLevel;
    QFrame *line_27;
    QFrame *line_29;
    QLabel *label_43;
    QLabel *label_44;
    QFrame *line_30;
    QProgressBar *pbDirtyTankLevel;
    QLabel *label_45;
    QGroupBox *gb_CleanTankLevel;
    QFrame *line_31;
    QLabel *label_46;
    QFrame *line_32;
    QFrame *line_33;
    QProgressBar *pbCleanTankLevel;
    QLabel *label_47;
    QLabel *label_48;
    QGroupBox *gb_basincTankLevel;
    QFrame *line_34;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QFrame *line_35;
    QFrame *line_36;
    QProgressBar *pbExpansionTankLevel;
    QLabel *laFault31;
    QLabel *laFault32;
    QLabel *laFault34;
    QLabel *laFault33;
    QWidget *detailsBottomPipes;
    QLabel *laFault25;
    QLabel *laFault23;
    QLabel *laFault24;
    QLabel *laFault22;
    QLabel *laFault21;
    QLabel *laFault4A_2;
    QGroupBox *groupBox_6;
    QLabel *label_41;
    QCheckBox *Hortum1_2;
    QLabel *label_42;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_61;
    QCheckBox *Hortum2_2;
    QCheckBox *Hortum3_2;
    QCheckBox *Hortum4_2;
    QCheckBox *Hortum5_2;
    QLabel *control_hortum_1;
    QLabel *control_hortum_2;
    QLabel *control_hortum_3;
    QLabel *control_hortum_4;
    QLabel *control_hortum_5;
    QLabel *laDurum1;
    QWidget *detailsBottomHetar;
    QLabel *label_40;
    QLabel *laFault46;
    QLabel *laFault44;
    QLabel *laFault43;
    QLabel *laFault42;
    QLabel *laDurum2;
    QLabel *laDurum3;
    QLabel *laDurum3_2;
    QLabel *laDurum2_2;
    QWidget *detailsBottomError;
    QLabel *label_38;
    QLabel *laFault41;
    QLabel *laFault49;
    QLabel *laFault47;
    QLabel *laFault45;
    QLabel *laFault48;
    QLabel *laFault4A;
    QWidget *detailsBottomEmergency;
    QLabel *laFault11;
    QLabel *laFault11_2;
    QLabel *laFault12;
    QPushButton *btnDetailsInfo;
    QPushButton *btnDetailsTanklevel;
    QPushButton *btnDetailsHeater;
    QDoubleSpinBox *dsbCabinTopTemp_2;
    QLabel *label_34;
    QDoubleSpinBox *dsbCabinPIDTemp_2;
    QDoubleSpinBox *dsbPipe1Pressure_2;
    QLabel *label_15;
    QDoubleSpinBox *dsbSetPressure_2;
    QPushButton *btnDetailsPipes;
    QPushButton *bResetFault;
    QPushButton *btnDetailsPressure_2;
    QPushButton *bBuzzerReset;
    QWidget *detailsPressure;
    QGroupBox *groupBox_2;
    QFrame *line_10;
    QLabel *label_21;
    QFrame *line_11;
    QFrame *line_9;
    QProgressBar *pbCleanTankLevel_2;
    QLabel *label_23;
    QLabel *label_22;
    QGroupBox *gbDirtyTankLevel_2;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *label_20;
    QLabel *label_19;
    QFrame *line_6;
    QProgressBar *pbDirtyTankLevel_2;
    QLabel *label_18;
    QGroupBox *groupBox_4;
    QFrame *line_3;
    QLabel *label_17;
    QLabel *label_16;
    QLabel *label_13;
    QFrame *line;
    QFrame *line_2;
    QProgressBar *pbExpansionTankLevel_2;
    QRadioButton *radioButton_3;
    QGroupBox *groupBox_5;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_8;
    QRadioButton *radioButton;
    QRadioButton *radioButton_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_24;
    QLabel *label_25;
    QPushButton *btnBackDetails;
    QWidget *TTE_0;
    QWidget *detailsPage;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_2;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *laTime_2;
    QLabel *laDate_2;
    QPushButton *bMinimize_2;
    QWidget *tab_Details;
    QComboBox *cbSelectGraph;
    QCustomPlot *tTestGraph;
    QLabel *laTestName;
    QCustomPlot *pTestGraph;
    QPushButton *bScreenshot;
    QWidget *layoutWidget9;
    QVBoxLayout *verticalLayout_10;
    QPushButton *ZoomInVer;
    QPushButton *ZoomOutVer;
    QPushButton *ZoomInHor;
    QPushButton *ZoomOutHor;
    QPushButton *ZoomCenter;
    QWidget *layoutWidget10;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_33;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *dsbCabinSetTemp;
    QDoubleSpinBox *dsbCabinTopTemp;
    QLabel *label_14;
    QDoubleSpinBox *dsbPipe1Pressure;
    QLabel *laTime_3;
    QLabel *laDate_3;
    QPushButton *bMinimize_3;
    QWidget *tab_Manual;
    QStackedWidget *stackedWidget;
    QWidget *page_3;
    QPushButton *bStopTestManual;
    QPushButton *bPauseTestManual;
    QPushButton *bStartTestManual;
    QPushButton *bSetTemperatureStart_2;
    QPushButton *bSendProfileManual;
    QFrame *line_25;
    QComboBox *cbSelectProfileManual;
    QLabel *label_116;
    QLabel *label_112;
    QDoubleSpinBox *dsbTTimeSetManual;
    QComboBox *cbSelectMethodManual;
    QSpinBox *sbTStepSetManual;
    QLabel *label_121;
    QLabel *label_117;
    QFrame *line_26;
    QSpinBox *sbTCycleSetManual;
    QSpinBox *sbTTotalCycleManual;
    QLabel *laSelectedProfileManual;
    QSpinBox *sbTStepRepeatSetManual;
    QLabel *label_113;
    QLabel *label_122;
    QFrame *line_28;
    QWidget *page_4;
    QPushButton *b_pipe_1;
    QPushButton *b_pipe_2;
    QPushButton *b_pipe_3;
    QPushButton *b_pipe_4;
    QPushButton *b_pipe_5;
    QPushButton *b_basinc_tank_doldur;
    QPushButton *b_temiz_tank_bosalt;
    QPushButton *b_tum_tanklari_bosalt;
    QPushButton *bManualPrepareLines;
    QPushButton *bManualPressureLinesStart;
    QPushButton *bManualEvacLines;
    QPushButton *bManualPressureLinesStop;
    QGroupBox *groupBox_3;
    QLabel *label_30;
    QCheckBox *Hortum1;
    QLabel *label_32;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QCheckBox *Hortum2;
    QCheckBox *Hortum3;
    QCheckBox *Hortum4;
    QCheckBox *Hortum5;
    QLabel *label_62;
    QLabel *label_63;
    QWidget *tab_NewPro;
    QPushButton *bSavePro;
    QPushButton *bClearPro;
    QCustomPlot *tPreview_2;
    QStackedWidget *tWidget;
    QWidget *page;
    QPushButton *bNewTStep;
    QLabel *label_28;
    QLabel *label_10;
    QLabel *laTTotalStep;
    QLabel *label_73;
    QComboBox *cbTSelectSUnit;
    QLabel *label_58;
    QLabel *laOldTValue;
    QLabel *label_127;
    QLabel *label_128;
    QLineEdit *leStartValue;
    QWidget *page_2;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_31;
    QPushButton *bTForward2;
    QPushButton *bTBack2;
    QLabel *label_255;
    QLabel *laTLinDurationSave;
    QLineEdit *leTLDuration;
    QLineEdit *leTLTarget;
    QWidget *page_27;
    QCustomPlot *tPreview;
    QLabel *label_74;
    QPushButton *bTSaveStep;
    QPushButton *bTBack3;
    QLabel *label_68;
    QWidget *layoutWidget11;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *cbSelectProfile;
    QPushButton *bEditProLook;
    QPushButton *bEditPro;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_29;
    QLineEdit *leProfileName;
    QWidget *tab_Maintenance;
    QFrame *line_13;
    QFrame *line_14;
    QFrame *line_8;
    QFrame *line_15;
    QPushButton *bExhaustValve;
    QWidget *layoutWidget12;
    QVBoxLayout *verticalLayout_3;
    QPushButton *bStartMaintenance;
    QFrame *line_7;
    QFormLayout *formLayout;
    QLabel *label_94;
    QDoubleSpinBox *dsbCabinTopTempMaintenance;
    QLabel *label_95;
    QDoubleSpinBox *dsbCabinTopTempMaintenance_2;
    QLabel *label_64;
    QDoubleSpinBox *dsbPipe1PressureMaintenance;
    QPushButton *bRes;
    QPushButton *bFan;
    QWidget *layoutWidget13;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *chbRes1;
    QCheckBox *chbRes2;
    QCheckBox *chbRes3;
    QCheckBox *chbResTank;
    QWidget *layoutWidget14;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *chbFan1;
    QCheckBox *chbFan2;
    QCheckBox *chbFan3;
    QWidget *layoutWidget15;
    QVBoxLayout *verticalLayout_6;
    QCheckBox *chbExhaustValve;
    QDoubleSpinBox *dsbExhaustValveAutoValue;
    QPushButton *bSetExhaustValve;
    QPushButton *bDoorControlActive;
    QLineEdit *lineEdit;
    QWidget *tab_calibration;
    QPushButton *bSaveCalibrationValues;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_3;
    QLineEdit *leCalCabinBottomTempErr;
    QLineEdit *leCalCabinBottomTempCoeff;
    QLineEdit *leCalCabinTopTempCoeff;
    QLineEdit *leCalCleanTankCoeff;
    QLineEdit *leCalPipePressure1Coeff;
    QLineEdit *leCalPipePressure1Err;
    QLineEdit *leCalDirtyTankCoeff;
    QLineEdit *leCalCleanTankLevelErr;
    QLineEdit *leCalDirtyTankErr;
    QLineEdit *leCalExpansionTankCoeff;
    QLabel *label_107;
    QLabel *label_75;
    QDoubleSpinBox *dsbCalTankDirtyInput;
    QDoubleSpinBox *dsbCalTankDirtyOut;
    QDoubleSpinBox *dsbCalTankPressureInput;
    QLabel *label_76;
    QDoubleSpinBox *dsbCalTankPressureOut;
    QLineEdit *leCalCabinTopTempErr;
    QLabel *label_103;
    QLabel *label_104;
    QLabel *label_105;
    QLabel *label_106;
    QLabel *label_108;
    QDoubleSpinBox *dsbCalCabinTopTempInput;
    QLabel *label_109;
    QDoubleSpinBox *dsbCalCabinTopTempOut;
    QDoubleSpinBox *dsbCalCabinBottomInput;
    QDoubleSpinBox *dsbCalCabinBottomTempOut;
    QLabel *label_71;
    QDoubleSpinBox *dsbCalPipePressure1Input;
    QDoubleSpinBox *dsbCalPipePressure1Out;
    QLabel *label_72;
    QDoubleSpinBox *dsbCalTankCleanInput;
    QDoubleSpinBox *dsbCalTankCleanOut;
    QLineEdit *leCalExpansionTankErr;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1200, 800);
        QFont font;
        font.setFamily(QStringLiteral("Roboto"));
        MainWindow->setFont(font);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"QtabWidget{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"QtabWidget::Header{\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QLabel\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"QComboBox\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"QPushButton\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"QTabBar\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"QSpinBox\n"
"{\n"
"	color:rgb(0, 0, 127);	\n"
"}\n"
"QDoubleSpinBox\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"QLineEdit\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"QTableBar\n"
"{\n"
"	color:rgb(0, 0, 127);\n"
"}\n"
"\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setAutoFillBackground(false);
        centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        QFont font1;
        font1.setPointSize(20);
        tabWidget->setFont(font1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QLatin1String("\n"
"QtabWidget::pane{\n"
"    border-top: 2px solid rgb(255, 85, 0);\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"	font: 20pt \"Calibri\";	\n"
"	color: rgb(255, 255, 255);\n"
"	background: rgb(30, 30, 30);\n"
"    border: 2px solid rgb(255, 85, 0);\n"
"    border-bottom-color: rgb(77, 77, 77); /* same as the pane color */\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"    min-width: 8ex;\n"
"    padding: 4px;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(19, 19, 19), stop: 0.4  rgb(30, 30, 30),\n"
"                                stop: 0.5  rgb(48, 48, 48), stop: 1.0  rgb(77, 77, 77));\n"
"}\n"
"\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"    border-color: #9B9B9B;\n"
"    border-bottom-color: #C2C7CB; \n"
"}\n"
"#tab_Main\n"
"{\n"
"font: 112 50pt \"Segoe UI Black\";\n"
"\n"
"background: qradialgradient(cx: 0"
                        ".7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"\n"
"#tab_Details\n"
"{\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"border: none;\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"#tab_EditPro\n"
"{\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"border: none;\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80));\n"
"}\n"
"#tab_NewPro\n"
"{\n"
"font: 87 8pt \"Segoe UI Black\";\n"
"border: none;\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"#tab_Manual\n"
""
                        "{\n"
"font: 87 16pt \"Segoe UI Black\";\n"
"border: none;\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"#tab_Maintenance\n"
"{\n"
"font: 87 16pt \"Segoe UI Black\";\n"
"border: none;\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"\n"
"#tab_setTemp\n"
"{\n"
"font: 87 16pt \"Segoe UI Black\";\n"
"border: none;\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"\n"
"QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 25px;\n"
"border: 2px solid rgb(255, 85, 0);\n"
"/*border: 2px solid rgb(0, 115, 255);*/\n"
""
                        "border-radius: 5px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0, 0, 0), stop: 1 rgb(30, 30, 30));\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(80, 80, 80), stop: 1 rgb(50, 50, 50));\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"border: 2px solid rgb(189, 189, 189);\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgb(104, 104, 104), stop: 1 rgb(104, 104,104));\n"
"}\n"
"\n"
"QLabel{\n"
"color : #fff;\n"
"font: 45 18pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QDoubleSpinBox{\n"
"color :rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 85, 0);\n"
"border-radius: 5px;\n"
"font: 75 18pt \""
                        "Gill Sans MT\";\n"
"}\n"
"\n"
"QSpinBox{\n"
"color : rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 85, 0);\n"
"border-radius: 5px;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"\n"
"}\n"
"\n"
"QComboBox{\n"
"color : #fff;\n"
"background-color: rgb(0, 0, 0);\n"
"\n"
"	border: 2px rgb(255, 85, 0);\n"
"border-radius: 5px;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"QCheckBox{\n"
"color : #fff;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"QLineEdit{\n"
"color : #fff;\n"
"	background-color: rgb(0, 0, 0);\n"
"border: 2px solid rgb(255, 85, 0);\n"
"border-radius: 5px;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"QLineEdit:disabled{\n"
"color : #666;\n"
"	background-color: rgb(62, 62, 62);\n"
"border: 2px solid rgb(80, 80, 80);\n"
"border-radius: 5px;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QStackedWidget{\n"
"\n"
"background-color: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.1, fy: 0.1,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 1 rgb"
                        "(62, 62, 62) ,stop: 0 rgb(0, 0, 25) ) ;\n"
"}\n"
"\n"
"QRadioButton{\n"
"color : #fff;\n"
"font: 45 18pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QGroupBox{\n"
"color : #fff;\n"
"font: 45 18pt \"Gill Sans MT\";\n"
"}"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(16, 16));
        tab_Main = new QWidget();
        tab_Main->setObjectName(QStringLiteral("tab_Main"));
        tab_Main->setAutoFillBackground(false);
        tab_Main->setStyleSheet(QStringLiteral(""));
        bRecipeMode = new QPushButton(tab_Main);
        bRecipeMode->setObjectName(QStringLiteral("bRecipeMode"));
        bRecipeMode->setGeometry(QRect(20, 70, 171, 91));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(bRecipeMode->sizePolicy().hasHeightForWidth());
        bRecipeMode->setSizePolicy(sizePolicy);
        bRecipeMode->setMinimumSize(QSize(94, 50));
        bRecipeMode->setMaximumSize(QSize(200, 100));
        QFont font2;
        font2.setFamily(QStringLiteral("Gill Sans MT"));
        bRecipeMode->setFont(font2);
        bRecipeMode->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        bRecipeMode->setCheckable(true);
        bFixMode = new QPushButton(tab_Main);
        bFixMode->setObjectName(QStringLiteral("bFixMode"));
        bFixMode->setGeometry(QRect(20, 180, 171, 91));
        sizePolicy.setHeightForWidth(bFixMode->sizePolicy().hasHeightForWidth());
        bFixMode->setSizePolicy(sizePolicy);
        bFixMode->setMinimumSize(QSize(94, 50));
        bFixMode->setMaximumSize(QSize(200, 100));
        bFixMode->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bFixMode->setCheckable(true);
        b1500hMode = new QPushButton(tab_Main);
        b1500hMode->setObjectName(QStringLiteral("b1500hMode"));
        b1500hMode->setGeometry(QRect(20, 290, 171, 91));
        sizePolicy.setHeightForWidth(b1500hMode->sizePolicy().hasHeightForWidth());
        b1500hMode->setSizePolicy(sizePolicy);
        b1500hMode->setMinimumSize(QSize(94, 50));
        b1500hMode->setMaximumSize(QSize(200, 100));
        b1500hMode->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        b1500hMode->setCheckable(true);
        rectRecipe = new QLabel(tab_Main);
        rectRecipe->setObjectName(QStringLiteral("rectRecipe"));
        rectRecipe->setGeometry(QRect(10, 60, 201, 111));
        rectRecipe->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 29);\n"
"border-radius: 5px;"));
        rectFix = new QLabel(tab_Main);
        rectFix->setObjectName(QStringLiteral("rectFix"));
        rectFix->setGeometry(QRect(10, 170, 201, 111));
        rectFix->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 29);\n"
"border-radius: 5px;"));
        rect1500h = new QLabel(tab_Main);
        rect1500h->setObjectName(QStringLiteral("rect1500h"));
        rect1500h->setGeometry(QRect(10, 280, 201, 111));
        rect1500h->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 29);\n"
"border-radius: 5px;"));
        bClearLogTable_2 = new QPushButton(tab_Main);
        bClearLogTable_2->setObjectName(QStringLiteral("bClearLogTable_2"));
        bClearLogTable_2->setEnabled(true);
        bClearLogTable_2->setGeometry(QRect(1070, 10, 94, 45));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(bClearLogTable_2->sizePolicy().hasHeightForWidth());
        bClearLogTable_2->setSizePolicy(sizePolicy1);
        bClearLogTable_2->setMinimumSize(QSize(94, 45));
        bClearLogTable_2->setMaximumSize(QSize(50, 50));
        bClearLogTable_2->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bLightsMain = new QPushButton(tab_Main);
        bLightsMain->setObjectName(QStringLiteral("bLightsMain"));
        bLightsMain->setGeometry(QRect(20, 610, 171, 91));
        bLightsMain->setMinimumSize(QSize(94, 50));
        bLightsMain->setFont(font2);
        bLightsMain->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        bLightsMain->setCheckable(true);
        laDate = new QLabel(tab_Main);
        laDate->setObjectName(QStringLiteral("laDate"));
        laDate->setGeometry(QRect(760, 10, 121, 50));
        laDate->setMinimumSize(QSize(50, 50));
        laDate->setMaximumSize(QSize(150, 100));
        QFont font3;
        font3.setFamily(QStringLiteral("Gill Sans MT"));
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(5);
        laDate->setFont(font3);
        laDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        laTime = new QLabel(tab_Main);
        laTime->setObjectName(QStringLiteral("laTime"));
        laTime->setGeometry(QRect(900, 10, 121, 50));
        laTime->setMinimumSize(QSize(50, 50));
        laTime->setMaximumSize(QSize(150, 100));
        laTime->setFont(font3);
        laTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mainPage = new QStackedWidget(tab_Main);
        mainPage->setObjectName(QStringLiteral("mainPage"));
        mainPage->setGeometry(QRect(200, 60, 971, 641));
        mainPage->setAutoFillBackground(false);
        mainPage->setStyleSheet(QLatin1String("QStackedWidget{\n"
"	color: rgb(255, 85, 0);\n"
"}\n"
"QLabel{\n"
"color : #fff;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QSpinBox{\n"
"color : #fff;\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QComboBox{\n"
"color : #fff;\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-color: rgb(170, 56, 0);\n"
"font: 75 18pt \"Gill Sans MT\";\n"
"}\n"
"QLineEdit{\n"
"color : #fff;\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-color: rgb(170, 56, 0);\n"
"font: 75 16pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width:60px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }"));
        pRecipeMode = new QWidget();
        pRecipeMode->setObjectName(QStringLiteral("pRecipeMode"));
        cbSelectProfileMain = new QComboBox(pRecipeMode);
        cbSelectProfileMain->setObjectName(QStringLiteral("cbSelectProfileMain"));
        cbSelectProfileMain->setGeometry(QRect(20, 40, 500, 50));
        cbSelectProfileMain->setMinimumSize(QSize(500, 50));
        QFont font4;
        font4.setFamily(QStringLiteral("Gill Sans MT"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        cbSelectProfileMain->setFont(font4);
        bSendProfileMain = new QPushButton(pRecipeMode);
        bSendProfileMain->setObjectName(QStringLiteral("bSendProfileMain"));
        bSendProfileMain->setEnabled(false);
        bSendProfileMain->setGeometry(QRect(20, 290, 561, 61));
        bSendProfileMain->setMinimumSize(QSize(94, 50));
        bSendProfileMain->setFont(font2);
        bSendProfileMain->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSendProfileMain->setIconSize(QSize(24, 15));
        bStartTest = new QPushButton(pRecipeMode);
        bStartTest->setObjectName(QStringLiteral("bStartTest"));
        bStartTest->setEnabled(false);
        bStartTest->setGeometry(QRect(20, 370, 180, 61));
        bStartTest->setMinimumSize(QSize(94, 50));
        bStartTest->setFont(font2);
        bStartTest->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStartTest->setIconSize(QSize(24, 15));
        bPauseTest = new QPushButton(pRecipeMode);
        bPauseTest->setObjectName(QStringLiteral("bPauseTest"));
        bPauseTest->setEnabled(false);
        bPauseTest->setGeometry(QRect(210, 370, 180, 61));
        bPauseTest->setMinimumSize(QSize(94, 50));
        bPauseTest->setFont(font2);
        bPauseTest->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStopTest = new QPushButton(pRecipeMode);
        bStopTest->setObjectName(QStringLiteral("bStopTest"));
        bStopTest->setEnabled(false);
        bStopTest->setGeometry(QRect(400, 370, 180, 61));
        bStopTest->setMinimumSize(QSize(94, 50));
        bStopTest->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        layoutWidget = new QWidget(pRecipeMode);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 351, 52));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(50, 0));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout->addWidget(label_3);

        laSelectedProfileMain = new QLabel(layoutWidget);
        laSelectedProfileMain->setObjectName(QStringLiteral("laSelectedProfileMain"));
        sizePolicy.setHeightForWidth(laSelectedProfileMain->sizePolicy().hasHeightForWidth());
        laSelectedProfileMain->setSizePolicy(sizePolicy);
        laSelectedProfileMain->setMinimumSize(QSize(0, 50));
        laSelectedProfileMain->setLayoutDirection(Qt::LeftToRight);
        laSelectedProfileMain->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));
        laSelectedProfileMain->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout->addWidget(laSelectedProfileMain);

        layoutWidget1 = new QWidget(pRecipeMode);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 210, 351, 52));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_2->addWidget(label);

        leTTotalCycle = new QLineEdit(layoutWidget1);
        leTTotalCycle->setObjectName(QStringLiteral("leTTotalCycle"));
        sizePolicy.setHeightForWidth(leTTotalCycle->sizePolicy().hasHeightForWidth());
        leTTotalCycle->setSizePolicy(sizePolicy);
        leTTotalCycle->setMinimumSize(QSize(100, 50));

        horizontalLayout_2->addWidget(leTTotalCycle);

        mainPage->addWidget(pRecipeMode);
        pFixMode = new QWidget();
        pFixMode->setObjectName(QStringLiteral("pFixMode"));
        layoutWidget2 = new QWidget(pFixMode);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 30, 431, 431));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        laSetTempValue = new QLabel(layoutWidget2);
        laSetTempValue->setObjectName(QStringLiteral("laSetTempValue"));
        sizePolicy1.setHeightForWidth(laSetTempValue->sizePolicy().hasHeightForWidth());
        laSetTempValue->setSizePolicy(sizePolicy1);
        laSetTempValue->setMaximumSize(QSize(300, 300));
        QFont font5;
        font5.setFamily(QStringLiteral("Gill Sans MT"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        laSetTempValue->setFont(font5);
        laSetTempValue->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_4->addWidget(laSetTempValue);

        leFixTempValue = new QLineEdit(layoutWidget2);
        leFixTempValue->setObjectName(QStringLiteral("leFixTempValue"));

        horizontalLayout_4->addWidget(leFixTempValue);

        horizontalLayout_4->setStretch(0, 20);

        verticalLayout->addLayout(horizontalLayout_4);

        bTemperatureSet = new QPushButton(layoutWidget2);
        bTemperatureSet->setObjectName(QStringLiteral("bTemperatureSet"));
        bTemperatureSet->setEnabled(false);
        bTemperatureSet->setMinimumSize(QSize(94, 50));
        bTemperatureSet->setFont(font2);
        bTemperatureSet->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bTemperatureSet->setIconSize(QSize(24, 15));

        verticalLayout->addWidget(bTemperatureSet);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        bSetTemperatureStart = new QPushButton(layoutWidget2);
        bSetTemperatureStart->setObjectName(QStringLiteral("bSetTemperatureStart"));
        bSetTemperatureStart->setEnabled(false);
        bSetTemperatureStart->setMinimumSize(QSize(94, 60));
        bSetTemperatureStart->setFont(font2);
        bSetTemperatureStart->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSetTemperatureStart->setIconSize(QSize(24, 15));

        horizontalLayout_3->addWidget(bSetTemperatureStart);

        bSetTemperatureStop = new QPushButton(layoutWidget2);
        bSetTemperatureStop->setObjectName(QStringLiteral("bSetTemperatureStop"));
        bSetTemperatureStop->setEnabled(false);
        bSetTemperatureStop->setMinimumSize(QSize(94, 60));
        bSetTemperatureStop->setFont(font2);
        bSetTemperatureStop->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSetTemperatureStop->setIconSize(QSize(24, 15));

        horizontalLayout_3->addWidget(bSetTemperatureStop);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        label_39 = new QLabel(layoutWidget2);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setFont(font5);
        label_39->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_52->addWidget(label_39);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_52->addItem(horizontalSpacer_36);

        dsbSetTempCabinAvrTemp = new QDoubleSpinBox(layoutWidget2);
        dsbSetTempCabinAvrTemp->setObjectName(QStringLiteral("dsbSetTempCabinAvrTemp"));
        dsbSetTempCabinAvrTemp->setEnabled(false);
        dsbSetTempCabinAvrTemp->setMinimumSize(QSize(150, 50));
        dsbSetTempCabinAvrTemp->setFont(font4);
        dsbSetTempCabinAvrTemp->setReadOnly(true);
        dsbSetTempCabinAvrTemp->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbSetTempCabinAvrTemp->setDecimals(1);
        dsbSetTempCabinAvrTemp->setMinimum(-50);
        dsbSetTempCabinAvrTemp->setMaximum(250);
        dsbSetTempCabinAvrTemp->setSingleStep(0.1);

        horizontalLayout_52->addWidget(dsbSetTempCabinAvrTemp);


        verticalLayout->addLayout(horizontalLayout_52);

        mainPage->addWidget(pFixMode);
        p1500h = new QWidget();
        p1500h->setObjectName(QStringLiteral("p1500h"));
        groupBox = new QGroupBox(p1500h);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 571, 171));
        QFont font6;
        font6.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font6.setPointSize(14);
        font6.setBold(false);
        font6.setItalic(false);
        font6.setWeight(50);
        groupBox->setFont(font6);
        groupBox->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color :rgb(145, 139, 179);\n"
""));
        groupBox->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox->setFlat(true);
        groupBox->setCheckable(false);
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(470, 30, 91, 31));
        label_8->setMargin(3);
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(130, 90, 61, 71));
        checkBox_4->setChecked(true);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(480, 90, 61, 71));
        checkBox_3->setIconSize(QSize(32, 32));
        checkBox_3->setChecked(true);
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 90, 61, 71));
        checkBox->setCheckable(true);
        checkBox->setChecked(true);
        checkBox->setTristate(false);
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(240, 30, 91, 31));
        label_6->setMargin(3);
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(360, 90, 61, 71));
        checkBox_2->setChecked(true);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 30, 91, 31));
        label_4->setMargin(3);
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(350, 30, 91, 31));
        label_7->setMargin(3);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 30, 91, 31));
        label_5->setMargin(3);
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(250, 90, 61, 71));
        checkBox_5->setChecked(true);
        bPauseTest1500h = new QPushButton(p1500h);
        bPauseTest1500h->setObjectName(QStringLiteral("bPauseTest1500h"));
        bPauseTest1500h->setEnabled(false);
        bPauseTest1500h->setGeometry(QRect(310, 510, 291, 71));
        bPauseTest1500h->setMinimumSize(QSize(94, 50));
        bPauseTest1500h->setFont(font2);
        bPauseTest1500h->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStopTest1500h = new QPushButton(p1500h);
        bStopTest1500h->setObjectName(QStringLiteral("bStopTest1500h"));
        bStopTest1500h->setEnabled(false);
        bStopTest1500h->setGeometry(QRect(610, 510, 291, 71));
        bStopTest1500h->setMinimumSize(QSize(94, 50));
        bStopTest1500h->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStartTest1500h = new QPushButton(p1500h);
        bStartTest1500h->setObjectName(QStringLiteral("bStartTest1500h"));
        bStartTest1500h->setEnabled(false);
        bStartTest1500h->setGeometry(QRect(10, 510, 291, 71));
        bStartTest1500h->setMinimumSize(QSize(94, 50));
        bStartTest1500h->setFont(font2);
        bStartTest1500h->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStartTest1500h->setIconSize(QSize(24, 15));
        bSendProfile1500h = new QPushButton(p1500h);
        bSendProfile1500h->setObjectName(QStringLiteral("bSendProfile1500h"));
        bSendProfile1500h->setEnabled(true);
        bSendProfile1500h->setGeometry(QRect(10, 430, 431, 51));
        bSendProfile1500h->setMinimumSize(QSize(94, 50));
        bSendProfile1500h->setFont(font2);
        bSendProfile1500h->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSendProfile1500h->setIconSize(QSize(24, 15));
        layoutWidget3 = new QWidget(p1500h);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(400, 220, 321, 52));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        label_53 = new QLabel(layoutWidget3);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setMinimumSize(QSize(175, 0));
        label_53->setMaximumSize(QSize(175, 16777215));
        label_53->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_11->addWidget(label_53);

        leSetTemperature1500h = new QLineEdit(layoutWidget3);
        leSetTemperature1500h->setObjectName(QStringLiteral("leSetTemperature1500h"));
        sizePolicy.setHeightForWidth(leSetTemperature1500h->sizePolicy().hasHeightForWidth());
        leSetTemperature1500h->setSizePolicy(sizePolicy);
        leSetTemperature1500h->setMinimumSize(QSize(135, 50));
        leSetTemperature1500h->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_11->addWidget(leSetTemperature1500h);

        layoutWidget4 = new QWidget(p1500h);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(20, 360, 321, 52));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_56 = new QLabel(layoutWidget4);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setMinimumSize(QSize(175, 0));
        label_56->setMaximumSize(QSize(175, 16777215));
        label_56->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_7->addWidget(label_56);

        leLiquidChangeTemp1500h = new QLineEdit(layoutWidget4);
        leLiquidChangeTemp1500h->setObjectName(QStringLiteral("leLiquidChangeTemp1500h"));
        sizePolicy.setHeightForWidth(leLiquidChangeTemp1500h->sizePolicy().hasHeightForWidth());
        leLiquidChangeTemp1500h->setSizePolicy(sizePolicy);
        leLiquidChangeTemp1500h->setMinimumSize(QSize(135, 50));
        leLiquidChangeTemp1500h->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_7->addWidget(leLiquidChangeTemp1500h);

        layoutWidget5 = new QWidget(p1500h);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(400, 290, 321, 52));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_55 = new QLabel(layoutWidget5);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setMinimumSize(QSize(175, 0));
        label_55->setMaximumSize(QSize(175, 16777215));
        label_55->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_8->addWidget(label_55);

        leLiquidChangePeriod1500h = new QLineEdit(layoutWidget5);
        leLiquidChangePeriod1500h->setObjectName(QStringLiteral("leLiquidChangePeriod1500h"));
        sizePolicy.setHeightForWidth(leLiquidChangePeriod1500h->sizePolicy().hasHeightForWidth());
        leLiquidChangePeriod1500h->setSizePolicy(sizePolicy);
        leLiquidChangePeriod1500h->setMinimumSize(QSize(135, 50));
        leLiquidChangePeriod1500h->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_8->addWidget(leLiquidChangePeriod1500h);

        layoutWidget6 = new QWidget(p1500h);
        layoutWidget6->setObjectName(QStringLiteral("layoutWidget6"));
        layoutWidget6->setGeometry(QRect(20, 290, 321, 52));
        horizontalLayout_9 = new QHBoxLayout(layoutWidget6);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_54 = new QLabel(layoutWidget6);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setMinimumSize(QSize(175, 0));
        label_54->setMaximumSize(QSize(175, 16777215));
        label_54->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_9->addWidget(label_54);

        leTotalTestDuration1500h = new QLineEdit(layoutWidget6);
        leTotalTestDuration1500h->setObjectName(QStringLiteral("leTotalTestDuration1500h"));
        sizePolicy.setHeightForWidth(leTotalTestDuration1500h->sizePolicy().hasHeightForWidth());
        leTotalTestDuration1500h->setSizePolicy(sizePolicy);
        leTotalTestDuration1500h->setMinimumSize(QSize(135, 50));
        leTotalTestDuration1500h->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_9->addWidget(leTotalTestDuration1500h);

        layoutWidget7 = new QWidget(p1500h);
        layoutWidget7->setObjectName(QStringLiteral("layoutWidget7"));
        layoutWidget7->setGeometry(QRect(20, 220, 321, 52));
        horizontalLayout_10 = new QHBoxLayout(layoutWidget7);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_52 = new QLabel(layoutWidget7);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setMinimumSize(QSize(175, 0));
        label_52->setMaximumSize(QSize(175, 16777215));
        label_52->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_10->addWidget(label_52);

        leSetPressure1500h = new QLineEdit(layoutWidget7);
        leSetPressure1500h->setObjectName(QStringLiteral("leSetPressure1500h"));
        sizePolicy.setHeightForWidth(leSetPressure1500h->sizePolicy().hasHeightForWidth());
        leSetPressure1500h->setSizePolicy(sizePolicy);
        leSetPressure1500h->setMinimumSize(QSize(135, 50));
        leSetPressure1500h->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_10->addWidget(leSetPressure1500h);

        layoutWidget8 = new QWidget(p1500h);
        layoutWidget8->setObjectName(QStringLiteral("layoutWidget8"));
        layoutWidget8->setGeometry(QRect(400, 360, 321, 52));
        horizontalLayout_12 = new QHBoxLayout(layoutWidget8);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_57 = new QLabel(layoutWidget8);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setMinimumSize(QSize(175, 0));
        label_57->setMaximumSize(QSize(175, 16777215));
        label_57->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        horizontalLayout_12->addWidget(label_57);

        leLiquidCirculationTime1500h = new QLineEdit(layoutWidget8);
        leLiquidCirculationTime1500h->setObjectName(QStringLiteral("leLiquidCirculationTime1500h"));
        sizePolicy.setHeightForWidth(leLiquidCirculationTime1500h->sizePolicy().hasHeightForWidth());
        leLiquidCirculationTime1500h->setSizePolicy(sizePolicy);
        leLiquidCirculationTime1500h->setMinimumSize(QSize(135, 50));
        leLiquidCirculationTime1500h->setMaximumSize(QSize(135, 16777215));

        horizontalLayout_12->addWidget(leLiquidCirculationTime1500h);

        bChooseData = new QPushButton(p1500h);
        bChooseData->setObjectName(QStringLiteral("bChooseData"));
        bChooseData->setEnabled(true);
        bChooseData->setGeometry(QRect(460, 430, 431, 51));
        bChooseData->setMinimumSize(QSize(94, 50));
        bChooseData->setFont(font2);
        bChooseData->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bChooseData->setIconSize(QSize(24, 15));
        mainPage->addWidget(p1500h);
        bMainDoorInfo = new QPushButton(tab_Main);
        bMainDoorInfo->setObjectName(QStringLiteral("bMainDoorInfo"));
        bMainDoorInfo->setEnabled(true);
        bMainDoorInfo->setGeometry(QRect(20, 510, 171, 91));
        bMainDoorInfo->setMinimumSize(QSize(94, 50));
        bMainDoorInfo->setFont(font2);
        bMainDoorInfo->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 25px;\n"
"border: 2px solid rgb(255, 85, 0);\n"
"/*border: 2px solid rgb(0, 115, 255);*/\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0, 210, 0), stop: 1 rgb(0, 100, 0));\n"
"min-width: 80px;\n"
"}\n"
"/*\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(220, 0, 0), stop: 1 rgb(150, 0, 0));\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"*/\n"
"QPushButton:disabled {\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid rgb(255, 85, 0);\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"}"));
        bMainDoorInfo->setCheckable(true);
        bMainDoorInfo->setChecked(false);
        tabWidget->addTab(tab_Main, QString());
        bClearLogTable_2->raise();
        bLightsMain->raise();
        laDate->raise();
        laTime->raise();
        rectRecipe->raise();
        bRecipeMode->raise();
        rectFix->raise();
        rect1500h->raise();
        bFixMode->raise();
        b1500hMode->raise();
        mainPage->raise();
        bMainDoorInfo->raise();
        tab_setTemp = new QWidget();
        tab_setTemp->setObjectName(QStringLiteral("tab_setTemp"));
        detailsPages = new QStackedWidget(tab_setTemp);
        detailsPages->setObjectName(QStringLiteral("detailsPages"));
        detailsPages->setGeometry(QRect(20, 70, 1141, 641));
        detailsPages->setStyleSheet(QLatin1String("QStackedWidget{\n"
"background: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.7, fy: -0.4,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 0 rgb(30, 30, 30), stop: 1 rgb(80, 80, 80) );\n"
"}\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/Desktop/ilhan/1500h/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/Desktop/ilhan/1500h/qt4.PNG);\n"
"}"));
        detailsMain = new QWidget();
        detailsMain->setObjectName(QStringLiteral("detailsMain"));
        detailsBottomPages = new QStackedWidget(detailsMain);
        detailsBottomPages->setObjectName(QStringLiteral("detailsBottomPages"));
        detailsBottomPages->setGeometry(QRect(20, 150, 1111, 381));
        detailsBottomPages->setStyleSheet(QLatin1String("QStackedWidget{\n"
"\n"
"background-color: qradialgradient(cx: 0.7, cy: -0.4,\n"
"fx: 0.1, fy: 0.1,\n"
"/*radius: 2, stop: 0 #A8EB12, stop: 1 #65BAAB );*/\n"
"radius: 2, stop: 1 rgb(62, 62, 62) ,stop: 0 rgb(0, 0, 25) ) ;\n"
"border-radius : 8px;\n"
"\n"
"}"));
        detailsBottomInfo = new QWidget();
        detailsBottomInfo->setObjectName(QStringLiteral("detailsBottomInfo"));
        label_26 = new QLabel(detailsBottomInfo);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(80, 20, 241, 31));
        pb_testProgress = new QProgressBar(detailsBottomInfo);
        pb_testProgress->setObjectName(QStringLiteral("pb_testProgress"));
        pb_testProgress->setGeometry(QRect(360, 10, 651, 50));
        pb_testProgress->setMinimumSize(QSize(0, 50));
        QFont font7;
        font7.setPointSize(14);
        pb_testProgress->setFont(font7);
        pb_testProgress->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
""));
        pb_testProgress->setValue(0);
        warningTable = new QTableWidget(detailsBottomInfo);
        if (warningTable->columnCount() < 2)
            warningTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font7);
        warningTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font7);
        warningTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        warningTable->setObjectName(QStringLiteral("warningTable"));
        warningTable->setGeometry(QRect(540, 130, 561, 211));
        warningTable->setFont(font7);
        warningTable->horizontalHeader()->setDefaultSectionSize(250);
        warningTable->horizontalHeader()->setMinimumSectionSize(100);
        warningTable->verticalHeader()->setDefaultSectionSize(30);
        warningTable->verticalHeader()->setMinimumSectionSize(30);
        warningTable->verticalHeader()->setStretchLastSection(false);
        sW_0 = new QStackedWidget(detailsBottomInfo);
        sW_0->setObjectName(QStringLiteral("sW_0"));
        sW_0->setGeometry(QRect(280, 140, 231, 211));
        scaklik_ayar = new QWidget();
        scaklik_ayar->setObjectName(QStringLiteral("scaklik_ayar"));
        cB_tte_4 = new QCheckBox(scaklik_ayar);
        cB_tte_4->setObjectName(QStringLiteral("cB_tte_4"));
        cB_tte_4->setGeometry(QRect(10, 20, 161, 21));
        cB_tte_4->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_4->setChecked(false);
        sW_0->addWidget(scaklik_ayar);
        basn_ayar = new QWidget();
        basn_ayar->setObjectName(QStringLiteral("basn_ayar"));
        cB_tte_11 = new QCheckBox(basn_ayar);
        cB_tte_11->setObjectName(QStringLiteral("cB_tte_11"));
        cB_tte_11->setGeometry(QRect(20, 80, 101, 21));
        cB_tte_11->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_11->setChecked(false);
        cB_tte_12 = new QCheckBox(basn_ayar);
        cB_tte_12->setObjectName(QStringLiteral("cB_tte_12"));
        cB_tte_12->setGeometry(QRect(20, 100, 91, 21));
        cB_tte_12->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_12->setChecked(false);
        cB_tte_10 = new QCheckBox(basn_ayar);
        cB_tte_10->setObjectName(QStringLiteral("cB_tte_10"));
        cB_tte_10->setGeometry(QRect(20, 60, 91, 21));
        cB_tte_10->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_10->setChecked(false);
        cB_tte_8 = new QCheckBox(basn_ayar);
        cB_tte_8->setObjectName(QStringLiteral("cB_tte_8"));
        cB_tte_8->setGeometry(QRect(10, 10, 143, 21));
        cB_tte_8->setStyleSheet(QLatin1String("QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_8->setChecked(false);
        cB_tte_9 = new QCheckBox(basn_ayar);
        cB_tte_9->setObjectName(QStringLiteral("cB_tte_9"));
        cB_tte_9->setGeometry(QRect(20, 40, 219, 21));
        cB_tte_9->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_9->setChecked(false);
        cB_tte_13 = new QCheckBox(basn_ayar);
        cB_tte_13->setObjectName(QStringLiteral("cB_tte_13"));
        cB_tte_13->setGeometry(QRect(20, 120, 91, 21));
        cB_tte_13->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_13->setChecked(false);
        sW_0->addWidget(basn_ayar);
        hortumkontrolu = new QWidget();
        hortumkontrolu->setObjectName(QStringLiteral("hortumkontrolu"));
        cB_tte_22 = new QCheckBox(hortumkontrolu);
        cB_tte_22->setObjectName(QStringLiteral("cB_tte_22"));
        cB_tte_22->setGeometry(QRect(10, 80, 219, 21));
        cB_tte_22->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_22->setChecked(false);
        cB_tte_23 = new QCheckBox(hortumkontrolu);
        cB_tte_23->setObjectName(QStringLiteral("cB_tte_23"));
        cB_tte_23->setGeometry(QRect(30, 100, 158, 24));
        cB_tte_23->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_23->setChecked(false);
        cB_tte_24 = new QCheckBox(hortumkontrolu);
        cB_tte_24->setObjectName(QStringLiteral("cB_tte_24"));
        cB_tte_24->setGeometry(QRect(30, 120, 219, 23));
        cB_tte_24->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_24->setChecked(false);
        cB_tte_25 = new QCheckBox(hortumkontrolu);
        cB_tte_25->setObjectName(QStringLiteral("cB_tte_25"));
        cB_tte_25->setGeometry(QRect(30, 140, 152, 24));
        cB_tte_25->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_25->setChecked(false);
        cB_tte_32 = new QCheckBox(hortumkontrolu);
        cB_tte_32->setObjectName(QStringLiteral("cB_tte_32"));
        cB_tte_32->setGeometry(QRect(10, 20, 161, 21));
        cB_tte_32->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_32->setChecked(false);
        cB_tte_33 = new QCheckBox(hortumkontrolu);
        cB_tte_33->setObjectName(QStringLiteral("cB_tte_33"));
        cB_tte_33->setGeometry(QRect(10, 50, 191, 21));
        cB_tte_33->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_33->setChecked(false);
        sW_0->addWidget(hortumkontrolu);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        cB_tte_21 = new QCheckBox(page_9);
        cB_tte_21->setObjectName(QStringLiteral("cB_tte_21"));
        cB_tte_21->setGeometry(QRect(0, 150, 161, 21));
        cB_tte_21->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_21->setChecked(false);
        cB_tte_15 = new QCheckBox(page_9);
        cB_tte_15->setObjectName(QStringLiteral("cB_tte_15"));
        cB_tte_15->setGeometry(QRect(0, 20, 161, 21));
        cB_tte_15->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_15->setChecked(false);
        cB_tte_19 = new QCheckBox(page_9);
        cB_tte_19->setObjectName(QStringLiteral("cB_tte_19"));
        cB_tte_19->setGeometry(QRect(20, 100, 101, 21));
        cB_tte_19->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_19->setChecked(false);
        cB_tte_17 = new QCheckBox(page_9);
        cB_tte_17->setObjectName(QStringLiteral("cB_tte_17"));
        cB_tte_17->setGeometry(QRect(20, 60, 101, 21));
        cB_tte_17->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_17->setChecked(false);
        cB_tte_16 = new QCheckBox(page_9);
        cB_tte_16->setObjectName(QStringLiteral("cB_tte_16"));
        cB_tte_16->setGeometry(QRect(20, 40, 101, 21));
        cB_tte_16->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_16->setChecked(false);
        cB_tte_18 = new QCheckBox(page_9);
        cB_tte_18->setObjectName(QStringLiteral("cB_tte_18"));
        cB_tte_18->setGeometry(QRect(20, 80, 101, 21));
        cB_tte_18->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_18->setChecked(false);
        cB_tte_20 = new QCheckBox(page_9);
        cB_tte_20->setObjectName(QStringLiteral("cB_tte_20"));
        cB_tte_20->setGeometry(QRect(20, 120, 101, 21));
        cB_tte_20->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_20->setChecked(false);
        sW_0->addWidget(page_9);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        cB_tte_26 = new QCheckBox(page_11);
        cB_tte_26->setObjectName(QStringLiteral("cB_tte_26"));
        cB_tte_26->setGeometry(QRect(0, 20, 191, 41));
        cB_tte_26->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_26->setChecked(false);
        sW_0->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        cB_tte_28 = new QCheckBox(page_12);
        cB_tte_28->setObjectName(QStringLiteral("cB_tte_28"));
        cB_tte_28->setGeometry(QRect(10, 20, 131, 41));
        cB_tte_28->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_28->setChecked(false);
        cB_tte_29 = new QCheckBox(page_12);
        cB_tte_29->setObjectName(QStringLiteral("cB_tte_29"));
        cB_tte_29->setGeometry(QRect(10, 70, 161, 21));
        cB_tte_29->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_29->setChecked(false);
        sW_0->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        cB_tte_30 = new QCheckBox(page_13);
        cB_tte_30->setObjectName(QStringLiteral("cB_tte_30"));
        cB_tte_30->setGeometry(QRect(10, 20, 201, 41));
        cB_tte_30->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_30->setChecked(false);
        cB_tte_31 = new QCheckBox(page_13);
        cB_tte_31->setObjectName(QStringLiteral("cB_tte_31"));
        cB_tte_31->setGeometry(QRect(10, 70, 151, 21));
        cB_tte_31->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_31->setChecked(false);
        sW_0->addWidget(page_13);
        stackedWidget_2 = new QStackedWidget(detailsBottomInfo);
        stackedWidget_2->setObjectName(QStringLiteral("stackedWidget_2"));
        stackedWidget_2->setGeometry(QRect(50, 140, 231, 211));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        cB_tte_0 = new QCheckBox(page_5);
        cB_tte_0->setObjectName(QStringLiteral("cB_tte_0"));
        cB_tte_0->setGeometry(QRect(0, 0, 109, 31));
        cB_tte_0->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_0->setChecked(false);
        cB_tte_1 = new QCheckBox(page_5);
        cB_tte_1->setObjectName(QStringLiteral("cB_tte_1"));
        cB_tte_1->setGeometry(QRect(40, 30, 111, 31));
        cB_tte_1->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_1->setChecked(false);
        cB_tte_2 = new QCheckBox(page_5);
        cB_tte_2->setObjectName(QStringLiteral("cB_tte_2"));
        cB_tte_2->setGeometry(QRect(40, 60, 111, 31));
        cB_tte_2->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_2->setChecked(false);
        cB_tte_3 = new QCheckBox(page_5);
        cB_tte_3->setObjectName(QStringLiteral("cB_tte_3"));
        cB_tte_3->setGeometry(QRect(40, 90, 161, 31));
        cB_tte_3->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_3->setChecked(false);
        cB_tte_14 = new QCheckBox(page_5);
        cB_tte_14->setObjectName(QStringLiteral("cB_tte_14"));
        cB_tte_14->setGeometry(QRect(0, 130, 171, 21));
        cB_tte_14->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/qt3.PNG);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/qt4.PNG);\n"
"}\n"
"QCheckBox{\n"
"font: 12pt \"Gill Sans MT\";\n"
"}\n"
""));
        cB_tte_14->setChecked(false);
        cB_tte_6 = new QCheckBox(page_5);
        cB_tte_6->setObjectName(QStringLiteral("cB_tte_6"));
        cB_tte_6->setEnabled(false);
        cB_tte_6->setGeometry(QRect(0, 150, 171, 21));
        cB_tte_6->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"\n"
"QCheckBox{\n"
"font: 12pt;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"\n"
"}\n"
"QCheckBox::disabled{\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"}\n"
"QCheckBox::enabled{\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0, 210, 0), stop: 1 rgb(0, 100, 0));\n"
"}\n"
"\n"
""));
        cB_tte_6->setCheckable(false);
        cB_tte_6->setChecked(false);
        cB_tte_7 = new QCheckBox(page_5);
        cB_tte_7->setObjectName(QStringLiteral("cB_tte_7"));
        cB_tte_7->setEnabled(false);
        cB_tte_7->setGeometry(QRect(0, 171, 171, 21));
        cB_tte_7->setStyleSheet(QLatin1String("\n"
"QCheckBox::indicator {\n"
"    width:20px;\n"
"    height: 20px;\n"
"}\n"
"\n"
"QCheckBox{\n"
"font: 12pt;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"\n"
"}\n"
"QCheckBox::disabled{\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"}\n"
"QCheckBox::enabled{\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0, 210, 0), stop: 1 rgb(0, 100, 0));\n"
"}\n"
""));
        cB_tte_7->setChecked(false);
        stackedWidget_2->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        stackedWidget_2->addWidget(page_6);
        pb_testProgress_2 = new QProgressBar(detailsBottomInfo);
        pb_testProgress_2->setObjectName(QStringLiteral("pb_testProgress_2"));
        pb_testProgress_2->setGeometry(QRect(360, 70, 651, 50));
        pb_testProgress_2->setMinimumSize(QSize(0, 50));
        pb_testProgress_2->setFont(font7);
        pb_testProgress_2->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
""));
        pb_testProgress_2->setValue(0);
        label_27 = new QLabel(detailsBottomInfo);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(80, 80, 241, 31));
        detailsBottomPages->addWidget(detailsBottomInfo);
        detailsBottomTankLevels = new QWidget();
        detailsBottomTankLevels->setObjectName(QStringLiteral("detailsBottomTankLevels"));
        gb_KirliTankLevel = new QGroupBox(detailsBottomTankLevels);
        gb_KirliTankLevel->setObjectName(QStringLiteral("gb_KirliTankLevel"));
        gb_KirliTankLevel->setGeometry(QRect(740, 10, 181, 201));
        line_27 = new QFrame(gb_KirliTankLevel);
        line_27->setObjectName(QStringLiteral("line_27"));
        line_27->setGeometry(QRect(50, 50, 81, 16));
        line_27->setFrameShape(QFrame::HLine);
        line_27->setFrameShadow(QFrame::Sunken);
        line_29 = new QFrame(gb_KirliTankLevel);
        line_29->setObjectName(QStringLiteral("line_29"));
        line_29->setGeometry(QRect(50, 170, 81, 16));
        line_29->setFrameShape(QFrame::HLine);
        line_29->setFrameShadow(QFrame::Sunken);
        label_43 = new QLabel(gb_KirliTankLevel);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(0, 50, 51, 21));
        label_44 = new QLabel(gb_KirliTankLevel);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(0, 110, 51, 21));
        line_30 = new QFrame(gb_KirliTankLevel);
        line_30->setObjectName(QStringLiteral("line_30"));
        line_30->setGeometry(QRect(50, 110, 81, 16));
        line_30->setFrameShape(QFrame::HLine);
        line_30->setFrameShadow(QFrame::Sunken);
        pbDirtyTankLevel = new QProgressBar(gb_KirliTankLevel);
        pbDirtyTankLevel->setObjectName(QStringLiteral("pbDirtyTankLevel"));
        pbDirtyTankLevel->setGeometry(QRect(60, 60, 111, 121));
        sizePolicy1.setHeightForWidth(pbDirtyTankLevel->sizePolicy().hasHeightForWidth());
        pbDirtyTankLevel->setSizePolicy(sizePolicy1);
        QFont font8;
        font8.setStyleStrategy(QFont::NoAntialias);
        pbDirtyTankLevel->setFont(font8);
        pbDirtyTankLevel->setLayoutDirection(Qt::LeftToRight);
        pbDirtyTankLevel->setValue(50);
        pbDirtyTankLevel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pbDirtyTankLevel->setTextVisible(true);
        pbDirtyTankLevel->setOrientation(Qt::Vertical);
        pbDirtyTankLevel->setInvertedAppearance(false);
        pbDirtyTankLevel->setTextDirection(QProgressBar::TopToBottom);
        label_45 = new QLabel(gb_KirliTankLevel);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(0, 160, 51, 21));
        line_27->raise();
        line_29->raise();
        line_30->raise();
        pbDirtyTankLevel->raise();
        label_45->raise();
        label_44->raise();
        label_43->raise();
        gb_CleanTankLevel = new QGroupBox(detailsBottomTankLevels);
        gb_CleanTankLevel->setObjectName(QStringLiteral("gb_CleanTankLevel"));
        gb_CleanTankLevel->setGeometry(QRect(470, 10, 181, 201));
        gb_CleanTankLevel->setStyleSheet(QStringLiteral(""));
        line_31 = new QFrame(gb_CleanTankLevel);
        line_31->setObjectName(QStringLiteral("line_31"));
        line_31->setGeometry(QRect(50, 110, 81, 16));
        line_31->setFrameShape(QFrame::HLine);
        line_31->setFrameShadow(QFrame::Sunken);
        label_46 = new QLabel(gb_CleanTankLevel);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(0, 50, 51, 21));
        line_32 = new QFrame(gb_CleanTankLevel);
        line_32->setObjectName(QStringLiteral("line_32"));
        line_32->setGeometry(QRect(50, 50, 121, 16));
        line_32->setFrameShape(QFrame::HLine);
        line_32->setFrameShadow(QFrame::Sunken);
        line_33 = new QFrame(gb_CleanTankLevel);
        line_33->setObjectName(QStringLiteral("line_33"));
        line_33->setGeometry(QRect(50, 170, 81, 16));
        line_33->setFrameShape(QFrame::HLine);
        line_33->setFrameShadow(QFrame::Sunken);
        pbCleanTankLevel = new QProgressBar(gb_CleanTankLevel);
        pbCleanTankLevel->setObjectName(QStringLiteral("pbCleanTankLevel"));
        pbCleanTankLevel->setGeometry(QRect(60, 60, 111, 121));
        sizePolicy1.setHeightForWidth(pbCleanTankLevel->sizePolicy().hasHeightForWidth());
        pbCleanTankLevel->setSizePolicy(sizePolicy1);
        pbCleanTankLevel->setFont(font8);
        pbCleanTankLevel->setLayoutDirection(Qt::LeftToRight);
        pbCleanTankLevel->setValue(50);
        pbCleanTankLevel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pbCleanTankLevel->setTextVisible(true);
        pbCleanTankLevel->setOrientation(Qt::Vertical);
        pbCleanTankLevel->setInvertedAppearance(false);
        pbCleanTankLevel->setTextDirection(QProgressBar::TopToBottom);
        label_47 = new QLabel(gb_CleanTankLevel);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(0, 160, 51, 21));
        label_48 = new QLabel(gb_CleanTankLevel);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(0, 110, 51, 21));
        line_31->raise();
        line_32->raise();
        line_33->raise();
        pbCleanTankLevel->raise();
        label_47->raise();
        label_46->raise();
        label_48->raise();
        gb_basincTankLevel = new QGroupBox(detailsBottomTankLevels);
        gb_basincTankLevel->setObjectName(QStringLiteral("gb_basincTankLevel"));
        gb_basincTankLevel->setGeometry(QRect(200, 10, 181, 201));
        gb_basincTankLevel->setStyleSheet(QStringLiteral(""));
        line_34 = new QFrame(gb_basincTankLevel);
        line_34->setObjectName(QStringLiteral("line_34"));
        line_34->setGeometry(QRect(50, 50, 121, 16));
        line_34->setFrameShape(QFrame::HLine);
        line_34->setFrameShadow(QFrame::Sunken);
        label_49 = new QLabel(gb_basincTankLevel);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(10, 170, 41, 21));
        label_50 = new QLabel(gb_basincTankLevel);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(0, 110, 51, 21));
        label_51 = new QLabel(gb_basincTankLevel);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(0, 50, 51, 21));
        line_35 = new QFrame(gb_basincTankLevel);
        line_35->setObjectName(QStringLiteral("line_35"));
        line_35->setGeometry(QRect(50, 170, 81, 16));
        line_35->setFrameShape(QFrame::HLine);
        line_35->setFrameShadow(QFrame::Sunken);
        line_36 = new QFrame(gb_basincTankLevel);
        line_36->setObjectName(QStringLiteral("line_36"));
        line_36->setGeometry(QRect(50, 110, 81, 16));
        line_36->setFrameShape(QFrame::HLine);
        line_36->setFrameShadow(QFrame::Sunken);
        pbExpansionTankLevel = new QProgressBar(gb_basincTankLevel);
        pbExpansionTankLevel->setObjectName(QStringLiteral("pbExpansionTankLevel"));
        pbExpansionTankLevel->setGeometry(QRect(60, 60, 111, 121));
        sizePolicy1.setHeightForWidth(pbExpansionTankLevel->sizePolicy().hasHeightForWidth());
        pbExpansionTankLevel->setSizePolicy(sizePolicy1);
        pbExpansionTankLevel->setFont(font8);
        pbExpansionTankLevel->setLayoutDirection(Qt::LeftToRight);
        pbExpansionTankLevel->setValue(50);
        pbExpansionTankLevel->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pbExpansionTankLevel->setTextVisible(true);
        pbExpansionTankLevel->setOrientation(Qt::Vertical);
        pbExpansionTankLevel->setInvertedAppearance(false);
        pbExpansionTankLevel->setTextDirection(QProgressBar::TopToBottom);
        line_34->raise();
        line_35->raise();
        line_36->raise();
        pbExpansionTankLevel->raise();
        label_50->raise();
        label_49->raise();
        label_51->raise();
        laFault31 = new QLabel(detailsBottomTankLevels);
        laFault31->setObjectName(QStringLiteral("laFault31"));
        laFault31->setGeometry(QRect(200, 230, 721, 81));
        QFont font9;
        font9.setFamily(QStringLiteral("Arial Black"));
        font9.setPointSize(22);
        font9.setBold(false);
        font9.setItalic(false);
        font9.setWeight(10);
        laFault31->setFont(font9);
        laFault31->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault31->setAlignment(Qt::AlignCenter);
        laFault32 = new QLabel(detailsBottomTankLevels);
        laFault32->setObjectName(QStringLiteral("laFault32"));
        laFault32->setGeometry(QRect(200, 280, 721, 81));
        QFont font10;
        font10.setFamily(QStringLiteral("Arial"));
        font10.setPointSize(18);
        font10.setBold(false);
        font10.setItalic(false);
        font10.setWeight(9);
        laFault32->setFont(font10);
        laFault32->setStyleSheet(QLatin1String("font: 75 18pt \"Arial\";\n"
"background-color: rgb(255, 0, 0);"));
        laFault32->setAlignment(Qt::AlignCenter);
        laFault34 = new QLabel(detailsBottomTankLevels);
        laFault34->setObjectName(QStringLiteral("laFault34"));
        laFault34->setGeometry(QRect(200, 280, 721, 81));
        laFault34->setFont(font10);
        laFault34->setStyleSheet(QLatin1String("font: 75 18pt \"Arial\";\n"
"background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        laFault34->setAlignment(Qt::AlignCenter);
        laFault33 = new QLabel(detailsBottomTankLevels);
        laFault33->setObjectName(QStringLiteral("laFault33"));
        laFault33->setGeometry(QRect(200, 280, 721, 81));
        laFault33->setFont(font10);
        laFault33->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault33->setAlignment(Qt::AlignCenter);
        detailsBottomPages->addWidget(detailsBottomTankLevels);
        gb_KirliTankLevel->raise();
        gb_CleanTankLevel->raise();
        gb_basincTankLevel->raise();
        laFault32->raise();
        laFault34->raise();
        laFault33->raise();
        laFault31->raise();
        detailsBottomPipes = new QWidget();
        detailsBottomPipes->setObjectName(QStringLiteral("detailsBottomPipes"));
        laFault25 = new QLabel(detailsBottomPipes);
        laFault25->setObjectName(QStringLiteral("laFault25"));
        laFault25->setGeometry(QRect(200, 320, 721, 61));
        laFault25->setFont(font10);
        laFault25->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault25->setAlignment(Qt::AlignCenter);
        laFault23 = new QLabel(detailsBottomPipes);
        laFault23->setObjectName(QStringLiteral("laFault23"));
        laFault23->setGeometry(QRect(200, 310, 721, 71));
        laFault23->setFont(font10);
        laFault23->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault23->setAlignment(Qt::AlignCenter);
        laFault24 = new QLabel(detailsBottomPipes);
        laFault24->setObjectName(QStringLiteral("laFault24"));
        laFault24->setGeometry(QRect(200, 310, 721, 71));
        laFault24->setFont(font10);
        laFault24->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault24->setAlignment(Qt::AlignCenter);
        laFault22 = new QLabel(detailsBottomPipes);
        laFault22->setObjectName(QStringLiteral("laFault22"));
        laFault22->setGeometry(QRect(200, 310, 721, 71));
        laFault22->setFont(font10);
        laFault22->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault22->setAlignment(Qt::AlignCenter);
        laFault21 = new QLabel(detailsBottomPipes);
        laFault21->setObjectName(QStringLiteral("laFault21"));
        laFault21->setGeometry(QRect(190, 310, 721, 71));
        laFault21->setFont(font10);
        laFault21->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault21->setAlignment(Qt::AlignCenter);
        laFault4A_2 = new QLabel(detailsBottomPipes);
        laFault4A_2->setObjectName(QStringLiteral("laFault4A_2"));
        laFault4A_2->setGeometry(QRect(190, 230, 731, 71));
        laFault4A_2->setFont(font9);
        laFault4A_2->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault4A_2->setAlignment(Qt::AlignCenter);
        groupBox_6 = new QGroupBox(detailsBottomPipes);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(80, 40, 1011, 181));
        groupBox_6->setFont(font3);
        groupBox_6->setStyleSheet(QLatin1String("\n"
"\n"
"QCheckBox::indicator {\n"
"    width:60px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }\n"
""));
        groupBox_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_6->setFlat(true);
        groupBox_6->setCheckable(false);
        label_41 = new QLabel(groupBox_6);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(490, 40, 111, 31));
        label_41->setMargin(3);
        Hortum1_2 = new QCheckBox(groupBox_6);
        Hortum1_2->setObjectName(QStringLiteral("Hortum1_2"));
        Hortum1_2->setEnabled(true);
        Hortum1_2->setGeometry(QRect(10, 80, 61, 71));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/img/chechbox_Pipe_checked.png"), QSize(), QIcon::Normal, QIcon::On);
        Hortum1_2->setIcon(icon);
        Hortum1_2->setIconSize(QSize(64, 64));
        Hortum1_2->setCheckable(true);
        Hortum1_2->setChecked(true);
        Hortum1_2->setTristate(false);
        label_42 = new QLabel(groupBox_6);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(230, 40, 111, 31));
        label_42->setMargin(3);
        label_59 = new QLabel(groupBox_6);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(0, 40, 111, 31));
        label_59->setMargin(3);
        label_60 = new QLabel(groupBox_6);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(360, 40, 111, 31));
        label_60->setMargin(3);
        label_61 = new QLabel(groupBox_6);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(110, 40, 111, 31));
        label_61->setMargin(3);
        Hortum2_2 = new QCheckBox(groupBox_6);
        Hortum2_2->setObjectName(QStringLiteral("Hortum2_2"));
        Hortum2_2->setEnabled(true);
        Hortum2_2->setGeometry(QRect(140, 80, 61, 71));
        Hortum2_2->setCheckable(true);
        Hortum2_2->setChecked(true);
        Hortum2_2->setTristate(false);
        Hortum3_2 = new QCheckBox(groupBox_6);
        Hortum3_2->setObjectName(QStringLiteral("Hortum3_2"));
        Hortum3_2->setEnabled(true);
        Hortum3_2->setGeometry(QRect(260, 80, 61, 71));
        Hortum3_2->setCheckable(true);
        Hortum3_2->setChecked(true);
        Hortum3_2->setTristate(false);
        Hortum4_2 = new QCheckBox(groupBox_6);
        Hortum4_2->setObjectName(QStringLiteral("Hortum4_2"));
        Hortum4_2->setGeometry(QRect(380, 80, 61, 71));
        Hortum4_2->setCheckable(true);
        Hortum4_2->setChecked(true);
        Hortum4_2->setTristate(false);
        Hortum5_2 = new QCheckBox(groupBox_6);
        Hortum5_2->setObjectName(QStringLiteral("Hortum5_2"));
        Hortum5_2->setGeometry(QRect(510, 80, 61, 71));
        Hortum5_2->setCheckable(true);
        Hortum5_2->setChecked(true);
        Hortum5_2->setTristate(false);
        control_hortum_1 = new QLabel(groupBox_6);
        control_hortum_1->setObjectName(QStringLiteral("control_hortum_1"));
        control_hortum_1->setGeometry(QRect(10, 75, 61, 80));
        control_hortum_1->setStyleSheet(QStringLiteral("background-color: rgb(0, 143, 0);"));
        control_hortum_2 = new QLabel(groupBox_6);
        control_hortum_2->setObjectName(QStringLiteral("control_hortum_2"));
        control_hortum_2->setGeometry(QRect(140, 75, 61, 80));
        control_hortum_2->setStyleSheet(QStringLiteral("background-color: rgb(0, 143, 0);"));
        control_hortum_3 = new QLabel(groupBox_6);
        control_hortum_3->setObjectName(QStringLiteral("control_hortum_3"));
        control_hortum_3->setGeometry(QRect(260, 75, 61, 80));
        control_hortum_3->setStyleSheet(QStringLiteral("background-color: rgb(0, 143, 0);"));
        control_hortum_4 = new QLabel(groupBox_6);
        control_hortum_4->setObjectName(QStringLiteral("control_hortum_4"));
        control_hortum_4->setGeometry(QRect(380, 75, 61, 80));
        control_hortum_4->setStyleSheet(QStringLiteral("background-color: rgb(0, 143, 0);"));
        control_hortum_5 = new QLabel(groupBox_6);
        control_hortum_5->setObjectName(QStringLiteral("control_hortum_5"));
        control_hortum_5->setGeometry(QRect(510, 75, 61, 80));
        control_hortum_5->setStyleSheet(QStringLiteral("background-color: rgb(0, 143, 0);"));
        label_41->raise();
        label_42->raise();
        label_59->raise();
        label_60->raise();
        label_61->raise();
        control_hortum_1->raise();
        Hortum1_2->raise();
        control_hortum_2->raise();
        control_hortum_3->raise();
        control_hortum_4->raise();
        control_hortum_5->raise();
        Hortum2_2->raise();
        Hortum3_2->raise();
        Hortum4_2->raise();
        Hortum5_2->raise();
        laDurum1 = new QLabel(detailsBottomPipes);
        laDurum1->setObjectName(QStringLiteral("laDurum1"));
        laDurum1->setGeometry(QRect(190, 230, 731, 71));
        laDurum1->setFont(font3);
        laDurum1->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laDurum1->setAlignment(Qt::AlignCenter);
        detailsBottomPages->addWidget(detailsBottomPipes);
        detailsBottomHetar = new QWidget();
        detailsBottomHetar->setObjectName(QStringLiteral("detailsBottomHetar"));
        label_40 = new QLabel(detailsBottomHetar);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(240, 190, 721, 81));
        label_40->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"font: 30pt \"MS Shell Dlg 2\";\n"
"\n"
"\n"
"color: rgb(255, 0, 0);\n"
""));
        label_40->setAlignment(Qt::AlignCenter);
        laFault46 = new QLabel(detailsBottomHetar);
        laFault46->setObjectName(QStringLiteral("laFault46"));
        laFault46->setGeometry(QRect(240, 270, 721, 81));
        laFault46->setFont(font10);
        laFault46->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault46->setAlignment(Qt::AlignCenter);
        laFault44 = new QLabel(detailsBottomHetar);
        laFault44->setObjectName(QStringLiteral("laFault44"));
        laFault44->setGeometry(QRect(240, 270, 721, 81));
        laFault44->setFont(font10);
        laFault44->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault44->setAlignment(Qt::AlignCenter);
        laFault43 = new QLabel(detailsBottomHetar);
        laFault43->setObjectName(QStringLiteral("laFault43"));
        laFault43->setGeometry(QRect(240, 270, 721, 81));
        laFault43->setFont(font10);
        laFault43->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault43->setAlignment(Qt::AlignCenter);
        laFault42 = new QLabel(detailsBottomHetar);
        laFault42->setObjectName(QStringLiteral("laFault42"));
        laFault42->setGeometry(QRect(240, 270, 721, 81));
        laFault42->setFont(font10);
        laFault42->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 0);\n"
"color: rgb(255, 0, 0);\n"
"font: 75 18pt \"Arial\";"));
        laFault42->setAlignment(Qt::AlignCenter);
        laDurum2 = new QLabel(detailsBottomHetar);
        laDurum2->setObjectName(QStringLiteral("laDurum2"));
        laDurum2->setGeometry(QRect(240, 50, 721, 71));
        laDurum2->setFont(font3);
        laDurum2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laDurum2->setAlignment(Qt::AlignCenter);
        laDurum3 = new QLabel(detailsBottomHetar);
        laDurum3->setObjectName(QStringLiteral("laDurum3"));
        laDurum3->setGeometry(QRect(240, 120, 721, 71));
        laDurum3->setFont(font3);
        laDurum3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laDurum3->setAlignment(Qt::AlignCenter);
        laDurum3_2 = new QLabel(detailsBottomHetar);
        laDurum3_2->setObjectName(QStringLiteral("laDurum3_2"));
        laDurum3_2->setGeometry(QRect(240, 120, 721, 71));
        laDurum3_2->setFont(font3);
        laDurum3_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laDurum3_2->setAlignment(Qt::AlignCenter);
        laDurum2_2 = new QLabel(detailsBottomHetar);
        laDurum2_2->setObjectName(QStringLiteral("laDurum2_2"));
        laDurum2_2->setGeometry(QRect(240, 50, 721, 71));
        laDurum2_2->setFont(font3);
        laDurum2_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 0, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laDurum2_2->setAlignment(Qt::AlignCenter);
        detailsBottomPages->addWidget(detailsBottomHetar);
        detailsBottomError = new QWidget();
        detailsBottomError->setObjectName(QStringLiteral("detailsBottomError"));
        label_38 = new QLabel(detailsBottomError);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(200, 140, 721, 91));
        label_38->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;\n"
"\n"
"\n"
""));
        label_38->setAlignment(Qt::AlignCenter);
        laFault41 = new QLabel(detailsBottomError);
        laFault41->setObjectName(QStringLiteral("laFault41"));
        laFault41->setGeometry(QRect(200, 230, 721, 81));
        laFault41->setFont(font9);
        laFault41->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault41->setAlignment(Qt::AlignCenter);
        laFault49 = new QLabel(detailsBottomError);
        laFault49->setObjectName(QStringLiteral("laFault49"));
        laFault49->setGeometry(QRect(200, 230, 721, 81));
        laFault49->setFont(font9);
        laFault49->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault49->setAlignment(Qt::AlignCenter);
        laFault47 = new QLabel(detailsBottomError);
        laFault47->setObjectName(QStringLiteral("laFault47"));
        laFault47->setGeometry(QRect(200, 230, 721, 81));
        laFault47->setFont(font9);
        laFault47->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault47->setAlignment(Qt::AlignCenter);
        laFault45 = new QLabel(detailsBottomError);
        laFault45->setObjectName(QStringLiteral("laFault45"));
        laFault45->setGeometry(QRect(200, 230, 721, 81));
        laFault45->setFont(font9);
        laFault45->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault45->setAlignment(Qt::AlignCenter);
        laFault48 = new QLabel(detailsBottomError);
        laFault48->setObjectName(QStringLiteral("laFault48"));
        laFault48->setGeometry(QRect(200, 230, 721, 81));
        laFault48->setFont(font9);
        laFault48->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault48->setAlignment(Qt::AlignCenter);
        laFault4A = new QLabel(detailsBottomError);
        laFault4A->setObjectName(QStringLiteral("laFault4A"));
        laFault4A->setGeometry(QRect(200, 230, 721, 81));
        laFault4A->setFont(font9);
        laFault4A->setStyleSheet(QLatin1String("background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0  rgb(125, 85, 0), stop: 0.4  rgb(255,100, 0),\n"
"                                stop: 0.5  rgb(255, 100, 0), stop: 1.0  rgb(125, 85,0 ));\n"
"font: 87 22pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);\n"
"border: 4px solid rgb(65, 65, 65);\n"
"    border-top-left-radius: 8px;\n"
"    border-top-right-radius: 8px;"));
        laFault4A->setAlignment(Qt::AlignCenter);
        detailsBottomPages->addWidget(detailsBottomError);
        detailsBottomEmergency = new QWidget();
        detailsBottomEmergency->setObjectName(QStringLiteral("detailsBottomEmergency"));
        laFault11 = new QLabel(detailsBottomEmergency);
        laFault11->setObjectName(QStringLiteral("laFault11"));
        laFault11->setGeometry(QRect(320, 250, 521, 71));
        QFont font11;
        font11.setFamily(QStringLiteral("Arial Black"));
        font11.setPointSize(18);
        font11.setBold(false);
        font11.setItalic(false);
        font11.setWeight(10);
        laFault11->setFont(font11);
        laFault11->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"\n"
"font: 87 18pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));
        laFault11->setAlignment(Qt::AlignCenter);
        laFault11_2 = new QLabel(detailsBottomEmergency);
        laFault11_2->setObjectName(QStringLiteral("laFault11_2"));
        laFault11_2->setGeometry(QRect(320, 140, 521, 101));
        QFont font12;
        font12.setFamily(QStringLiteral("Arial Black"));
        font12.setPointSize(26);
        font12.setBold(false);
        font12.setItalic(false);
        font12.setWeight(10);
        laFault11_2->setFont(font12);
        laFault11_2->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"\n"
"font: 87 26pt \"Arial Black\";\n"
"color: rgb(255, 255, 255);"));
        laFault11_2->setAlignment(Qt::AlignCenter);
        laFault12 = new QLabel(detailsBottomEmergency);
        laFault12->setObjectName(QStringLiteral("laFault12"));
        laFault12->setEnabled(true);
        laFault12->setGeometry(QRect(320, 250, 521, 71));
        laFault12->setFont(font11);
        laFault12->setStyleSheet(QLatin1String("font: 87 18pt \"Arial Black\";\n"
"background-color: rgb(255, 0, 0);"));
        laFault12->setTextFormat(Qt::AutoText);
        laFault12->setAlignment(Qt::AlignCenter);
        detailsBottomPages->addWidget(detailsBottomEmergency);
        btnDetailsInfo = new QPushButton(detailsMain);
        btnDetailsInfo->setObjectName(QStringLiteral("btnDetailsInfo"));
        btnDetailsInfo->setGeometry(QRect(200, 540, 94, 61));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/img/button_info.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDetailsInfo->setIcon(icon1);
        btnDetailsInfo->setIconSize(QSize(94, 61));
        btnDetailsTanklevel = new QPushButton(detailsMain);
        btnDetailsTanklevel->setObjectName(QStringLiteral("btnDetailsTanklevel"));
        btnDetailsTanklevel->setGeometry(QRect(400, 540, 94, 61));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/img/tankLevel_OK.png"), QSize(), QIcon::Normal, QIcon::On);
        btnDetailsTanklevel->setIcon(icon2);
        btnDetailsTanklevel->setIconSize(QSize(94, 61));
        btnDetailsHeater = new QPushButton(detailsMain);
        btnDetailsHeater->setObjectName(QStringLiteral("btnDetailsHeater"));
        btnDetailsHeater->setGeometry(QRect(500, 540, 94, 61));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/img/heater_on.png"), QSize(), QIcon::Normal, QIcon::On);
        btnDetailsHeater->setIcon(icon3);
        btnDetailsHeater->setIconSize(QSize(94, 61));
        dsbCabinTopTemp_2 = new QDoubleSpinBox(detailsMain);
        dsbCabinTopTemp_2->setObjectName(QStringLiteral("dsbCabinTopTemp_2"));
        dsbCabinTopTemp_2->setEnabled(false);
        dsbCabinTopTemp_2->setGeometry(QRect(290, 20, 231, 121));
        dsbCabinTopTemp_2->setMinimumSize(QSize(60, 80));
        dsbCabinTopTemp_2->setMaximumSize(QSize(300, 16777215));
        QFont font13;
        font13.setFamily(QStringLiteral("Gill Sans MT"));
        font13.setPointSize(64);
        font13.setBold(false);
        font13.setItalic(false);
        font13.setWeight(9);
        dsbCabinTopTemp_2->setFont(font13);
        dsbCabinTopTemp_2->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 64pt \"Gill Sans MT\";\n"
"}"));
        dsbCabinTopTemp_2->setReadOnly(true);
        dsbCabinTopTemp_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCabinTopTemp_2->setDecimals(1);
        dsbCabinTopTemp_2->setMinimum(-50);
        dsbCabinTopTemp_2->setMaximum(250);
        dsbCabinTopTemp_2->setSingleStep(0.1);
        label_34 = new QLabel(detailsMain);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(99, 20, 181, 69));
        label_34->setMinimumSize(QSize(170, 69));
        QFont font14;
        font14.setFamily(QStringLiteral("Gill Sans MT"));
        font14.setPointSize(25);
        font14.setBold(false);
        font14.setItalic(false);
        font14.setWeight(9);
        label_34->setFont(font14);
        label_34->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 25pt \"Gill Sans MT\";\n"
"}"));
        dsbCabinPIDTemp_2 = new QDoubleSpinBox(detailsMain);
        dsbCabinPIDTemp_2->setObjectName(QStringLiteral("dsbCabinPIDTemp_2"));
        dsbCabinPIDTemp_2->setEnabled(false);
        dsbCabinPIDTemp_2->setGeometry(QRect(180, 90, 91, 51));
        dsbCabinPIDTemp_2->setMinimumSize(QSize(50, 50));
        QFont font15;
        font15.setFamily(QStringLiteral("Gill Sans MT"));
        font15.setPointSize(21);
        font15.setBold(false);
        font15.setItalic(false);
        font15.setWeight(9);
        dsbCabinPIDTemp_2->setFont(font15);
        dsbCabinPIDTemp_2->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 21pt \"Gill Sans MT\";\n"
"}"));
        dsbCabinPIDTemp_2->setReadOnly(true);
        dsbCabinPIDTemp_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCabinPIDTemp_2->setDecimals(1);
        dsbCabinPIDTemp_2->setMinimum(-50);
        dsbCabinPIDTemp_2->setMaximum(250);
        dsbCabinPIDTemp_2->setSingleStep(0.1);
        dsbPipe1Pressure_2 = new QDoubleSpinBox(detailsMain);
        dsbPipe1Pressure_2->setObjectName(QStringLiteral("dsbPipe1Pressure_2"));
        dsbPipe1Pressure_2->setEnabled(false);
        dsbPipe1Pressure_2->setGeometry(QRect(730, 20, 230, 121));
        dsbPipe1Pressure_2->setMinimumSize(QSize(180, 80));
        dsbPipe1Pressure_2->setMaximumSize(QSize(230, 16777215));
        dsbPipe1Pressure_2->setFont(font13);
        dsbPipe1Pressure_2->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 64pt \"Gill Sans MT\";\n"
"}"));
        dsbPipe1Pressure_2->setReadOnly(true);
        dsbPipe1Pressure_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbPipe1Pressure_2->setDecimals(2);
        dsbPipe1Pressure_2->setMaximum(10);
        dsbPipe1Pressure_2->setSingleStep(0.1);
        label_15 = new QLabel(detailsMain);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(549, 20, 181, 70));
        label_15->setMinimumSize(QSize(170, 70));
        label_15->setMaximumSize(QSize(16777215, 70));
        label_15->setFont(font14);
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 25pt \"Gill Sans MT\";\n"
"}"));
        label_15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        dsbSetPressure_2 = new QDoubleSpinBox(detailsMain);
        dsbSetPressure_2->setObjectName(QStringLiteral("dsbSetPressure_2"));
        dsbSetPressure_2->setEnabled(false);
        dsbSetPressure_2->setGeometry(QRect(620, 90, 91, 51));
        dsbSetPressure_2->setMinimumSize(QSize(50, 50));
        dsbSetPressure_2->setFont(font15);
        dsbSetPressure_2->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 21pt \"Gill Sans MT\";\n"
"}"));
        dsbSetPressure_2->setReadOnly(true);
        dsbSetPressure_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbSetPressure_2->setDecimals(1);
        dsbSetPressure_2->setMinimum(-50);
        dsbSetPressure_2->setMaximum(250);
        dsbSetPressure_2->setSingleStep(0.1);
        btnDetailsPipes = new QPushButton(detailsMain);
        btnDetailsPipes->setObjectName(QStringLiteral("btnDetailsPipes"));
        btnDetailsPipes->setGeometry(QRect(300, 540, 94, 61));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/img/chechbox_Pipe_checked.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDetailsPipes->setIcon(icon4);
        btnDetailsPipes->setIconSize(QSize(104, 41));
        bResetFault = new QPushButton(detailsMain);
        bResetFault->setObjectName(QStringLiteral("bResetFault"));
        bResetFault->setGeometry(QRect(750, 540, 161, 61));
        bResetFault->setMinimumSize(QSize(94, 50));
        bResetFault->setFont(font2);
        bResetFault->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        bResetFault->setCheckable(true);
        btnDetailsPressure_2 = new QPushButton(detailsMain);
        btnDetailsPressure_2->setObjectName(QStringLiteral("btnDetailsPressure_2"));
        btnDetailsPressure_2->setGeometry(QRect(600, 540, 94, 61));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/img/alarm.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnDetailsPressure_2->setIcon(icon5);
        btnDetailsPressure_2->setIconSize(QSize(90, 55));
        bBuzzerReset = new QPushButton(detailsMain);
        bBuzzerReset->setObjectName(QStringLiteral("bBuzzerReset"));
        bBuzzerReset->setGeometry(QRect(930, 540, 161, 61));
        bBuzzerReset->setMinimumSize(QSize(94, 50));
        bBuzzerReset->setFont(font2);
        bBuzzerReset->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        bBuzzerReset->setCheckable(true);
        detailsPages->addWidget(detailsMain);
        detailsPressure = new QWidget();
        detailsPressure->setObjectName(QStringLiteral("detailsPressure"));
        groupBox_2 = new QGroupBox(detailsPressure);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 420, 131, 161));
        line_10 = new QFrame(groupBox_2);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(40, 80, 81, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(0, 30, 41, 21));
        line_11 = new QFrame(groupBox_2);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(40, 30, 81, 16));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(groupBox_2);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(40, 130, 81, 16));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        pbCleanTankLevel_2 = new QProgressBar(groupBox_2);
        pbCleanTankLevel_2->setObjectName(QStringLiteral("pbCleanTankLevel_2"));
        pbCleanTankLevel_2->setGeometry(QRect(50, 40, 71, 101));
        sizePolicy1.setHeightForWidth(pbCleanTankLevel_2->sizePolicy().hasHeightForWidth());
        pbCleanTankLevel_2->setSizePolicy(sizePolicy1);
        pbCleanTankLevel_2->setFont(font8);
        pbCleanTankLevel_2->setLayoutDirection(Qt::LeftToRight);
        pbCleanTankLevel_2->setValue(50);
        pbCleanTankLevel_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pbCleanTankLevel_2->setTextVisible(true);
        pbCleanTankLevel_2->setOrientation(Qt::Vertical);
        pbCleanTankLevel_2->setInvertedAppearance(false);
        pbCleanTankLevel_2->setTextDirection(QProgressBar::TopToBottom);
        label_23 = new QLabel(groupBox_2);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 130, 31, 21));
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(0, 80, 31, 21));
        label_21->raise();
        line_11->raise();
        pbCleanTankLevel_2->raise();
        label_23->raise();
        label_22->raise();
        line_10->raise();
        line_9->raise();
        gbDirtyTankLevel_2 = new QGroupBox(detailsPressure);
        gbDirtyTankLevel_2->setObjectName(QStringLiteral("gbDirtyTankLevel_2"));
        gbDirtyTankLevel_2->setGeometry(QRect(890, 420, 131, 161));
        line_4 = new QFrame(gbDirtyTankLevel_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(40, 30, 81, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(gbDirtyTankLevel_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(40, 130, 81, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(gbDirtyTankLevel_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 30, 41, 21));
        label_19 = new QLabel(gbDirtyTankLevel_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 80, 41, 21));
        line_6 = new QFrame(gbDirtyTankLevel_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(40, 80, 81, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        pbDirtyTankLevel_2 = new QProgressBar(gbDirtyTankLevel_2);
        pbDirtyTankLevel_2->setObjectName(QStringLiteral("pbDirtyTankLevel_2"));
        pbDirtyTankLevel_2->setGeometry(QRect(50, 40, 71, 101));
        sizePolicy1.setHeightForWidth(pbDirtyTankLevel_2->sizePolicy().hasHeightForWidth());
        pbDirtyTankLevel_2->setSizePolicy(sizePolicy1);
        pbDirtyTankLevel_2->setFont(font8);
        pbDirtyTankLevel_2->setLayoutDirection(Qt::LeftToRight);
        pbDirtyTankLevel_2->setValue(50);
        pbDirtyTankLevel_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pbDirtyTankLevel_2->setTextVisible(true);
        pbDirtyTankLevel_2->setOrientation(Qt::Vertical);
        pbDirtyTankLevel_2->setInvertedAppearance(false);
        pbDirtyTankLevel_2->setTextDirection(QProgressBar::TopToBottom);
        label_18 = new QLabel(gbDirtyTankLevel_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 130, 31, 21));
        line_4->raise();
        label_20->raise();
        label_19->raise();
        pbDirtyTankLevel_2->raise();
        label_18->raise();
        line_6->raise();
        line_5->raise();
        groupBox_4 = new QGroupBox(detailsPressure);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 0, 131, 151));
        line_3 = new QFrame(groupBox_4);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(40, 30, 81, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_17 = new QLabel(groupBox_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 130, 31, 21));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(0, 80, 41, 21));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(0, 30, 41, 21));
        line = new QFrame(groupBox_4);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(40, 130, 81, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(groupBox_4);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(40, 80, 81, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pbExpansionTankLevel_2 = new QProgressBar(groupBox_4);
        pbExpansionTankLevel_2->setObjectName(QStringLiteral("pbExpansionTankLevel_2"));
        pbExpansionTankLevel_2->setGeometry(QRect(50, 40, 71, 101));
        sizePolicy1.setHeightForWidth(pbExpansionTankLevel_2->sizePolicy().hasHeightForWidth());
        pbExpansionTankLevel_2->setSizePolicy(sizePolicy1);
        pbExpansionTankLevel_2->setFont(font8);
        pbExpansionTankLevel_2->setLayoutDirection(Qt::LeftToRight);
        pbExpansionTankLevel_2->setValue(50);
        pbExpansionTankLevel_2->setAlignment(Qt::AlignJustify|Qt::AlignVCenter);
        pbExpansionTankLevel_2->setTextVisible(true);
        pbExpansionTankLevel_2->setOrientation(Qt::Vertical);
        pbExpansionTankLevel_2->setInvertedAppearance(false);
        pbExpansionTankLevel_2->setTextDirection(QProgressBar::TopToBottom);
        line_3->raise();
        label_17->raise();
        label_16->raise();
        label_13->raise();
        pbExpansionTankLevel_2->raise();
        line_2->raise();
        line->raise();
        radioButton_3 = new QRadioButton(detailsPressure);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setGeometry(QRect(230, 510, 91, 21));
        radioButton_3->setFont(font3);
        radioButton_3->setCheckable(true);
        radioButton_3->setChecked(false);
        radioButton_3->setAutoExclusive(false);
        groupBox_5 = new QGroupBox(detailsPressure);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(250, 140, 771, 261));
        radioButton_11 = new QRadioButton(groupBox_5);
        radioButton_11->setObjectName(QStringLiteral("radioButton_11"));
        radioButton_11->setGeometry(QRect(580, 190, 101, 21));
        radioButton_11->setFont(font3);
        radioButton_2 = new QRadioButton(groupBox_5);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setGeometry(QRect(70, 190, 101, 21));
        radioButton_2->setFont(font3);
        radioButton_4 = new QRadioButton(groupBox_5);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setGeometry(QRect(200, 190, 101, 21));
        radioButton_4->setFont(font3);
        radioButton_7 = new QRadioButton(groupBox_5);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setGeometry(QRect(330, 60, 101, 21));
        radioButton_7->setFont(font3);
        radioButton_6 = new QRadioButton(groupBox_5);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setGeometry(QRect(330, 190, 101, 21));
        radioButton_6->setFont(font3);
        radioButton_9 = new QRadioButton(groupBox_5);
        radioButton_9->setObjectName(QStringLiteral("radioButton_9"));
        radioButton_9->setGeometry(QRect(460, 60, 101, 21));
        radioButton_9->setFont(font3);
        radioButton_10 = new QRadioButton(groupBox_5);
        radioButton_10->setObjectName(QStringLiteral("radioButton_10"));
        radioButton_10->setGeometry(QRect(580, 60, 101, 21));
        radioButton_10->setFont(font3);
        radioButton_8 = new QRadioButton(groupBox_5);
        radioButton_8->setObjectName(QStringLiteral("radioButton_8"));
        radioButton_8->setGeometry(QRect(460, 190, 101, 21));
        radioButton_8->setFont(font3);
        radioButton = new QRadioButton(groupBox_5);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(70, 60, 101, 21));
        radioButton->setFont(font3);
        radioButton_5 = new QRadioButton(groupBox_5);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setGeometry(QRect(200, 60, 101, 21));
        radioButton_5->setFont(font3);
        checkBox_6 = new QCheckBox(groupBox_5);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(90, 89, 51, 91));
        checkBox_6->setStyleSheet(QLatin1String("  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }"));
        checkBox_6->setChecked(false);
        checkBox_7 = new QCheckBox(groupBox_5);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(220, 90, 50, 91));
        checkBox_7->setStyleSheet(QLatin1String("  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }"));
        checkBox_7->setChecked(false);
        checkBox_8 = new QCheckBox(groupBox_5);
        checkBox_8->setObjectName(QStringLiteral("checkBox_8"));
        checkBox_8->setGeometry(QRect(350, 90, 50, 91));
        checkBox_8->setStyleSheet(QLatin1String("  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }"));
        checkBox_8->setChecked(false);
        checkBox_9 = new QCheckBox(groupBox_5);
        checkBox_9->setObjectName(QStringLiteral("checkBox_9"));
        checkBox_9->setGeometry(QRect(480, 90, 50, 91));
        checkBox_9->setStyleSheet(QLatin1String("  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }"));
        checkBox_9->setChecked(false);
        checkBox_10 = new QCheckBox(groupBox_5);
        checkBox_10->setObjectName(QStringLiteral("checkBox_10"));
        checkBox_10->setGeometry(QRect(600, 90, 50, 91));
        checkBox_10->setStyleSheet(QLatin1String("  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }"));
        checkBox_10->setChecked(false);
        radioButton_12 = new QRadioButton(detailsPressure);
        radioButton_12->setObjectName(QStringLiteral("radioButton_12"));
        radioButton_12->setGeometry(QRect(40, 260, 181, 41));
        radioButton_12->setFont(font3);
        radioButton_13 = new QRadioButton(detailsPressure);
        radioButton_13->setObjectName(QStringLiteral("radioButton_13"));
        radioButton_13->setGeometry(QRect(710, 510, 131, 31));
        radioButton_13->setFont(font3);
        radioButton_14 = new QRadioButton(detailsPressure);
        radioButton_14->setObjectName(QStringLiteral("radioButton_14"));
        radioButton_14->setGeometry(QRect(300, 90, 101, 31));
        radioButton_14->setFont(font3);
        radioButton_15 = new QRadioButton(detailsPressure);
        radioButton_15->setObjectName(QStringLiteral("radioButton_15"));
        radioButton_15->setGeometry(QRect(300, 10, 171, 31));
        radioButton_15->setFont(font3);
        doubleSpinBox = new QDoubleSpinBox(detailsPressure);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setGeometry(QRect(590, 20, 101, 51));
        doubleSpinBox_2 = new QDoubleSpinBox(detailsPressure);
        doubleSpinBox_2->setObjectName(QStringLiteral("doubleSpinBox_2"));
        doubleSpinBox_2->setGeometry(QRect(590, 90, 101, 51));
        label_24 = new QLabel(detailsPressure);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(710, 20, 141, 31));
        label_25 = new QLabel(detailsPressure);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(710, 100, 111, 31));
        btnBackDetails = new QPushButton(detailsPressure);
        btnBackDetails->setObjectName(QStringLiteral("btnBackDetails"));
        btnBackDetails->setGeometry(QRect(900, 30, 121, 51));
        detailsPages->addWidget(detailsPressure);
        TTE_0 = new QWidget();
        TTE_0->setObjectName(QStringLiteral("TTE_0"));
        detailsPages->addWidget(TTE_0);
        detailsPage = new QWidget();
        detailsPage->setObjectName(QStringLiteral("detailsPage"));
        progressBar_3 = new QProgressBar(detailsPage);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setGeometry(QRect(140, 90, 591, 50));
        progressBar_3->setMinimumSize(QSize(0, 50));
        progressBar_3->setFont(font7);
        progressBar_3->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
""));
        progressBar_3->setValue(0);
        progressBar_2 = new QProgressBar(detailsPage);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(140, 30, 591, 50));
        progressBar_2->setMinimumSize(QSize(0, 50));
        progressBar_2->setFont(font7);
        progressBar_2->setStyleSheet(QLatin1String("QProgressBar {\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
""));
        progressBar_2->setValue(50);
        label_9 = new QLabel(detailsPage);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 100, 101, 31));
        label_2 = new QLabel(detailsPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 101, 31));
        detailsPages->addWidget(detailsPage);
        laTime_2 = new QLabel(tab_setTemp);
        laTime_2->setObjectName(QStringLiteral("laTime_2"));
        laTime_2->setGeometry(QRect(910, 10, 121, 50));
        laTime_2->setMinimumSize(QSize(50, 50));
        laTime_2->setMaximumSize(QSize(150, 100));
        laTime_2->setFont(font3);
        laTime_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        laDate_2 = new QLabel(tab_setTemp);
        laDate_2->setObjectName(QStringLiteral("laDate_2"));
        laDate_2->setGeometry(QRect(770, 10, 121, 50));
        laDate_2->setMinimumSize(QSize(50, 50));
        laDate_2->setMaximumSize(QSize(150, 100));
        laDate_2->setFont(font3);
        laDate_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bMinimize_2 = new QPushButton(tab_setTemp);
        bMinimize_2->setObjectName(QStringLiteral("bMinimize_2"));
        bMinimize_2->setEnabled(true);
        bMinimize_2->setGeometry(QRect(1070, 10, 94, 45));
        sizePolicy1.setHeightForWidth(bMinimize_2->sizePolicy().hasHeightForWidth());
        bMinimize_2->setSizePolicy(sizePolicy1);
        bMinimize_2->setMinimumSize(QSize(94, 45));
        bMinimize_2->setMaximumSize(QSize(50, 50));
        bMinimize_2->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        tabWidget->addTab(tab_setTemp, QString());
        tab_Details = new QWidget();
        tab_Details->setObjectName(QStringLiteral("tab_Details"));
        tab_Details->setAutoFillBackground(false);
        tab_Details->setStyleSheet(QStringLiteral(""));
        cbSelectGraph = new QComboBox(tab_Details);
        cbSelectGraph->setObjectName(QStringLiteral("cbSelectGraph"));
        cbSelectGraph->setGeometry(QRect(10, 20, 221, 91));
        cbSelectGraph->setMinimumSize(QSize(100, 45));
        cbSelectGraph->setMaximumSize(QSize(250, 150));
        cbSelectGraph->setFont(font4);
        tTestGraph = new QCustomPlot(tab_Details);
        tTestGraph->setObjectName(QStringLiteral("tTestGraph"));
        tTestGraph->setGeometry(QRect(150, 140, 1011, 551));
        tTestGraph->setFont(font7);
        tTestGraph->setAutoFillBackground(false);
        laTestName = new QLabel(tab_Details);
        laTestName->setObjectName(QStringLiteral("laTestName"));
        laTestName->setGeometry(QRect(520, 150, 331, 16));
        laTestName->setLayoutDirection(Qt::LeftToRight);
        laTestName->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 45 14pt \"Gill Sans MT\";\n"
"}"));
        laTestName->setAlignment(Qt::AlignCenter);
        pTestGraph = new QCustomPlot(tab_Details);
        pTestGraph->setObjectName(QStringLiteral("pTestGraph"));
        pTestGraph->setGeometry(QRect(150, 140, 1011, 551));
        pTestGraph->setFont(font7);
        pTestGraph->setAutoFillBackground(false);
        bScreenshot = new QPushButton(tab_Details);
        bScreenshot->setObjectName(QStringLiteral("bScreenshot"));
        bScreenshot->setGeometry(QRect(1020, 70, 131, 61));
        bScreenshot->setMinimumSize(QSize(94, 60));
        layoutWidget9 = new QWidget(tab_Details);
        layoutWidget9->setObjectName(QStringLiteral("layoutWidget9"));
        layoutWidget9->setGeometry(QRect(10, 140, 131, 421));
        verticalLayout_10 = new QVBoxLayout(layoutWidget9);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        ZoomInVer = new QPushButton(layoutWidget9);
        ZoomInVer->setObjectName(QStringLiteral("ZoomInVer"));
        ZoomInVer->setMinimumSize(QSize(94, 60));
        ZoomInVer->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));

        verticalLayout_10->addWidget(ZoomInVer);

        ZoomOutVer = new QPushButton(layoutWidget9);
        ZoomOutVer->setObjectName(QStringLiteral("ZoomOutVer"));
        ZoomOutVer->setMinimumSize(QSize(94, 60));
        ZoomOutVer->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));

        verticalLayout_10->addWidget(ZoomOutVer);

        ZoomInHor = new QPushButton(layoutWidget9);
        ZoomInHor->setObjectName(QStringLiteral("ZoomInHor"));
        ZoomInHor->setMinimumSize(QSize(94, 60));
        ZoomInHor->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));

        verticalLayout_10->addWidget(ZoomInHor);

        ZoomOutHor = new QPushButton(layoutWidget9);
        ZoomOutHor->setObjectName(QStringLiteral("ZoomOutHor"));
        ZoomOutHor->setMinimumSize(QSize(94, 60));
        ZoomOutHor->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));

        verticalLayout_10->addWidget(ZoomOutHor);

        ZoomCenter = new QPushButton(layoutWidget9);
        ZoomCenter->setObjectName(QStringLiteral("ZoomCenter"));
        ZoomCenter->setMinimumSize(QSize(94, 60));
        ZoomCenter->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));

        verticalLayout_10->addWidget(ZoomCenter);

        layoutWidget10 = new QWidget(tab_Details);
        layoutWidget10->setObjectName(QStringLiteral("layoutWidget10"));
        layoutWidget10->setGeometry(QRect(240, 20, 301, 113));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget10);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        label_33 = new QLabel(layoutWidget10);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setMinimumSize(QSize(125, 25));
        label_33->setFont(font5);
        label_33->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));

        verticalLayout_11->addWidget(label_33);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        dsbCabinSetTemp = new QDoubleSpinBox(layoutWidget10);
        dsbCabinSetTemp->setObjectName(QStringLiteral("dsbCabinSetTemp"));
        dsbCabinSetTemp->setEnabled(false);
        dsbCabinSetTemp->setMinimumSize(QSize(50, 25));
        QFont font16;
        font16.setFamily(QStringLiteral("Gill Sans MT"));
        font16.setPointSize(12);
        font16.setBold(false);
        font16.setItalic(false);
        font16.setWeight(9);
        dsbCabinSetTemp->setFont(font16);
        dsbCabinSetTemp->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 12pt \"Gill Sans MT\";\n"
"}"));
        dsbCabinSetTemp->setReadOnly(true);
        dsbCabinSetTemp->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCabinSetTemp->setDecimals(1);
        dsbCabinSetTemp->setMinimum(-50);
        dsbCabinSetTemp->setMaximum(250);
        dsbCabinSetTemp->setSingleStep(0.1);

        horizontalLayout_5->addWidget(dsbCabinSetTemp);


        verticalLayout_11->addLayout(horizontalLayout_5);


        horizontalLayout_6->addLayout(verticalLayout_11);

        dsbCabinTopTemp = new QDoubleSpinBox(layoutWidget10);
        dsbCabinTopTemp->setObjectName(QStringLiteral("dsbCabinTopTemp"));
        dsbCabinTopTemp->setEnabled(false);
        dsbCabinTopTemp->setMinimumSize(QSize(142, 111));
        dsbCabinTopTemp->setMaximumSize(QSize(170, 16777215));
        QFont font17;
        font17.setFamily(QStringLiteral("Gill Sans MT"));
        font17.setPointSize(45);
        font17.setBold(false);
        font17.setItalic(false);
        font17.setWeight(9);
        dsbCabinTopTemp->setFont(font17);
        dsbCabinTopTemp->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 45pt \"Gill Sans MT\";\n"
"}"));
        dsbCabinTopTemp->setReadOnly(true);
        dsbCabinTopTemp->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCabinTopTemp->setDecimals(1);
        dsbCabinTopTemp->setMinimum(-50);
        dsbCabinTopTemp->setMaximum(250);
        dsbCabinTopTemp->setSingleStep(0.1);

        horizontalLayout_6->addWidget(dsbCabinTopTemp);

        label_14 = new QLabel(tab_Details);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(550, 20, 111, 41));
        label_14->setFont(font5);
        label_14->setStyleSheet(QLatin1String("QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));
        dsbPipe1Pressure = new QDoubleSpinBox(tab_Details);
        dsbPipe1Pressure->setObjectName(QStringLiteral("dsbPipe1Pressure"));
        dsbPipe1Pressure->setEnabled(false);
        dsbPipe1Pressure->setGeometry(QRect(660, 21, 142, 111));
        dsbPipe1Pressure->setMinimumSize(QSize(90, 45));
        dsbPipe1Pressure->setFont(font17);
        dsbPipe1Pressure->setStyleSheet(QLatin1String("QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 45pt \"Gill Sans MT\";\n"
"}"));
        dsbPipe1Pressure->setReadOnly(true);
        dsbPipe1Pressure->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbPipe1Pressure->setDecimals(2);
        dsbPipe1Pressure->setMaximum(10);
        dsbPipe1Pressure->setSingleStep(0.1);
        laTime_3 = new QLabel(tab_Details);
        laTime_3->setObjectName(QStringLiteral("laTime_3"));
        laTime_3->setGeometry(QRect(930, 10, 121, 50));
        laTime_3->setMinimumSize(QSize(50, 50));
        laTime_3->setMaximumSize(QSize(150, 100));
        laTime_3->setFont(font3);
        laTime_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        laDate_3 = new QLabel(tab_Details);
        laDate_3->setObjectName(QStringLiteral("laDate_3"));
        laDate_3->setGeometry(QRect(800, 10, 121, 50));
        laDate_3->setMinimumSize(QSize(50, 50));
        laDate_3->setMaximumSize(QSize(150, 100));
        laDate_3->setFont(font3);
        laDate_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        bMinimize_3 = new QPushButton(tab_Details);
        bMinimize_3->setObjectName(QStringLiteral("bMinimize_3"));
        bMinimize_3->setEnabled(true);
        bMinimize_3->setGeometry(QRect(1060, 10, 94, 45));
        sizePolicy1.setHeightForWidth(bMinimize_3->sizePolicy().hasHeightForWidth());
        bMinimize_3->setSizePolicy(sizePolicy1);
        bMinimize_3->setMinimumSize(QSize(94, 45));
        bMinimize_3->setMaximumSize(QSize(50, 50));
        bMinimize_3->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        tabWidget->addTab(tab_Details, QString());
        cbSelectGraph->raise();
        pTestGraph->raise();
        bScreenshot->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        label_14->raise();
        dsbPipe1Pressure->raise();
        tTestGraph->raise();
        laTime_3->raise();
        laDate_3->raise();
        bMinimize_3->raise();
        laTestName->raise();
        tab_Manual = new QWidget();
        tab_Manual->setObjectName(QStringLiteral("tab_Manual"));
        tab_Manual->setAutoFillBackground(false);
        stackedWidget = new QStackedWidget(tab_Manual);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(20, 10, 1141, 711));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        bStopTestManual = new QPushButton(page_3);
        bStopTestManual->setObjectName(QStringLiteral("bStopTestManual"));
        bStopTestManual->setEnabled(false);
        bStopTestManual->setGeometry(QRect(850, 130, 101, 61));
        bStopTestManual->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bPauseTestManual = new QPushButton(page_3);
        bPauseTestManual->setObjectName(QStringLiteral("bPauseTestManual"));
        bPauseTestManual->setEnabled(false);
        bPauseTestManual->setGeometry(QRect(740, 130, 101, 61));
        bPauseTestManual->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStartTestManual = new QPushButton(page_3);
        bStartTestManual->setObjectName(QStringLiteral("bStartTestManual"));
        bStartTestManual->setEnabled(false);
        bStartTestManual->setGeometry(QRect(560, 130, 171, 61));
        bStartTestManual->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStartTestManual->setIconSize(QSize(24, 15));
        bSetTemperatureStart_2 = new QPushButton(page_3);
        bSetTemperatureStart_2->setObjectName(QStringLiteral("bSetTemperatureStart_2"));
        bSetTemperatureStart_2->setEnabled(false);
        bSetTemperatureStart_2->setGeometry(QRect(560, 40, 171, 61));
        bSetTemperatureStart_2->setFont(font2);
        bSetTemperatureStart_2->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSetTemperatureStart_2->setIconSize(QSize(24, 15));
        bSendProfileManual = new QPushButton(page_3);
        bSendProfileManual->setObjectName(QStringLiteral("bSendProfileManual"));
        bSendProfileManual->setEnabled(false);
        bSendProfileManual->setGeometry(QRect(10, 140, 171, 61));
        bSendProfileManual->setStyleSheet(QLatin1String("QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSendProfileManual->setIconSize(QSize(24, 15));
        line_25 = new QFrame(page_3);
        line_25->setObjectName(QStringLiteral("line_25"));
        line_25->setGeometry(QRect(420, -170, 20, 451));
        line_25->setFrameShape(QFrame::VLine);
        line_25->setFrameShadow(QFrame::Sunken);
        cbSelectProfileManual = new QComboBox(page_3);
        cbSelectProfileManual->setObjectName(QStringLiteral("cbSelectProfileManual"));
        cbSelectProfileManual->setGeometry(QRect(90, 260, 301, 31));
        label_116 = new QLabel(page_3);
        label_116->setObjectName(QStringLiteral("label_116"));
        label_116->setGeometry(QRect(90, 550, 191, 20));
        label_112 = new QLabel(page_3);
        label_112->setObjectName(QStringLiteral("label_112"));
        label_112->setGeometry(QRect(90, 310, 141, 21));
        dsbTTimeSetManual = new QDoubleSpinBox(page_3);
        dsbTTimeSetManual->setObjectName(QStringLiteral("dsbTTimeSetManual"));
        dsbTTimeSetManual->setEnabled(false);
        dsbTTimeSetManual->setGeometry(QRect(290, 400, 62, 21));
        dsbTTimeSetManual->setDecimals(0);
        dsbTTimeSetManual->setMaximum(4.29497e+9);
        cbSelectMethodManual = new QComboBox(page_3);
        cbSelectMethodManual->setObjectName(QStringLiteral("cbSelectMethodManual"));
        cbSelectMethodManual->setEnabled(false);
        cbSelectMethodManual->setGeometry(QRect(90, 340, 301, 31));
        sbTStepSetManual = new QSpinBox(page_3);
        sbTStepSetManual->setObjectName(QStringLiteral("sbTStepSetManual"));
        sbTStepSetManual->setEnabled(false);
        sbTStepSetManual->setGeometry(QRect(290, 470, 61, 21));
        sbTStepSetManual->setMinimum(1);
        sbTStepSetManual->setMaximum(20);
        label_121 = new QLabel(page_3);
        label_121->setObjectName(QStringLiteral("label_121"));
        label_121->setGeometry(QRect(90, 510, 171, 21));
        label_121->setAutoFillBackground(false);
        label_117 = new QLabel(page_3);
        label_117->setObjectName(QStringLiteral("label_117"));
        label_117->setGeometry(QRect(90, 590, 151, 16));
        line_26 = new QFrame(page_3);
        line_26->setObjectName(QStringLiteral("line_26"));
        line_26->setGeometry(QRect(80, 430, 321, 20));
        line_26->setFrameShape(QFrame::HLine);
        line_26->setFrameShadow(QFrame::Sunken);
        sbTCycleSetManual = new QSpinBox(page_3);
        sbTCycleSetManual->setObjectName(QStringLiteral("sbTCycleSetManual"));
        sbTCycleSetManual->setEnabled(false);
        sbTCycleSetManual->setGeometry(QRect(290, 590, 61, 21));
        sbTCycleSetManual->setMinimum(0);
        sbTCycleSetManual->setMaximum(65535);
        sbTCycleSetManual->setValue(0);
        sbTTotalCycleManual = new QSpinBox(page_3);
        sbTTotalCycleManual->setObjectName(QStringLiteral("sbTTotalCycleManual"));
        sbTTotalCycleManual->setGeometry(QRect(290, 550, 61, 21));
        sbTTotalCycleManual->setMinimum(1);
        sbTTotalCycleManual->setMaximum(65535);
        laSelectedProfileManual = new QLabel(page_3);
        laSelectedProfileManual->setObjectName(QStringLiteral("laSelectedProfileManual"));
        laSelectedProfileManual->setGeometry(QRect(230, 310, 161, 20));
        laSelectedProfileManual->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        sbTStepRepeatSetManual = new QSpinBox(page_3);
        sbTStepRepeatSetManual->setObjectName(QStringLiteral("sbTStepRepeatSetManual"));
        sbTStepRepeatSetManual->setEnabled(false);
        sbTStepRepeatSetManual->setGeometry(QRect(290, 510, 61, 21));
        sbTStepRepeatSetManual->setMinimum(0);
        sbTStepRepeatSetManual->setMaximum(65535);
        sbTStepRepeatSetManual->setValue(0);
        label_113 = new QLabel(page_3);
        label_113->setObjectName(QStringLiteral("label_113"));
        label_113->setGeometry(QRect(90, 470, 151, 21));
        label_122 = new QLabel(page_3);
        label_122->setObjectName(QStringLiteral("label_122"));
        label_122->setGeometry(QRect(90, 390, 181, 41));
        line_28 = new QFrame(page_3);
        line_28->setObjectName(QStringLiteral("line_28"));
        line_28->setGeometry(QRect(60, 370, 321, 20));
        line_28->setFrameShape(QFrame::HLine);
        line_28->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        b_pipe_1 = new QPushButton(page_4);
        b_pipe_1->setObjectName(QStringLiteral("b_pipe_1"));
        b_pipe_1->setGeometry(QRect(70, 630, 171, 61));
        b_pipe_1->setMinimumSize(QSize(94, 50));
        b_pipe_1->setFont(font2);
        b_pipe_1->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_pipe_1->setCheckable(true);
        b_pipe_2 = new QPushButton(page_4);
        b_pipe_2->setObjectName(QStringLiteral("b_pipe_2"));
        b_pipe_2->setGeometry(QRect(360, 630, 171, 61));
        b_pipe_2->setMinimumSize(QSize(94, 50));
        b_pipe_2->setFont(font2);
        b_pipe_2->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_pipe_2->setCheckable(true);
        b_pipe_3 = new QPushButton(page_4);
        b_pipe_3->setObjectName(QStringLiteral("b_pipe_3"));
        b_pipe_3->setGeometry(QRect(540, 630, 171, 61));
        b_pipe_3->setMinimumSize(QSize(94, 50));
        b_pipe_3->setFont(font2);
        b_pipe_3->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_pipe_3->setCheckable(true);
        b_pipe_4 = new QPushButton(page_4);
        b_pipe_4->setObjectName(QStringLiteral("b_pipe_4"));
        b_pipe_4->setGeometry(QRect(720, 630, 171, 61));
        b_pipe_4->setMinimumSize(QSize(94, 50));
        b_pipe_4->setFont(font2);
        b_pipe_4->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_pipe_4->setCheckable(true);
        b_pipe_5 = new QPushButton(page_4);
        b_pipe_5->setObjectName(QStringLiteral("b_pipe_5"));
        b_pipe_5->setGeometry(QRect(910, 630, 171, 61));
        b_pipe_5->setMinimumSize(QSize(94, 50));
        b_pipe_5->setFont(font2);
        b_pipe_5->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_pipe_5->setCheckable(true);
        b_basinc_tank_doldur = new QPushButton(page_4);
        b_basinc_tank_doldur->setObjectName(QStringLiteral("b_basinc_tank_doldur"));
        b_basinc_tank_doldur->setGeometry(QRect(560, 550, 171, 61));
        b_basinc_tank_doldur->setMinimumSize(QSize(94, 50));
        b_basinc_tank_doldur->setFont(font2);
        b_basinc_tank_doldur->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_basinc_tank_doldur->setCheckable(true);
        b_temiz_tank_bosalt = new QPushButton(page_4);
        b_temiz_tank_bosalt->setObjectName(QStringLiteral("b_temiz_tank_bosalt"));
        b_temiz_tank_bosalt->setGeometry(QRect(170, 550, 171, 61));
        b_temiz_tank_bosalt->setMinimumSize(QSize(94, 50));
        b_temiz_tank_bosalt->setFont(font2);
        b_temiz_tank_bosalt->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_temiz_tank_bosalt->setCheckable(true);
        b_tum_tanklari_bosalt = new QPushButton(page_4);
        b_tum_tanklari_bosalt->setObjectName(QStringLiteral("b_tum_tanklari_bosalt"));
        b_tum_tanklari_bosalt->setGeometry(QRect(360, 550, 171, 61));
        b_tum_tanklari_bosalt->setMinimumSize(QSize(94, 50));
        b_tum_tanklari_bosalt->setFont(font2);
        b_tum_tanklari_bosalt->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        b_tum_tanklari_bosalt->setCheckable(true);
        bManualPrepareLines = new QPushButton(page_4);
        bManualPrepareLines->setObjectName(QStringLiteral("bManualPrepareLines"));
        bManualPrepareLines->setEnabled(false);
        bManualPrepareLines->setGeometry(QRect(740, 310, 161, 81));
        bManualPrepareLines->setMinimumSize(QSize(94, 50));
        bManualPrepareLines->setFont(font2);
        bManualPrepareLines->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        bManualPrepareLines->setCheckable(true);
        bManualPressureLinesStart = new QPushButton(page_4);
        bManualPressureLinesStart->setObjectName(QStringLiteral("bManualPressureLinesStart"));
        bManualPressureLinesStart->setEnabled(true);
        bManualPressureLinesStart->setGeometry(QRect(80, 310, 161, 81));
        bManualPressureLinesStart->setMinimumSize(QSize(94, 50));
        bManualPressureLinesStart->setFont(font2);
        bManualPressureLinesStart->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 25px;\n"
"border: 2px solid rgb(255, 85, 0);\n"
"/*border: 2px solid rgb(0, 115, 255);*/\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0, 210, 0), stop: 1 rgb(0, 100, 0));\n"
"min-width: 80px;\n"
"}\n"
"/*\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(220, 0, 0), stop: 1 rgb(150, 0, 0));\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"*/\n"
"QPushButton:disabled {\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid rgb(30,30,30);\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(170, 170, 170), stop: 1 rgb(120,120, 120));\n"
"}"));
        bManualPressureLinesStart->setCheckable(true);
        bManualEvacLines = new QPushButton(page_4);
        bManualEvacLines->setObjectName(QStringLiteral("bManualEvacLines"));
        bManualEvacLines->setEnabled(false);
        bManualEvacLines->setGeometry(QRect(920, 310, 161, 81));
        bManualEvacLines->setMinimumSize(QSize(94, 50));
        bManualEvacLines->setFont(font2);
        bManualEvacLines->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}*/"));
        bManualEvacLines->setCheckable(true);
        bManualPressureLinesStop = new QPushButton(page_4);
        bManualPressureLinesStop->setObjectName(QStringLiteral("bManualPressureLinesStop"));
        bManualPressureLinesStop->setEnabled(false);
        bManualPressureLinesStop->setGeometry(QRect(270, 310, 161, 81));
        bManualPressureLinesStop->setMinimumSize(QSize(94, 50));
        bManualPressureLinesStop->setFont(font2);
        bManualPressureLinesStop->setStyleSheet(QLatin1String("QPushButton {\n"
"border: 2px solid rgb(255, 85, 0);\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"}\n"
"\n"
"\n"
"QPushButton:disabled {\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid rgb(30,30,30);\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(170, 170, 170), stop: 1 rgb(120,120, 120));\n"
"}"));
        bManualPressureLinesStop->setCheckable(true);
        groupBox_3 = new QGroupBox(page_4);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(80, 90, 1011, 181));
        groupBox_3->setFont(font3);
        groupBox_3->setStyleSheet(QLatin1String("\n"
"\n"
"QCheckBox::indicator {\n"
"    width:60px;\n"
"    height: 100px;\n"
"}\n"
"\n"
"  QCheckBox::indicator:checked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_checked.png);\n"
"  }\n"
"  QCheckBox::indicator:unchecked\n"
"  {\n"
"image: url(:/images/img/chechbox_Pipe_unchecked.png);\n"
"  }\n"
""));
        groupBox_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        groupBox_3->setFlat(true);
        groupBox_3->setCheckable(false);
        label_30 = new QLabel(groupBox_3);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(490, 40, 111, 31));
        label_30->setMargin(3);
        Hortum1 = new QCheckBox(groupBox_3);
        Hortum1->setObjectName(QStringLiteral("Hortum1"));
        Hortum1->setEnabled(true);
        Hortum1->setGeometry(QRect(10, 80, 61, 71));
        Hortum1->setIcon(icon);
        Hortum1->setIconSize(QSize(64, 64));
        Hortum1->setCheckable(true);
        Hortum1->setChecked(false);
        Hortum1->setTristate(false);
        label_32 = new QLabel(groupBox_3);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(230, 40, 111, 31));
        label_32->setMargin(3);
        label_35 = new QLabel(groupBox_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(0, 40, 111, 31));
        label_35->setMargin(3);
        label_36 = new QLabel(groupBox_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(360, 40, 111, 31));
        label_36->setMargin(3);
        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(110, 40, 111, 31));
        label_37->setMargin(3);
        Hortum2 = new QCheckBox(groupBox_3);
        Hortum2->setObjectName(QStringLiteral("Hortum2"));
        Hortum2->setGeometry(QRect(140, 80, 61, 71));
        Hortum2->setCheckable(true);
        Hortum2->setChecked(false);
        Hortum2->setTristate(false);
        Hortum3 = new QCheckBox(groupBox_3);
        Hortum3->setObjectName(QStringLiteral("Hortum3"));
        Hortum3->setEnabled(true);
        Hortum3->setGeometry(QRect(260, 80, 61, 71));
        Hortum3->setCheckable(true);
        Hortum3->setChecked(false);
        Hortum3->setTristate(false);
        Hortum4 = new QCheckBox(groupBox_3);
        Hortum4->setObjectName(QStringLiteral("Hortum4"));
        Hortum4->setGeometry(QRect(380, 80, 61, 71));
        Hortum4->setCheckable(true);
        Hortum4->setChecked(false);
        Hortum4->setTristate(false);
        Hortum5 = new QCheckBox(groupBox_3);
        Hortum5->setObjectName(QStringLiteral("Hortum5"));
        Hortum5->setGeometry(QRect(510, 80, 61, 71));
        Hortum5->setCheckable(true);
        Hortum5->setChecked(false);
        Hortum5->setTristate(false);
        label_62 = new QLabel(page_4);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setEnabled(true);
        label_62->setGeometry(QRect(734, 304, 172, 94));
        label_62->setStyleSheet(QStringLiteral("background-color: rgb(23, 177, 0);"));
        label_63 = new QLabel(page_4);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setEnabled(true);
        label_63->setGeometry(QRect(915, 304, 172, 94));
        label_63->setStyleSheet(QStringLiteral("background-color: rgb(23, 177, 0);"));
        stackedWidget->addWidget(page_4);
        b_pipe_1->raise();
        b_pipe_2->raise();
        b_pipe_3->raise();
        b_pipe_4->raise();
        b_pipe_5->raise();
        b_basinc_tank_doldur->raise();
        b_temiz_tank_bosalt->raise();
        b_tum_tanklari_bosalt->raise();
        bManualPressureLinesStart->raise();
        bManualPressureLinesStop->raise();
        groupBox_3->raise();
        label_62->raise();
        bManualPrepareLines->raise();
        label_63->raise();
        bManualEvacLines->raise();
        tabWidget->addTab(tab_Manual, QString());
        tab_NewPro = new QWidget();
        tab_NewPro->setObjectName(QStringLiteral("tab_NewPro"));
        tab_NewPro->setAutoFillBackground(false);
        bSavePro = new QPushButton(tab_NewPro);
        bSavePro->setObjectName(QStringLiteral("bSavePro"));
        bSavePro->setEnabled(false);
        bSavePro->setGeometry(QRect(890, 410, 271, 41));
        bClearPro = new QPushButton(tab_NewPro);
        bClearPro->setObjectName(QStringLiteral("bClearPro"));
        bClearPro->setEnabled(false);
        bClearPro->setGeometry(QRect(890, 470, 271, 41));
        tPreview_2 = new QCustomPlot(tab_NewPro);
        tPreview_2->setObjectName(QStringLiteral("tPreview_2"));
        tPreview_2->setGeometry(QRect(20, 80, 851, 531));
        tWidget = new QStackedWidget(tab_NewPro);
        tWidget->setObjectName(QStringLiteral("tWidget"));
        tWidget->setGeometry(QRect(880, 80, 291, 311));
        tWidget->setFont(font7);
        tWidget->setAutoFillBackground(false);
        tWidget->setStyleSheet(QLatin1String("QStackedWidget{\n"
"background-color: rgb(47, 47, 47);\n"
"}\n"
"QLabel{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QDoubleSpinBox{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QSpinBox{\n"
"color : #fff;\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}\n"
"\n"
"QComboBox{\n"
"color : #fff;\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-color: rgb(170, 56, 0);\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}\n"
"QLineEdit{\n"
"color : #fff;\n"
"	background-color: rgb(0, 0, 0);\n"
"	border-color: rgb(170, 56, 0);\n"
"font: 75 14pt \"Gill Sans MT\";\n"
"}"));
        tWidget->setFrameShape(QFrame::StyledPanel);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        bNewTStep = new QPushButton(page);
        bNewTStep->setObjectName(QStringLiteral("bNewTStep"));
        bNewTStep->setEnabled(false);
        bNewTStep->setGeometry(QRect(10, 250, 271, 41));
        label_28 = new QLabel(page);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 10, 211, 31));
        label_28->setFont(font5);
        label_28->setStyleSheet(QStringLiteral(""));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(10, 50, 151, 31));
        laTTotalStep = new QLabel(page);
        laTTotalStep->setObjectName(QStringLiteral("laTTotalStep"));
        laTTotalStep->setGeometry(QRect(170, 50, 41, 31));
        laTTotalStep->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_73 = new QLabel(page);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(10, 90, 131, 31));
        cbTSelectSUnit = new QComboBox(page);
        cbTSelectSUnit->setObjectName(QStringLiteral("cbTSelectSUnit"));
        cbTSelectSUnit->setEnabled(false);
        cbTSelectSUnit->setGeometry(QRect(10, 190, 271, 41));
        label_58 = new QLabel(page);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(10, 130, 151, 31));
        laOldTValue = new QLabel(page);
        laOldTValue->setObjectName(QStringLiteral("laOldTValue"));
        laOldTValue->setGeometry(QRect(170, 130, 41, 31));
        laOldTValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_127 = new QLabel(page);
        label_127->setObjectName(QStringLiteral("label_127"));
        label_127->setGeometry(QRect(221, 90, 21, 31));
        label_127->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_128 = new QLabel(page);
        label_128->setObjectName(QStringLiteral("label_128"));
        label_128->setGeometry(QRect(221, 130, 21, 31));
        label_128->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leStartValue = new QLineEdit(page);
        leStartValue->setObjectName(QStringLiteral("leStartValue"));
        leStartValue->setEnabled(false);
        leStartValue->setGeometry(QRect(150, 90, 71, 31));
        leStartValue->setFont(font5);
        leStartValue->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tWidget->addWidget(page);
        label_28->raise();
        label_10->raise();
        laTTotalStep->raise();
        label_73->raise();
        cbTSelectSUnit->raise();
        label_58->raise();
        laOldTValue->raise();
        label_127->raise();
        label_128->raise();
        bNewTStep->raise();
        leStartValue->raise();
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        label_12 = new QLabel(page_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(10, 110, 141, 31));
        label_11 = new QLabel(page_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(10, 60, 141, 31));
        label_31 = new QLabel(page_2);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 10, 211, 31));
        label_31->setFont(font5);
        bTForward2 = new QPushButton(page_2);
        bTForward2->setObjectName(QStringLiteral("bTForward2"));
        bTForward2->setGeometry(QRect(150, 250, 131, 41));
        bTBack2 = new QPushButton(page_2);
        bTBack2->setObjectName(QStringLiteral("bTBack2"));
        bTBack2->setGeometry(QRect(10, 250, 131, 41));
        label_255 = new QLabel(page_2);
        label_255->setObjectName(QStringLiteral("label_255"));
        label_255->setGeometry(QRect(220, 110, 20, 31));
        label_255->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        laTLinDurationSave = new QLabel(page_2);
        laTLinDurationSave->setObjectName(QStringLiteral("laTLinDurationSave"));
        laTLinDurationSave->setGeometry(QRect(220, 60, 20, 31));
        laTLinDurationSave->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leTLDuration = new QLineEdit(page_2);
        leTLDuration->setObjectName(QStringLiteral("leTLDuration"));
        leTLDuration->setGeometry(QRect(140, 60, 75, 31));
        leTLDuration->setFont(font5);
        leTLDuration->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leTLTarget = new QLineEdit(page_2);
        leTLTarget->setObjectName(QStringLiteral("leTLTarget"));
        leTLTarget->setGeometry(QRect(140, 110, 75, 31));
        leTLTarget->setFont(font5);
        leTLTarget->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tWidget->addWidget(page_2);
        page_27 = new QWidget();
        page_27->setObjectName(QStringLiteral("page_27"));
        tPreview = new QCustomPlot(page_27);
        tPreview->setObjectName(QStringLiteral("tPreview"));
        tPreview->setGeometry(QRect(10, 80, 271, 161));
        label_74 = new QLabel(page_27);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(10, 10, 211, 31));
        label_74->setFont(font5);
        bTSaveStep = new QPushButton(page_27);
        bTSaveStep->setObjectName(QStringLiteral("bTSaveStep"));
        bTSaveStep->setGeometry(QRect(150, 250, 131, 41));
        bTBack3 = new QPushButton(page_27);
        bTBack3->setObjectName(QStringLiteral("bTBack3"));
        bTBack3->setGeometry(QRect(10, 250, 131, 41));
        label_68 = new QLabel(page_27);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(10, 50, 231, 16));
        label_68->setFont(font5);
        tWidget->addWidget(page_27);
        layoutWidget11 = new QWidget(tab_NewPro);
        layoutWidget11->setObjectName(QStringLiteral("layoutWidget11"));
        layoutWidget11->setGeometry(QRect(20, 0, 1151, 61));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget11);
        horizontalLayout_14->setSpacing(10);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(5, 5, 5, 5);
        cbSelectProfile = new QComboBox(layoutWidget11);
        cbSelectProfile->setObjectName(QStringLiteral("cbSelectProfile"));
        cbSelectProfile->setMinimumSize(QSize(250, 50));
        cbSelectProfile->setMaximumSize(QSize(150, 16777215));
        cbSelectProfile->setFont(font4);

        horizontalLayout_14->addWidget(cbSelectProfile);

        bEditProLook = new QPushButton(layoutWidget11);
        bEditProLook->setObjectName(QStringLiteral("bEditProLook"));
        bEditProLook->setEnabled(false);
        bEditProLook->setMinimumSize(QSize(94, 0));
        bEditProLook->setMaximumSize(QSize(200, 16777215));
        bEditProLook->setFont(font2);

        horizontalLayout_14->addWidget(bEditProLook);

        bEditPro = new QPushButton(layoutWidget11);
        bEditPro->setObjectName(QStringLiteral("bEditPro"));
        bEditPro->setEnabled(false);
        bEditPro->setMinimumSize(QSize(94, 0));
        bEditPro->setMaximumSize(QSize(200, 16777215));
        bEditPro->setFont(font2);

        horizontalLayout_14->addWidget(bEditPro);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(15);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(layoutWidget11);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setMinimumSize(QSize(150, 0));
        label_29->setMaximumSize(QSize(100, 16777215));
        label_29->setFont(font3);

        horizontalLayout_13->addWidget(label_29);

        leProfileName = new QLineEdit(layoutWidget11);
        leProfileName->setObjectName(QStringLiteral("leProfileName"));
        leProfileName->setEnabled(false);
        leProfileName->setMinimumSize(QSize(140, 0));
        leProfileName->setMaximumSize(QSize(150, 16777215));
        leProfileName->setFont(font4);
        leProfileName->setMaxLength(20);
        leProfileName->setReadOnly(false);
        leProfileName->setClearButtonEnabled(false);

        horizontalLayout_13->addWidget(leProfileName);

        horizontalLayout_13->setStretch(0, 400);
        horizontalLayout_13->setStretch(1, 250);

        horizontalLayout_14->addLayout(horizontalLayout_13);

        horizontalLayout_14->setStretch(0, 500);
        horizontalLayout_14->setStretch(1, 100);
        horizontalLayout_14->setStretch(2, 100);
        horizontalLayout_14->setStretch(3, 100);
        tabWidget->addTab(tab_NewPro, QString());
        tab_Maintenance = new QWidget();
        tab_Maintenance->setObjectName(QStringLiteral("tab_Maintenance"));
        tab_Maintenance->setAutoFillBackground(false);
        line_13 = new QFrame(tab_Maintenance);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(281, 22, 16, 311));
        line_13->setFrameShape(QFrame::VLine);
        line_13->setFrameShadow(QFrame::Sunken);
        line_14 = new QFrame(tab_Maintenance);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(720, 22, 16, 311));
        line_14->setFrameShape(QFrame::VLine);
        line_14->setFrameShadow(QFrame::Sunken);
        line_8 = new QFrame(tab_Maintenance);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(10, 330, 1151, 21));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        line_15 = new QFrame(tab_Maintenance);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(553, 22, 16, 311));
        line_15->setFrameShape(QFrame::VLine);
        line_15->setFrameShadow(QFrame::Sunken);
        bExhaustValve = new QPushButton(tab_Maintenance);
        bExhaustValve->setObjectName(QStringLiteral("bExhaustValve"));
        bExhaustValve->setEnabled(false);
        bExhaustValve->setGeometry(QRect(750, 23, 94, 48));
        bExhaustValve->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bExhaustValve->setCheckable(true);
        layoutWidget12 = new QWidget(tab_Maintenance);
        layoutWidget12->setObjectName(QStringLiteral("layoutWidget12"));
        layoutWidget12->setGeometry(QRect(3, 22, 272, 199));
        verticalLayout_3 = new QVBoxLayout(layoutWidget12);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        bStartMaintenance = new QPushButton(layoutWidget12);
        bStartMaintenance->setObjectName(QStringLiteral("bStartMaintenance"));
        bStartMaintenance->setEnabled(true);
        bStartMaintenance->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bStartMaintenance->setCheckable(true);

        verticalLayout_3->addWidget(bStartMaintenance);

        line_7 = new QFrame(layoutWidget12);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_7);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_94 = new QLabel(layoutWidget12);
        label_94->setObjectName(QStringLiteral("label_94"));
        label_94->setMinimumSize(QSize(180, 0));
        label_94->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_94);

        dsbCabinTopTempMaintenance = new QDoubleSpinBox(layoutWidget12);
        dsbCabinTopTempMaintenance->setObjectName(QStringLiteral("dsbCabinTopTempMaintenance"));
        dsbCabinTopTempMaintenance->setEnabled(false);
        dsbCabinTopTempMaintenance->setReadOnly(true);
        dsbCabinTopTempMaintenance->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCabinTopTempMaintenance->setDecimals(1);
        dsbCabinTopTempMaintenance->setMinimum(-50);
        dsbCabinTopTempMaintenance->setMaximum(250);
        dsbCabinTopTempMaintenance->setSingleStep(0.1);

        formLayout->setWidget(0, QFormLayout::FieldRole, dsbCabinTopTempMaintenance);

        label_95 = new QLabel(layoutWidget12);
        label_95->setObjectName(QStringLiteral("label_95"));
        label_95->setMinimumSize(QSize(180, 0));
        label_95->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_95);

        dsbCabinTopTempMaintenance_2 = new QDoubleSpinBox(layoutWidget12);
        dsbCabinTopTempMaintenance_2->setObjectName(QStringLiteral("dsbCabinTopTempMaintenance_2"));
        dsbCabinTopTempMaintenance_2->setEnabled(false);
        dsbCabinTopTempMaintenance_2->setReadOnly(true);
        dsbCabinTopTempMaintenance_2->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCabinTopTempMaintenance_2->setDecimals(1);
        dsbCabinTopTempMaintenance_2->setMinimum(-50);
        dsbCabinTopTempMaintenance_2->setMaximum(250);
        dsbCabinTopTempMaintenance_2->setSingleStep(0.1);

        formLayout->setWidget(1, QFormLayout::FieldRole, dsbCabinTopTempMaintenance_2);

        label_64 = new QLabel(layoutWidget12);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setMinimumSize(QSize(180, 0));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_64);

        dsbPipe1PressureMaintenance = new QDoubleSpinBox(layoutWidget12);
        dsbPipe1PressureMaintenance->setObjectName(QStringLiteral("dsbPipe1PressureMaintenance"));
        dsbPipe1PressureMaintenance->setEnabled(false);
        dsbPipe1PressureMaintenance->setReadOnly(true);
        dsbPipe1PressureMaintenance->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbPipe1PressureMaintenance->setDecimals(2);
        dsbPipe1PressureMaintenance->setMaximum(10);
        dsbPipe1PressureMaintenance->setSingleStep(0.1);

        formLayout->setWidget(2, QFormLayout::FieldRole, dsbPipe1PressureMaintenance);


        verticalLayout_3->addLayout(formLayout);

        bRes = new QPushButton(tab_Maintenance);
        bRes->setObjectName(QStringLiteral("bRes"));
        bRes->setEnabled(false);
        bRes->setGeometry(QRect(320, 23, 181, 51));
        bRes->setMinimumSize(QSize(94, 51));
        bRes->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bRes->setCheckable(true);
        bFan = new QPushButton(tab_Maintenance);
        bFan->setObjectName(QStringLiteral("bFan"));
        bFan->setEnabled(false);
        bFan->setGeometry(QRect(590, 23, 94, 51));
        bFan->setMinimumSize(QSize(94, 51));
        bFan->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bFan->setCheckable(true);
        layoutWidget13 = new QWidget(tab_Maintenance);
        layoutWidget13->setObjectName(QStringLiteral("layoutWidget13"));
        layoutWidget13->setGeometry(QRect(320, 80, 136, 180));
        verticalLayout_4 = new QVBoxLayout(layoutWidget13);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        chbRes1 = new QCheckBox(layoutWidget13);
        chbRes1->setObjectName(QStringLiteral("chbRes1"));
        chbRes1->setEnabled(false);

        verticalLayout_4->addWidget(chbRes1);

        chbRes2 = new QCheckBox(layoutWidget13);
        chbRes2->setObjectName(QStringLiteral("chbRes2"));
        chbRes2->setEnabled(false);

        verticalLayout_4->addWidget(chbRes2);

        chbRes3 = new QCheckBox(layoutWidget13);
        chbRes3->setObjectName(QStringLiteral("chbRes3"));
        chbRes3->setEnabled(false);

        verticalLayout_4->addWidget(chbRes3);

        chbResTank = new QCheckBox(layoutWidget13);
        chbResTank->setObjectName(QStringLiteral("chbResTank"));
        chbResTank->setEnabled(false);

        verticalLayout_4->addWidget(chbResTank);

        layoutWidget14 = new QWidget(tab_Maintenance);
        layoutWidget14->setObjectName(QStringLiteral("layoutWidget14"));
        layoutWidget14->setGeometry(QRect(590, 80, 101, 181));
        verticalLayout_5 = new QVBoxLayout(layoutWidget14);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        chbFan1 = new QCheckBox(layoutWidget14);
        chbFan1->setObjectName(QStringLiteral("chbFan1"));
        chbFan1->setEnabled(false);

        verticalLayout_5->addWidget(chbFan1);

        chbFan2 = new QCheckBox(layoutWidget14);
        chbFan2->setObjectName(QStringLiteral("chbFan2"));
        chbFan2->setEnabled(false);

        verticalLayout_5->addWidget(chbFan2);

        chbFan3 = new QCheckBox(layoutWidget14);
        chbFan3->setObjectName(QStringLiteral("chbFan3"));
        chbFan3->setEnabled(false);

        verticalLayout_5->addWidget(chbFan3);

        layoutWidget15 = new QWidget(tab_Maintenance);
        layoutWidget15->setObjectName(QStringLiteral("layoutWidget15"));
        layoutWidget15->setGeometry(QRect(750, 77, 131, 161));
        verticalLayout_6 = new QVBoxLayout(layoutWidget15);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        chbExhaustValve = new QCheckBox(layoutWidget15);
        chbExhaustValve->setObjectName(QStringLiteral("chbExhaustValve"));
        chbExhaustValve->setEnabled(false);
        chbExhaustValve->setIconSize(QSize(20, 20));
        chbExhaustValve->setTristate(false);

        verticalLayout_6->addWidget(chbExhaustValve);

        dsbExhaustValveAutoValue = new QDoubleSpinBox(layoutWidget15);
        dsbExhaustValveAutoValue->setObjectName(QStringLiteral("dsbExhaustValveAutoValue"));
        dsbExhaustValveAutoValue->setEnabled(false);
        dsbExhaustValveAutoValue->setReadOnly(false);
        dsbExhaustValveAutoValue->setDecimals(1);
        dsbExhaustValveAutoValue->setMinimum(-40);
        dsbExhaustValveAutoValue->setMaximum(250);
        dsbExhaustValveAutoValue->setSingleStep(0.1);

        verticalLayout_6->addWidget(dsbExhaustValveAutoValue);

        bSetExhaustValve = new QPushButton(layoutWidget15);
        bSetExhaustValve->setObjectName(QStringLiteral("bSetExhaustValve"));
        bSetExhaustValve->setEnabled(false);
        bSetExhaustValve->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSetExhaustValve->setCheckable(true);

        verticalLayout_6->addWidget(bSetExhaustValve);

        bDoorControlActive = new QPushButton(tab_Maintenance);
        bDoorControlActive->setObjectName(QStringLiteral("bDoorControlActive"));
        bDoorControlActive->setEnabled(true);
        bDoorControlActive->setGeometry(QRect(20, 360, 171, 91));
        bDoorControlActive->setMinimumSize(QSize(94, 50));
        bDoorControlActive->setFont(font2);
        bDoorControlActive->setStyleSheet(QLatin1String("QPushButton {\n"
"color: rgb(255, 255, 255);\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 25px;\n"
"border: 2px solid rgb(255, 85, 0);\n"
"/*border: 2px solid rgb(0, 115, 255);*/\n"
"border-radius: 5px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(0, 210, 0), stop: 1 rgb(0, 100, 0));\n"
"min-width: 80px;\n"
"}\n"
"/*\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(220, 0, 0), stop: 1 rgb(150, 0, 0));\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"*/\n"
"QPushButton:disabled {\n"
"color: rgb(255, 255, 255);\n"
"border: 2px solid rgb(255, 85, 0);\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(210, 0, 0), stop: 1 rgb(100, 0, 0));\n"
"}"));
        bDoorControlActive->setCheckable(true);
        lineEdit = new QLineEdit(tab_Maintenance);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(470, 470, 113, 21));
        tabWidget->addTab(tab_Maintenance, QString());
        tab_calibration = new QWidget();
        tab_calibration->setObjectName(QStringLiteral("tab_calibration"));
        bSaveCalibrationValues = new QPushButton(tab_calibration);
        bSaveCalibrationValues->setObjectName(QStringLiteral("bSaveCalibrationValues"));
        bSaveCalibrationValues->setEnabled(true);
        bSaveCalibrationValues->setGeometry(QRect(50, 10, 291, 41));
        bSaveCalibrationValues->setStyleSheet(QLatin1String("/*QPushButton {\n"
"color: #fff;\n"
"font-family: \"Gill Sans MT\";\n"
"font-size: 21px;\n"
"border: 2px solid #c3fcf1;\n"
"border-radius: 11px;\n"
"padding: 5px;\n"
"background: qradialgradient(cx: 0.3, cy: -0.6,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"min-width: 80px;\n"
"}\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #0E62A0);\n"
"}\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}\n"
"QPushButton:disabled {\n"
"color: #888;\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 #65BAAB, stop: 1 #ddd);\n"
"}"));
        bSaveCalibrationValues->setCheckable(true);
        layoutWidget_2 = new QWidget(tab_calibration);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(140, 120, 754, 372));
        gridLayout_3 = new QGridLayout(layoutWidget_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        leCalCabinBottomTempErr = new QLineEdit(layoutWidget_2);
        leCalCabinBottomTempErr->setObjectName(QStringLiteral("leCalCabinBottomTempErr"));
        sizePolicy.setHeightForWidth(leCalCabinBottomTempErr->sizePolicy().hasHeightForWidth());
        leCalCabinBottomTempErr->setSizePolicy(sizePolicy);
        leCalCabinBottomTempErr->setMinimumSize(QSize(100, 50));
        leCalCabinBottomTempErr->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalCabinBottomTempErr, 2, 2, 1, 1);

        leCalCabinBottomTempCoeff = new QLineEdit(layoutWidget_2);
        leCalCabinBottomTempCoeff->setObjectName(QStringLiteral("leCalCabinBottomTempCoeff"));
        sizePolicy.setHeightForWidth(leCalCabinBottomTempCoeff->sizePolicy().hasHeightForWidth());
        leCalCabinBottomTempCoeff->setSizePolicy(sizePolicy);
        leCalCabinBottomTempCoeff->setMinimumSize(QSize(100, 50));
        leCalCabinBottomTempCoeff->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalCabinBottomTempCoeff, 2, 3, 1, 1);

        leCalCabinTopTempCoeff = new QLineEdit(layoutWidget_2);
        leCalCabinTopTempCoeff->setObjectName(QStringLiteral("leCalCabinTopTempCoeff"));
        sizePolicy.setHeightForWidth(leCalCabinTopTempCoeff->sizePolicy().hasHeightForWidth());
        leCalCabinTopTempCoeff->setSizePolicy(sizePolicy);
        leCalCabinTopTempCoeff->setMinimumSize(QSize(100, 50));
        leCalCabinTopTempCoeff->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalCabinTopTempCoeff, 1, 3, 1, 1);

        leCalCleanTankCoeff = new QLineEdit(layoutWidget_2);
        leCalCleanTankCoeff->setObjectName(QStringLiteral("leCalCleanTankCoeff"));
        sizePolicy.setHeightForWidth(leCalCleanTankCoeff->sizePolicy().hasHeightForWidth());
        leCalCleanTankCoeff->setSizePolicy(sizePolicy);
        leCalCleanTankCoeff->setMinimumSize(QSize(100, 50));
        leCalCleanTankCoeff->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalCleanTankCoeff, 5, 3, 1, 1);

        leCalPipePressure1Coeff = new QLineEdit(layoutWidget_2);
        leCalPipePressure1Coeff->setObjectName(QStringLiteral("leCalPipePressure1Coeff"));
        sizePolicy.setHeightForWidth(leCalPipePressure1Coeff->sizePolicy().hasHeightForWidth());
        leCalPipePressure1Coeff->setSizePolicy(sizePolicy);
        leCalPipePressure1Coeff->setMinimumSize(QSize(100, 50));
        leCalPipePressure1Coeff->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalPipePressure1Coeff, 3, 3, 1, 1);

        leCalPipePressure1Err = new QLineEdit(layoutWidget_2);
        leCalPipePressure1Err->setObjectName(QStringLiteral("leCalPipePressure1Err"));
        sizePolicy.setHeightForWidth(leCalPipePressure1Err->sizePolicy().hasHeightForWidth());
        leCalPipePressure1Err->setSizePolicy(sizePolicy);
        leCalPipePressure1Err->setMinimumSize(QSize(100, 50));
        leCalPipePressure1Err->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalPipePressure1Err, 3, 2, 1, 1);

        leCalDirtyTankCoeff = new QLineEdit(layoutWidget_2);
        leCalDirtyTankCoeff->setObjectName(QStringLiteral("leCalDirtyTankCoeff"));
        sizePolicy.setHeightForWidth(leCalDirtyTankCoeff->sizePolicy().hasHeightForWidth());
        leCalDirtyTankCoeff->setSizePolicy(sizePolicy);
        leCalDirtyTankCoeff->setMinimumSize(QSize(100, 50));
        leCalDirtyTankCoeff->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalDirtyTankCoeff, 6, 3, 1, 1);

        leCalCleanTankLevelErr = new QLineEdit(layoutWidget_2);
        leCalCleanTankLevelErr->setObjectName(QStringLiteral("leCalCleanTankLevelErr"));
        sizePolicy.setHeightForWidth(leCalCleanTankLevelErr->sizePolicy().hasHeightForWidth());
        leCalCleanTankLevelErr->setSizePolicy(sizePolicy);
        leCalCleanTankLevelErr->setMinimumSize(QSize(100, 50));
        leCalCleanTankLevelErr->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalCleanTankLevelErr, 5, 2, 1, 1);

        leCalDirtyTankErr = new QLineEdit(layoutWidget_2);
        leCalDirtyTankErr->setObjectName(QStringLiteral("leCalDirtyTankErr"));
        sizePolicy.setHeightForWidth(leCalDirtyTankErr->sizePolicy().hasHeightForWidth());
        leCalDirtyTankErr->setSizePolicy(sizePolicy);
        leCalDirtyTankErr->setMinimumSize(QSize(100, 50));
        leCalDirtyTankErr->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalDirtyTankErr, 6, 2, 1, 1);

        leCalExpansionTankCoeff = new QLineEdit(layoutWidget_2);
        leCalExpansionTankCoeff->setObjectName(QStringLiteral("leCalExpansionTankCoeff"));
        sizePolicy.setHeightForWidth(leCalExpansionTankCoeff->sizePolicy().hasHeightForWidth());
        leCalExpansionTankCoeff->setSizePolicy(sizePolicy);
        leCalExpansionTankCoeff->setMinimumSize(QSize(100, 50));
        leCalExpansionTankCoeff->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalExpansionTankCoeff, 7, 3, 1, 1);

        label_107 = new QLabel(layoutWidget_2);
        label_107->setObjectName(QStringLiteral("label_107"));
        label_107->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_107, 0, 4, 1, 1);

        label_75 = new QLabel(layoutWidget_2);
        label_75->setObjectName(QStringLiteral("label_75"));

        gridLayout_3->addWidget(label_75, 6, 0, 1, 1);

        dsbCalTankDirtyInput = new QDoubleSpinBox(layoutWidget_2);
        dsbCalTankDirtyInput->setObjectName(QStringLiteral("dsbCalTankDirtyInput"));
        dsbCalTankDirtyInput->setEnabled(false);
        dsbCalTankDirtyInput->setReadOnly(true);
        dsbCalTankDirtyInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalTankDirtyInput->setDecimals(1);
        dsbCalTankDirtyInput->setMinimum(-40);
        dsbCalTankDirtyInput->setMaximum(65532);
        dsbCalTankDirtyInput->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalTankDirtyInput, 6, 1, 1, 1);

        dsbCalTankDirtyOut = new QDoubleSpinBox(layoutWidget_2);
        dsbCalTankDirtyOut->setObjectName(QStringLiteral("dsbCalTankDirtyOut"));
        dsbCalTankDirtyOut->setEnabled(false);
        dsbCalTankDirtyOut->setReadOnly(true);
        dsbCalTankDirtyOut->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalTankDirtyOut->setDecimals(2);
        dsbCalTankDirtyOut->setMinimum(-40);
        dsbCalTankDirtyOut->setMaximum(65535);
        dsbCalTankDirtyOut->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalTankDirtyOut, 6, 4, 1, 1);

        dsbCalTankPressureInput = new QDoubleSpinBox(layoutWidget_2);
        dsbCalTankPressureInput->setObjectName(QStringLiteral("dsbCalTankPressureInput"));
        dsbCalTankPressureInput->setEnabled(false);
        dsbCalTankPressureInput->setReadOnly(true);
        dsbCalTankPressureInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalTankPressureInput->setDecimals(1);
        dsbCalTankPressureInput->setMinimum(-40);
        dsbCalTankPressureInput->setMaximum(65532);
        dsbCalTankPressureInput->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalTankPressureInput, 7, 1, 1, 1);

        label_76 = new QLabel(layoutWidget_2);
        label_76->setObjectName(QStringLiteral("label_76"));

        gridLayout_3->addWidget(label_76, 7, 0, 1, 1);

        dsbCalTankPressureOut = new QDoubleSpinBox(layoutWidget_2);
        dsbCalTankPressureOut->setObjectName(QStringLiteral("dsbCalTankPressureOut"));
        dsbCalTankPressureOut->setEnabled(false);
        dsbCalTankPressureOut->setReadOnly(true);
        dsbCalTankPressureOut->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalTankPressureOut->setDecimals(2);
        dsbCalTankPressureOut->setMinimum(-40);
        dsbCalTankPressureOut->setMaximum(65535);
        dsbCalTankPressureOut->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalTankPressureOut, 7, 4, 1, 1);

        leCalCabinTopTempErr = new QLineEdit(layoutWidget_2);
        leCalCabinTopTempErr->setObjectName(QStringLiteral("leCalCabinTopTempErr"));
        sizePolicy.setHeightForWidth(leCalCabinTopTempErr->sizePolicy().hasHeightForWidth());
        leCalCabinTopTempErr->setSizePolicy(sizePolicy);
        leCalCabinTopTempErr->setMinimumSize(QSize(100, 50));
        leCalCabinTopTempErr->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalCabinTopTempErr, 1, 2, 1, 1);

        label_103 = new QLabel(layoutWidget_2);
        label_103->setObjectName(QStringLiteral("label_103"));
        label_103->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_103, 0, 0, 1, 1);

        label_104 = new QLabel(layoutWidget_2);
        label_104->setObjectName(QStringLiteral("label_104"));
        label_104->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_104, 0, 1, 1, 1);

        label_105 = new QLabel(layoutWidget_2);
        label_105->setObjectName(QStringLiteral("label_105"));
        label_105->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_105, 0, 2, 1, 1);

        label_106 = new QLabel(layoutWidget_2);
        label_106->setObjectName(QStringLiteral("label_106"));
        label_106->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_106, 0, 3, 1, 1);

        label_108 = new QLabel(layoutWidget_2);
        label_108->setObjectName(QStringLiteral("label_108"));
        label_108->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_108, 1, 0, 1, 1);

        dsbCalCabinTopTempInput = new QDoubleSpinBox(layoutWidget_2);
        dsbCalCabinTopTempInput->setObjectName(QStringLiteral("dsbCalCabinTopTempInput"));
        dsbCalCabinTopTempInput->setEnabled(false);
        dsbCalCabinTopTempInput->setReadOnly(true);
        dsbCalCabinTopTempInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalCabinTopTempInput->setDecimals(1);
        dsbCalCabinTopTempInput->setMinimum(-40);
        dsbCalCabinTopTempInput->setMaximum(65532);
        dsbCalCabinTopTempInput->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalCabinTopTempInput, 1, 1, 1, 1);

        label_109 = new QLabel(layoutWidget_2);
        label_109->setObjectName(QStringLiteral("label_109"));
        label_109->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_109, 2, 0, 1, 1);

        dsbCalCabinTopTempOut = new QDoubleSpinBox(layoutWidget_2);
        dsbCalCabinTopTempOut->setObjectName(QStringLiteral("dsbCalCabinTopTempOut"));
        dsbCalCabinTopTempOut->setEnabled(false);
        dsbCalCabinTopTempOut->setReadOnly(true);
        dsbCalCabinTopTempOut->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalCabinTopTempOut->setDecimals(2);
        dsbCalCabinTopTempOut->setMinimum(-50);
        dsbCalCabinTopTempOut->setMaximum(250);
        dsbCalCabinTopTempOut->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalCabinTopTempOut, 1, 4, 1, 1);

        dsbCalCabinBottomInput = new QDoubleSpinBox(layoutWidget_2);
        dsbCalCabinBottomInput->setObjectName(QStringLiteral("dsbCalCabinBottomInput"));
        dsbCalCabinBottomInput->setEnabled(false);
        dsbCalCabinBottomInput->setReadOnly(true);
        dsbCalCabinBottomInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalCabinBottomInput->setDecimals(1);
        dsbCalCabinBottomInput->setMinimum(-40);
        dsbCalCabinBottomInput->setMaximum(65532);
        dsbCalCabinBottomInput->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalCabinBottomInput, 2, 1, 1, 1);

        dsbCalCabinBottomTempOut = new QDoubleSpinBox(layoutWidget_2);
        dsbCalCabinBottomTempOut->setObjectName(QStringLiteral("dsbCalCabinBottomTempOut"));
        dsbCalCabinBottomTempOut->setEnabled(false);
        dsbCalCabinBottomTempOut->setReadOnly(true);
        dsbCalCabinBottomTempOut->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalCabinBottomTempOut->setDecimals(2);
        dsbCalCabinBottomTempOut->setMinimum(-50);
        dsbCalCabinBottomTempOut->setMaximum(250);
        dsbCalCabinBottomTempOut->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalCabinBottomTempOut, 2, 4, 1, 1);

        label_71 = new QLabel(layoutWidget_2);
        label_71->setObjectName(QStringLiteral("label_71"));

        gridLayout_3->addWidget(label_71, 3, 0, 1, 1);

        dsbCalPipePressure1Input = new QDoubleSpinBox(layoutWidget_2);
        dsbCalPipePressure1Input->setObjectName(QStringLiteral("dsbCalPipePressure1Input"));
        dsbCalPipePressure1Input->setEnabled(false);
        sizePolicy.setHeightForWidth(dsbCalPipePressure1Input->sizePolicy().hasHeightForWidth());
        dsbCalPipePressure1Input->setSizePolicy(sizePolicy);
        dsbCalPipePressure1Input->setMaximumSize(QSize(233, 87));
        dsbCalPipePressure1Input->setReadOnly(true);
        dsbCalPipePressure1Input->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalPipePressure1Input->setDecimals(1);
        dsbCalPipePressure1Input->setMinimum(-40);
        dsbCalPipePressure1Input->setMaximum(65532);
        dsbCalPipePressure1Input->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalPipePressure1Input, 3, 1, 1, 1);

        dsbCalPipePressure1Out = new QDoubleSpinBox(layoutWidget_2);
        dsbCalPipePressure1Out->setObjectName(QStringLiteral("dsbCalPipePressure1Out"));
        dsbCalPipePressure1Out->setEnabled(false);
        dsbCalPipePressure1Out->setReadOnly(true);
        dsbCalPipePressure1Out->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalPipePressure1Out->setDecimals(2);
        dsbCalPipePressure1Out->setMinimum(-40);
        dsbCalPipePressure1Out->setMaximum(65535);
        dsbCalPipePressure1Out->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalPipePressure1Out, 3, 4, 2, 1);

        label_72 = new QLabel(layoutWidget_2);
        label_72->setObjectName(QStringLiteral("label_72"));

        gridLayout_3->addWidget(label_72, 5, 0, 1, 1);

        dsbCalTankCleanInput = new QDoubleSpinBox(layoutWidget_2);
        dsbCalTankCleanInput->setObjectName(QStringLiteral("dsbCalTankCleanInput"));
        dsbCalTankCleanInput->setEnabled(false);
        dsbCalTankCleanInput->setReadOnly(true);
        dsbCalTankCleanInput->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalTankCleanInput->setDecimals(1);
        dsbCalTankCleanInput->setMinimum(-40);
        dsbCalTankCleanInput->setMaximum(65532);
        dsbCalTankCleanInput->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalTankCleanInput, 5, 1, 1, 1);

        dsbCalTankCleanOut = new QDoubleSpinBox(layoutWidget_2);
        dsbCalTankCleanOut->setObjectName(QStringLiteral("dsbCalTankCleanOut"));
        dsbCalTankCleanOut->setEnabled(false);
        dsbCalTankCleanOut->setReadOnly(true);
        dsbCalTankCleanOut->setButtonSymbols(QAbstractSpinBox::NoButtons);
        dsbCalTankCleanOut->setDecimals(2);
        dsbCalTankCleanOut->setMinimum(-40);
        dsbCalTankCleanOut->setMaximum(65535);
        dsbCalTankCleanOut->setSingleStep(0.1);

        gridLayout_3->addWidget(dsbCalTankCleanOut, 5, 4, 1, 1);

        leCalExpansionTankErr = new QLineEdit(layoutWidget_2);
        leCalExpansionTankErr->setObjectName(QStringLiteral("leCalExpansionTankErr"));
        sizePolicy.setHeightForWidth(leCalExpansionTankErr->sizePolicy().hasHeightForWidth());
        leCalExpansionTankErr->setSizePolicy(sizePolicy);
        leCalExpansionTankErr->setMinimumSize(QSize(100, 50));
        leCalExpansionTankErr->setMaximumSize(QSize(135, 16777215));

        gridLayout_3->addWidget(leCalExpansionTankErr, 7, 2, 1, 1);

        tabWidget->addTab(tab_calibration, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(bDoorControlActive, SIGNAL(clicked()), lineEdit, SLOT(selectAll()));

        tabWidget->setCurrentIndex(1);
        mainPage->setCurrentIndex(0);
        detailsPages->setCurrentIndex(0);
        detailsBottomPages->setCurrentIndex(3);
        sW_0->setCurrentIndex(3);
        stackedWidget_2->setCurrentIndex(0);
        cbSelectGraph->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(1);
        tWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        bRecipeMode->setText(QApplication::translate("MainWindow", "Recete Modu", Q_NULLPTR));
        bFixMode->setText(QApplication::translate("MainWindow", "Fix Modu", Q_NULLPTR));
        b1500hMode->setText(QApplication::translate("MainWindow", "1500h", Q_NULLPTR));
        rectRecipe->setText(QString());
        rectFix->setText(QString());
        rect1500h->setText(QString());
        bClearLogTable_2->setText(QApplication::translate("MainWindow", "_", Q_NULLPTR));
        bLightsMain->setText(QApplication::translate("MainWindow", "Ayd\304\261nlatma", Q_NULLPTR));
        laDate->setText(QApplication::translate("MainWindow", "XX/XX/XX", Q_NULLPTR));
        laTime->setText(QApplication::translate("MainWindow", "XX:XX:XX", Q_NULLPTR));
        cbSelectProfileMain->clear();
        cbSelectProfileMain->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bir test recetesi seciniz", Q_NULLPTR)
        );
        bSendProfileMain->setText(QApplication::translate("MainWindow", "Re\303\247eteyi Onayla", Q_NULLPTR));
        bStartTest->setText(QApplication::translate("MainWindow", "Ba\305\237lat", Q_NULLPTR));
        bPauseTest->setText(QApplication::translate("MainWindow", "Beklet", Q_NULLPTR));
        bStopTest->setText(QApplication::translate("MainWindow", "\304\260ptal", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Se\303\247ilen Re\303\247ete", Q_NULLPTR));
        laSelectedProfileMain->setText(QApplication::translate("MainWindow", "Re\303\247ete se\303\247imi yap\304\261lmad\304\261", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Testin Tekrar Say\304\261s\304\261", Q_NULLPTR));
        laSetTempValue->setText(QApplication::translate("MainWindow", "Set De\304\237er (\302\260C)", Q_NULLPTR));
        bTemperatureSet->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        bSetTemperatureStart->setText(QApplication::translate("MainWindow", "Ba\305\237lat", Q_NULLPTR));
        bSetTemperatureStop->setText(QApplication::translate("MainWindow", "Durdur", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k (\302\260C)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Aktif Test Hortumu se\303\247imi", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Hortum 5", Q_NULLPTR));
        checkBox_4->setText(QString());
        checkBox_3->setText(QString());
        checkBox->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "Hortum 3", Q_NULLPTR));
        checkBox_2->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "Hortum 1", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Hortum 4", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Hortum 2", Q_NULLPTR));
        checkBox_5->setText(QString());
        bPauseTest1500h->setText(QApplication::translate("MainWindow", "Beklet", Q_NULLPTR));
        bStopTest1500h->setText(QApplication::translate("MainWindow", "\304\260ptal", Q_NULLPTR));
        bStartTest1500h->setText(QApplication::translate("MainWindow", "Ba\305\237lat", Q_NULLPTR));
        bSendProfile1500h->setText(QApplication::translate("MainWindow", "Se\303\247imi Onayla", Q_NULLPTR));
        label_53->setText(QApplication::translate("MainWindow", "Set S\304\261cakl\304\261\304\237\304\261 (\302\260C)", Q_NULLPTR));
        leSetTemperature1500h->setText(QApplication::translate("MainWindow", "132.5", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "De\304\237i\305\237im S\304\261cakl\304\261\304\237\304\261(\302\260C)", Q_NULLPTR));
        leLiquidChangeTemp1500h->setText(QApplication::translate("MainWindow", "50", Q_NULLPTR));
        label_55->setText(QApplication::translate("MainWindow", "De\304\237i\305\237im Periyodu(s)", Q_NULLPTR));
        leLiquidChangePeriod1500h->setText(QApplication::translate("MainWindow", "170", Q_NULLPTR));
        label_54->setText(QApplication::translate("MainWindow", "Toplam Test S\303\274resi(s)", Q_NULLPTR));
        leTotalTestDuration1500h->setText(QApplication::translate("MainWindow", "1500", Q_NULLPTR));
        label_52->setText(QApplication::translate("MainWindow", "Set Bas\304\261nc\304\261 (bar)", Q_NULLPTR));
        leSetPressure1500h->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        label_57->setText(QApplication::translate("MainWindow", "Sirk\303\274lasyon S\303\274resi(dk)", Q_NULLPTR));
        leLiquidCirculationTime1500h->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        bChooseData->setText(QApplication::translate("MainWindow", "Kay\304\261t Se\303\247", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        bMainDoorInfo->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        bMainDoorInfo->setText(QApplication::translate("MainWindow", "Kapak ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_Main), QApplication::translate("MainWindow", "Ana Sayfa", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "\304\260\305\237lenen Test Durumu", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = warningTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Zaman", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = warningTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "A\303\247\304\261klama", Q_NULLPTR));
        cB_tte_4->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k ayarlan\304\261yor ", Q_NULLPTR));
        cB_tte_11->setText(QApplication::translate("MainWindow", "3.Hortum", Q_NULLPTR));
        cB_tte_12->setText(QApplication::translate("MainWindow", "4.Hortum", Q_NULLPTR));
        cB_tte_10->setText(QApplication::translate("MainWindow", "2.Hortum", Q_NULLPTR));
        cB_tte_8->setText(QApplication::translate("MainWindow", "Hortum Kontrol\303\274", Q_NULLPTR));
        cB_tte_9->setText(QApplication::translate("MainWindow", "1.Hortum", Q_NULLPTR));
        cB_tte_13->setText(QApplication::translate("MainWindow", "5.Hortum", Q_NULLPTR));
        cB_tte_22->setText(QApplication::translate("MainWindow", "S\304\261v\304\261 Degi\305\237imi", Q_NULLPTR));
        cB_tte_23->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k d\303\274\305\237\303\274r\303\274l\303\274yor", Q_NULLPTR));
        cB_tte_24->setText(QApplication::translate("MainWindow", "S\304\261v\304\261 degi\305\237imi yap\304\261l\304\261yor", Q_NULLPTR));
        cB_tte_25->setText(QApplication::translate("MainWindow", "S\304\261v\304\261 degi\305\237imi yap\304\261ld\304\261", Q_NULLPTR));
        cB_tte_32->setText(QApplication::translate("MainWindow", "Bas\304\261nc ayarlan\304\261yor ", Q_NULLPTR));
        cB_tte_33->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k kontrol aktif", Q_NULLPTR));
        cB_tte_21->setText(QApplication::translate("MainWindow", "Pompa \303\207al\304\261s\304\261yor", Q_NULLPTR));
        cB_tte_15->setText(QApplication::translate("MainWindow", "Hortum Hava Alma", Q_NULLPTR));
        cB_tte_19->setText(QApplication::translate("MainWindow", "4.Hortum", Q_NULLPTR));
        cB_tte_17->setText(QApplication::translate("MainWindow", "2.Hortum", Q_NULLPTR));
        cB_tte_16->setText(QApplication::translate("MainWindow", "1.Hortum", Q_NULLPTR));
        cB_tte_18->setText(QApplication::translate("MainWindow", "3.Hortum", Q_NULLPTR));
        cB_tte_20->setText(QApplication::translate("MainWindow", "5.Hortum", Q_NULLPTR));
        cB_tte_26->setText(QApplication::translate("MainWindow", "Bas\304\261nc Tank\304\261\n"
"Bo\305\237alt\304\261l\304\261yor", Q_NULLPTR));
        cB_tte_28->setText(QApplication::translate("MainWindow", "Temiz S\304\261v\304\261 Tank\304\261\n"
"Bo\305\237alt\304\261l\304\261yor", Q_NULLPTR));
        cB_tte_29->setText(QApplication::translate("MainWindow", "Pompa \303\207al\304\261s\304\261yor", Q_NULLPTR));
        cB_tte_30->setText(QApplication::translate("MainWindow", "Kirli S\304\261v\304\261 Tank\304\261\n"
"Bo\305\237alt\304\261l\304\261yor", Q_NULLPTR));
        cB_tte_31->setText(QApplication::translate("MainWindow", "Pompa \303\207al\304\261s\304\261yor", Q_NULLPTR));
        cB_tte_0->setText(QApplication::translate("MainWindow", "1500h Mode", Q_NULLPTR));
        cB_tte_1->setText(QApplication::translate("MainWindow", "Haz\304\261rl\304\261k ", Q_NULLPTR));
        cB_tte_2->setText(QApplication::translate("MainWindow", "Test ", Q_NULLPTR));
        cB_tte_3->setText(QApplication::translate("MainWindow", "Test Tamamland\304\261", Q_NULLPTR));
        cB_tte_14->setText(QApplication::translate("MainWindow", "Pompa \303\207al\304\261s\304\261yor", Q_NULLPTR));
        cB_tte_6->setText(QApplication::translate("MainWindow", "Rezistanslar aktif", Q_NULLPTR));
        cB_tte_7->setText(QApplication::translate("MainWindow", "Fanlar cal\304\261\305\237\304\261yor", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "S\304\261v\304\261 De\304\237i\305\237im Periyodu", Q_NULLPTR));
        gb_KirliTankLevel->setTitle(QApplication::translate("MainWindow", "Kirli Tank\304\261", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", " 60lt", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", " 35lt", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", " 10lt", Q_NULLPTR));
        gb_CleanTankLevel->setTitle(QApplication::translate("MainWindow", "Temiz Tank\304\261", Q_NULLPTR));
        label_46->setText(QApplication::translate("MainWindow", " 20lt", Q_NULLPTR));
        label_47->setText(QApplication::translate("MainWindow", " 10lt", Q_NULLPTR));
        label_48->setText(QApplication::translate("MainWindow", " 15lt", Q_NULLPTR));
        gb_basincTankLevel->setTitle(QApplication::translate("MainWindow", "Bas\304\261n\303\247 Tank\304\261", Q_NULLPTR));
        label_49->setText(QApplication::translate("MainWindow", " 0lt", Q_NULLPTR));
        label_50->setText(QApplication::translate("MainWindow", " 10lt", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow", " 20lt", Q_NULLPTR));
        laFault31->setText(QApplication::translate("MainWindow", " Temiz Tank\304\261 S\304\261v\304\261 Seviyesi D\303\274\305\237\303\274k", Q_NULLPTR));
        laFault32->setText(QApplication::translate("MainWindow", "32 Kirli Tank Seviyesi Y\303\274ksek", Q_NULLPTR));
        laFault34->setText(QApplication::translate("MainWindow", "34 Bas\304\261n\303\247i Tank Seviyesi Y\303\274ksek", Q_NULLPTR));
        laFault33->setText(QApplication::translate("MainWindow", "33 Bas\304\261n\303\247 Tank Seviyesi D\303\274\305\237\303\274k", Q_NULLPTR));
        laFault25->setText(QApplication::translate("MainWindow", "25--5.Hortum patlad\304\261", Q_NULLPTR));
        laFault23->setText(QApplication::translate("MainWindow", "23--3.Hortum patlad\304\261", Q_NULLPTR));
        laFault24->setText(QApplication::translate("MainWindow", "24--4.Hortum patlad\304\261", Q_NULLPTR));
        laFault22->setText(QApplication::translate("MainWindow", "22--2.Hortum patlad\304\261", Q_NULLPTR));
        laFault21->setText(QApplication::translate("MainWindow", "21--1.Hortum patlad\304\261", Q_NULLPTR));
        laFault4A_2->setText(QApplication::translate("MainWindow", " Hat Bas\304\261nc\304\261 D\303\274\305\237\303\274k", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Aktif Test Hortumu se\303\247imi", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "Hortum 5", Q_NULLPTR));
        Hortum1_2->setText(QString());
        label_42->setText(QApplication::translate("MainWindow", "Hortum 3", Q_NULLPTR));
        label_59->setText(QApplication::translate("MainWindow", "Hortum 1", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "Hortum 4", Q_NULLPTR));
        label_61->setText(QApplication::translate("MainWindow", "Hortum 2", Q_NULLPTR));
        Hortum2_2->setText(QString());
        Hortum3_2->setText(QString());
        Hortum4_2->setText(QString());
        Hortum5_2->setText(QString());
        control_hortum_1->setText(QString());
        control_hortum_2->setText(QString());
        control_hortum_3->setText(QString());
        control_hortum_4->setText(QString());
        control_hortum_5->setText(QString());
        laDurum1->setText(QApplication::translate("MainWindow", "Hava alma i\305\237lemi gercekle\305\237iyor ", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "FAN VE REZ\304\260STANS HATASI", Q_NULLPTR));
        laFault46->setText(QApplication::translate("MainWindow", "46 Is\304\261nma Ar\304\261zas\304\261", Q_NULLPTR));
        laFault44->setText(QApplication::translate("MainWindow", "44 Fan3 cal\304\261\305\237m\304\261yor", Q_NULLPTR));
        laFault43->setText(QApplication::translate("MainWindow", "43 Fan2 cal\304\261\305\237m\304\261yor", Q_NULLPTR));
        laFault42->setText(QApplication::translate("MainWindow", "42 Fan1 cal\304\261\305\237m\304\261yor", Q_NULLPTR));
        laDurum2->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k set degerine getiriliyor", Q_NULLPTR));
        laDurum3->setText(QApplication::translate("MainWindow", "Bas\304\261n\303\247 set degerine getiriliyor", Q_NULLPTR));
        laDurum3_2->setText(QApplication::translate("MainWindow", "Bas\304\261n\303\247 set degerinde", Q_NULLPTR));
        laDurum2_2->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k set degerinde", Q_NULLPTR));
        label_38->setText(QApplication::translate("MainWindow", "HATA", Q_NULLPTR));
        laFault41->setText(QApplication::translate("MainWindow", "41 Kap\304\261 A\303\247\304\261k", Q_NULLPTR));
        laFault49->setText(QApplication::translate("MainWindow", "49 Reg\303\274lat\303\266r Yneiden Ayarlanmal\304\261", Q_NULLPTR));
        laFault47->setText(QApplication::translate("MainWindow", "47 Haberle\305\237me Ar\304\261zas\304\261", Q_NULLPTR));
        laFault45->setText(QApplication::translate("MainWindow", "45 Pompa cal\304\261\305\237m\304\261yor", Q_NULLPTR));
        laFault48->setText(QApplication::translate("MainWindow", "48 Pompa Hatt\304\261 T\304\261kal\304\261", Q_NULLPTR));
        laFault4A->setText(QApplication::translate("MainWindow", "4A Hat Bas\304\261nc\304\261 D\303\274\305\237\303\274k", Q_NULLPTR));
        laFault11->setText(QApplication::translate("MainWindow", "Acil Durum Butonu Bas\304\261l\304\261", Q_NULLPTR));
        laFault11_2->setText(QApplication::translate("MainWindow", "Acil Durum ", Q_NULLPTR));
        laFault12->setText(QApplication::translate("MainWindow", "12 S\304\261cakl\304\261k y\303\274ksek (\302\260C>150)", Q_NULLPTR));
        btnDetailsInfo->setText(QString());
        btnDetailsTanklevel->setText(QString());
        btnDetailsHeater->setText(QString());
        label_34->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k(\302\260C)", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "Bas\304\261nc(bar)", Q_NULLPTR));
        btnDetailsPipes->setText(QString());
        bResetFault->setText(QApplication::translate("MainWindow", "Reset", Q_NULLPTR));
        btnDetailsPressure_2->setText(QString());
        bBuzzerReset->setText(QApplication::translate("MainWindow", "Buzzer Reset", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Temiz Tank\304\261", Q_NULLPTR));
        label_21->setText(QApplication::translate("MainWindow", " 10lt", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", " 0lt", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", " 5lt", Q_NULLPTR));
        gbDirtyTankLevel_2->setTitle(QApplication::translate("MainWindow", "Kirli Tank\304\261", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", " 30lt", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", " 15lt", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", " 0lt", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Bas\304\261n\303\247 Tank\304\261", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", " 0lt", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", " 10lt", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", " 20lt", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "Pompa", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Kabin", Q_NULLPTR));
        radioButton_11->setText(QApplication::translate("MainWindow", "H5 Alt", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "H1 Alt", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "H2 Alt", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("MainWindow", "H3 Ust", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("MainWindow", "H3 Alt", Q_NULLPTR));
        radioButton_9->setText(QApplication::translate("MainWindow", "H4 Ust", Q_NULLPTR));
        radioButton_10->setText(QApplication::translate("MainWindow", "H5 Ust", Q_NULLPTR));
        radioButton_8->setText(QApplication::translate("MainWindow", "H4 Alt", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "H1 Ust", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("MainWindow", "H2 Ust", Q_NULLPTR));
        checkBox_6->setText(QString());
        checkBox_7->setText(QString());
        checkBox_8->setText(QString());
        checkBox_9->setText(QString());
        checkBox_10->setText(QString());
        radioButton_12->setText(QApplication::translate("MainWindow", "Sirk\303\274lasyon valfi", Q_NULLPTR));
        radioButton_13->setText(QApplication::translate("MainWindow", "Kirli Valfi", Q_NULLPTR));
        radioButton_14->setText(QApplication::translate("MainWindow", "Ana Valf", Q_NULLPTR));
        radioButton_15->setText(QApplication::translate("MainWindow", "Reg\303\274lat\303\266r Valfi", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Reg\303\274lat\303\266r Set", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Sens\303\266r", Q_NULLPTR));
        btnBackDetails->setText(QApplication::translate("MainWindow", "Geri", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        laTime_2->setText(QApplication::translate("MainWindow", "XX:XX:XX", Q_NULLPTR));
        laDate_2->setText(QApplication::translate("MainWindow", "XX/XX/XX", Q_NULLPTR));
        bMinimize_2->setText(QApplication::translate("MainWindow", "_", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_setTemp), QApplication::translate("MainWindow", "Test Takip", Q_NULLPTR));
        cbSelectGraph->clear();
        cbSelectGraph->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Kabin S\304\261cakl\304\261g\304\261", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Boru Bas\304\261nc\304\261", Q_NULLPTR)
        );
        laTestName->setText(QApplication::translate("MainWindow", "Recete Secilmedi  ", Q_NULLPTR));
        bScreenshot->setText(QApplication::translate("MainWindow", "Screenshot", Q_NULLPTR));
        ZoomInVer->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        ZoomOutVer->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        ZoomInHor->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        ZoomOutHor->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        ZoomCenter->setText(QApplication::translate("MainWindow", "Merkezle", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k(\302\260C)", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "Bas\304\261nc (bar)", Q_NULLPTR));
        laTime_3->setText(QApplication::translate("MainWindow", "XX:XX:XX", Q_NULLPTR));
        laDate_3->setText(QApplication::translate("MainWindow", "XX/XX/XX", Q_NULLPTR));
        bMinimize_3->setText(QApplication::translate("MainWindow", "_", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_Details), QApplication::translate("MainWindow", "Grafik", Q_NULLPTR));
        bStopTestManual->setText(QApplication::translate("MainWindow", "Iptal", Q_NULLPTR));
        bPauseTestManual->setText(QApplication::translate("MainWindow", "Beklet", Q_NULLPTR));
        bStartTestManual->setText(QApplication::translate("MainWindow", "Baslat", Q_NULLPTR));
        bSetTemperatureStart_2->setText(QApplication::translate("MainWindow", "Teste Devam", Q_NULLPTR));
        bSendProfileManual->setText(QApplication::translate("MainWindow", "Receteyi Onayla", Q_NULLPTR));
        cbSelectProfileManual->clear();
        cbSelectProfileManual->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Bir Recete Secin", Q_NULLPTR)
        );
        label_116->setText(QApplication::translate("MainWindow", "Toplam i\305\237lenecek sayk\304\261l", Q_NULLPTR));
        label_112->setText(QApplication::translate("MainWindow", "Secilen Recete", Q_NULLPTR));
        cbSelectMethodManual->clear();
        cbSelectMethodManual->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Test Kontrol Modunu secin", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Test saniyesini gir..", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Ad\304\261m say\304\261s\304\261n\304\261 ve Ad\304\261m ilerleme s\303\274resini gir...", Q_NULLPTR)
        );
        cbSelectMethodManual->setCurrentText(QApplication::translate("MainWindow", "Test Kontrol Modunu secin", Q_NULLPTR));
        label_121->setText(QApplication::translate("MainWindow", "Ad\304\261m ilerleme zaman\304\261", Q_NULLPTR));
        label_117->setText(QApplication::translate("MainWindow", "Islenm\304\261s Sayk\304\261l", Q_NULLPTR));
        laSelectedProfileManual->setText(QApplication::translate("MainWindow", "Recete Se\303\247ilmedi", Q_NULLPTR));
        label_113->setText(QApplication::translate("MainWindow", "Baslang\304\261\303\247 Ad\304\261m\304\261", Q_NULLPTR));
        label_122->setText(QApplication::translate("MainWindow", "Test Recetesi  Baslangic \n"
"Zaman\304\261", Q_NULLPTR));
        b_pipe_1->setText(QApplication::translate("MainWindow", "HAT 1", Q_NULLPTR));
        b_pipe_2->setText(QApplication::translate("MainWindow", "HAT 2", Q_NULLPTR));
        b_pipe_3->setText(QApplication::translate("MainWindow", "HAT 3", Q_NULLPTR));
        b_pipe_4->setText(QApplication::translate("MainWindow", "HAT 4", Q_NULLPTR));
        b_pipe_5->setText(QApplication::translate("MainWindow", "HAT 5", Q_NULLPTR));
        b_basinc_tank_doldur->setText(QApplication::translate("MainWindow", "Bas\304\261n\303\247 Tank\304\261na", Q_NULLPTR));
        b_temiz_tank_bosalt->setText(QApplication::translate("MainWindow", "Kirli Tank\304\261na", Q_NULLPTR));
        b_tum_tanklari_bosalt->setText(QApplication::translate("MainWindow", "Hatlar\304\261 Bo\305\237alt", Q_NULLPTR));
        bManualPrepareLines->setText(QApplication::translate("MainWindow", "Hava Alma\n"
"Ba\305\237lat", Q_NULLPTR));
        bManualPressureLinesStart->setText(QApplication::translate("MainWindow", "Hat Kontrol\n"
"Ba\305\237lat", Q_NULLPTR));
        bManualEvacLines->setText(QApplication::translate("MainWindow", "Hatt\304\261 \n"
"Bo\305\237alt", Q_NULLPTR));
        bManualPressureLinesStop->setText(QApplication::translate("MainWindow", "Hat Kontrol\n"
"Durdur", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Aktif Test Hortumu se\303\247imi", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "Hortum 5", Q_NULLPTR));
        Hortum1->setText(QString());
        label_32->setText(QApplication::translate("MainWindow", "Hortum 3", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Hortum 1", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Hortum 4", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "Hortum 2", Q_NULLPTR));
        Hortum2->setText(QString());
        Hortum3->setText(QString());
        Hortum4->setText(QString());
        Hortum5->setText(QString());
        label_62->setText(QString());
        label_63->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_Manual), QApplication::translate("MainWindow", "Test Kontrol", Q_NULLPTR));
        bSavePro->setText(QApplication::translate("MainWindow", "Re\303\247eteyi Kaydet", Q_NULLPTR));
        bClearPro->setText(QApplication::translate("MainWindow", "Temizle", Q_NULLPTR));
        bNewTStep->setText(QApplication::translate("MainWindow", "Yeni S\304\261cakl\304\261k Ad\304\261m\304\261", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k Re\303\247etesi", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Toplam ad\304\261m", Q_NULLPTR));
        laTTotalStep->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_73->setText(QApplication::translate("MainWindow", "Baslangic Degeri", Q_NULLPTR));
        cbTSelectSUnit->clear();
        cbTSelectSUnit->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "S\304\261cakl\304\261k Zaman Birimi", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Saniye", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Dakika", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Saat", Q_NULLPTR)
         << QApplication::translate("MainWindow", "G\303\274n", Q_NULLPTR)
        );
        cbTSelectSUnit->setCurrentText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k Zaman Birimi", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "Onceki deger", Q_NULLPTR));
        laOldTValue->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_127->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        label_128->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        leStartValue->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "Ad\304\261m Hedefi", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "Ad\304\261m S\303\274resi", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k Re\303\247etesi", Q_NULLPTR));
        bTForward2->setText(QApplication::translate("MainWindow", "Ileri", Q_NULLPTR));
        bTBack2->setText(QApplication::translate("MainWindow", "Geri", Q_NULLPTR));
        label_255->setText(QApplication::translate("MainWindow", "\302\260C", Q_NULLPTR));
        laTLinDurationSave->setText(QApplication::translate("MainWindow", "x", Q_NULLPTR));
        label_74->setText(QApplication::translate("MainWindow", "S\304\261cakl\304\261k Recetesi", Q_NULLPTR));
        bTSaveStep->setText(QApplication::translate("MainWindow", "Ad\304\261m Onay", Q_NULLPTR));
        bTBack3->setText(QApplication::translate("MainWindow", "Geri", Q_NULLPTR));
        label_68->setText(QApplication::translate("MainWindow", "\303\226nizleme", Q_NULLPTR));
        cbSelectProfile->clear();
        cbSelectProfile->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Recete Slotu", Q_NULLPTR)
        );
        bEditProLook->setText(QApplication::translate("MainWindow", "\304\260ncele", Q_NULLPTR));
        bEditPro->setText(QApplication::translate("MainWindow", "Yeni Recete", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Recete Ad\304\261", Q_NULLPTR));
        leProfileName->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_NewPro), QApplication::translate("MainWindow", "Yeni Recete", Q_NULLPTR));
        bExhaustValve->setText(QApplication::translate("MainWindow", "Baca", Q_NULLPTR));
        bStartMaintenance->setText(QApplication::translate("MainWindow", "Bak\304\261m Moduna Gir", Q_NULLPTR));
        label_94->setText(QApplication::translate("MainWindow", "Kabin S\304\261cakl\304\261k \303\234st", Q_NULLPTR));
        label_95->setText(QApplication::translate("MainWindow", "Kabin S\304\261cakl\304\261k Alt", Q_NULLPTR));
        label_64->setText(QApplication::translate("MainWindow", "Bas\304\261n\303\247 ", Q_NULLPTR));
        bRes->setText(QApplication::translate("MainWindow", "Is\304\261t\304\261c\304\261", Q_NULLPTR));
        bFan->setText(QApplication::translate("MainWindow", "Fan", Q_NULLPTR));
        chbRes1->setText(QApplication::translate("MainWindow", "Rezistans 1", Q_NULLPTR));
        chbRes2->setText(QApplication::translate("MainWindow", "Rezistans 2", Q_NULLPTR));
        chbRes3->setText(QApplication::translate("MainWindow", "Rezistans 3", Q_NULLPTR));
        chbResTank->setText(QApplication::translate("MainWindow", "Rezistans 4", Q_NULLPTR));
        chbFan1->setText(QApplication::translate("MainWindow", "Fan 1", Q_NULLPTR));
        chbFan2->setText(QApplication::translate("MainWindow", "Fan 2", Q_NULLPTR));
        chbFan3->setText(QApplication::translate("MainWindow", "Fan 3", Q_NULLPTR));
        chbExhaustValve->setText(QApplication::translate("MainWindow", "Baca", Q_NULLPTR));
        bSetExhaustValve->setText(QApplication::translate("MainWindow", "Set", Q_NULLPTR));
        bDoorControlActive->setText(QApplication::translate("MainWindow", "Kapak Kilidi \n"
" Kullan\304\261mda", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_Maintenance), QApplication::translate("MainWindow", "Bak\304\261m", Q_NULLPTR));
        bSaveCalibrationValues->setText(QApplication::translate("MainWindow", "Kalibre Et", Q_NULLPTR));
        label_107->setText(QApplication::translate("MainWindow", "Sonuc", Q_NULLPTR));
        label_75->setText(QApplication::translate("MainWindow", "Kirli Tank S\304\261v\304\261 Seviye ", Q_NULLPTR));
        label_76->setText(QApplication::translate("MainWindow", "Bas\304\261n\303\247 Tank S\304\261v\304\261 Seviye ", Q_NULLPTR));
        label_103->setText(QApplication::translate("MainWindow", "Kalibrasyon", Q_NULLPTR));
        label_104->setText(QApplication::translate("MainWindow", "Gelen", Q_NULLPTR));
        label_105->setText(QApplication::translate("MainWindow", "Fark", Q_NULLPTR));
        label_106->setText(QApplication::translate("MainWindow", "Carpan", Q_NULLPTR));
        label_108->setText(QApplication::translate("MainWindow", "Kabin S\304\261cakl\304\261k \303\234st", Q_NULLPTR));
        label_109->setText(QApplication::translate("MainWindow", "Kabin S\304\261cakl\304\261k Alt", Q_NULLPTR));
        label_71->setText(QApplication::translate("MainWindow", "Bas\304\261n\303\247 ", Q_NULLPTR));
        label_72->setText(QApplication::translate("MainWindow", "Temiz Tank S\304\261v\304\261 Seviye ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_calibration), QApplication::translate("MainWindow", "Kalibrasyon", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
