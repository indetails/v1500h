#include "GkTestManager.h"

GkTestDAL testDal;
GkTestManager::GkTestManager()
{

}

qint32 GkTestManager::generateTestID(){
    qint32 newTestID;

    QString line = testDal.getLastTestID();
    QString dateID = QDate::currentDate().toString("yyMMdd");
    if(line.left(6) == dateID){
       newTestID =(dateID + QString::number((line.mid(6,(line.size()-6)).toInt() + 1))).toInt();
    }
    else
    {
       newTestID = (dateID + "1").toInt();
    }
    return newTestID;
}

Test GkTestManager::CreateTest(TestTypes type){
    Test test;
    unsigned int free;
    free = 5;
    test.id = generateTestID();
    testDal.setLastTestID(test.id);
    testDal.addTestToList(test.id);
    test.name   =   QString::number(test.id);
    test.type = type;
    testDal.testInfosToTxt(test);
    return test;
}

void GkTestManager::updateTestInfos(Test test){
    testDal.testInfosToTxt(test);
}


QList<QString> GkTestManager::getAllTestIDs(){
        QList<QString> reversedLast10Test;
     QList<QString> last10Test = testDal.getAllTestIDs().mid(testDal.getAllTestIDs().length()-10,10);
     foreach(QString test, last10Test){
         reversedLast10Test.prepend(test);
     }
     return reversedLast10Test;
}

QString GkTestManager::getTestInfos(int index){

  return  testDal.getTestInfos(index);

}

TestData GkTestManager::getTestDatas(int index){
   QList<QString> testDataLines =  testDal.getTestDatas(index);
   TestData testData;

   foreach (QString dataLine, testDataLines) {
       QList<QString> testDataLine = dataLine.split(";");
        testData.x.append(testDataLine[2].toDouble());
        testData.y.append(testDataLine[3].toDouble());
   }
   return testData;
}


/*
QVector<double> GkTestManager::getVectorDatasX(int index){
   QList<QString> testDataLines =  testDal.getTestDatas(index);
   QVector<double> testVectorXDatas(testDataLines.length());
   foreach (QString dataLine, testDataLines) {
       QList<QString> testDataLine = dataLine.split(";");
       testVectorXDatas.append (testDataLine[2].toDouble());
   }
   return testVectorXDatas;
}
QVector<double> GkTestManager::getVectorDatasY(int index){
   QList<QString> testDataLines =  testDal.getTestDatas(index);
   QVector<double> testVectorYDatas(testDataLines.length());
   foreach (QString dataLine, testDataLines) {
       QList<QString> testDataLine = dataLine.split(";");
       testVectorXDatas.append (testDataLine[2].toDouble());
   }
   return testVectorXDatas;
}

*/


