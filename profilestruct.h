#ifndef PROFILESTRUCT_H
#define PROFILESTRUCT_H
#include "QtCore"
#include "teststruct.h"

#define MaxProfile 20
#define MaxStep 20

struct stepStruct
{
    quint8 stepType;
    quint8 stepUnit;
    double lDuration;
    double lTarget;
    double logRate;
    double logMin;
    double logMax;
    double tRise;
    double tUp;
    double tFall;
    double tDown;
    double tLow;
    double tHigh;
    double sPeriod;
    double sMean;
    double sAmp;
    quint8 repeatUnit;
    quint32 repeatDuration;
};

struct profileStruct
{
    quint8 active;
    double startValue;
    quint8 totalStep;
    quint16 totalTestCycle;
    double stepDuration[MaxStep];
    stepStruct step[MaxStep];
};

struct PLC
{
    quint8 deviceState;
    bool profileActive;
    bool Fix_mode_active;
    bool Hata_mode_active;
    bool EmergencyMode ;

    // sıcaklık state  bitleri
    bool temperaturePrepActive;
    bool temperatureTestActive;
    bool temperatureTestCompleted;
    bool resistancesActive;
    bool fansActive;
    bool liquidChangeCoolingActive;
    bool cabinTemperatureStat;
    bool tankTemperatureStat;
    bool temperatureFixing;
    bool temperatureFixed;


    // hortum kontrol state
    bool pipe1Control;
    bool pipe2Control;
    bool pipe3Control;
    bool pipe4Control;
    bool pipe5Control;
    bool pipePrepareActive;
    bool pipePressureControl;
    bool pressurePrepActive;
    bool pressureTestActive;
    bool pressureTestCompleted;
    bool pipePressureStat;
    bool ManualPrepareLinesFixing;
    bool ManualEvacLinesFixing;

    //hortum hata durumları

    bool pipe1LeakageDetected;
    bool pipe2LeakageDetected;
    bool pipe3LeakageDetected;
    bool pipe4LeakageDetected;
    bool pipe5LeakageDetected;

    bool manualPressureLine;

    // tank state
    bool expansion_tank_exhaust_to_dirty_tank_active;
    bool workPumpCleanToExpansion;
    bool clean_tank_exhaust_to_dirty_tank_active;
    bool liquidChangeActive;
    bool liquidChangeComplete;
    bool circulationPumpActive;
    bool cleanTankLow;
    bool    expansionTankHigh;
    //basınc state
    bool pipeAirTake;
    bool waitingSetTemp;
    bool pressureFixing;
    bool pressureFixed;
    //nem state

    // sogutma state

    //titresim state
    bool vibrationPrepActive;
    bool vibrationTestActive;
    bool vibrationTestCompleted;
    bool vibrationMotor1Stat;
    bool vibrationMotor2Stat;
    bool cabinDoorLock;

    //step
    quint8  tStep;
    quint8  pStep;
    quint8  vStep;

    //repeats
    quint32 pStepRepeat;
    quint32 vStepRepeat;

    Test    currentTest;
};


#endif // PROFILESTRUCT_H
