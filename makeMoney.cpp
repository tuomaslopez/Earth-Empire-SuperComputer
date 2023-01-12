#include <QProcess>
#include "Maxpop.h"
#include <stdlib.h>
#include <stdio.h>
#include <streambuf>
#include <iostream>
#include "strToInt.h"
#include <QDesktopServices>
#include <QUrl>
static int moneyRun =1;   //0 for popup, 1 for no popups

int MakeMoney(){
    if( moneyRun == 0){
    QString link = "http://www.google.com";
    QDesktopServices::openUrl(QUrl(link));
    // toimiva linux
    //QProcess *process = new QProcess();
    //QString profitProgram = "firefox www.google.com";
    //process->start(profitProgram);
    //toimiva linux
    moneyRun = 1;
    }
    return 0;
}
