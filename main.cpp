//#include <Gui>
//#include <Core/QCoreApplication>
#include <stdlib.h>
#include <stdio.h>
#include <streambuf>
#include <iostream>
#include "strToInt.h"
//#include <QDesktopServices>
//#include <QUrl>
#include "doubleToString.h"
#include "Maxpop.h"
#include "makeMoney.h"
#include "militaryExpencesmoney.h"
#include <ctime>
#include <time.h>
#include "goverments.h"
int main(int argc, char *argv[])
{
    //QCoreApplication a(argc, argv);
   int troopint = 0;
   int jetsint = 0;
   int turretsint = 0;
   int tanksint = 0;
   double aa = 22.5;
   double b = 1.0;
   double c = 18000.0;
   double d = 2.0;
   double industryGovermentBonus = 1.00;
   //static int money;

   static std::string land;
   static int spies;
   static int troops;
   static int jets;
   static int turrets = 0;
   double troopdouble = 0;
   double tanksdouble = 0;

   static int tanks;

   static double attack;


   static int maxpopINT = 0;
   static std::string temp2;
   static int foodPrice = 0;
   static float taxDouble = 0;
   static double Networthint; // oli int
   static std::string NetworthString;
   static std::string govermentString;
   static double residentialTech = 1.00;
   static double businessTech = 1.00;
  // static QString temp999;
   static std::string landstring;
   //static int temp500;
   //static double temp600;
   static std::string weaponTechString;
   static std::string tempString;
   static int weaponStringSize;
   static double weaponDouble;
   static int weaponInt;
   static std::string TroopsComa;
   static std::string SpiesComa;
   static std::string JetsComa;
   static std::string TurretsComa;
   static std::string Tankscoma;
   static std::string businessTechString;
   static std::string PerCapitaIncomeString;
   static int businessInt;
   static int businessStringSize;
   static std::string residentialTechString;
   static int residenialStringSize = 0;
   static int residentialInt = 0;
   static double returnPop = 0;
   static int landINT = 0;
   static double revenue = 0;
   static std::string GDPpopString = "";
   static double GDPpopdouble = 0;
   static int GDPpopint = 0;
   char usingCashing  = 'N';
   double cashningBonus = 1.0;
   int PerCapita = 0;
   double BuildingIndustrialComplexesDouble = 0;
   int priceTroops = 0;
   int priceJets = 0;
   int priceTanks = 0;
   int priceTurrets = 0;





static std::string enemyGoverment;
static double enemyDefence;
static double enemyGovermnetMilitaryBonus = 1.00;
static unsigned int command;
static double BuildingResidences; // oli double
static double BuildingIndustrialComplexes;
//QProcess *process = new QProcess();
//QString program;
//profitProgram2 worked without www

//program = "firefox http://www.wolframalpha.com/input/?i=max";
 while(1){
std::cout << "insert command" << std::endl;
//std::cout << "1: own military page" << std::endl;
//std::cout << "2: own reserch page" << std::endl;
std::cout << "1. own default Adivisor page" << std::endl;
std::cout << "2: enemy military spy" << std::endl;
std::cout << "10 manually insert food price" << std::endl;
//std::cout << "12 manually insert cash(not used anywhere)" << std::endl;
std::cout << "100 see max pop with tax rate, use after advisor page (broken)" << std::endl;
std::cout << "101 to see revenue with a tax rate, use after advisor page" << std::endl;
std::cout << "102 to see profit selling military, use after advisor page and inserting price of food //TODO" << std::endl;
std::cout << "200 to see dollar expences from military, use after advisor page //TODO FIX this broken" << std::endl;
std::cout << "999 to exit" << std::endl;
std::cout << "1000 to manually add prices for troops,turrets and tanks //TODO do manual copy-paste for market screen" << std::endl;


std::cin >> command;
switch(command){
/*
case(1):


                           std::cout << "Insert own military page" << std::endl;
                           std::cin >> temp2;
                           while( temp2 != "Troops"){
                           std::cin >> temp2;
                           } 
                           std::cin >> troops;

                           while( temp2 != "Jets"){
                           std::cin >> temp2;
                           }
                           std::cin >> jets;

                           while( temp2 != "Tanks"){
                           std::cin >> temp2;
                           }
                           std::cin >> tanks;
                           while( temp2 != "us"){
                           std::cin >> temp2;
                           }
                           std::cout << "Attack streght" << std::endl;
                           attack = 2*jets+troops+4*tanks;
                           std::cout << attack << std::endl;
                           continue;
case(2):
                           std::cout << "Insert RESERCH page" << std::endl;


                           while( temp2 != "Weapons"){
                           std::cin >> temp2;
                           }
                           std::cin >> sotaTechString;
                           std::cin >> sotaTechString;
                           std::cin >> sotaTechString;
                           double warfareTech;
                           std::cin >> warfareTech;


                           while( temp2 != "us"){
                           std::cin >> temp2;
                           }

                            std::cout << "WarfareTech" << std::endl;
                            //std::cout << sotaTechString << std::endl;
                            std::cout << warfareTech << std::endl;
                            warfareTech /= 100;
                            attack *= warfareTech;
                            std::cout << "Attack with tech" << std::endl;
                            std::cout << attack << std::endl;
                            continue;
*/


case(1):
                        temp2 == "2a";
                        while( temp2 != "the"){
                        std::cin >> temp2 ;
                        }

                        temp2 == "2a";

                        while( temp2 != "the"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> govermentString;

                        // This is area to modify so bonuses that change every round
                        if (govermentString == "Communism"){

                            industryGovermentBonus = 1.35;
                        }
                        // This is area to modify so bonuses that change every round
                        while (temp2 != "Networth"){
                        std::cin >> temp2 ;
                        }

                        std::cin >> NetworthString;
                        NetworthString.erase(0,1);
                        Networthint = strToint(NetworthString);

                        while( temp2 != "Land"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> land;


                        while( temp2 != "Residences"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> BuildingResidences;

                        while( temp2 != "Complexes"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> BuildingIndustrialComplexes;

                        while( temp2 != "Business"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> tempString;
                        std::cin >> businessTechString;
                        businessStringSize = businessTechString.size();
                        businessStringSize--;
                        businessTechString.erase(businessStringSize);
                        businessInt = strToint(businessTechString);
                        businessTech = businessInt;
                        businessTech /= 1000;


                        while( temp2 != "Residential"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> tempString;
                        std::cin >> residentialTechString;
                        residenialStringSize = residentialTechString.size();
                        residenialStringSize--;
                        residentialTechString.erase(residenialStringSize);
                        residentialInt = strToint(residentialTechString);
                        residentialTech = residentialInt;
                        residentialTech/= 1000;


                        while( temp2 != "Weapons"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> tempString;
                        std::cin >> weaponTechString;
                        weaponStringSize = weaponTechString.size();
                        weaponStringSize--;
                        weaponTechString.erase(weaponStringSize);
                        weaponInt = strToint(weaponTechString);
                        weaponDouble = weaponInt;
                            weaponDouble = weaponDouble/1000;
                            
                       //while( temp2 != "Per"){
                       // std::cin >> temp2 ;
                       // }
                        //std::cin >> tempString;
                        //puts("Line 261");
                       // 
                       // 
                        //std::cin >> tempString;
                        //std::cout << tempString << std::endl;
                        //std::cin >> tempString;
                        //std::cout << tempString << std::endl; 
                        //std::cin >> PerCapitaIncomeString;
                        //std::cout << PerCapitaIncomeString << std::endl;
                        
                          while( temp2 != "Income"){
                          std::cin >> temp2;
    
                        }
                        std::cin >> GDPpopString;
                        std::cout << "temp2 line276 " << temp2 << std::endl;
                        std::cout << " GDPpopString= " << GDPpopString << std::endl;
                        GDPpopint = strToint(GDPpopString);
                        std::cout << "Line 281, GDPpopint = " << GDPpopint << std::endl; 
                        GDPpopdouble = (GDPpopint/100.0);
                       	std::cout << "Line 283, GDPpodouble = " << GDPpopdouble << std::endl; 	
                       //  while( temp2 != "Income")
//
  //                      
    //                    }

                        

                        while( temp2 != "Spies"){
                        std::cin >> temp2;
                        std::cout << "Loop for looking spie number, advisor loop " << temp2 << std::endl;
                        }
                        std::cin >> SpiesComa;
                        std::cout << "Spies with coma are " << SpiesComa << std::endl;
                        temp2 = "!!!";
                        spies = strToint(SpiesComa);
                        while( temp2 != "Troops"){
                        std::cin >> temp2;
                        }
                        std::cin >> TroopsComa;
                        troops = strToint(TroopsComa);
                        temp2 = "!!!";


                        while( temp2 != "Jets"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> JetsComa;
                        jets = strToint(JetsComa);
                        temp2 = "!!!";
                        while (temp2 != "Turrets"){
                        std::cin >> temp2;
                        }
                        std::cin >> TurretsComa;
                        turrets = strToint(TurretsComa);
                        temp2 = "!!!";
                        while( temp2 != "Tanks"){
                        std::cin >> temp2 ;
                        }
                        std::cin >>  Tankscoma;
                        tanks = strToint(Tankscoma);

                        temp2 = "!!!";
                        while( temp2 != "us"){
                        std::cin >> temp2 ;
                       // std::cout << "In last loop" << std::endl;
                        }

                        std::cout << "Goverment is " << govermentString << "\n";
                        std::cout << "land is " << land << "\n";
                        std::cout << "Residences are " <<  BuildingResidences << "\n";

                        std::cout << "Goverment is " << govermentString << "\n";
                        std::cout << "land is " << land << "\n";
                        std::cout << "Residences are " <<  BuildingResidences << "\n";
                        std::cout << "Industrial Complexes are " << BuildingIndustrialComplexes << std::endl;
                        std::cout << "Temp String is " << '"' << tempString << '"' << std::endl;
                        std::cout << "Business tech is=" << businessTech << std::endl;
                        std::cout << "Residential tech is=" << residentialTech << std::endl;
                        std::cout << "Weapon String is " << '"' << weaponTechString << '"' << std::endl;
                        std::cout << "Weapon Tech double is " << weaponDouble << std::endl;
                        std::cout << "Troops are " << troops << std::endl;
                        std::cout << "Jets are " << jets << std::endl;
                        std::cout << "Tanks are " << tanks << std::endl;
                        std::cout << "Attack streght  " << std::endl;
                        attack = 2*jets+troops+4*tanks;
                        attack *= weaponDouble;
                        std::cout << attack << std::endl;

                        std::cout << "Networth String  is " << NetworthString << std::endl;
                        std::cout << "Networth is " << Networthint << std::endl;
                        //std::cout << "t is tax how much make eventally running a turn with cash on, taking to acount for the price of food " << taxDouble << '\n';
                        //std::cout << "Insert to wolfram alpha: max " << "1.2t*" << "(22.5*(1.0-t)*(1.0+((" << Networthint << "/" << land << ")/90000)) * (1 + (2 * (" << BuildingResidences << "/" << land << ")))" <<"*" << "((1-0.95*" << "t" << ")*(24*" << BuildingResidences <<"+12*" << land <<") )*" << businessTech << "*" << residentialTech;
                        //std::cout << "-0.03*(" << foodPrice << ")" << "*" << "((1-0.95*" << "t)" <<"(24*" << BuildingResidences <<"+12*" << land <<") )*" << residentialTech << std::endl;
                        //std::cout << "ta income as String " << PerCapitaIncomeString << std::endl;
                        //double perCapitaIncomeDouble = 0;

                        std::cout << "Take of the part starting with -0.03 to optimise without counting how much food you need (This tells the opitimal revenue before expensies) " << NetworthString << std::endl;
                        std::cout << "Networth as String " << NetworthString << std::endl;
                        //std::cout << "Insert y to open wolframampha in Linux, n as no" << std::endl;
                        //std::cin >> tempString ;
                        //program = "firefox http://www.wolframalpha.com/input/?i=max";
                        //program.append("1.2t*");
                        //program.append("22.5*(1.0-t)*(1.0%2B((");
                        //temp2 = doubleToString(Networthint);
                        //temp999 = QString::fromStdString(temp2);
                        //program.append(temp999);
                        //program.append('/');
                        //temp999 = QString::fromStdString(land);
                        //program << land;
                        //program.append(temp999);
                        //program.append(")/90000))");
                        //temp999 = QString::fromStdString("*(1%2B(2*(");
                        //program.append(temp999);
                        //temp2 = doubleToString(BuildingResidences);
                        //temp999 =  QString::fromStdString(temp2);
                        //program.append(temp999);
                        //program.append("/");
                        //temp500 = strToint(land);
                        //temp600 = temp500;
                        //landstring = doubleToString(temp600);
                        //temp999 =  QString::fromStdString(landstring);
                        //program.append(temp999);
                        //program.append(")))");
                        //program.append("*((1-0.95*t)*(24*");
                        //temp2 = doubleToString(BuildingResidences);
                        //temp999 =  QString::fromStdString(temp2);
                        //program.append(temp999);
                        //program.append("%2B12*");
                        //temp999 =  QString::fromStdString(landstring);
                        //program.append(temp999); // total land string
                        //rogram.append("))");
                        //temp2 = doubleToString(residentialTech);
                        //temp999 =  QString::fromStdString(temp2);
                        //program.append(temp999);
                        //program.append("*");
                        //temp2 = doubleToString(businessTech);
                        //temp999 =  QString::fromStdString(temp2);
                        //program.append(temp999);
                        //program.append('"');
                        //temp2 = program.toAscii();
                        //std::cout << temp2 << std::endl;
                        //if(tempString == "y"){
                        //process->start(program);
                        //}

                         //QDesktopServices::openUrl(QUrl("http://www.googleadservices.com/pagead/aclk?sa=L&ai=CMHo6PutyUMrTD668yAPbtoCoBpqPtf8Cqv6NjTjy25OxmQEQASDnjKQiUIu1yPX9_____wFg9_ncgsgJoAHu__XcA8gBCakC3h3Xjvu5tT6oAwGqBHxP0IJ2JrvxhInOv5Vj4rtZQjS56ccgTmh3YeFBOjpWeLzdE5SlhwFeYEBDR0-g1Qa4FSOosSMbrThGOlCbnoJIi46uFxqOVVE9_1j0aFv6TzBUKxr1H1ImuoPnIZR69S2SGZe2xTYGgB5z-oUok03FiSOGioRg2teyUEI4iAYBoAYR&num=1&cid=5GgTcH7wAr9TTqxGCV4aWW6I&sig=AOD64_0TIv8bYHFYAhX0duZV0cNIJWq5Bg&client=ca-pub-2658423091642646&adurl=http%3A%2F%2Fad-emea.doubleclick.net/click%3Bh%3Dv8/3d08/2/0/%2a/g%3B261938130%3B1-0%3B0%3B85944834%3B2321-160/600%3B50286562/50273240/1%3B%3B%7Esscs%3D%3fhttp://www.zalando.fi/mbox-ons-clothing-women/?wmc=DIS358_RH_FI_1881756."));

                         //process->start(profitProgram); // cannot open 2 firefox apps at the same time

                        //QDesktopServices::openUrl(QUrl(""));
                        MakeMoney();
                        continue;
case(2):
                            std::cout << "Type enemy goverment name" << std::endl;
                            std::cin >> enemyGoverment;
                            enemyGovermnetMilitaryBonus = Govermentmilitary(enemyGoverment);
                            std::cout << "Enemy Military Bonus " << enemyGovermnetMilitaryBonus << std::endl;




                            std::cout << "Insert military spy" << std::endl;
                            double enemyTroops;
                            while( temp2 != "Troops"){
                            std::cin >> temp2;
                            }
                            std::cin >> enemyTroops;
                            while( temp2 != "Turrets"){
                            std::cin >> temp2;
                            }
                            double enemyTurrets;
                            std::cin >> enemyTurrets;

                            while( temp2 != "Tanks"){
                            std::cin >> temp2;
                            }
                            double enemyTanks;
                            std::cin >> enemyTanks;

                            enemyDefence = enemyTroops+2*enemyTurrets +4*enemyTanks;
                            std::cout << "Enemy Defence before line 171" << enemyDefence << std::endl;
                            enemyDefence *= enemyGovermnetMilitaryBonus;
                            std::cout << "EneneGovermentMilitary Bonus=" << enemyGovermnetMilitaryBonus << std::endl;
                             std::cout << "Your Attack with tech " << attack << std::endl;
                             std::cout << "Enemy Troops=" << enemyTroops << std::endl;
                             std::cout << "Enemy Turrets=" << enemyTurrets << std::endl;
                             std::cout << "Enemy Tanks=" << enemyTanks << std::endl;
                             std::cout << "Enemy Defence without tech, with goverment " << enemyDefence << std::endl;
                             continue;

case(10):
                        std::cout << "Insert food Price, no $ sign" << std::endl;
                        std::cin >> foodPrice;
                        MakeMoney();
                        continue;

//case(12):
//                       std::cin >> money;
case(100):
                        maxpopINT = Maxpop(taxDouble, landINT, land , BuildingResidences, businessTech);
                        MakeMoney();
                        continue;

case(101):
                        std::cout << "TAX, eg 0.33" << std::endl ;
                        std::cin >> taxDouble ;
                        std::cout << "TAXDouble=" << taxDouble << std::endl;
                        landINT =strToint(land);
                        std::cout << "land=" << land << std::endl;
                        std::cout << "Residences=" << BuildingResidences << std::endl;
                        std::cout << "Residency tech" << residentialTech << std::endl;
                        returnPop = (BuildingResidences*24+12*landINT)*(1-0.95*taxDouble);
                        returnPop *= residentialTech;
                        std::cout << "Returnpop=" << returnPop << std::endl ;
                        std::cout << "GovermentPOP=" << GovermentPop(govermentString) << std::endl;
                        returnPop = returnPop*(GovermentPop(govermentString));

                        maxpopINT = returnPop ;



                        // Put in comments in final version
                        std::cout << "businessTech "<<businessTech<< std::endl;
                        std::cout << "tax double"<<taxDouble << std::endl;
                        std::cout << "Networthint=" << Networthint << std::endl;
                        std::cout << "landINT=" << landINT << std::endl;
                        std::cout << "Max pop as int=" << maxpopINT << std::endl;
                        std::cout << "Building Residences" <<BuildingResidences <<std::endl;
                        std::cout << "aa=" << aa <<std::endl;
                        std::cout << "b=" << b  << std::endl;
                        std::cout << "c=" << c << std::endl;
                        std::cout << "d=" << d << std::endl;
                        // Put in comments in final version


                        //std::cout << double((Networthint/landINT)) << std::endl;

                        
                        std::cout << "Per capita income="<<  GDPpopdouble << std::endl;
			

                        std::cout << "Per capita income double=" << GDPpopdouble  << std::endl;
                        // Put in comments in final version
                        revenue =  maxpopINT*GDPpopdouble*taxDouble;
                        std::cout << " Are you using cashing? Type Y or N" << std::endl;
                        std::cin >> usingCashing ;
                        if (usingCashing == 'Y'){
                            cashningBonus = 1.2;
                        }
                        std::cout << "Tax Revenues with max pop=" << cashningBonus*revenue <<  std::endl;
                        std::cout << "Food consumption from max pop=" << maxpopINT*0.03 << std::endl;
                        std::cout << "Food cost from pop(have you put the market value of food?)=" << maxpopINT*0.03*foodPrice << std::endl;
                        std::cout << "Profit from pop after food cost=" << (cashningBonus*revenue-1.0*maxpopINT*0.03*foodPrice) << std::endl;
                        MakeMoney();
                        continue;
 case(102):
                        troopint = 0;
                        jetsint = 0;
                        turretsint = 0;
                        tanksint = 0;

                        std::cout << "Industrial complexes=" << BuildingIndustrialComplexes << std::endl;
                        BuildingIndustrialComplexesDouble = BuildingIndustrialComplexes;
                        troopdouble = (BuildingIndustrialComplexesDouble*industryGovermentBonus);
                        troopdouble *= 1.86;
                        troopint = troopdouble;
                        tanksdouble = (BuildingIndustrialComplexesDouble*industryGovermentBonus);
                        tanksdouble *= 0.4;
                        tanksint = tanksdouble;

                        //int trooprevenue = troopint*priceTroops;
                        //int jetsrevenue = troopint*priceJets;
                        std::cout << "Troops per turn " << troopint  << " Troops revenue " << troopint*priceTroops << std::endl;
                        std::cout << "Jets per turn " << troopint << " Jets revenue " << troopint*priceJets  << std::endl;
                        std::cout << "Turrets per turn " << troopint <<  " Turrets revenue " << troopint*priceTanks<< std::endl;
                        std::cout << "Tanks per turn " << tanksint << " Tanks revenue " << tanksint*priceTanks <<  std::endl;

                        continue;

case(200):
                        std::cout << militaryExpencesmoney(troops,jets, turrets , tanks ,spies , Networthint  );
                        continue;


case(999):
                      exit(0);

case(1000):
                     //int priceTroops = 0;
                     //int priceJets = 0;
                     //int priceTanks = 0;
                     //int priceTurrets = 0;
    std::cout << " Troops price, Jets price, price Turrets , price Tanks" << std::endl;
    std::cin >> priceTroops ;
    std::cin >> priceJets;
    std::cin >> priceTurrets;
    std::cin >> priceTanks;

    continue;
}
                    /*
    std::cout << money << std::endl;
    std::cout << jets << std::endl;
    std::cout << tanks << std::endl;
    std::cout << troops << std::endl;
    */
    //attack = (2*jets+4*tanks+troops);
    //while(1){

    //}

    /*
    std::cout << "Attack" << std::endl;
    std::cout << attack << std::endl;
    */
     return 0;
}
}
