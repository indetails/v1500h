#ifndef PROFILESTRUCT_H
#define PROFILESTRUCT_H
#include "QtCore"

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

    //nem state

    // sogutma state

    //titresim state
    bool vibrationPrepActive;
    bool vibrationTestActive;
    bool vibrationTestCompleted;
    bool vibrationMotor1Stat;
    bool vibrationMotor2Stat;

    bool cabinDoorLock;

};

#endif // PROFILESTRUCT_H
