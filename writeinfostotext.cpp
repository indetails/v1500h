
#include "writeinfostotext.h"
#include <QDir>

writeInfosToText::writeInfosToText()
{

}


void writeInfosToText::testInfosToText(QString testFolder, QString info)
{
    infosToText(testFolder,"testLogs.txt",info);
}

void writeInfosToText::machineInfosToText(QString info)
{
    QString date = QDate::currentDate().toString(Qt::SystemLocaleShortDate);
    infosToText(date,"machStatus.txt",info);
}

void writeInfosToText::infosToText(QString folder, QString fileName, QString info)
{
#ifdef Q_OS_LINUX
        //linux code goes here
        QString filePath = "/home/pi/InDetail/records/" + testFolder + "/" + "testLogs.txt";
#endif
#ifdef Q_OS_WIN
        // windows code goes here
        if (!QDir("records\\" + folder).exists())
        {
            QDir().mkdir("records\\" + folder);
        }
        QString filePath = "records\\" + folder + "\\" + fileName;
#endif

        QFile file(filePath);

        if (file.open(QFile::WriteOnly|QFile::Append))
        {
            QTextStream stream(&file);
            stream << "Date: " << QDate::currentDate().toString(Qt::SystemLocaleShortDate)
                   << "\t" << "Time: " << QTime::currentTime().toString("hh.mm.ss")
                   << "\t" << "Info: " << info << "\n";
            file.close();
        }
}
