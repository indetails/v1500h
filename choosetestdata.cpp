#include "choosetestdata.h"
#include "ui_choosetestdata.h"

GkTestManager testManagerChooseData;
uint currentTestID;
chooseTestData::chooseTestData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::chooseTestData)
{
    ui->setupUi(this);
    ui->liTests->addItems(testManagerChooseData.getAllTestIDs());
    setupPreviewGraph();
}

chooseTestData::~chooseTestData()
{
    delete ui;
}

void chooseTestData::on_liTests_doubleClicked(const QModelIndex &index)
{
    QString testInfos = testManagerChooseData.getTestInfos(index.data().toUInt());
     QString testType;
    if (testInfos.split(";")[2] == "2"){
         testType  = "Reçete testi";
     }
    else if (testInfos.split(";")[2] == "5"){
         testType  = "Sabit sıcaklık testi";
     }
    else if (testInfos.split(";")[2] == "6"){
         testType  = "1500h testi";
     }
    ui->txtTestInfo->setText(
                                "Test ID:" + testInfos.split(";")[0] + "\n" +
                                "Test Name:" + testInfos.split(";")[1] + "\n" +
                                "Test Type:" + testType + "\n" +
                                "Test Elapsed Time:" + testInfos.split(";")[3] + "\n" +
                                "Test Remaining Time:" + testInfos.split(";")[4] + "\n"
                            );
    setDatasPreviewGraph(testManagerChooseData.getTestDatas(index.data().toUInt()));
    currentTestID = index.data().toUInt();
}

void chooseTestData::setupPreviewGraph(){
    ///Test önizlemesi için Preview alanına grafik ekle.
    ui->testPreviewGraph->addGraph(); QPen tPen; tPen.setWidth(3);
    tPen.setColor(Qt::red); tPen.setStyle(Qt::SolidLine);
    ui->testPreviewGraph->graph(0)->setPen(tPen);
    ui->testPreviewGraph->yAxis->setLabel("Cabin Temperature (°C)");
    ui->testPreviewGraph->setBackground(Qt::white);
    ui->testPreviewGraph->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom |
    QCP::iSelectPlottables);
}

void chooseTestData::setDatasPreviewGraph(TestData testData){
    ui->testPreviewGraph->graph(0)->setData(testData.x,testData.y);
    ui->testPreviewGraph->graph(0)->rescaleKeyAxis();
    ui->testPreviewGraph->yAxis->setRange(0,150);
    ui->testPreviewGraph->yAxis->range().bounded(0,150);
    ui->testPreviewGraph->replot();
}

void chooseTestData::on_bChooseTest_clicked()
{
    CurrentTest = currentTestID;
    close();
}
