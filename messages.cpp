#include "Mainwindow.h"
#include "ui_mainwindow.h"

PLC myPLC;

GkTestManager testManager;

PLC UpdateInfoBytes::updateInfoByte(Ui::MainWindow *ui,quint8 index,QByteArray data)
{

   if (index == 3)
   {
      updateInfoByte0E(ui,data);
   }
   else if (index == 2)
   {
       updateInfoByte0D(ui,data);
   }
   else if (index == 1)
   {
       updateInfoByte0C(ui,data);
   }
   return myPLC;
}

void UpdateInfoBytes::updateInfoByte0E(Ui::MainWindow *ui,QByteArray data)
{

    if (data[0] == char(0x01))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = (data[0]);

            if (myPLC.deviceState)
            {
                visualsToStop(ui);
            }
        }
    }
    else if (data[0] == char(0x02))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = (data[0]);

            if (myPLC.deviceState)
            {
                visualsToRecipeMode(ui);
            }
        }
    }
    else if (data[0] == char(0x03))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                visualsToPause(ui);
            }
        }
    }
    else if (data[0] == char(0x04))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                visualsToMaintenanceMode(ui);
            }
        }
    }
    else if (data[0] == char(0x05))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                visualsToFixMode(ui);
            }
        }
    }
    else if (data[0] == char(0x06))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];

            if (myPLC.deviceState)
            {
                visualsTo1500hMode(ui);
            }
        }
    }
    else if (data[0] == char(0x0B))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(5);
                ui->bResetFault->setVisible(true);
                ui->laFault11->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Acil Durum Butonu Basılı");
                LogControl->machineInfosToText("Acil Durum Butonu Basılı");
                writeToLogTable(ui,"Acil Durum Butonu Basılı");

            }
        }
    }
    else if (data[0] == char(0x0C))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(5);
                ui->bResetFault->setVisible(true);
                ui->laFault12->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Yüksek sıcaklık algılandı.");
                LogControl->machineInfosToText("Yüksek sıcaklık algılandı.");
                writeToLogTable(ui,"Yüksek sıcaklık algılandı.");
            }
        }
    }
    else if (data[0] == char(0x0D))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->bManualPressureLinesStart->setEnabled(true);
                ui->bManualPrepareLines->setEnabled(true);
                ui->bManualPressureLinesStop->setEnabled(true);
                ui->bManualEvacLines->setEnabled(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Manuel Kontrol başlatıldı.");
                LogControl->machineInfosToText("Manuel Kontrol başlatıldı.");
                writeToLogTable(ui,"Manuel Kontrol başlatıldı.");
            }
        }
    }
    else if (data[0] == char(0x15))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(2);
                ui->bResetFault->setVisible(true);
                ui->laFault21->setVisible(true);
                ui->Hortum1->setChecked(false);
                LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 1 basinclandirilamadi");
                LogControl->machineInfosToText("Hortum 1 basinclandirilamadi");
                writeToLogTable(ui,"Hortum 1 basinclandirilamadi");
            }
        }
    }
    else if (data[0] == char(0x16))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(2);
                ui->bResetFault->setVisible(true);
                ui->laFault22->setVisible(true);
                ui->Hortum2->setChecked(false);
                LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 2 basinclandirilamadi");
                LogControl->machineInfosToText("Hortum 2 basinclandirilamadi");
                writeToLogTable(ui,"Hortum 2 basinclandirilamadi");

            }
        }
    }
    else if (data[0] == char(0x17))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(2);
                ui->bResetFault->setVisible(true);
                ui->laFault23->setVisible(true);
                ui->Hortum3->setChecked(false);
                LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 3 basinclandirilamadi");
                LogControl->machineInfosToText("Hortum 3 basinclandirilamadi");
                writeToLogTable(ui,"Hortum 3 basinclandirilamadi");
            }
        }
    }
    else if (data[0] == char(0x18))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(2);
                ui->bResetFault->setVisible(true);
                ui->laFault24->setVisible(true);
                ui->Hortum4->setChecked(false);
                LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 4 basinclandirilamadi");
                LogControl->machineInfosToText("Hortum 4 basinclandirilamadi");
                writeToLogTable(ui,"Hortum 4 basinclandirilamadi");
            }
        }
    }
    else if (data[0] == char(0x19))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(2);
                ui->bResetFault->setVisible(true);
                ui->laFault25->setVisible(true);
                ui->Hortum5->setChecked(false);
                LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 5 basinclandirilamadi");
                LogControl->machineInfosToText("Hortum 5 basinclandirilamadi");
                writeToLogTable(ui,"Hortum 5 basinclandirilamadi");
            }
        }
    }
    else if (data[0] == char(0x1F))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(1);
                ui->bResetFault->setVisible(true);
                ui->laFault31->setVisible(true);
                ui->gb_CleanTankLevel->setStyleSheet("background-color: rgb(255, 0, 0);");
                LogControl->testInfosToText(myPLC.currentTest.name,"Temiz Tank seviyesi düşük");
                LogControl->machineInfosToText("Temiz Tank seviyesi düşük");
                writeToLogTable(ui,"Temiz Tank seviyesi düşük");
            }
        }
    }
    else if (data[0] == char(0x20))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(1);
                ui->bResetFault->setVisible(true);
                ui->laFault32->setVisible(true);
               ui->gb_KirliTankLevel->setStyleSheet("background-color: rgb(255, 0, 0);");
               LogControl->testInfosToText(myPLC.currentTest.name,"Kirli Tankını boşaltın");
               LogControl->machineInfosToText("Kirli Tankını boşaltın");
               writeToLogTable(ui,"Kirli Tankını boşaltın");
            }
        }
    }
    else if (data[0] == char(0x21))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(1);
                ui->bResetFault->setVisible(true);
                ui->laFault33->setVisible(true);
                ui->gb_basincTankLevel->setStyleSheet("background-color: rgb(255, 0, 0);");
                LogControl->testInfosToText(myPLC.currentTest.name,"basınç tankı seviyesi dusuk");
                LogControl->machineInfosToText("basınç tankı seviyesi dusuk");
                writeToLogTable(ui,"basınç tankı seviyesi dusuk");
            }
        }
    }
    else if (data[0] == char(0x22))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(1);
                ui->bResetFault->setVisible(true);
                ui->laFault34->setVisible(true);
                ui->gb_basincTankLevel->setStyleSheet("background-color: rgb(255, 0, 0);");
                LogControl->testInfosToText(myPLC.currentTest.name,"basınç tankı seviyesi ayarlanıyor");
                LogControl->machineInfosToText("basınç tankı seviyesi ayarlanıyor");
                writeToLogTable(ui,"basınç tankı seviyesi ayarlanıyor");
            }
        }
    }
    else if (data[0] == char(0x29))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(4);
                ui->bResetFault->setVisible(true);
                ui->laFault41->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Kapi acik");
                LogControl->machineInfosToText("Kapi acik");
                writeToLogTable(ui,"Kapi acik");
            }
        }
    }
    else if (data[0] == char(0x2A))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(3);
                ui->bResetFault->setVisible(true);
                ui->laFault42->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Fan 1 arızalı.");
                LogControl->machineInfosToText("Fan 1 arızalı.");
                writeToLogTable(ui,"Fan 1 arızalı.");
            }
        }
    }
    else if (data[0] == char(0x2B))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(3);
                ui->bResetFault->setVisible(true);
                ui->laFault43->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Fan 2 arızalı.");
                LogControl->machineInfosToText("Fan 2 arızalı.");
                writeToLogTable(ui,"Fan 2 arızalı.");
            }
        }
    }
    else if (data[0] == char(0x2C))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(3);
                ui->bResetFault->setVisible(true);
                ui->laFault44->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Fan 3 arızalı.");
                LogControl->machineInfosToText("Fan 3 arızalı.");
                writeToLogTable(ui,"Fan 3 arızalı.");
            }
        }
    }
    else if (data[0] == char(0x2D))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(4);
                ui->bResetFault->setVisible(true);
                ui->laFault45->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Pompa arızalı.");
                LogControl->machineInfosToText("Pompa arızalı.");
                writeToLogTable(ui,"Pompa arızalı.");
            }
        }
    }
    else if (data[0] == char(0x2E))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(3);
                ui->bResetFault->setVisible(true);
                ui->laFault46->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Isıtma hızı yavaş.");
                LogControl->machineInfosToText("Isıtma hızı yavaş.");
                writeToLogTable(ui,"Isıtma hızı yavaş.");
            }
        }
    }
    else if (data[0] == char(0x2F))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(4);
                ui->bResetFault->setVisible(true);
                ui->laFault47->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Haberleşme arızası.");
                LogControl->machineInfosToText("Haberleşme arızası.");
                writeToLogTable(ui,"Haberleşme arızası.");
            }
        }
    }
    else if (data[0] == char(0x30))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(4);
                ui->bResetFault->setVisible(true);
                ui->laFault48->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Pompa hattı tıkalı.");
                LogControl->machineInfosToText("Pompa hatti tikali.");
                writeToLogTable(ui,"Pompa hattı tıkalı.");
            }
        }
    }
    else if (data[0] == char(0x31))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(4);
                ui->bResetFault->setVisible(true);
                ui->laFault49->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Regulator yeniden ayarlanmali.");
                LogControl->machineInfosToText("Regulator yeniden ayarlanmali.");
                writeToLogTable(ui,"Regulator yeniden ayarlanmali.");
            }
        }
    }
    else if (data[0] == char(0x32))
    {
        if (myPLC.deviceState == (data[0]))
        {

        }
        else
        {
            myPLC.deviceState = data[0];
            if (myPLC.deviceState)
            {
                ui->tabWidget->setCurrentIndex(1);
                ui->detailsPages->setCurrentIndex(0);
                ui->detailsBottomPages->setCurrentIndex(4);
                ui->bResetFault->setVisible(true);
                ui->laFault4A->setVisible(true);
                LogControl->testInfosToText(myPLC.currentTest.name,"Hat basinci dusuk.");
                LogControl->machineInfosToText("Hat basinci dusuk.");
                writeToLogTable(ui,"Hat basinci dusuk.");
            }
        }
    }

    if (myPLC.resistancesActive == (data[1] & 0b00000001))
    {

    }
    else
    {
        myPLC.resistancesActive = (data[1] & 0b00000001);

        if (myPLC.resistancesActive)
        {
           // ui->sW_0->setCurrentIndex(0);
            ui->cbResistanceActive->setEnabled(true);
        }
        else
        {
            ui->cbResistanceActive->setEnabled(false);
        }
    }

    if (myPLC.fansActive == (data[1] & 0b00000010) >> 1)
    {

    }
    else
    {
        myPLC.fansActive = (data[1] & 0b00000010) >> 1;

        if (myPLC.fansActive)
        {

            ui->cbFansActive->setEnabled(true);
        }
        else
        {

            ui->cbFansActive->setEnabled(false);
        }
    }

    if (myPLC.liquidChangeActive == (data[1] & 0b00000100) >> 2)
    {

    }
    else
    {
        myPLC.liquidChangeActive = (data[1] & 0b00000100) >> 2;

        if (myPLC.liquidChangeActive)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Sıvı degişimi yapılıyor.");
            writeToLogTable(ui,"sivi degisimi yapiliyor.");
            ui->cB_tte_22->setEnabled(true);
        }
        else
        {
            ui->cB_tte_22->setEnabled(false);
            LogControl->testInfosToText(myPLC.currentTest.name,"sıvı degişimi tamamlandı.");
            writeToLogTable(ui,"sivi degisimi tamamlandi.");


        }
    }

    if (myPLC.liquidChangeCoolingActive == (data[1] & 0b00001000) >> 3)
    {

    }
    else
    {
        myPLC.liquidChangeCoolingActive = (data[1] & 0b00001000) >> 3;

        if (myPLC.liquidChangeCoolingActive)
        {
            ui->cB_tte_23->setCheckState(Qt::CheckState(true));
            LogControl->testInfosToText(myPLC.currentTest.name,"sıcaklık düşürülüyor.");
            writeToLogTable(ui,"sivi degisimi icin sicaklik dusuruluyor.");
        }
        else
        {
           ui->cB_tte_23->setCheckState(Qt::CheckState(true));
           LogControl->testInfosToText(myPLC.currentTest.name,"sıcaklık düşürme tamamlandı.");
           writeToLogTable(ui,"sıcaklık düşürme tamamlandı.");
        }
    }

    if (myPLC.temperatureTestActive == (data[1] & 0b00010000) >> 4)
    {

    }
    else
    {
        myPLC.temperatureTestActive = (data[1] & 0b00010000) >> 4;

        if (myPLC.temperatureTestActive)
        {

            ui->cB_tte_33->setCheckState(Qt::CheckState(true));
            ui->cbTestActive->setVisible(true);
            ui->cbTestActive->setEnabled(true);
            LogControl->testInfosToText(myPLC.currentTest.name,"Test kontrol aktif.");
            writeToLogTable(ui,"Test basladi.");
            myPLC.temperatureTestActive = true;
        //    prepareTestTimers();

        }
        else
        {
            ui->cB_tte_33->setCheckState(Qt::CheckState(false));
            myPLC.temperatureTestActive = false;
            ui->cbTestActive->setEnabled(false);
            LogControl->testInfosToText(myPLC.currentTest.name,"Test kontrolu kapali.");
            writeToLogTable(ui,"Test kontrolu kapali.");
        }
    }

    if (myPLC.temperaturePrepActive == (data[1] & 0b00100000) >> 5)
    {

    }
    else
    {
        myPLC.temperaturePrepActive = (data[1] & 0b00100000) >> 5;

        if (myPLC.temperaturePrepActive)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Test Hazirligi aktif.");
            writeToLogTable(ui,"Test Hazirligi aktif.");
            ui->cbTestPrepare->setVisible(true);
            ui->cbTestPrepare->setEnabled(true);
        }
        else
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Test Hazirligi tamamlandi.");
            writeToLogTable(ui,"Test Hazirligi tamamlandi.");
            ui->cbTestPrepare->setEnabled(false);
        }
    }

    if (myPLC.temperatureFixing == (data[1] & 0b01000000) >> 6)
    {

    }
    else
    {
        myPLC.temperatureFixing = (data[1] & 0b01000000) >> 6;

        if (myPLC.temperatureFixing)
        {
            LogControl->machineInfosToText("sıcaklık ayarlanıyor.");
            ui-> laDurum2->setVisible(true);

        }
        else
        {
            LogControl->machineInfosToText("sıcaklık ayarlama yapıldı.");
            ui-> laDurum2->setVisible(false);
        }
    }

    if (myPLC.temperatureFixed == (data[1] & 0b10000000) >> 7)
    {

    }
    else
    {
        myPLC.temperatureFixed = (data[1] & 0b10000000) >> 7;

        if (not myPLC.temperatureFixed )
        {
            ui-> laDurum2_2->setVisible(true);
        }
        else
        {
            ui-> laDurum2_2->setVisible(false);
        }
    }

    if (myPLC.pipe1Control == (data[2] & 0b00000001) )
    {

    }
    else
    {
        myPLC.pipe1Control = (data[2] & 0b00000001) ;

        if (myPLC.pipe1Control)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"hortum 1 kontrol.");
            LogControl->machineInfosToText("hortum 1 kontrol.");
            ui->control_hortum_1->setVisible(true);
            ui->cbPipe1->setEnabled(true);
            writeToLogTable(ui,"Hortum 1 kontrol.");
        }
        else
        {
           LogControl->testInfosToText(myPLC.currentTest.name,"hortum1 kontrol edildi.");
           LogControl->machineInfosToText("hortum 1 kontrol tamamlandı.");
           ui->control_hortum_1->setVisible(false);
           ui->cbPipe1->setEnabled(false);
           writeToLogTable(ui,"Hortum 1 kontrol tamamlandı.");
        }
    }

    if (myPLC.pipe2Control == (data[2] & 0b00000010) >> 1)
    {

    }
    else
    {
        myPLC.pipe2Control = (data[2] & 0b00000010) >> 1 ;

        if (myPLC.pipe2Control)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 2 kontrol.");
            LogControl->machineInfosToText("hortum 2 kontrol.");
            ui->control_hortum_2->setVisible(true);
            ui->cbPipe2->setEnabled(true);
            writeToLogTable(ui,"Hortum 2 kontrol.");
        }
        else
        {

            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 2 kontrol edildi.");
            LogControl->machineInfosToText("hortum 2 kontrol tamamlandı.");
            ui->control_hortum_2->setVisible(false);
            ui->cbPipe2->setEnabled(false);
            writeToLogTable(ui,"Hortum 2 kontrol tamamlandı.");

        }
    }

    if (myPLC.pipe3Control == (data[2] & 0b00000100) >> 2 )
    {

    }
    else
    {
        myPLC.pipe3Control = (data[2] & 0b00000100) >> 2 ;

        if (myPLC.pipe3Control)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 3 kontrol.");
            LogControl->machineInfosToText("hortum 3 kontrol.");
            ui->control_hortum_3->setVisible(true);
            ui->cbPipe3->setEnabled(true);
            writeToLogTable(ui,"hortum 3 kontrol.");
        }
        else
        {

            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 3 kontrol edildi.");
            LogControl->machineInfosToText("hortum 3 kontrol tamamlandı.");
            ui->control_hortum_3->setVisible(false);
            ui->cbPipe3->setEnabled(false);
            writeToLogTable(ui,"hortum 3 kontrol tamamlandı.");
        }
    }

    if (myPLC.pipe4Control == (data[2] & 0b00001000) >> 3 )
    {

    }
    else
    {
        myPLC.pipe4Control = (data[2] & 0b00001000) >> 3 ;

        if (myPLC.pipe4Control)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 4 kontrol.");
            LogControl->machineInfosToText("hortum 4 kontrol.");
            ui->control_hortum_4->setVisible(true);
            ui->cbPipe4->setEnabled(false);
            writeToLogTable(ui,"Hortum 4 kontrol.");
        }
        else
        {
           ui->control_hortum_4->setVisible(false);
           LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 4 kontrol edildi.");
           LogControl->machineInfosToText("hortum 4 kontrol tamamlandı.");
           ui->cbPipe4->setEnabled(false);
           writeToLogTable(ui,"Hortum 4 kontrol tamamlandı.");
        }
    }

    if (myPLC.pipe5Control == (data[2] & 0b00010000) >> 4 )
    {

    }
    else
    {
        myPLC.pipe5Control = (data[2] & 0b00010000) >> 4 ;

        if (myPLC.pipe5Control)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 5 kontrol.");
            LogControl->machineInfosToText("hortum 5 kontrol.");
            ui->control_hortum_5->setVisible(true);
            ui->cbPipe5->setEnabled(true);
            writeToLogTable(ui,"Hortum 5 kontrol.");
        }
        else
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum 5 kontrol edildi.");
            LogControl->machineInfosToText("hortum 5 kontrol tamamlandı.");
            ui->control_hortum_5->setVisible(false);
            ui->cbPipe5->setEnabled(false);
            writeToLogTable(ui,"Hortum 5 kontrol tamamlandı.");
        }
    }


    if (myPLC.pipePressureStat == (data[2] & 0b01000000) >> 6 )
    {

    }
    else
    {
        myPLC.pipePressureStat = (data[2] & 0b01000000) >> 6 ;

        if (myPLC.pipePressureStat)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Sızıntı kontrol ediliyor.");
            ui->tabWidget->setCurrentIndex(1);
            ui->detailsBottomPages->setCurrentIndex(2);
            ui->laFault4A_2->setVisible(true);
            ui->bResetFault->setVisible(true);
        }

        else
        {

            LogControl->testInfosToText(myPLC.currentTest.name,"Sızıntı kontrol edildi");
            ui->laFault4A_2->setVisible(false);
        }
    }

    if (myPLC.manualPressureLine == (data[2] & 0b10000000) >> 7 )
    {

    }
    else
    {
        myPLC.manualPressureLine = (data[2] & 0b10000000) >> 7 ;

        if (myPLC.manualPressureLine)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"hortum manuel basınçlandırılıyor");
            ui->detailsBottomPages->setCurrentIndex(2);
            ui->bManualPressureLinesStop->setEnabled(true);

        }
        else
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"hortum manuel basınçlandırma tamamlandı.");
        }
    }
/*

    */

    if (myPLC.expansion_tank_exhaust_to_dirty_tank_active == (data[3] & 0b00000010) >> 1 )
    {

    }
    else
    {
        myPLC.expansion_tank_exhaust_to_dirty_tank_active = (data[3] & 0b00000010) >> 1;

        if (myPLC.expansion_tank_exhaust_to_dirty_tank_active)
        {
            writeToLogTable(ui,"temiz tanktan kirli tankına sıvı aktarıldı.");
            LogControl->testInfosToText(myPLC.currentTest.name,"temiz tanktan kirli tankına sıvı aktarıldı.");
            LogControl->machineInfosToText("temiz tanktan kirli tankına sıvı aktarıldı.");

        }
        else
        {
            writeToLogTable(ui,"temiz tanktan kirli tankına sıvı aktarıldı.");
            LogControl->testInfosToText(myPLC.currentTest.name,"temiz tanktan kirli tankına sıvı aktarıldı.");
            LogControl->machineInfosToText("temiz tanktan kirli tankına sıvı aktarıldı.");
        }
    }
    if (myPLC.clean_tank_exhaust_to_dirty_tank_active == (data[3] & 0b00000100) >> 2 )
    {

    }
    else
    {
        myPLC.clean_tank_exhaust_to_dirty_tank_active = (data[3] & 0b00000100) >> 2 ;

        if (myPLC.clean_tank_exhaust_to_dirty_tank_active)
        {
            writeToLogTable(ui,"Hatlardaki sivi bosaltiliyor.");
            LogControl->testInfosToText(myPLC.currentTest.name,"Hatlardaki sivi bosaltiliyor.");
            LogControl->machineInfosToText("Hatlardaki sivi bosaltiliyor.");
        }
        else
        {
            writeToLogTable(ui,"Hatlardaki sivi bosaltildi.");
            LogControl->testInfosToText(myPLC.currentTest.name,"Hatlardaki sivi bosaltildi.");
            LogControl->machineInfosToText("Hatlardaki sivi bosaltildi.");
        }
    }

    if (myPLC.circulationPumpActive == (data[3] & 0b00001000) >> 3 )
    {

    }
    else
    {
        myPLC.circulationPumpActive = (data[3] & 0b00001000) >> 3 ;

        if (myPLC.circulationPumpActive)
        {
           LogControl->machineInfosToText("Sirkülasyon Pompası Çalışıyor");
        }
        else
        {
           LogControl->machineInfosToText("Sirkülasyon Pompası durdu. ");
        }
    }

    if (myPLC.cleanTankLow == (data[3] & 0b00010000) >> 4 )
    {

    }
    else
    {
        myPLC.cleanTankLow = (data[3] & 0b00010000) >> 4 ;

        if (myPLC.cleanTankLow)
        {
            ui->laFault31->setVisible(true);
            LogControl->testInfosToText(myPLC.currentTest.name,"Temiz tank seviyesi çok düşük.");
            LogControl->machineInfosToText("Temiz tank seviyesi çok düşük.");
            writeToLogTable(ui,"Temiz tank seviyesi çok düşük.");
            ui->tabWidget->setCurrentIndex(1);
            ui->detailsBottomPages->setCurrentIndex(1);
        }
        else
        {
            ui->laFault31->setVisible(false);
           LogControl->testInfosToText(myPLC.currentTest.name,"Temiz tank seviyesi normal");
        }
    }

    if (myPLC.expansionTankHigh == (data[3] & 0b00100000) >> 5 )
    {

    }
    else
    {
        myPLC.expansionTankHigh = (data[3] & 0b00100000) >> 5 ;

        if (myPLC.expansionTankHigh)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"basınç tankı sıvı seviyesi yüksek");
        }
        else
        {
           LogControl->testInfosToText(myPLC.currentTest.name,"basınç tankı sıvı seviyesi normale döndü.");
        }
    }

    if (myPLC.cabinDoorLock == (data[3] & 0b01000000) >> 6 )
    {

    }
    else
    {
        myPLC.cabinDoorLock = (data[3] & 0b01000000) >> 6 ;

        if (myPLC.cabinDoorLock)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Kapak kilidi aktif");
            ui->bMainDoorInfo->setEnabled(true);
        }
        else
        {
           LogControl->testInfosToText(myPLC.currentTest.name,"Kapak kilidi kullanım dışı");
           ui->bMainDoorInfo->setEnabled(false);
        }
    }

    if (myPLC.pipe1LeakageDetected == (data[4] & 0b00000001)  )
    {

    }
    else
    {
        myPLC.pipe1LeakageDetected = (data[4] & 0b00000001) ;

        if (myPLC.pipe1LeakageDetected)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"1. hatta sızıntı tespit edildi.");
            ui->laFault21->setVisible(true);
            ui->Hortum1_2->setChecked(false);
            ui->Hortum1->setChecked(true);
        }
        else
        {
            ui->Hortum1_2->setChecked(true);
            ui->Hortum1->setChecked(false);
        }
    }

    if (myPLC.pipe2LeakageDetected == (data[4] & 0b00000010) >> 1 )
    {

    }
    else
    {
        myPLC.pipe2LeakageDetected = (data[4] & 0b00000010) >> 1 ;

        if (myPLC.pipe2LeakageDetected)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"2. hatta sızıntı tespit edildi.");
            ui->laFault22->setVisible(true);
            ui->Hortum2_2->setChecked(false);
            ui->Hortum2->setChecked(true);
        }
        else
        {
            ui->Hortum2_2->setChecked(true);
            ui->Hortum2->setChecked(false);

        }
    }

    if (myPLC.pipe3LeakageDetected == (data[4] & 0b00000100) >> 2 )
    {

    }
    else
    {
        myPLC.pipe3LeakageDetected = (data[4] & 0b00000100) >> 2 ;

        if (myPLC.pipe3LeakageDetected)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"3.hatta sızıntı tespit edildi.");
            ui->laFault23->setVisible(true);
            ui->Hortum3_2->setChecked(false);
            ui->Hortum3->setChecked(true);
        }
        else
        {
            ui->Hortum3_2->setChecked(true);
            ui->Hortum3->setChecked(false);
        }
    }

    if (myPLC.pipe4LeakageDetected== (data[4] & 0b00001000) >> 3 )
    {

    }
    else
    {
        myPLC.pipe4LeakageDetected = (data[4] & 0b00001000) >> 3 ;

        if (myPLC.pipe4LeakageDetected)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"4.hatta sızıntı tespit edildi.");
            ui->laFault24->setVisible(true);
            ui->Hortum4_2->setChecked(false);
            ui->Hortum4->setChecked(true);
        }
        else
        {
            ui->Hortum4_2->setChecked(true);
            ui->Hortum4->setChecked(false);
        }
    }

    if (myPLC.pipe5LeakageDetected == (data[4] & 0b00010000) >> 4 )
    {

    }
    else
    {
        myPLC.pipe5LeakageDetected = (data[4] & 0b00010000) >> 4 ;

        if (myPLC.pipe5LeakageDetected)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"5.hatta sızıntı tespit edildi.");
            ui->laFault25->setVisible(true);
            ui->Hortum5_2->setChecked(false);
            ui->Hortum5->setChecked(true);
        }
        else
        {
            ui->Hortum5_2->setChecked(true);
            ui->Hortum5->setChecked(false);
        }
    }

    if (myPLC.ManualPrepareLinesFixing == (data[4] & 0b00100000) >> 5 )
    {

    }
    else
    {
        myPLC.ManualPrepareLinesFixing = (data[4] & 0b00100000) >> 5 ;

        if (myPLC.ManualPrepareLinesFixing)
        {
            // Manuel hava alma işlemi
            ui->label_62->setVisible(true);


        }
        else
        {
          ui->label_62->setVisible(true);
        }
    }

    if (myPLC.ManualEvacLinesFixing == (data[4] & 0b01000000) >> 6 )
    {

    }
    else
    {
        myPLC.ManualEvacLinesFixing = (data[4] & 0b01000000) >> 6 ;

        if (myPLC.ManualEvacLinesFixing)
        {
            ui->label_63->setVisible(true);
        }
        else
        {
            ui->label_63->setVisible(false);
        }
    }

    if (myPLC.pipePrepareActive == (data[5] & 0b00000001) )
    {

    }
    else
    {
        myPLC.pipePrepareActive = (data[5] & 0b00000001) ;
        if (myPLC.pipePrepareActive)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Basınç sistemi hazırlanıyor.");
            LogControl->machineInfosToText("Basınç sistemi hazırlanıyor.");
            writeToLogTable(ui,"Basınç sistemi hazırlanıyor.");
            ui->swSubWorks->setCurrentIndex(1);
            ui->laDurum1->setVisible(true);
        }
        else
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Basınç sistemi hazırlandı.");
            LogControl->machineInfosToText("Basınç sistemi hazırlandı.");
            writeToLogTable(ui,"Basınç sistemi hazırlandı.");
            ui->laDurum1->setVisible(false);
        }
    }

    if (myPLC.workPumpCleanToExpansion == (data[5] & 0b00000010) >> 1 )
    {

    }
    else
    {
        myPLC.workPumpCleanToExpansion = (data[5] & 0b00000010) >> 1 ;
        if (myPLC.workPumpCleanToExpansion)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"temiz tanktan basınç tankına sıvı aktarılıyor.");
            LogControl->machineInfosToText("temiz tanktan basınç tankına sıvı aktarılıyor.");
            writeToLogTable(ui,"temiz tanktan basınç tankına sıvı aktarılıyor.");
            ui->cbPipeControl->setText("Sivi aktarim");
            ui->cbPipeControl->setEnabled(true);
        }
        else
        {
            writeToLogTable(ui,"temiz tanktan basınç tankına sıvı aktarıldı.");
            LogControl->testInfosToText(myPLC.currentTest.name,"temiz tanktan basınç tankına sıvı aktarıldı.");
            LogControl->machineInfosToText("temiz tanktan basınç tankına sıvı aktarıldı.");
            ui->cbPipeControl->setEnabled(false);
        }
    }

    if (myPLC.pipeAirTake == (data[5] & 0b00000100) >> 2 )
    {

    }
    else
    {
        myPLC.pipeAirTake = (data[5] & 0b00000100) >> 2 ;
        if (myPLC.pipeAirTake)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortumların havası alınıyor.");
            LogControl->machineInfosToText("Hortumların havası alınıyor.");
            writeToLogTable(ui,"Hortumların havası alınıyor.");
            ui->cbPipeControl->setText("Hava alma");
            ui->cbPipeControl->setEnabled(true);
        }
        else
        {
            writeToLogTable(ui,"Hortum hava alma tamamlandı.");
            LogControl->testInfosToText(myPLC.currentTest.name,"Hortum hava alma tamamlandı.");
            LogControl->machineInfosToText("Hortum hava alma tamamlandı.");
            ui->cbPipeControl->setEnabled(false);
        }
    }

    if (myPLC.pressureTestActive == (data[5] & 0b00001000) >> 3 )
    {

    }
    else
    {
        myPLC.pressureTestActive = (data[5] & 0b00001000) >> 3 ;
        if (myPLC.pressureTestActive)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Basınç kontrol sistemi aktif.");
            LogControl->machineInfosToText("Basınç Kontrol sistemi aktif.");
            writeToLogTable(ui,"Basınç Kontrol sistemi aktif.");
            ui->cbPipeControl->setText("Basınçlandırma.");
            ui->cbPipeControl->setEnabled(true);
        }
        else
        {
            writeToLogTable(ui,"Basınç kontrol sistemi kapandı.");
            LogControl->testInfosToText(myPLC.currentTest.name,"Basınç kontrol sistemi kapandı.");
            LogControl->machineInfosToText("Basınç kontrol sistemi kapandı.");
            ui->cbPipeControl->setEnabled(false);
        }
    }

    if (myPLC.waitingSetTemp == (data[5] & 0b00010000) >> 4 )
    {

    }
    else
    {
        myPLC.waitingSetTemp = (data[5] & 0b00010000) >> 4 ;
        if (myPLC.waitingSetTemp)
        {
            LogControl->testInfosToText(myPLC.currentTest.name,"Basınç kontrol sistemi set sıcaklığını bekliyor.");
            LogControl->machineInfosToText("Basınç kontrol sistemi set sıcaklığını bekliyor.");
            writeToLogTable(ui,"Basınç kontrol sistemi set sıcaklığını bekliyor.");
            ui->cbPipeControl->setText("Basınç Bekliyor");
            ui->cbPipeControl->setEnabled(false);
        }
        else
        {
            LogControl->machineInfosToText("Basınç bekleme kapalı.");

        }
    }

    if (myPLC.pressureFixing == (data[5] & 0b00100000) >> 5)
    {

    }
    else
    {
        myPLC.pressureFixing = (data[5] & 0b00100000) >> 5  ;

        if (myPLC.pressureFixing)
        {
            ui->laDurum3->setVisible(true);
        }
        else
        {
            ui->laDurum3->setVisible(false);
        }
    }

    if (myPLC.pressureFixed == (data[5] & 0b01000000 >> 6 ) )
    {

    }
    else
    {
        myPLC.pressureFixed = (data[5] &  0b01000000 >> 6) ;
        if (myPLC.pressureFixed)
        {
            ui->laDurum3_2->setVisible(true);
        }
        else
        {
            ui->laDurum3_2->setVisible(false);
        }
    }
}

void UpdateInfoBytes::updateInfoByte0D(Ui::MainWindow *ui,QByteArray data)
{
    myPLC.tStep = data[0];
    myPLC.pStep = data[1];
    myPLC.vStep = data[2];
    myPLC.pStepRepeat = (data[3] & 0xFF) | ((data[4] & 0xFF) <<  8) |
            ((data[5] & 0xFF) << 16);
    myPLC.vStepRepeat = (data[6] & 0xFF) | ((data[7] & 0xFF) <<  8) |
            ((data[8] & 0xFF) << 16);
    //   ui->laCurrentTStepMain->setText(QString::number(tStep));
}

void UpdateInfoBytes::updateInfoByte0C(Ui::MainWindow *ui,QByteArray data){
    myPLC.currentTest.elapsedTestSeconds = (data[0] & 0xFF) | ((data[1] & 0xFF) <<  8) |
            ((data[2] & 0xFF) << 16);
    myPLC.currentTest.remainingTime = (data[3] & 0xFF) | ((data[4] & 0xFF) <<  8) |
            ((data[5] & 0xFF) << 16);
    myPLC.currentTest.elapsedCycle = qint16(((data[7] & 0xff) << 8) | (data[6] & 0xff));
    myPLC.currentTest.currentStep = qint8(data[8] & 0xff);

    ui->pb_testProgress->setValue(myPLC.currentTest.elapsedTestSeconds);
    ui->pb_testProgress_2->setValue(myPLC.currentTest.elapsedTestSeconds);

    testManager.updateTestInfos(myPLC.currentTest);

}

void UpdateInfoBytes::visualsToStop(Ui::MainWindow *ui){

    ui->cbSelectProfileMain->setCurrentIndex(0);
    ui->cbSelectProfileMain->setEnabled(true);
    ui->bStartTest->setEnabled(true);
    ui->bStopTest->setEnabled(false);
    ui->bPauseTest->setEnabled(false);
    ui->bStartTest1500h->setText("Başla");
    ui->bStartTest1500h->setEnabled (true);
    ui->bStopTest1500h->setEnabled (false);
    ui->bPauseTest1500h->setEnabled (false);
    ui->leTTotalCycle->setEnabled(true);
    ui->bSetTemperatureStop->setEnabled(false);
    ui->cbSelectProfileManual->setCurrentIndex(0);
    ui->cbSelectProfileManual->setEnabled(true);
    ui->bStartTestManual->setEnabled(true);
    ui->bStopTestManual->setEnabled(false);
    ui->bPauseTestManual->setEnabled(false);
    ui->sbTTotalCycleManual->setEnabled(true);
    ui->cbTestMode->setEnabled(false);
    ui->cbTestMode->setText("Cihaz Bosta");
    ui->cbTestPrepare->setVisible(false);
    ui->cbTestActive->setVisible(false);
    ui->cbTestComplete->setVisible(false);
    ui->swSubWorks->setCurrentIndex(0);
    writeToLogTable(ui,"Test iptal edildi.");
}

void UpdateInfoBytes::visualsToRecipeMode(Ui::MainWindow *ui){
    myPLC.currentTest = testManager.CreateTest(TestTypes::recipe);
    ui->cbSelectProfileMain->setEnabled(false);
    ui->bStartTest->setEnabled(false);
    ui->bStopTest->setEnabled(true);
    ui->bPauseTest->setEnabled(true);
    ui->leTTotalCycle->setEnabled(false);
    ui->cbSelectProfileManual->setEnabled(false);
    ui->bStartTestManual->setEnabled(false);
    ui->bStopTestManual->setEnabled(true);
    ui->bPauseTestManual->setEnabled(true);
    ui->bStartTest1500h->setEnabled(false);
    ui->bResetFault->setVisible(false);
    ui->sbTTotalCycleManual->setEnabled(false);

    LogControl->machineInfosToText("Recete Testi Başladı.");
    LogControl->testInfosToText(myPLC.currentTest.name,"Test Başladı.");
    writeToLogTable(ui,"Recete Testi Başladı.");

}

void UpdateInfoBytes::visualsToPause(Ui::MainWindow *ui){


    LogControl->testInfosToText(myPLC.currentTest.name,"Test beklemede.");
    LogControl->machineInfosToText("Test beklemede.");
    writeToLogTable(ui,"Test beklemede.");

    ui->bPauseTestManual->setEnabled(false);
    ui->bPauseTest->setEnabled(false);

    ui->bStartTest->setEnabled(true);
    ui->bStartTestManual->setEnabled(true);

    ui->bStartTest1500h->setText("Devam");
    ui->bStartTest1500h->setEnabled(true);
    ui->bPauseTest1500h->setEnabled(false);

    ui->bManualPressureLinesStart->setEnabled(true);
    ui->bManualEvacLines->setEnabled(true);
    ui->bManualPrepareLines->setEnabled(true);
    ui->cbTestMode->setText("Test Bekliyor.");
    ui->cbTestMode->setEnabled(false);
    ui->cbTestPrepare->setVisible(true);
    ui->cbTestComplete->setVisible(true);

}

void UpdateInfoBytes::visualsToMaintenanceMode(Ui::MainWindow *ui){
    LogControl->machineInfosToText("Bakım modu aktif");
    writeToLogTable(ui,"Bakım modu aktif.");
    ui->bManualPressureLinesStart->setEnabled(true);
    ui->bManualEvacLines->setEnabled(true);
    ui->bManualPrepareLines->setEnabled(true);
    ui->cbTestMode->setText("Bakım Modu");
    ui->cbTestMode->setEnabled(true);
    ui->cbTestPrepare->setVisible(false);
    ui->cbTestComplete->setVisible(false);

}

void UpdateInfoBytes::visualsToFixMode(Ui::MainWindow *ui){
    myPLC.currentTest = testManager.CreateTest(TestTypes::fix);
    LogControl->testInfosToText(myPLC.currentTest.name,"Sıcaklık sabitleme modu aktif");
    LogControl->machineInfosToText("Sıcaklık sabitleme modu aktif");
    writeToLogTable(ui,"Sıcaklık Fix Modu aktif.");
    writeToLogTable(ui,"Sıcaklık Fix");
    ui->cbTestMode->setText("1500h Mode");
    ui->cbTestPrepare->setVisible(false);
    ui->cbTestComplete->setVisible(false);
    ui->bSetTemperatureStart->setEnabled(false);
    ui->bSetTemperatureStop->setEnabled(true);
    ui->bStartTest->setEnabled(false);
    ui->bStopTest->setEnabled(true);
    ui->bPauseTest->setEnabled(false);
    ui->bResetFault->setVisible(false);
    ui->bManualPressureLinesStart->setEnabled(false);
}

void UpdateInfoBytes::visualsTo1500hMode(Ui::MainWindow *ui){
    myPLC.currentTest = testManager.CreateTest(TestTypes::mode1500h);
    LogControl->testInfosToText(myPLC.currentTest.name,"1500h modu aktif");
    LogControl->machineInfosToText("1500h modu aktif");
    writeToLogTable(ui,"1500h modu aktif.");
    ui->cbTestMode->setText("1500h Mode");
    ui->cbTestMode->setEnabled("true");
    ui->cbTestPrepare->setVisible(true);
    ui->cbTestComplete->setVisible(true);
    ui->bStartTest1500h->setEnabled(false);
    ui->bPauseTest1500h->setEnabled(true);
    ui->bStopTest1500h->setEnabled(true);
    ui->bSetTemperatureStart->setEnabled(false);
    ui->bSetTemperatureStop->setEnabled(true);
    ui->bStartTest->setEnabled(false);
    ui->bStopTest->setEnabled(true);
    ui->bPauseTest->setEnabled(true);
    ui->bResetFault->setVisible(false);

    ui->bManualPressureLinesStart->setEnabled(false);
    ui->bManualPressureLinesStop->setEnabled(false);
    ui->bManualEvacLines->setEnabled(false);
    ui->bManualPrepareLines->setEnabled(false);
}

void UpdateInfoBytes::writeToLogTable(Ui::MainWindow *ui,QString info)
{
    ui->warningTable->insertRow(0);
    ui->warningTable->setItem(0, 0, new QTableWidgetItem(info));
    ui->warningTable->setItem(0, 1, new QTableWidgetItem(
                                  QDate::currentDate().toString(Qt::SystemLocaleShortDate) + "/" +
                                  QTime::currentTime().toString("hh.mm.ss")));
}


/*
Test UpdateInfoBytes::generateTest(TestTypes type){
    Test test;
    test.id     =   getTestID();
    setLastTestID(test.id);
    addTestToList(test.id);
    test.name   =   QString::number(test.id);
    test.type = type;
     #ifdef Q_OS_LINUX
    //linux code goes here
    if (!QDir("/home/pi/InDetail/records/" + testFolder).exists())
    {
        QDir().mkdir("/home/pi/InDetail/records/" + testFolder);
    }
     #endif
     #ifdef Q_OS_WIN
    // windows code goes here
    if (!QDir("records\\" + test.name).exists())
    {
        QDir().mkdir("records\\" + test.name);
    }
    #endif
    testInfosToTxt(test);
    return test;
}

qint32 UpdateInfoBytes::getTestID(){
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\lastTestID.txt";
#endif

    QString dateID = QDate::currentDate().toString("yyMMdd");
    quint16 newTestNumberID;
    QString strNewTestID;
    quint32 newTestID;
    QFile file(filePath);

    if (file.open(QFile::ReadOnly))
    {
    QTextStream stream(&file);
         while (!stream.atEnd())
         {
          QString line = stream.readLine();
          if(line.left(6) == dateID){
              newTestNumberID = (line.mid(6,(line.size()-6)).toInt() + 1);
              strNewTestID = dateID + QString::number(newTestNumberID);
              newTestID = strNewTestID.toInt();
          }
          else
          {
              strNewTestID = dateID + "1";
              newTestID = strNewTestID.toInt();
          }
         }
    return newTestID;
    }
}

void UpdateInfoBytes::setLastTestID(qint32 lastTestID){
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\lastTestID.txt";
#endif

    QFile file(filePath);

    if (file.open(QFile::WriteOnly|QFile::Truncate))
    {
        QTextStream stream(&file);
        stream <<  QString::number(lastTestID) ;
        file.close();
    }
}

void UpdateInfoBytes::addTestToList(qint32 lastTestID){
#ifdef Q_OS_WIN
    // windows code goes here
    QString filePath = "Settings\\TestList.txt";
#endif

    QFile file(filePath);

    if (file.open(QFile::WriteOnly|QFile::Append))
    {
        QTextStream stream(&file);
        stream <<  QString::number(lastTestID) << "\n" ;
        file.close();
    }
}

void UpdateInfoBytes::testInfosToTxt(Test test){
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
                <<  test.remainingTime << ";";

        file.close();
    }
}

*/
