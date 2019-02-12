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

    bool temperaturePrepActive;
    bool temperatureTestActive;
    bool temperatureTestCompleted;

    bool pressurePrepActive;
    bool pressureTestActive;
    bool pressureTestCompleted;

    bool vibrationPrepActive;
    bool vibrationTestActive;
    bool vibrationTestCompleted;

    bool profileActive;

    bool cabinTemperatureStat;
    bool tankTemperatureStat;

    bool pipePressureStat;

    bool vibrationMotor1Stat;
    bool vibrationMotor2Stat;


    bool Fix_mode_active;
    bool Hata_mode_active;
    bool Emergancy_mode ;
    // sıcaklı state  bitleri
    bool Rezistans_active;
    bool Fan_aktive;
    bool sivi_degisimi;
    bool sicaklik_dusuruluyor;
    bool sicaklik_kontrol_active;
    bool sicaklik_ayarlaniyor;

    // hortum kontrol state
    bool hortum1;
    bool hortum2;
    bool hortum3;
    bool hortum4;
    bool hortum5;
    bool hortum_hava_alma;
    bool hortum_kontrol;
    // tank state
    bool expansion_tank_exhaust_to_dirty_tank_active;
    bool expansion_tank_fulling_from_clean_tank_active;
    bool clean_tank_exhaust_to_dirty_tank_active;
    bool sivilar_degistiriliyor;
    bool sivi_degisimi_tamamlandi;
    bool pomp_active;
   //basınc state
    bool basinc_ayarlaniyor
    //nem state

    // sogutma state

    //titresim state
;

};

#endif // PROFILESTRUCT_H
