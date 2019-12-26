#ifndef GKTESTIDDAL_H
#define GKTESTIDDAL_H
#include <QtCore/QObject>
#include "profilestruct.h"


class GkTestDAL
{

public:

    quint32 getNewTestID();
    QString getLastTestID();
    void setLastTestID(quint32 testID);
    void addTestToList(quint32 testID);
    void testInfosToTxt(Test test);
    QList<QString> getAllTestIDs();
    QString getTestInfos(quint32 testID);
    QList<QString> getTestDatas(quint32 testID);

private:
    quint32 _lastTestID;

};

#endif // GKTESTIDDAL_H
