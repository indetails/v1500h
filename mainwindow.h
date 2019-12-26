#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QValidator>
#include <QDebug>
#include <QDesktopWidget>
#include <QScreen>
#include <QMessageBox>
#include <QMetaEnum>
#include <QValidator>
#include <QtSerialPort/QSerialPort>
#include <QMouseEvent>
#include <QMessageBox>
#include <QTime>
#include <QPixmap>
#include <QCloseEvent>
#include <QApplication>
#include <QFileDialog>
#include "profilestruct.h"
#include "serialprocess.h"
#include "myserial.h"
#include "keyboard/numpad.h"
#include "writeinfostotext.h"
#include "GkTestManager.h"
#include "choosetestdata.h"



namespace Ui {
class MainWindow;
class UpdateInfoBytes;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int profileIndexMain;
    Ui::MainWindow *ui;
    PLC myPLC;

public slots:
    void setTestDatasToGraph(quint32 testID);

private slots:

    void serialMessage(uint command, QByteArray data);
    void on_cbSelectProfile_currentIndexChanged(int index);
    void on_bEditPro_clicked();
    void on_bClearPro_clicked();
    void on_bSavePro_clicked();
    void updateTPreview();
    void on_bNewTStep_clicked();
    void on_bTForward2_clicked();
    void on_bTBack2_clicked();
    void on_bTBack3_clicked();
    void on_bTSaveStep_clicked();
    bool readProfiles(char rType, int index);
    void on_cbSelectProfileMain_currentIndexChanged(int index);
    bool sendProfileOverSerial(QString mode, int index);
    void on_bStartTest_clicked();
    void on_bStopTest_clicked();
    void askSensorValues();
    void askOtherStuff();
    void getCurrentDateTime();
    void prepareTestTimers();
    void updateInfo();
    void writeToLogTable(QString info);
    void commInfo(bool status);
    void updateTPlot();
    void profileSent();
    void setupTGraph();
    void setupPreviewGraphs();
    void setupVisuals();
    void on_bScreenshot_clicked();
    void on_bScreenshot_saved();
    void on_bRes_clicked();
    void on_bFan_clicked();
    void on_bLightsMain_clicked();
    void closeEvent(QCloseEvent *event);
    void on_bClearLogTable_clicked();
    void clearProfileSlot(char sType, char pType, quint8 index);
    void on_cbSelectMethodManual_currentIndexChanged(int index);
    void on_cbSelectProfileManual_currentIndexChanged(int index);
    void on_tabWidget_currentChanged(int index);
    void on_bSendProfileMain_clicked();
    void on_bStartTestManual_clicked();
    void on_bStopTestManual_clicked();
    void on_bSendProfileManual_clicked();
    void on_bPauseTestManual_clicked();
    void on_bPauseTest_clicked();
    void on_bStartMaintenance_clicked();
    void mousePress();
    void mouseWheel();
    void setupComboBoxes();
    void on_ZoomInHor_clicked();
    void on_ZoomOutHor_clicked();
    void on_ZoomInVer_clicked();
    void on_ZoomOutVer_clicked();
    bool on_bTemperatureSet_clicked();
    void on_bSetTemperatureStart_clicked();
    void on_bSetTemperatureStop_clicked();
    void on_cbTSelectSUnit_currentIndexChanged(int index);
    void on_ZoomCenter_clicked();
    void on_bSetExhaustValve_clicked();
    void saveValueExhaustValve(int value);
    void loadValueExhaustValve();
    void saveValueTopTempSensorCalibration();
    void saveValueBottomTempSensorCalibration();
    void saveValuePressureSensor1Calibration();
    void saveValueCleanTankLevelCalibration();
    void saveValueDirtyTankLevelCalibration();
    void saveValueExpansionTankLevelCalibration();
    void loadValueTopTempSensorCalibration();
    void loadValueBottomTempSensorCalibration();
    void loadValuePressureSensor1Calibration();
    void loadValueCleanTankLevelCalibration();
    void loadValueDirtyTankLevelCalibration();
    void loadValueExpansionTankLevelCalibration();
    void on_bSaveCalibrationValues_clicked();
    void on_bCabinDoor_clicked();
    void on_bEditProLook_clicked();
    void on_bClearLogTable_2_clicked();
    void run_keyboard_lineEdit();
    void on_bRecipeMode_clicked();
    void on_bFixMode_clicked();
    void on_b1500hMode_clicked();
    void on_btnBackDetails_clicked();
    void on_btnDetailsInfo_clicked();
    void on_btnDetailsTanklevel_clicked();
    void on_btnDetailsHeater_clicked();
    void on_btnDetailsPressure_clicked();
    void on_bStartTest1500h_clicked();
    bool on_bSendProfile1500h_clicked();
    bool on_checkBox_stateChanged();
    bool on_checkBox_4_clicked();
    bool on_checkBox_5_clicked();
    bool on_checkBox_2_clicked();
    bool on_checkBox_3_clicked();
    void on_bMinimize_2_clicked();
    void on_bMinimize_3_clicked();
    void on_bStopTest1500h_clicked();
    void on_bPauseTest1500h_clicked();
    void on_b_basinc_tank_doldur_clicked();
    void on_b_temiz_tank_bosalt_clicked();
    void on_b_tum_tanklari_bosalt_clicked();
    void on_bResetFault_clicked();
    void resetFault();
    void on_bChooseData_clicked();
    void on_btnDetailsPipes_clicked();
    void on_btnDetailsPressure_2_clicked();
    void on_bDoorControlActive_clicked();
    void on_lineEdit_textChanged();
    void activateCabinDoorLock();
    void on_bDoorCOntrolDeactive_clicked();
    bool on_Hortum1_stateChanged();
    bool on_Hortum2_stateChanged();
    bool on_Hortum3_stateChanged();
    bool on_Hortum4_stateChanged();
    bool on_Hortum5_stateChanged();
    void on_bManualPressureLinesStart_clicked();
    void on_bManualPressureLinesStop_clicked();
    void on_bManualEvacLines_clicked();
    void on_bManualPrepareLines_clicked();
    void on_bBuzzerReset_clicked();
    void setTestPaused();
    void defineHalfTest(quint32 testID);

private:

    mySerial *serial;
    writeInfosToText *writeToLogText;
    QTimer *timer1000, *timer250, *timerTemp, *timerVib, *timerPressure,*timerScreen;
    SerialProcess *proc;
    Numpad *lineEditkeyboard;
};

class UpdateInfoBytes{
public:
    void    message();
    PLC     updateInfoByte(Ui::MainWindow *ui,quint8 index, QByteArray data);
    void    updateInfoByte0E(Ui::MainWindow *ui, QByteArray data);
    void    updateInfoByte0C(Ui::MainWindow *ui, QByteArray data);
    void    updateInfoByte0D(Ui::MainWindow *ui, QByteArray data);
    void    visualsToStop(Ui::MainWindow *ui);
    void    visualsToRecipeMode(Ui::MainWindow *ui);
    void    visualsToPause(Ui::MainWindow *ui);
    void    visualsToMaintenanceMode(Ui::MainWindow *ui);
    void    visualsToFixMode(Ui::MainWindow *ui);
    void    visualsTo1500hMode(Ui::MainWindow *ui);
    void    writeToLogTable(Ui::MainWindow *ui, QString info);
    writeInfosToText *LogControl;
    Test generateTest(TestTypes type);
    qint32 getTestID();
    void setLastTestID(qint32 testID);
    void addTestToList(qint32 lastTestID);
    void testInfosToTxt(Test test);
};

#endif // MAINWINDOW_H
