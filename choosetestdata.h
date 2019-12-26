#ifndef CHOOSETESTDATA_H
#define CHOOSETESTDATA_H

#include <QObject>
#include <QDialog>
#include "GkTestManager.h"



namespace Ui {
class chooseTestData;
}

class chooseTestData : public QDialog
{
    Q_OBJECT

public:
    explicit chooseTestData(QWidget *parent = 0);
    ~chooseTestData();   
    quint32 CurrentTest;

private slots:
    void on_liTests_doubleClicked(const QModelIndex &index);
    void setupPreviewGraph();
    void setDatasPreviewGraph(TestData testData);
    void on_bChooseTest_clicked();

private:
    Ui::chooseTestData *ui;
};

#endif // CHOOSETESTDATA_H
