#include "GktestDal.h"

QString GkTestDAL::getLastTestID() {
QString ID;
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\lastTestID.txt";
#endif
    QFile file(filePath);
    if (file.open(QFile::ReadOnly))
    {
    QTextStream stream(&file);
     while (!stream.atEnd())
     {
       ID = stream.readLine();
     }
    return ID;
    }
}

void GkTestDAL::setLastTestID(quint32 testID){
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\lastTestID.txt";
#endif

    QFile file(filePath);

    if (file.open(QFile::WriteOnly|QFile::Truncate))
    {
        QTextStream stream(&file);
        stream <<  QString::number(testID) ;
        file.close();
    }
}

void GkTestDAL::addTestToList(quint32 testID){
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\TestList.txt";
#endif

    QFile file(filePath);

    if (file.open(QFile::WriteOnly|QFile::Append))
    {
        QTextStream stream(&file);
        stream <<  QString::number(testID) << "\n" ;
        file.close();
    }
}

void GkTestDAL::testInfosToTxt(Test test){
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\" + QString::number(test.id) + ".txt";
#endif

    QFile file(filePath);


    if (file.open(QFile::WriteOnly|QFile::Truncate))
    {
        QTextStream stream(&file);
        stream  <<  QString::number(test.id) << ";"
                <<  test.name << ";"
                <<  test.type << ";"
                <<  test.elapsedTestSeconds << ";"
                <<  test.remainingTime << ";"
                <<  test.elapsedCycle << ";"
                <<  test.currentStep << ";";



        file.close();
    }
}

QList<QString> GkTestDAL::getAllTestIDs() {

    QList<QString> IDs;
    #ifdef Q_OS_WIN
        // windows code goes here
        QString filePath = "Settings\\TestList.txt";
    #endif
        QFile file(filePath);
        if (file.open(QFile::ReadOnly))
        {
        QTextStream stream(&file);
         while (!stream.atEnd())
         {
           IDs.append(stream.readLine());
         }
        file.close();
        }
        return IDs;

}

QString GkTestDAL::getTestInfos(quint32 testID){
    QString info;
    #ifdef Q_OS_WIN
        // windows code goes here
        QString filePath = "Settings\\" + QString::number(testID) + ".txt";
    #endif
        QFile file(filePath);
        if (file.open(QFile::ReadOnly))
        {
        QTextStream stream(&file);
         while (!stream.atEnd())
         {
           info = stream.readLine();
         }
        return info;
        }
        file.close();
}

QList<QString> GkTestDAL::getTestDatas(quint32 testID){
    QList<QString> testDataLines;
    #ifdef Q_OS_WIN
        // windows code goes here
        QString filePath = "records\\" + QString::number(testID) + "\\" + "temperature.csv";
    #endif
        QFile file(filePath);
        if (file.open(QFile::ReadOnly))
        {
        QTextStream stream(&file);
         while (!stream.atEnd())
         {
           testDataLines.append(stream.readLine());
         }
        return testDataLines;
        }
        file.close();
}
