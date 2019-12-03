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
    QByteArrayData data[143];
    char stringdata0[3235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 36), // "on_cbSelectGraph_currentIndex..."
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 5), // "index"
QT_MOC_LITERAL(4, 55, 13), // "serialMessage"
QT_MOC_LITERAL(5, 69, 7), // "command"
QT_MOC_LITERAL(6, 77, 4), // "data"
QT_MOC_LITERAL(7, 82, 38), // "on_cbSelectProfile_currentInd..."
QT_MOC_LITERAL(8, 121, 19), // "on_bEditPro_clicked"
QT_MOC_LITERAL(9, 141, 20), // "on_bClearPro_clicked"
QT_MOC_LITERAL(10, 162, 19), // "on_bSavePro_clicked"
QT_MOC_LITERAL(11, 182, 14), // "updateTPreview"
QT_MOC_LITERAL(12, 197, 20), // "on_bNewTStep_clicked"
QT_MOC_LITERAL(13, 218, 21), // "on_bTForward2_clicked"
QT_MOC_LITERAL(14, 240, 18), // "on_bTBack2_clicked"
QT_MOC_LITERAL(15, 259, 18), // "on_bTBack3_clicked"
QT_MOC_LITERAL(16, 278, 21), // "on_bTSaveStep_clicked"
QT_MOC_LITERAL(17, 300, 12), // "readProfiles"
QT_MOC_LITERAL(18, 313, 5), // "rType"
QT_MOC_LITERAL(19, 319, 42), // "on_cbSelectProfileMain_curren..."
QT_MOC_LITERAL(20, 362, 21), // "sendProfileOverSerial"
QT_MOC_LITERAL(21, 384, 4), // "mode"
QT_MOC_LITERAL(22, 389, 21), // "on_bStartTest_clicked"
QT_MOC_LITERAL(23, 411, 20), // "on_bStopTest_clicked"
QT_MOC_LITERAL(24, 432, 15), // "askSensorValues"
QT_MOC_LITERAL(25, 448, 13), // "askOtherStuff"
QT_MOC_LITERAL(26, 462, 18), // "getCurrentDateTime"
QT_MOC_LITERAL(27, 481, 17), // "prepareTestTimers"
QT_MOC_LITERAL(28, 499, 10), // "updateInfo"
QT_MOC_LITERAL(29, 510, 15), // "writeToLogTable"
QT_MOC_LITERAL(30, 526, 4), // "info"
QT_MOC_LITERAL(31, 531, 8), // "commInfo"
QT_MOC_LITERAL(32, 540, 6), // "status"
QT_MOC_LITERAL(33, 547, 11), // "updateTPlot"
QT_MOC_LITERAL(34, 559, 12), // "updatePPlots"
QT_MOC_LITERAL(35, 572, 11), // "profileSent"
QT_MOC_LITERAL(36, 584, 11), // "setupTGraph"
QT_MOC_LITERAL(37, 596, 12), // "setupPGraphs"
QT_MOC_LITERAL(38, 609, 11), // "setupVGraph"
QT_MOC_LITERAL(39, 621, 18), // "setupPreviewGraphs"
QT_MOC_LITERAL(40, 640, 12), // "setupVisuals"
QT_MOC_LITERAL(41, 653, 22), // "on_bScreenshot_clicked"
QT_MOC_LITERAL(42, 676, 20), // "on_bScreenshot_saved"
QT_MOC_LITERAL(43, 697, 15), // "on_bRes_clicked"
QT_MOC_LITERAL(44, 713, 15), // "on_bFan_clicked"
QT_MOC_LITERAL(45, 729, 22), // "on_bLightsMain_clicked"
QT_MOC_LITERAL(46, 752, 10), // "closeEvent"
QT_MOC_LITERAL(47, 763, 12), // "QCloseEvent*"
QT_MOC_LITERAL(48, 776, 5), // "event"
QT_MOC_LITERAL(49, 782, 25), // "on_bClearLogTable_clicked"
QT_MOC_LITERAL(50, 808, 16), // "clearProfileSlot"
QT_MOC_LITERAL(51, 825, 5), // "sType"
QT_MOC_LITERAL(52, 831, 5), // "pType"
QT_MOC_LITERAL(53, 837, 43), // "on_cbSelectMethodManual_curre..."
QT_MOC_LITERAL(54, 881, 44), // "on_cbSelectProfileManual_curr..."
QT_MOC_LITERAL(55, 926, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(56, 954, 27), // "on_bSendProfileMain_clicked"
QT_MOC_LITERAL(57, 982, 27), // "on_bStartTestManual_clicked"
QT_MOC_LITERAL(58, 1010, 26), // "on_bStopTestManual_clicked"
QT_MOC_LITERAL(59, 1037, 29), // "on_bSendProfileManual_clicked"
QT_MOC_LITERAL(60, 1067, 27), // "on_bPauseTestManual_clicked"
QT_MOC_LITERAL(61, 1095, 21), // "on_bPauseTest_clicked"
QT_MOC_LITERAL(62, 1117, 28), // "on_bStartMaintenance_clicked"
QT_MOC_LITERAL(63, 1146, 10), // "mousePress"
QT_MOC_LITERAL(64, 1157, 10), // "mouseWheel"
QT_MOC_LITERAL(65, 1168, 15), // "setupComboBoxes"
QT_MOC_LITERAL(66, 1184, 20), // "on_ZoomInHor_clicked"
QT_MOC_LITERAL(67, 1205, 21), // "on_ZoomOutHor_clicked"
QT_MOC_LITERAL(68, 1227, 20), // "on_ZoomInVer_clicked"
QT_MOC_LITERAL(69, 1248, 21), // "on_ZoomOutVer_clicked"
QT_MOC_LITERAL(70, 1270, 26), // "on_bTemperatureSet_clicked"
QT_MOC_LITERAL(71, 1297, 31), // "on_bSetTemperatureStart_clicked"
QT_MOC_LITERAL(72, 1329, 30), // "on_bSetTemperatureStop_clicked"
QT_MOC_LITERAL(73, 1360, 37), // "on_cbTSelectSUnit_currentInde..."
QT_MOC_LITERAL(74, 1398, 21), // "on_ZoomCenter_clicked"
QT_MOC_LITERAL(75, 1420, 27), // "on_bSetExhaustValve_clicked"
QT_MOC_LITERAL(76, 1448, 21), // "saveValueExhaustValve"
QT_MOC_LITERAL(77, 1470, 5), // "value"
QT_MOC_LITERAL(78, 1476, 21), // "loadValueExhaustValve"
QT_MOC_LITERAL(79, 1498, 33), // "saveValueTopTempSensorCalibra..."
QT_MOC_LITERAL(80, 1532, 36), // "saveValueBottomTempSensorCali..."
QT_MOC_LITERAL(81, 1569, 35), // "saveValuePressureSensor1Calib..."
QT_MOC_LITERAL(82, 1605, 34), // "saveValueCleanTankLevelCalibr..."
QT_MOC_LITERAL(83, 1640, 34), // "saveValueDirtyTankLevelCalibr..."
QT_MOC_LITERAL(84, 1675, 38), // "saveValueExpansionTankLevelCa..."
QT_MOC_LITERAL(85, 1714, 33), // "loadValueTopTempSensorCalibra..."
QT_MOC_LITERAL(86, 1748, 36), // "loadValueBottomTempSensorCali..."
QT_MOC_LITERAL(87, 1785, 35), // "loadValuePressureSensor1Calib..."
QT_MOC_LITERAL(88, 1821, 34), // "loadValueCleanTankLevelCalibr..."
QT_MOC_LITERAL(89, 1856, 34), // "loadValueDirtyTankLevelCalibr..."
QT_MOC_LITERAL(90, 1891, 38), // "loadValueExpansionTankLevelCa..."
QT_MOC_LITERAL(91, 1930, 33), // "on_bSaveCalibrationValues_cli..."
QT_MOC_LITERAL(92, 1964, 21), // "on_bCabinDoor_clicked"
QT_MOC_LITERAL(93, 1986, 23), // "on_bEditProLook_clicked"
QT_MOC_LITERAL(94, 2010, 27), // "on_bClearLogTable_2_clicked"
QT_MOC_LITERAL(95, 2038, 21), // "run_keyboard_lineEdit"
QT_MOC_LITERAL(96, 2060, 22), // "on_bRecipeMode_clicked"
QT_MOC_LITERAL(97, 2083, 19), // "on_bFixMode_clicked"
QT_MOC_LITERAL(98, 2103, 21), // "on_b1500hMode_clicked"
QT_MOC_LITERAL(99, 2125, 25), // "on_btnBackDetails_clicked"
QT_MOC_LITERAL(100, 2151, 25), // "on_btnDetailsInfo_clicked"
QT_MOC_LITERAL(101, 2177, 30), // "on_btnDetailsTanklevel_clicked"
QT_MOC_LITERAL(102, 2208, 27), // "on_btnDetailsHeater_clicked"
QT_MOC_LITERAL(103, 2236, 29), // "on_btnDetailsPressure_clicked"
QT_MOC_LITERAL(104, 2266, 26), // "on_bStartTest1500h_clicked"
QT_MOC_LITERAL(105, 2293, 28), // "on_bSendProfile1500h_clicked"
QT_MOC_LITERAL(106, 2322, 24), // "on_checkBox_stateChanged"
QT_MOC_LITERAL(107, 2347, 21), // "on_checkBox_4_clicked"
QT_MOC_LITERAL(108, 2369, 21), // "on_checkBox_5_clicked"
QT_MOC_LITERAL(109, 2391, 21), // "on_checkBox_2_clicked"
QT_MOC_LITERAL(110, 2413, 21), // "on_checkBox_3_clicked"
QT_MOC_LITERAL(111, 2435, 22), // "on_bMinimize_2_clicked"
QT_MOC_LITERAL(112, 2458, 22), // "on_bMinimize_3_clicked"
QT_MOC_LITERAL(113, 2481, 25), // "on_bStopTest1500h_clicked"
QT_MOC_LITERAL(114, 2507, 26), // "on_bPauseTest1500h_clicked"
QT_MOC_LITERAL(115, 2534, 19), // "on_b_pipe_1_clicked"
QT_MOC_LITERAL(116, 2554, 19), // "on_b_pipe_2_clicked"
QT_MOC_LITERAL(117, 2574, 19), // "on_b_pipe_3_clicked"
QT_MOC_LITERAL(118, 2594, 19), // "on_b_pipe_4_clicked"
QT_MOC_LITERAL(119, 2614, 19), // "on_b_pipe_5_clicked"
QT_MOC_LITERAL(120, 2634, 31), // "on_b_basinc_tank_doldur_clicked"
QT_MOC_LITERAL(121, 2666, 30), // "on_b_temiz_tank_bosalt_clicked"
QT_MOC_LITERAL(122, 2697, 32), // "on_b_tum_tanklari_bosalt_clicked"
QT_MOC_LITERAL(123, 2730, 22), // "on_bResetFault_clicked"
QT_MOC_LITERAL(124, 2753, 10), // "resetFault"
QT_MOC_LITERAL(125, 2764, 22), // "on_bChooseData_clicked"
QT_MOC_LITERAL(126, 2787, 26), // "on_btnDetailsPipes_clicked"
QT_MOC_LITERAL(127, 2814, 31), // "on_btnDetailsPressure_2_clicked"
QT_MOC_LITERAL(128, 2846, 29), // "on_bDoorControlActive_clicked"
QT_MOC_LITERAL(129, 2876, 23), // "on_lineEdit_textChanged"
QT_MOC_LITERAL(130, 2900, 4), // "arg1"
QT_MOC_LITERAL(131, 2905, 21), // "activateCabinDoorLock"
QT_MOC_LITERAL(132, 2927, 31), // "on_bDoorCOntrolDeactive_clicked"
QT_MOC_LITERAL(133, 2959, 23), // "on_Hortum1_stateChanged"
QT_MOC_LITERAL(134, 2983, 23), // "on_Hortum2_stateChanged"
QT_MOC_LITERAL(135, 3007, 23), // "on_Hortum3_stateChanged"
QT_MOC_LITERAL(136, 3031, 23), // "on_Hortum4_stateChanged"
QT_MOC_LITERAL(137, 3055, 23), // "on_Hortum5_stateChanged"
QT_MOC_LITERAL(138, 3079, 36), // "on_bManualPressureLinesStart_..."
QT_MOC_LITERAL(139, 3116, 35), // "on_bManualPressureLinesStop_c..."
QT_MOC_LITERAL(140, 3152, 27), // "on_bManualEvacLines_clicked"
QT_MOC_LITERAL(141, 3180, 30), // "on_bManualPrepareLines_clicked"
QT_MOC_LITERAL(142, 3211, 23) // "on_bBuzzerReset_clicked"

    },
    "MainWindow\0on_cbSelectGraph_currentIndexChanged\0"
    "\0index\0serialMessage\0command\0data\0"
    "on_cbSelectProfile_currentIndexChanged\0"
    "on_bEditPro_clicked\0on_bClearPro_clicked\0"
    "on_bSavePro_clicked\0updateTPreview\0"
    "on_bNewTStep_clicked\0on_bTForward2_clicked\0"
    "on_bTBack2_clicked\0on_bTBack3_clicked\0"
    "on_bTSaveStep_clicked\0readProfiles\0"
    "rType\0on_cbSelectProfileMain_currentIndexChanged\0"
    "sendProfileOverSerial\0mode\0"
    "on_bStartTest_clicked\0on_bStopTest_clicked\0"
    "askSensorValues\0askOtherStuff\0"
    "getCurrentDateTime\0prepareTestTimers\0"
    "updateInfo\0writeToLogTable\0info\0"
    "commInfo\0status\0updateTPlot\0updatePPlots\0"
    "profileSent\0setupTGraph\0setupPGraphs\0"
    "setupVGraph\0setupPreviewGraphs\0"
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
    "on_b_pipe_1_clicked\0on_b_pipe_2_clicked\0"
    "on_b_pipe_3_clicked\0on_b_pipe_4_clicked\0"
    "on_b_pipe_5_clicked\0on_b_basinc_tank_doldur_clicked\0"
    "on_b_temiz_tank_bosalt_clicked\0"
    "on_b_tum_tanklari_bosalt_clicked\0"
    "on_bResetFault_clicked\0resetFault\0"
    "on_bChooseData_clicked\0"
    "on_btnDetailsPipes_clicked\0"
    "on_btnDetailsPressure_2_clicked\0"
    "on_bDoorControlActive_clicked\0"
    "on_lineEdit_textChanged\0arg1\0"
    "activateCabinDoorLock\0"
    "on_bDoorCOntrolDeactive_clicked\0"
    "on_Hortum1_stateChanged\0on_Hortum2_stateChanged\0"
    "on_Hortum3_stateChanged\0on_Hortum4_stateChanged\0"
    "on_Hortum5_stateChanged\0"
    "on_bManualPressureLinesStart_clicked\0"
    "on_bManualPressureLinesStop_clicked\0"
    "on_bManualEvacLines_clicked\0"
    "on_bManualPrepareLines_clicked\0"
    "on_bBuzzerReset_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
     128,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  654,    2, 0x08 /* Private */,
       4,    2,  657,    2, 0x08 /* Private */,
       7,    1,  662,    2, 0x08 /* Private */,
       8,    0,  665,    2, 0x08 /* Private */,
       9,    0,  666,    2, 0x08 /* Private */,
      10,    0,  667,    2, 0x08 /* Private */,
      11,    0,  668,    2, 0x08 /* Private */,
      12,    0,  669,    2, 0x08 /* Private */,
      13,    0,  670,    2, 0x08 /* Private */,
      14,    0,  671,    2, 0x08 /* Private */,
      15,    0,  672,    2, 0x08 /* Private */,
      16,    0,  673,    2, 0x08 /* Private */,
      17,    2,  674,    2, 0x08 /* Private */,
      19,    1,  679,    2, 0x08 /* Private */,
      20,    2,  682,    2, 0x08 /* Private */,
      22,    0,  687,    2, 0x08 /* Private */,
      23,    0,  688,    2, 0x08 /* Private */,
      24,    0,  689,    2, 0x08 /* Private */,
      25,    0,  690,    2, 0x08 /* Private */,
      26,    0,  691,    2, 0x08 /* Private */,
      27,    0,  692,    2, 0x08 /* Private */,
      28,    2,  693,    2, 0x08 /* Private */,
      29,    1,  698,    2, 0x08 /* Private */,
      31,    1,  701,    2, 0x08 /* Private */,
      33,    0,  704,    2, 0x08 /* Private */,
      34,    0,  705,    2, 0x08 /* Private */,
      35,    0,  706,    2, 0x08 /* Private */,
      36,    0,  707,    2, 0x08 /* Private */,
      37,    0,  708,    2, 0x08 /* Private */,
      38,    0,  709,    2, 0x08 /* Private */,
      39,    0,  710,    2, 0x08 /* Private */,
      40,    0,  711,    2, 0x08 /* Private */,
      41,    0,  712,    2, 0x08 /* Private */,
      42,    0,  713,    2, 0x08 /* Private */,
      43,    0,  714,    2, 0x08 /* Private */,
      44,    0,  715,    2, 0x08 /* Private */,
      45,    0,  716,    2, 0x08 /* Private */,
      46,    1,  717,    2, 0x08 /* Private */,
      49,    0,  720,    2, 0x08 /* Private */,
      50,    3,  721,    2, 0x08 /* Private */,
      53,    1,  728,    2, 0x08 /* Private */,
      54,    1,  731,    2, 0x08 /* Private */,
      55,    1,  734,    2, 0x08 /* Private */,
      56,    0,  737,    2, 0x08 /* Private */,
      57,    0,  738,    2, 0x08 /* Private */,
      58,    0,  739,    2, 0x08 /* Private */,
      59,    0,  740,    2, 0x08 /* Private */,
      60,    0,  741,    2, 0x08 /* Private */,
      61,    0,  742,    2, 0x08 /* Private */,
      62,    0,  743,    2, 0x08 /* Private */,
      63,    0,  744,    2, 0x08 /* Private */,
      64,    0,  745,    2, 0x08 /* Private */,
      65,    0,  746,    2, 0x08 /* Private */,
      66,    0,  747,    2, 0x08 /* Private */,
      67,    0,  748,    2, 0x08 /* Private */,
      68,    0,  749,    2, 0x08 /* Private */,
      69,    0,  750,    2, 0x08 /* Private */,
      70,    0,  751,    2, 0x08 /* Private */,
      71,    0,  752,    2, 0x08 /* Private */,
      72,    0,  753,    2, 0x08 /* Private */,
      73,    1,  754,    2, 0x08 /* Private */,
      74,    0,  757,    2, 0x08 /* Private */,
      75,    0,  758,    2, 0x08 /* Private */,
      76,    1,  759,    2, 0x08 /* Private */,
      78,    0,  762,    2, 0x08 /* Private */,
      79,    0,  763,    2, 0x08 /* Private */,
      80,    0,  764,    2, 0x08 /* Private */,
      81,    0,  765,    2, 0x08 /* Private */,
      82,    0,  766,    2, 0x08 /* Private */,
      83,    0,  767,    2, 0x08 /* Private */,
      84,    0,  768,    2, 0x08 /* Private */,
      85,    0,  769,    2, 0x08 /* Private */,
      86,    0,  770,    2, 0x08 /* Private */,
      87,    0,  771,    2, 0x08 /* Private */,
      88,    0,  772,    2, 0x08 /* Private */,
      89,    0,  773,    2, 0x08 /* Private */,
      90,    0,  774,    2, 0x08 /* Private */,
      91,    0,  775,    2, 0x08 /* Private */,
      92,    0,  776,    2, 0x08 /* Private */,
      93,    0,  777,    2, 0x08 /* Private */,
      94,    0,  778,    2, 0x08 /* Private */,
      95,    0,  779,    2, 0x08 /* Private */,
      96,    0,  780,    2, 0x08 /* Private */,
      97,    0,  781,    2, 0x08 /* Private */,
      98,    0,  782,    2, 0x08 /* Private */,
      99,    0,  783,    2, 0x08 /* Private */,
     100,    0,  784,    2, 0x08 /* Private */,
     101,    0,  785,    2, 0x08 /* Private */,
     102,    0,  786,    2, 0x08 /* Private */,
     103,    0,  787,    2, 0x08 /* Private */,
     104,    0,  788,    2, 0x08 /* Private */,
     105,    0,  789,    2, 0x08 /* Private */,
     106,    0,  790,    2, 0x08 /* Private */,
     107,    0,  791,    2, 0x08 /* Private */,
     108,    0,  792,    2, 0x08 /* Private */,
     109,    0,  793,    2, 0x08 /* Private */,
     110,    0,  794,    2, 0x08 /* Private */,
     111,    0,  795,    2, 0x08 /* Private */,
     112,    0,  796,    2, 0x08 /* Private */,
     113,    0,  797,    2, 0x08 /* Private */,
     114,    0,  798,    2, 0x08 /* Private */,
     115,    0,  799,    2, 0x08 /* Private */,
     116,    0,  800,    2, 0x08 /* Private */,
     117,    0,  801,    2, 0x08 /* Private */,
     118,    0,  802,    2, 0x08 /* Private */,
     119,    0,  803,    2, 0x08 /* Private */,
     120,    0,  804,    2, 0x08 /* Private */,
     121,    0,  805,    2, 0x08 /* Private */,
     122,    0,  806,    2, 0x08 /* Private */,
     123,    0,  807,    2, 0x08 /* Private */,
     124,    0,  808,    2, 0x08 /* Private */,
     125,    0,  809,    2, 0x08 /* Private */,
     126,    0,  810,    2, 0x08 /* Private */,
     127,    0,  811,    2, 0x08 /* Private */,
     128,    0,  812,    2, 0x08 /* Private */,
     129,    1,  813,    2, 0x08 /* Private */,
     131,    0,  816,    2, 0x08 /* Private */,
     132,    0,  817,    2, 0x08 /* Private */,
     133,    0,  818,    2, 0x08 /* Private */,
     134,    0,  819,    2, 0x08 /* Private */,
     135,    0,  820,    2, 0x08 /* Private */,
     136,    0,  821,    2, 0x08 /* Private */,
     137,    0,  822,    2, 0x08 /* Private */,
     138,    0,  823,    2, 0x08 /* Private */,
     139,    0,  824,    2, 0x08 /* Private */,
     140,    0,  825,    2, 0x08 /* Private */,
     141,    0,  826,    2, 0x08 /* Private */,
     142,    0,  827,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::UInt, QMetaType::QByteArray,    5,    6,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::Char, QMetaType::Int,   18,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Bool, QMetaType::QString, QMetaType::Int,   21,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::UChar, QMetaType::QByteArray,    3,    6,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::Bool,   32,
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
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Char, QMetaType::Char, QMetaType::UChar,   51,   52,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
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
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   77,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,  130,
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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cbSelectGraph_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        case 21: _t->updateInfo((*reinterpret_cast< quint8(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2]))); break;
        case 22: _t->writeToLogTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 23: _t->commInfo((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->updateTPlot(); break;
        case 25: _t->updatePPlots(); break;
        case 26: _t->profileSent(); break;
        case 27: _t->setupTGraph(); break;
        case 28: _t->setupPGraphs(); break;
        case 29: _t->setupVGraph(); break;
        case 30: _t->setupPreviewGraphs(); break;
        case 31: _t->setupVisuals(); break;
        case 32: _t->on_bScreenshot_clicked(); break;
        case 33: _t->on_bScreenshot_saved(); break;
        case 34: _t->on_bRes_clicked(); break;
        case 35: _t->on_bFan_clicked(); break;
        case 36: _t->on_bLightsMain_clicked(); break;
        case 37: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 38: _t->on_bClearLogTable_clicked(); break;
        case 39: _t->clearProfileSlot((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< char(*)>(_a[2])),(*reinterpret_cast< quint8(*)>(_a[3]))); break;
        case 40: _t->on_cbSelectMethodManual_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->on_cbSelectProfileManual_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 42: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 43: _t->on_bSendProfileMain_clicked(); break;
        case 44: _t->on_bStartTestManual_clicked(); break;
        case 45: _t->on_bStopTestManual_clicked(); break;
        case 46: _t->on_bSendProfileManual_clicked(); break;
        case 47: _t->on_bPauseTestManual_clicked(); break;
        case 48: _t->on_bPauseTest_clicked(); break;
        case 49: _t->on_bStartMaintenance_clicked(); break;
        case 50: _t->mousePress(); break;
        case 51: _t->mouseWheel(); break;
        case 52: _t->setupComboBoxes(); break;
        case 53: _t->on_ZoomInHor_clicked(); break;
        case 54: _t->on_ZoomOutHor_clicked(); break;
        case 55: _t->on_ZoomInVer_clicked(); break;
        case 56: _t->on_ZoomOutVer_clicked(); break;
        case 57: { bool _r = _t->on_bTemperatureSet_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 58: _t->on_bSetTemperatureStart_clicked(); break;
        case 59: _t->on_bSetTemperatureStop_clicked(); break;
        case 60: _t->on_cbTSelectSUnit_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->on_ZoomCenter_clicked(); break;
        case 62: _t->on_bSetExhaustValve_clicked(); break;
        case 63: _t->saveValueExhaustValve((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->loadValueExhaustValve(); break;
        case 65: _t->saveValueTopTempSensorCalibration(); break;
        case 66: _t->saveValueBottomTempSensorCalibration(); break;
        case 67: _t->saveValuePressureSensor1Calibration(); break;
        case 68: _t->saveValueCleanTankLevelCalibration(); break;
        case 69: _t->saveValueDirtyTankLevelCalibration(); break;
        case 70: _t->saveValueExpansionTankLevelCalibration(); break;
        case 71: _t->loadValueTopTempSensorCalibration(); break;
        case 72: _t->loadValueBottomTempSensorCalibration(); break;
        case 73: _t->loadValuePressureSensor1Calibration(); break;
        case 74: _t->loadValueCleanTankLevelCalibration(); break;
        case 75: _t->loadValueDirtyTankLevelCalibration(); break;
        case 76: _t->loadValueExpansionTankLevelCalibration(); break;
        case 77: _t->on_bSaveCalibrationValues_clicked(); break;
        case 78: _t->on_bCabinDoor_clicked(); break;
        case 79: _t->on_bEditProLook_clicked(); break;
        case 80: _t->on_bClearLogTable_2_clicked(); break;
        case 81: _t->run_keyboard_lineEdit(); break;
        case 82: _t->on_bRecipeMode_clicked(); break;
        case 83: _t->on_bFixMode_clicked(); break;
        case 84: _t->on_b1500hMode_clicked(); break;
        case 85: _t->on_btnBackDetails_clicked(); break;
        case 86: _t->on_btnDetailsInfo_clicked(); break;
        case 87: _t->on_btnDetailsTanklevel_clicked(); break;
        case 88: _t->on_btnDetailsHeater_clicked(); break;
        case 89: _t->on_btnDetailsPressure_clicked(); break;
        case 90: _t->on_bStartTest1500h_clicked(); break;
        case 91: { bool _r = _t->on_bSendProfile1500h_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 92: { bool _r = _t->on_checkBox_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 93: { bool _r = _t->on_checkBox_4_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 94: { bool _r = _t->on_checkBox_5_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 95: { bool _r = _t->on_checkBox_2_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 96: { bool _r = _t->on_checkBox_3_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 97: _t->on_bMinimize_2_clicked(); break;
        case 98: _t->on_bMinimize_3_clicked(); break;
        case 99: _t->on_bStopTest1500h_clicked(); break;
        case 100: _t->on_bPauseTest1500h_clicked(); break;
        case 101: _t->on_b_pipe_1_clicked(); break;
        case 102: _t->on_b_pipe_2_clicked(); break;
        case 103: _t->on_b_pipe_3_clicked(); break;
        case 104: _t->on_b_pipe_4_clicked(); break;
        case 105: _t->on_b_pipe_5_clicked(); break;
        case 106: _t->on_b_basinc_tank_doldur_clicked(); break;
        case 107: _t->on_b_temiz_tank_bosalt_clicked(); break;
        case 108: _t->on_b_tum_tanklari_bosalt_clicked(); break;
        case 109: _t->on_bResetFault_clicked(); break;
        case 110: _t->resetFault(); break;
        case 111: _t->on_bChooseData_clicked(); break;
        case 112: _t->on_btnDetailsPipes_clicked(); break;
        case 113: _t->on_btnDetailsPressure_2_clicked(); break;
        case 114: _t->on_bDoorControlActive_clicked(); break;
        case 115: _t->on_lineEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 116: _t->activateCabinDoorLock(); break;
        case 117: _t->on_bDoorCOntrolDeactive_clicked(); break;
        case 118: { bool _r = _t->on_Hortum1_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 119: { bool _r = _t->on_Hortum2_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 120: { bool _r = _t->on_Hortum3_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 121: { bool _r = _t->on_Hortum4_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 122: { bool _r = _t->on_Hortum5_stateChanged();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 123: _t->on_bManualPressureLinesStart_clicked(); break;
        case 124: _t->on_bManualPressureLinesStop_clicked(); break;
        case 125: _t->on_bManualEvacLines_clicked(); break;
        case 126: _t->on_bManualPrepareLines_clicked(); break;
        case 127: _t->on_bBuzzerReset_clicked(); break;
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
        if (_id < 128)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 128;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 128)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 128;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
