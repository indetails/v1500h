/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[137];
    char stringdata0[3111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 19), // "setTestDatasToGraph"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "testID"
QT_MOC_LITERAL(4, 39, 13), // "serialMessage"
QT_MOC_LITERAL(5, 53, 7), // "command"
QT_MOC_LITERAL(6, 61, 4), // "data"
QT_MOC_LITERAL(7, 66, 38), // "on_cbSelectProfile_currentInd..."
QT_MOC_LITERAL(8, 105, 5), // "index"
QT_MOC_LITERAL(9, 111, 19), // "on_bEditPro_clicked"
QT_MOC_LITERAL(10, 131, 20), // "on_bClearPro_clicked"
QT_MOC_LITERAL(11, 152, 19), // "on_bSavePro_clicked"
QT_MOC_LITERAL(12, 172, 14), // "updateTPreview"
QT_MOC_LITERAL(13, 187, 20), // "on_bNewTStep_clicked"
QT_MOC_LITERAL(14, 208, 21), // "on_bTForward2_clicked"
QT_MOC_LITERAL(15, 230, 18), // "on_bTBack2_clicked"
QT_MOC_LITERAL(16, 249, 18), // "on_bTBack3_clicked"
QT_MOC_LITERAL(17, 268, 21), // "on_bTSaveStep_clicked"
QT_MOC_LITERAL(18, 290, 12), // "readProfiles"
QT_MOC_LITERAL(19, 303, 5), // "rType"
QT_MOC_LITERAL(20, 309, 42), // "on_cbSelectProfileMain_curren..."
QT_MOC_LITERAL(21, 352, 21), // "sendProfileOverSerial"
QT_MOC_LITERAL(22, 374, 4), // "mode"
QT_MOC_LITERAL(23, 379, 21), // "on_bStartTest_clicked"
QT_MOC_LITERAL(24, 401, 20), // "on_bStopTest_clicked"
QT_MOC_LITERAL(25, 422, 15), // "askSensorValues"
QT_MOC_LITERAL(26, 438, 13), // "askOtherStuff"
QT_MOC_LITERAL(27, 452, 18), // "getCurrentDateTime"
QT_MOC_LITERAL(28, 471, 17), // "prepareTestTimers"
QT_MOC_LITERAL(29, 489, 10), // "updateInfo"
QT_MOC_LITERAL(30, 500, 15), // "writeToLogTable"
QT_MOC_LITERAL(31, 516, 4), // "info"
QT_MOC_LITERAL(32, 521, 8), // "commInfo"
QT_MOC_LITERAL(33, 530, 6), // "status"
QT_MOC_LITERAL(34, 537, 11), // "updateTPlot"
QT_MOC_LITERAL(35, 549, 11), // "profileSent"
QT_MOC_LITERAL(36, 561, 11), // "setupTGraph"
QT_MOC_LITERAL(37, 573, 18), // "setupPreviewGraphs"
QT_MOC_LITERAL(38, 592, 12), // "setupVisuals"
QT_MOC_LITERAL(39, 605, 22), // "on_bScreenshot_clicked"
QT_MOC_LITERAL(40, 628, 20), // "on_bScreenshot_saved"
QT_MOC_LITERAL(41, 649, 15), // "on_bRes_clicked"
QT_MOC_LITERAL(42, 665, 15), // "on_bFan_clicked"
QT_MOC_LITERAL(43, 681, 22), // "on_bLightsMain_clicked"
QT_MOC_LITERAL(44, 704, 10), // "closeEvent"
QT_MOC_LITERAL(45, 715, 12), // "QCloseEvent*"
QT_MOC_LITERAL(46, 728, 5), // "event"
QT_MOC_LITERAL(47, 734, 25), // "on_bClearLogTable_clicked"
QT_MOC_LITERAL(48, 760, 16), // "clearProfileSlot"
QT_MOC_LITERAL(49, 777, 5), // "sType"
QT_MOC_LITERAL(50, 783, 5), // "pType"
QT_MOC_LITERAL(51, 789, 43), // "on_cbSelectMethodManual_curre..."
QT_MOC_LITERAL(52, 833, 44), // "on_cbSelectProfileManual_curr..."
QT_MOC_LITERAL(53, 878, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(54, 906, 27), // "on_bSendProfileMain_clicked"
QT_MOC_LITERAL(55, 934, 27), // "on_bStartTestManual_clicked"
QT_MOC_LITERAL(56, 962, 26), // "on_bStopTestManual_clicked"
QT_MOC_LITERAL(57, 989, 29), // "on_bSendProfileManual_clicked"
QT_MOC_LITERAL(58, 1019, 27), // "on_bPauseTestManual_clicked"
QT_MOC_LITERAL(59, 1047, 21), // "on_bPauseTest_clicked"
QT_MOC_LITERAL(60, 1069, 28), // "on_bStartMaintenance_clicked"
QT_MOC_LITERAL(61, 1098, 10), // "mousePress"
QT_MOC_LITERAL(62, 1109, 10), // "mouseWheel"
QT_MOC_LITERAL(63, 1120, 15), // "setupComboBoxes"
QT_MOC_LITERAL(64, 1136, 20), // "on_ZoomInHor_clicked"
QT_MOC_LITERAL(65, 1157, 21), // "on_ZoomOutHor_clicked"
QT_MOC_LITERAL(66, 1179, 20), // "on_ZoomInVer_clicked"
QT_MOC_LITERAL(67, 1200, 21), // "on_ZoomOutVer_clicked"
QT_MOC_LITERAL(68, 1222, 26), // "on_bTemperatureSet_clicked"
QT_MOC_LITERAL(69, 1249, 31), // "on_bSetTemperatureStart_clicked"
QT_MOC_LITERAL(70, 1281, 30), // "on_bSetTemperatureStop_clicked"
QT_MOC_LITERAL(71, 1312, 37), // "on_cbTSelectSUnit_currentInde..."
QT_MOC_LITERAL(72, 1350, 21), // "on_ZoomCenter_clicked"
QT_MOC_LITERAL(73, 1372, 27), // "on_bSetExhaustValve_clicked"
QT_MOC_LITERAL(74, 1400, 21), // "saveValueExhaustValve"
QT_MOC_LITERAL(75, 1422, 5), // "value"
QT_MOC_LITERAL(76, 1428, 21), // "loadValueExhaustValve"
QT_MOC_LITERAL(77, 1450, 33), // "saveValueTopTempSensorCalibra..."
QT_MOC_LITERAL(78, 1484, 36), // "saveValueBottomTempSensorCali..."
QT_MOC_LITERAL(79, 1521, 35), // "saveValuePressureSensor1Calib..."
QT_MOC_LITERAL(80, 1557, 34), // "saveValueCleanTankLevelCalibr..."
QT_MOC_LITERAL(81, 1592, 34), // "saveValueDirtyTankLevelCalibr..."
QT_MOC_LITERAL(82, 1627, 38), // "saveValueExpansionTankLevelCa..."
QT_MOC_LITERAL(83, 1666, 33), // "loadValueTopTempSensorCalibra..."
QT_MOC_LITERAL(84, 1700, 36), // "loadValueBottomTempSensorCali..."
QT_MOC_LITERAL(85, 1737, 35), // "loadValuePressureSensor1Calib..."
QT_MOC_LITERAL(86, 1773, 34), // "loadValueCleanTankLevelCalibr..."
QT_MOC_LITERAL(87, 1808, 34), // "loadValueDirtyTankLevelCalibr..."
QT_MOC_LITERAL(88, 1843, 38), // "loadValueExpansionTankLevelCa..."
QT_MOC_LITERAL(89, 1882, 33), // "on_bSaveCalibrationValues_cli..."
QT_MOC_LITERAL(90, 1916, 21), // "on_bCabinDoor_clicked"
QT_MOC_LITERAL(91, 1938, 23), // "on_bEditProLook_clicked"
QT_MOC_LITERAL(92, 1962, 27), // "on_bClearLogTable_2_clicked"
QT_MOC_LITERAL(93, 1990, 21), // "run_keyboard_lineEdit"
QT_MOC_LITERAL(94, 2012, 22), // "on_bRecipeMode_clicked"
QT_MOC_LITERAL(95, 2035, 19), // "on_bFixMode_clicked"
QT_MOC_LITERAL(96, 2055, 21), // "on_b1500hMode_clicked"
QT_MOC_LITERAL(97, 2077, 25), // "on_btnBackDetails_clicked"
QT_MOC_LITERAL(98, 2103, 25), // "on_btnDetailsInfo_clicked"
QT_MOC_LITERAL(99, 2129, 30), // "on_btnDetailsTanklevel_clicked"
QT_MOC_LITERAL(100, 2160, 27), // "on_btnDetailsHeater_clicked"
QT_MOC_LITERAL(101, 2188, 29), // "on_btnDetailsPressure_clicked"
QT_MOC_LITERAL(102, 2218, 26), // "on_bStartTest1500h_clicked"
QT_MOC_LITERAL(103, 2245, 28), // "on_bSendProfile1500h_clicked"
QT_MOC_LITERAL(104, 2274, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(105, 2299, 21), // "on_checkBox_4_clicked"
QT_MOC_LITERAL(106, 2321, 21), // "on_checkBox_5_clicked"
QT_MOC_LITERAL(107, 2343, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(108, 2365, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(109, 2387, 22), // "on_bMinimize_2_clicked"
QT_MOC_LITERAL(110, 2410, 22), // "on_bMinimize_3_clicked"
QT_MOC_LITERAL(111, 2433, 25), // "on_bStopTest1500h_clicked"
QT_MOC_LITERAL(112, 2459, 26), // "on_bPauseTest1500h_clicked"
QT_MOC_LITERAL(113, 2486, 31), // "on_b_basinc_tank_doldur_clicked"
QT_MOC_LITERAL(114, 2518, 30), // "on_b_temiz_tank_bosalt_clicked"
QT_MOC_LITERAL(115, 2549, 32), // "on_b_tum_tanklari_bosalt_clicked"
QT_MOC_LITERAL(116, 2582, 22), // "on_bResetFault_clicked"
QT_MOC_LITERAL(117, 2605, 10), // "resetFault"
QT_MOC_LITERAL(118, 2616, 22), // "on_bChooseData_clicked"
QT_MOC_LITERAL(119, 2639, 26), // "on_btnDetailsPipes_clicked"
QT_MOC_LITERAL(120, 2666, 31), // "on_btnDetailsPressure_2_clicked"
QT_MOC_LITERAL(121, 2698, 29), // "on_bDoorControlActive_clicked"
QT_MOC_LITERAL(122, 2728, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(123, 2752, 21), // "activateCabinDoorLock"
QT_MOC_LITERAL(124, 2774, 31), // "on_bDoorCOntrolDeactive_clicked"
QT_MOC_LITERAL(125, 2806, 23), // "on_Hortum1_stateChanged"
QT_MOC_LITERAL(126, 2830, 23), // "on_Hortum2_stateChanged"
QT_MOC_LITERAL(127, 2854, 23), // "on_Hortum3_stateChanged"
QT_MOC_LITERAL(128, 2878, 23), // "on_Hortum4_stateChanged"
QT_MOC_LITERAL(129, 2902, 23), // "on_Hortum5_stateChanged"
QT_MOC_LITERAL(130, 2926, 36), // "on_bManualPressureLinesStart_..."
QT_MOC_LITERAL(131, 2963, 35), // "on_bManualPressureLinesStop_c..."
QT_MOC_LITERAL(132, 2999, 27), // "on_bManualEvacLines_clicked"
QT_MOC_LITERAL(133, 3027, 30), // "on_bManualPrepareLines_clicked"
QT_MOC_LITERAL(134, 3058, 23), // "on_bBuzzerReset_clicked"
QT_MOC_LITERAL(135, 3082, 13), // "setTestPaused"
QT_MOC_LITERAL(136, 3096, 14) // "defineHalfTest"

    },
    "MainWindow\0setTestDatasToGraph\0\0testID\0"
    "serialMessage\0command\0data\0"
    "on_cbSelectProfile_currentIndexChanged\0"
    "index\0on_bEditPro_clicked\0"
    "on_bClearPro_clicked\0on_bSavePro_clicked\0"
    "updateTPreview\0on_bNewTStep_clicked\0"
    "on_bTForward2_clicked\0on_bTBack2_clicked\0"
    "on_bTBack3_clicked\0on_bTSaveStep_clicked\0"
    "readProfiles\0rType\0"
    "on_cbSelectProfileMain_currentIndexChanged\0"
    "sendProfileOverSerial\0mode\0"
    "on_bStartTest_clicked\0on_bStopTest_clicked\0"
    "askSensorValues\0askOtherStuff\0"
    "getCurrentDateTime\0prepareTestTimers\0"
    "updateInfo\0writeToLogTable\0info\0"
    "commInfo\0status\0updateTPlot\0profileSent\0"
    "setupTGraph\0setupPreviewGraphs\0"
    "setupVisuals\0on_bScreenshot_clicked\0"
    "on_bScreenshot_saved\0on_bRes_clicked\0"
    "on_bFan_clicked\0on_bLightsMain_clicked\0"
    "closeEvent\0QCloseEvent*\0event\0"
    "on_bClearLogTable_clicked\0clearProfileSlot\0"
    "sType\0pType\0on_cbSelectMethodManual_currentIndexChanged\0"
    "on_cbSelectProfileManual_currentIndexChanged\0"
    "on_tabWidget_currentChanged\0"
    "on_bSendProfileMain_clicked\0"
    "on_bStartTestManual_clicked\0"
    "on_bStopTestManual_clicked\0"
    "on_bSendProfileManual_clicked\0"
    "on_bPauseTestManual_clicked\0"
    "on_bPauseTest_clicked\0"
    "on_bStartMaintenance_clicked\0mousePress\0"
    "mouseWheel\0setupComboBoxes\0"
    "on_ZoomInHor_clicked\0on_ZoomOutHor_clicked\0"
    "on_ZoomInVer_clicked\0on_ZoomOutVer_clicked\0"
    "on_bTemperatureSet_clicked\0"
    "on_bSetTemperatureStart_clicked\0"
    "on_bSetTemperatureStop_clicked\0"
    "on_cbTSelectSUnit_currentIndexChanged\0"
    "on_ZoomCenter_clicked\0on_bSetExhaustValve_clicked\0"
    "saveValueExhaustValve\0value\0"
    "loadValueExhaustValve\0"
    "saveValueTopTempSensorCalibration\0"
    "saveValueBottomTempSensorCalibration\0"
    "saveValuePressureSensor1Calibration\0"
    "saveValueCleanTankLevelCalibration\0"
    "saveValueDirtyTankLevelCalibration\0"
    "saveValueExpansionTankLevelCalibration\0"
    "loadValueTopTempSensorCalibration\0"
    "loadValueBottomTempSensorCalibration\0"
    "loadValuePressureSensor1Calibration\0"
    "loadValueCleanTankLevelCalibration\0"
    "loadValueDirtyTankLevelCalibration\0"
    "loadValueExpansionTankLevelCalibration\0"
    "on_bSaveCalibrationValues_clicked\0"
    "on_bCabinDoor_clicked\0on_bEditProLook_clicked\0"
    "on_bClearLogTable_2_clicked\0"
    "run_keyboard_lineEdit\0on_bRecipeMode_clicked\0"
    "on_bFixMode_clicked\0on_b1500hMode_clicked\0"
    "on_btnBackDetails_clicked\0"
    "on_btnDetailsInfo_clicked\0"
    "on_btnDetailsTanklevel_clicked\0"
    "on_btnDetailsHeater_clicked\0"
    "on_btnDetailsPressure_clicked\0"
    "on_bStartTest1500h_clicked\0"
    "on_bSendProfile1500h_clicked\0"
    "on_checkBox_stateChanged\0on_checkBox_4_clicked\0"
    "on_checkBox_5_clicked\0on_checkBox_2_clicked\0"
    "on_checkBox_3_clicked\0on_bMinimize_2_clicked\0"
    "on_bMinimize_3_clicked\0on_bStopTest1500h_clicked\0"
    "on_bPauseTest1500h_clicked\0"
    "on_b_basinc_tank_doldur_clicked\0"
    "on_b_temiz_tank_bosalt_clicked\0"
    "on_b_tum_tanklari_bosalt_clicked\0"
    "on_bResetFault_clicked\0resetFault\0"
    "on_bChooseData_clicked\0"
    "on_btnDetailsPipes_clicked\0"
    "on_btnDetailsPressure_2_clicked\0"
    "on_bDoorControlActive_clicked\0"
    "on_lineEdit_textChanged\0activateCabinDoorLock\0"
    "on_bDoorCOntrolDeactive_clicked\0"
    "on_Hortum1_stateChanged\0on_Hortum2_stateChanged\0"
    "on_Hortum3_stateChanged\0on_Hortum4_stateChanged\0"
    "on_Hortum5_stateChanged\0"
    "on_bManualPressureLinesStart_clicked\0"
    "on_bManualPressureLinesStop_clicked\0"
    "on_bManualEvacLines_clicked\0"
    "on_bManualPrepareLines_clicked\0"
    "on_bBuzzerReset_clicked\0setTestPaused\0"
    "defineHalfTest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     122,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  624,    2, 0x0a /* Public */,
       4,    2,  627,    2, 0x08 /* Private */,
       7,    1,  632,    2, 0x08 /* Private */,
       9,    0,  635,    2, 0x08 /* Private */,
      10,    0,  636,    2, 0x08 /* Private */,
      11,    0,  637,    2, 0x08 /* Private */,
      12,    0,  638,    2, 0x08 /* Private */,
      13,    0,  639,    2, 0x08 /* Private */,
      14,    0,  640,    2, 0x08 /* Private */,
      15,    0,  641,    2, 0x08 /* Private */,
      16,    0,  642,    2, 0x08 /* Private */,
      17,    0,  643,    2, 0x08 /* Private */,
      18,    2,  644,    2, 0x08 /* Private */,
      20,    1,  649,    2, 0x08 /* Private */,
      21,    2,  652,    2, 0x08 /* Private */,
      23,    0,  657,    2, 0x08 /* Private */,
      24,    0,  658,    2, 0x08 /* Private */,
      25,    0,  659,    2, 0x08 /* Private */,
      26,    0,  660,    2, 0x08 /* Private */,
      27,    0,  661,    2, 0x08 /* Private */,
      28,    0,  662,    2, 0x08 /* Private */,
      29,    0,  663,    2, 0x08 /* Private */,
      30,    1,  664,    2, 0x08 /* Private */,
      32,    1,  667,    2, 0x08 /* Private */,
      34,    0,  670,    2, 0x08 /* Private */,
      35,    0,  671,    2, 0x08 /* Private */,
      36,    0,  672,    2, 0x08 /* Private */,
      37,    0,  673,    2, 0x08 /* Private */,
      38,    0,  674,    2, 0x08 /* Private */,
      39,    0,  675,    2, 0x08 /* Private */,
      40,    0,  676,    2, 0x08 /* Private */,
      41,    0,  677,    2, 0x08 /* Private */,
      42,    0,  678,    2, 0x08 /* Private */,
      43,    0,  679,    2, 0x08 /* Private */,
      44,    1,  680,    2, 0x08 /* Private */,
      47,    0,  683,    2, 0x08 /* Private */,
      48,    3,  684,    2, 0x08 /* Private */,
      51,    1,  691,    2, 0x08 /* Private */,
      52,    1,  694,    2, 0x08 /* Private */,
      53,    1,  697,    2, 0x08 /* Private */,
      54,    0,  700,    2, 0x08 /* Private */,
      55,    0,  701,    2, 0x08 /* Private */,
      56,    0,  702,    2, 0x08 /* Private */,
      57,    0,  703,    2, 0x08 /* Private */,
      58,    0,  704,    2, 0x08 /* Private */,
      59,    0,  705,    2, 0x08 /* Private */,
      60,    0,  706,    2, 0x08 /* Private */,
      61,    0,  707,    2, 0x08 /* Private */,
      62,    0,  708,    2, 0x08 /* Private */,
      63,    0,  709,    2, 0x08 /* Private */,
      64,    0,  710,    2, 0x08 /* Private */,
      65,    0,  711,    2, 0x08 /* Private */,
      66,    0,  712,    2, 0x08 /* Private */,
      67,    0,  713,    2, 0x08 /* Private */,
      68,    0,  714,    2, 0x08 /* Private */,
      69,    0,  715,    2, 0x08 /* Private */,
      70,    0,  716,    2, 0x08 /* Private */,
      71,    1,  717,    2, 0x08 /* Private */,
      72,    0,  720,    2, 0x08 /* Private */,
      73,    0,  721,    2, 0x08 /* Private */,
      74,    1,  722,    2, 0x08 /* Private */,
      76,    0,  725,    2, 0x08 /* Private */,
      77,    0,  726,    2, 0x08 /* Private */,
      78,    0,  727,    2, 0x08 /* Private */,
      79,    0,  728,    2, 0x08 /* Private */,
      80,    0,  729,    2, 0x08 /* Private */,
      81,    0,  730,    2, 0x08 /* Private */,
      82,    0,  731,    2, 0x08 /* Private */,
      83,    0,  732,    2, 0x08 /* Private */,
      84,    0,  733,    2, 0x08 /* Private */,
      85,    0,  734,    2, 0x08 /* Private */,
      86,    0,  735,    2, 0x08 /* Private */,
      87,    0,  736,    2, 0x08 /* Private */,
      88,    0,  737,    2, 0x08 /* Private */,
      89,    0,  738,    2, 0x08 /* Private */,
      90,    0,  739,    2, 0x08 /* Private */,
      91,    0,  740,    2, 0x08 /* Private */,
      92,    0,  741,    2, 0x08 /* Private */,
      93,    0,  742,    2, 0x08 /* Private */,
      94,    0,  743,    2, 0x08 /* Private */,
      95,    0,  744,    2, 0x08 /* Private */,
      96,    0,  745,    2, 0x08 /* Private */,
      97,    0,  746,    2, 0x08 /* Private */,
      98,    0,  747,    2, 0x08 /* Private */,
      99,    0,  748,    2, 0x08 /* Private */,
     100,    0,  749,    2, 0x08 /* Private */,
     101,    0,  750,    2, 0x08 /* Private */,
     102,    0,  751,    2, 0x08 /* Private */,
     103,    0,  752,    2, 0x08 /* Private */,
     104,    0,  753,    2, 0x08 /* Private */,
     105,    0,  754,    2, 0x08 /* Private */,
     106,    0,  755,    2, 0x08 /* Private */,
     107,    0,  756,    2, 0x08 /* Private */,
     108,    0,  757,    2, 0x08 /* Private */,
     109,    0,  758,    2, 0x08 /* Private */,
     110,    0,  759,    2, 0x08 /* Private */,
     111,    0,  760,    2, 0x08 /* Private */,
     112,    0,  761,    2, 0x08 /* Private */,
     113,    0,  762,    2, 0x08 /* Private */,
     114,    0,  763,    2, 0x08 /* Private */,
     115,    0,  764,    2, 0x08 /* Private */,
     116,    0,  765,    2, 0x08 /* Private */,
     117,    0,  766,    2, 0x08 /* Private */,
     118,    0,  767,    2, 0x08 /* Private */,
     119,    0,  768,    2, 0x08 /* Private */,
     120,    0,  769,    2, 0x08 /* Private */,
     121,    0,  770,    2, 0x08 /* Private */,
     122,    0,  771,    2, 0x08 /* Private */,
     123,    0,  772,    2, 0x08 /* Private */,
     124,    0,  773,    2, 0x08 /* Private */,
     125,    0,  774,    2, 0x08 /* Private */,
     126,    0,  775,    2, 0x08 /* Private */,
     127,    0,  776,    2, 0x08 /* Private */,
     128,    0,  777,    2, 0x08 /* Private */,
     129,    0,  778,    2, 0x08 /* Private */,
     130,    0,  779,    2, 0x08 /* Private */,
     131,    0,  780,    2, 0x08 /* Private */,
     132,    0,  781,    2, 0x08 /* Private */,
     133,    0,  782,    2, 0x08 /* Private */,
     134,    0,  783,    2, 0x08 /* Private */,
     135,    0,  784,    2, 0x08 /* Private */,
     136,    1,  785,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::UInt,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Char, QMetaType::Int,   19,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   22,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::Bool,   33,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 45,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char, QMetaType::Char, QMetaType::UChar,   49,   50,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UInt,    3,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setTestDatasToGraph((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        case 1: _t->serialMessage((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 2: _t->on_cbSelectProfile_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_bEditPro_clicked(); break;
        case 4: _t->on_bClearPro_clicked(); break;
        case 5: _t->on_bSavePro_clicked(); break;
        case 6: _t->updateTPreview(); break;
        case 7: _t->on_bNewTStep_clicked(); break;
        case 8: _t->on_bTForward2_clicked(); break;
        case 9: _t->on_bTBack2_clicked(); break;
        case 10: _t->on_bTBack3_clicked(); break;
        case 11: _t->on_bTSaveStep_clicked(); break;
        case 12: { bool _r = _t->readProfiles((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->on_cbSelectProfileMain_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: { bool _r = _t->sendProfileOverSerial((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 15: _t->on_bStartTest_clicked(); break;
        case 16: _t->on_bStopTest_clicked(); break;
        case 17: _t->askSensorValues(); break;
        case 18: _t->askOtherStuff(); break;
        case 19: _t->getCurrentDateTime(); break;
        case 20: _t->prepareTestTimers(); break;
        case 21: _t->updateInfo(); break;
        case 22: _t->writeToLogTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->commInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->updateTPlot(); break;
        case 25: _t->profileSent(); break;
        case 26: _t->setupTGraph(); break;
        case 27: _t->setupPreviewGraphs(); break;
        case 28: _t->setupVisuals(); break;
        case 29: _t->on_bScreenshot_clicked(); break;
        case 30: _t->on_bScreenshot_saved(); break;
        case 31: _t->on_bRes_clicked(); break;
        case 32: _t->on_bFan_clicked(); break;
        case 33: _t->on_bLightsMain_clicked(); break;
        case 34: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 35: _t->on_bClearLogTable_clicked(); break;
        case 36: _t->clearProfileSlot((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 37: _t->on_cbSelectMethodManual_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->on_cbSelectProfileManual_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->on_bSendProfileMain_clicked(); break;
        case 41: _t->on_bStartTestManual_clicked(); break;
        case 42: _t->on_bStopTestManual_clicked(); break;
        case 43: _t->on_bSendProfileManual_clicked(); break;
        case 44: _t->on_bPauseTestManual_clicked(); break;
        case 45: _t->on_bPauseTest_clicked(); break;
        case 46: _t->on_bStartMaintenance_clicked(); break;
        case 47: _t->mousePress(); break;
        case 48: _t->mouseWheel(); break;
        case 49: _t->setupComboBoxes(); break;
        case 50: _t->on_ZoomInHor_clicked(); break;
        case 51: _t->on_ZoomOutHor_clicked(); break;
        case 52: _t->on_ZoomInVer_clicked(); break;
        case 53: _t->on_ZoomOutVer_clicked(); break;
        case 54: { bool _r = _t->on_bTemperatureSet_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 55: _t->on_bSetTemperatureStart_clicked(); break;
        case 56: _t->on_bSetTemperatureStop_clicked(); break;
        case 57: _t->on_cbTSelectSUnit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->on_ZoomCenter_clicked(); break;
        case 59: _t->on_bSetExhaustValve_clicked(); break;
        case 60: _t->saveValueExhaustValve((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->loadValueExhaustValve(); break;
        case 62: _t->saveValueTopTempSensorCalibration(); break;
        case 63: _t->saveValueBottomTempSensorCalibration(); break;
        case 64: _t->saveValuePressureSensor1Calibration(); break;
        case 65: _t->saveValueCleanTankLevelCalibration(); break;
        case 66: _t->saveValueDirtyTankLevelCalibration(); break;
        case 67: _t->saveValueExpansionTankLevelCalibration(); break;
        case 68: _t->loadValueTopTempSensorCalibration(); break;
        case 69: _t->loadValueBottomTempSensorCalibration(); break;
        case 70: _t->loadValuePressureSensor1Calibration(); break;
        case 71: _t->loadValueCleanTankLevelCalibration(); break;
        case 72: _t->loadValueDirtyTankLevelCalibration(); break;
        case 73: _t->loadValueExpansionTankLevelCalibration(); break;
        case 74: _t->on_bSaveCalibrationValues_clicked(); break;
        case 75: _t->on_bCabinDoor_clicked(); break;
        case 76: _t->on_bEditProLook_clicked(); break;
        case 77: _t->on_bClearLogTable_2_clicked(); break;
        case 78: _t->run_keyboard_lineEdit(); break;
        case 79: _t->on_bRecipeMode_clicked(); break;
        case 80: _t->on_bFixMode_clicked(); break;
        case 81: _t->on_b1500hMode_clicked(); break;
        case 82: _t->on_btnBackDetails_clicked(); break;
        case 83: _t->on_btnDetailsInfo_clicked(); break;
        case 84: _t->on_btnDetailsTanklevel_clicked(); break;
        case 85: _t->on_btnDetailsHeater_clicked(); break;
        case 86: _t->on_btnDetailsPressure_clicked(); break;
        case 87: _t->on_bStartTest1500h_clicked(); break;
        case 88: { bool _r = _t->on_bSendProfile1500h_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 89: { bool _r = _t->on_checkBox_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 90: { bool _r = _t->on_checkBox_4_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 91: { bool _r = _t->on_checkBox_5_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 92: { bool _r = _t->on_checkBox_2_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 93: { bool _r = _t->on_checkBox_3_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 94: _t->on_bMinimize_2_clicked(); break;
        case 95: _t->on_bMinimize_3_clicked(); break;
        case 96: _t->on_bStopTest1500h_clicked(); break;
        case 97: _t->on_bPauseTest1500h_clicked(); break;
        case 98: _t->on_b_basinc_tank_doldur_clicked(); break;
        case 99: _t->on_b_temiz_tank_bosalt_clicked(); break;
        case 100: _t->on_b_tum_tanklari_bosalt_clicked(); break;
        case 101: _t->on_bResetFault_clicked(); break;
        case 102: _t->resetFault(); break;
        case 103: _t->on_bChooseData_clicked(); break;
        case 104: _t->on_btnDetailsPipes_clicked(); break;
        case 105: _t->on_btnDetailsPressure_2_clicked(); break;
        case 106: _t->on_bDoorControlActive_clicked(); break;
        case 107: _t->on_lineEdit_textChanged(); break;
        case 108: _t->activateCabinDoorLock(); break;
        case 109: _t->on_bDoorCOntrolDeactive_clicked(); break;
        case 110: { bool _r = _t->on_Hortum1_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 111: { bool _r = _t->on_Hortum2_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 112: { bool _r = _t->on_Hortum3_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 113: { bool _r = _t->on_Hortum4_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 114: { bool _r = _t->on_Hortum5_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 115: _t->on_bManualPressureLinesStart_clicked(); break;
        case 116: _t->on_bManualPressureLinesStop_clicked(); break;
        case 117: _t->on_bManualEvacLines_clicked(); break;
        case 118: _t->on_bManualPrepareLines_clicked(); break;
        case 119: _t->on_bBuzzerReset_clicked(); break;
        case 120: _t->setTestPaused(); break;
        case 121: _t->defineHalfTest((*reinterpret_cast< quint32(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 122)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 122;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 122)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 122;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
