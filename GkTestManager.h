#ifndef GKTESTMANAGER_H
#define GKTESTMANAGER_H
#include <QObject>
#include "gktestdal.h"

class GkTestManager
{

public:
    GkTestManager();
    Test CreateTest(TestTypes type);
    qint32 generateTestID();
    void updateTestInfos(Test test);
    QList<QString> getAllTestIDs();
    QList<QString> getTenLastTestIDs();
    QString getTestInfos(int index);
    TestData getTestDatas(int index);
};

#endif // GKTESTMANAGER_H
