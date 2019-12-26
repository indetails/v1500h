#ifndef WRITEINFOSTOTEXT_H
#define WRITEINFOSTOTEXT_H

#include <QObject>
#include <QFile>
#include <QTextStream>
#include <QTime>
#include <QDate>
#include <qdatetime.h>

class writeInfosToText : public QObject
{
     Q_OBJECT
public:
    writeInfosToText();

    void testInfosToText(QString testFolder,QString info);
    void machineInfosToText(QString info);
private slots:

    void infosToText(QString folder,QString filename, QString info);
};

#endif // WRITEINFOSTOTEXT_H
