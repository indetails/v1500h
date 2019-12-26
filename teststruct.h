#ifndef TESTSTRUCT_H
#define TESTSTRUCT_H
#include "QtCore"
#include "profilestruct.h"


enum TestTypes
      {
        recipe=2,
        fix=5,
        mode1500h
       };
struct Test
{
    quint32 id;
    QString name;
    TestTypes type;
    QFileInfo logFilePath;
    quint32 elapsedTestSeconds;
    quint32 remainingTime;
    quint32 TotalTestDuraion;
    double startValue;
    quint8 totalStep;
    quint8 currentStep;
    quint16 totalTestCycle;
    quint16 elapsedCycle;
};

struct TestData{
    QVector<double> x;
    QVector<double> y;
};

#endif // TESTSTRUCT_H
