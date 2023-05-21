#include "Maxpop.h"
#include <stdlib.h>
#include <stdio.h>
#include <streambuf>
#include <iostream>
#include <cstdlib>
#include "strToInt.h"


static int moneyRun = 0;   //0 for popup, 1 for no popups

int MakeMoney(){
    if( moneyRun == 0){
    puts("<Message from creator of Earth Empire Super Computer>");
    puts("On android/Iphone there is opionapp, toluna, Rewardly, M3 panel, Poll Pay where you can get Paypal money through surveys. Open desktop/tablets there is surveytime (this one is very useful you get paid 0.5 dollars from one survey instantly. So if everyone would do one surveytime survey a month and donate that, I could live with that. https://paypal.me/earthsupercomputer");
    
    //std::system("start www.google.com");
    
    //QString link = "http://www.google.com";
    //QDesktopServices::openUrl(QUrl(link));
    // toimiva linux
    //QProcess *process = new QProcess();
    //QString profitProgram = "firefox www.google.com";
    //process->start(profitProgram);
    //toimiva linux
    moneyRun = 1;
    }
    return 0;
}
