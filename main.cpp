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
   
   int turretsint = 0;
   int tanksint = 0;
   double industryGovermentBonus = 1.00;
   //static int money;

   static std::string land;
   static int spies;
   static int troops;
   static int enemyTroops;
   static int jets;
   static int turrets = 0;
   static int enemyturrets = 0;
   static int enemyTanks = 0;
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
   static std::string EnemyTroopsComa;
   static std::string SpiesComa;
   static std::string JetsComa;
   static std::string TurretsComa;
   static std::string EnemyTurretsComa;
   static std::string EnemyTurrentsComa;
   static std::string EnemyTankscoma;
   static std::string Tankscoma;
   static std::string EnemyTanksComa;
   static std::string businessTechString;
   static std::string PerCapitaIncomeString;
   static std::string readliness;
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
   int jetsint = 0;
   double industrialTech = 1.00;
   double agrciculturaTech = 1.00;
   std::string IndustrialTechString = "";
   int industrialInt = 1;
   double industrialDouble = 1.0;
   std::string farms;
   int FarmProduction;
   FarmProduction = 0;
   int SpyTechInt = 1;
   double spyTechDouble = 1.00;
   int Farmint = 0;
   std::string agriculturalTechString = "";
   int agriculturalStringSize = 0;
   int agriculturalInt = 0;
static double owredlinessdouble = 1.0;
static int ownReadliness = 1;
static std::string oilRigsString = "";   
static std::string enemyGoverment;
static double enemyDefence;
static double enemyGovermnetMilitaryBonus = 1.00;
static unsigned int command;
static double BuildingResidences; // oli double
static double BuildingIndustrialComplexes;
static std::string SpyTechString = "";
static double JetAttackNeededTobreak = 1;
//QProcess *process = new QProcess();
//QString program;
//profitProgram2 worked without www

//program = "firefox http://www.wolframalpha.com/input/?i=max";
 while(1){
std::cout << "insert command" << std::endl;
//std::cout << "1: own military page" << std::endl;
//std::cout << "2: own reserch page" << std::endl;
std::cout << "1. own default Adivisor page" << std::endl;
std::cout << "2. own Military Management page" << std::endl;
std::cout << "3: enemy military spy" << std::endl;
std::cout << "4: enemy spy repots" << std::endl;
std::cout << "10 manually insert food price for buying/selling food" << std::endl;
//std::cout << "12 manually insert cash(not used anywhere)" << std::endl;
std::cout << "100 see max pop with tax rate, use after advisor page " << std::endl;
std::cout << "101 to see revenue with a tax rate, use after advisor page" << std::endl;
std::cout << "102 to manually add prices for troops,turrets and tanks " << std::endl;
std::cout << "103 see how many Troops/Jets/Turrets/Tanks/Spies your country can produce" << std::endl;
std::cout << "104 to see farm production and profit for selling food " << std::endl;
std::cout << "999 to exit" << std::endl;



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
			    
                            industryGovermentBonus = GovermentIndustry("Communism");
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
                        
                        
                        
                        while (temp2 != "Farms" ){
                        std::cin >> temp2;
                        
                        }
                        std::cin >> farms;
			//td::cout << " FARMS IS LINE 227 = " << farms << std::endl;
                        
                        while( temp2 != "Rigs"){
			std::cin >> temp2 ;
			//std::cout << " Line 250 temp2=" << temp2 << std::endl; 
			
			}
			std::cin >> oilRigsString;
			//std::cout << "OilRigs is=" << oilRigsString << std::endl;

                        
                        
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



                        while( temp2 != "Agricultural"){
                        std::cin >> temp2 ;
                        }
                        std::cin >> tempString;
                        std::cin >> agriculturalTechString;
                        agriculturalStringSize = agriculturalTechString.size();
                        agriculturalStringSize--;
                        agriculturalTechString.erase(agriculturalStringSize);
                        agriculturalInt = strToint(agriculturalTechString);
                        agrciculturaTech = agriculturalInt;
                        agrciculturaTech/= 1000;
			//std::cout << " Agricultural Tech double=" << agrciculturaTech << std::endl;





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
                            
                       
                       while( temp2 != "Industrial"){
                       std::cin >> temp2;
                       }
                       std::cin >> tempString;
                       std::cin >> IndustrialTechString;
                       industrialInt = strToint(IndustrialTechString);
                       industrialDouble = industrialInt;
                       industrialDouble = industrialDouble/10000;
                       
                       
                       
                       
                       while( temp2 != "Spy"){
                       std::cin >> temp2;
                       }
                       std::cin >> tempString;
                       std::cin >> SpyTechString;
                       SpyTechInt = strToint(SpyTechString);
                       spyTechDouble = SpyTechInt;
                       spyTechDouble = spyTechDouble/10000;
                       
                       
                       
                       
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
                        std::cout << "Industrial Tech double is " << industrialDouble << std::endl;
                        std::cout << "Spy tech double is " << spyTechDouble << std::endl;
                        std::cout << "Spies are " << spies << std::endl;
                        std::cout << "Spy strenght is = " <<  spies*Govermentspy(govermentString)*spyTechDouble << std::endl;
                        std::cout << "Troops are " << troops << std::endl;
                        std::cout << "Jets are " << jets << std::endl;
                        std::cout << "Tanks are " << tanks << std::endl;
                        
                        attack = 2*jets+troops+4*tanks;
                        attack *= weaponDouble;
                        attack *= Govermentmilitary(govermentString);
                        std::cout << "Attack streght  " << attack << std::endl;
                        puts( "Attack does not take into account reddiness TODO!!!!");
                        

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

                         

                         //process->start(profitProgram); // cannot open 2 firefox apps at the same time

                        //QDesktopServices::openUrl(QUrl(""));
                        MakeMoney();
                        continue;
                        
                        
case(2):
                        std::cout << "Insert own military management" << std::endl;
                        temp2 == "2a";
                        while( temp2 != "Readiness:"){
                        std::cin >> temp2 ;
                        }       
                        std:: cin >>readliness;
                        
                     
                        temp2 == "2a";
                        while( temp2 != "us"){
                        std::cin >> temp2 ;
                        }                        
                        ownReadliness =strToint(readliness);
			std::cout << " Own readliness int= " << ownReadliness << std::endl;                        
                        owredlinessdouble = ownReadliness;
                        
                        owredlinessdouble = (owredlinessdouble/1000);
                        std::cout << " Own readliness=" << owredlinessdouble << std::endl;
                        std::cout << " Own Attack=" << owredlinessdouble*attack << std::endl;
                        
                        continue;
                        
                        
case(3):
                            std::cout << "Type enemy goverment name" << std::endl;
                            std::cout << "Insert Dictatorship/Theocracy/Communisim/Fascism, type break, to return to main menu" << std::endl;
                            std::cin >> enemyGoverment;
                            if(enemyGoverment == "break"){
                            continue;
                            }
                            enemyGovermnetMilitaryBonus = Govermentmilitary(enemyGoverment);
                            std::cout << "Enemy Military Bonus " << enemyGovermnetMilitaryBonus << std::endl;




                            std::cout << "Insert military spy" << std::endl;
                           
                            while( temp2 != "Troops"){
                            std::cin >> temp2;
                            }
                            std::cin >> enemyTroops;
                            while( temp2 != "Turrets"){
                            std::cin >> temp2;
                            }
                            
                            std::cin >> enemyturrets;

                            while( temp2 != "Tanks"){
                            std::cin >> temp2;
                            }
                      
                            std::cin >> enemyTanks;

                            enemyDefence = enemyTroops+2*enemyturrets +4*enemyTanks;
                            std::cout << "Enemy Defence before line 171" << enemyDefence << std::endl;
                            enemyDefence *= enemyGovermnetMilitaryBonus;
                            std::cout << "EneneGovermentMilitary Bonus=" << enemyGovermnetMilitaryBonus << std::endl;
                             std::cout << "Your Attack with tech " << attack << std::endl;
                             std::cout << "Enemy Troops=" << enemyTroops << std::endl;
                             std::cout << "Enemy Turrets=" << enemyturrets << std::endl;
                             std::cout << "Enemy Tanks=" << enemyTanks << std::endl;
                             std::cout << "Enemy Defence without tech, with goverment " << enemyDefence << std::endl;
                             continue;

case(4):
			std::cout << "Insert spy report" << std::endl;
			
			temp2 == "2a";
                        while( temp2 != "The"){
                        std::cin >> temp2;
                        }
                        
                        temp2 == "2a";
                        while( temp2 != "The"){
                        std::cin >> temp2 ;

                        }
                        
                        temp2 == "2a";
                        while( temp2 != "the"){
                        std::cin >> temp2 ;
                        std::cin >> enemyGoverment;;
                        }
                     
                     
                        while( temp2 != "Troops"){
                        std::cin >> temp2;
                        }
                        std::cin >> EnemyTroopsComa;
                        enemyTroops = strToint(EnemyTroopsComa);
                        temp2 = "!!!";


                        
                        while (temp2 != "Turrets"){
                        std::cin >> temp2;
                        }
                        std::cin >> EnemyTurretsComa;
                        enemyturrets = strToint(EnemyTurretsComa);
                        temp2 = "!!!";
                        while( temp2 != "Tanks"){
                        std::cin >> temp2 ;
                        }
                        std::cin >>  EnemyTankscoma;
                        enemyTanks = strToint(EnemyTankscoma);
                        
                        
                        
                        temp2 == "2a";
                        while( temp2 != "About"){
                        std::cin >> temp2 ;
                        }
                        
                        temp2 == "2a";
                        while( temp2 != "us"){
                        std::cin >> temp2 ;
                        }
                        
                        
                        std::cout << "Enemy Goverment is = " << enemyGoverment << std::endl; 
                        std::cout << "Enemy Troops is = " << enemyTroops << std::endl;; 
                        std::cout << "Enemy Turrets is = " << enemyturrets << std::endl;;
                        std::cout << "Enemy Tanks is = " << enemyTanks << std::endl;;
                        enemyDefence = (1*enemyTroops +2*enemyturrets + 4*enemyTanks)*Govermentmilitary(enemyGoverment);
                        std::cout << "Enemy defence is (no ENEMY techonology bonus yet in source code TODO!!!) = " << enemyDefence << std::endl;
                        JetAttackNeededTobreak = enemyDefence/(2.0*weaponDouble*Govermentmilitary(govermentString)*ownReadliness);
                        std::cout << " Jets needed to break with standard strike= " << (int(JetAttackNeededTobreak*1000)) << std::endl; 
                        std::cout << " 10% more than needed Jets needed to break with standard strike= " << (int(JetAttackNeededTobreak*1.1*1000)) << std::endl;
                        std::cout << " Jets neede to break with planned strike= " << (int(JetAttackNeededTobreak*1000)/1.5) << std::endl;
                        std::cout << " 10% Jets neede to break with planned strike= " << (int(JetAttackNeededTobreak*1.1*1000)/1.5) << std::endl;
                        
                        //std::cin >> govermentString;

                        
				

case(10):
                        std::cout << "Insert food Price, no $ sign" << std::endl;
                        std::cin >> foodPrice;
                        MakeMoney();
                        continue;

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
                        //std::cout << "businessTech "<<businessTech<< std::endl;
                        //std::cout << "tax double"<<taxDouble << std::endl;
                        //std::cout << "Networthint=" << Networthint << std::endl;
                        //std::cout << "landINT=" << landINT << std::endl;
                        //std::cout << "Max pop as int=" << maxpopINT << std::endl;
                        //std::cout << "Building Residences" <<BuildingResidences <<std::endl;
                        //std::cout << "aa=" << aa <<std::endl;
                        //std::cout << "b=" << b  << std::endl;
                        //std::cout << "c=" << c << std::endl;
                        //std::cout << "d=" << d << std::endl;
                        // Put in comments in final version


                        //std::cout << double((Networthint/landINT)) << std::endl;

                        
                        //std::cout << "Per capita income="<<  GDPpopdouble << std::endl;
			

                        //std::cout << "Per capita income double=" << GDPpopdouble  << std::endl;
                        // Put in comments in final version
                        revenue =  maxpopINT*GDPpopdouble*taxDouble;
                        std::cout << " Are you using cashing? Type Y or N" << std::endl;
                        std::cin >> usingCashing ;
                        if (usingCashing == 'Y'){
                            cashningBonus = 1.2;
                        }
                        std::cout << "Tax Revenues with max pop=" << cashningBonus*revenue <<  std::endl;
                        std::cout << "Food consumption from max pop=" << maxpopINT*0.03 << std::endl;
                        std::cout << "Food consumption from military=" << militaryFoodConsumption( troops,  jets,  turrets ,  tanks ,  spies ) << std::endl;
                        std::cout << "Food cost from pop(have you put the market value of food?)=" << maxpopINT*0.03*foodPrice << std::endl;
                        std::cout << "Food cost from military((have you put the market value of food?)=" << foodPrice*militaryFoodConsumption( troops,  jets,  turrets ,  tanks ,  spies ) ;             
                    
                        std::cout << "Profit from pop after food cost=" << (cashningBonus*revenue-1.0*maxpopINT*0.03*foodPrice) << std::endl;
                        MakeMoney();
                        continue;
 case(103):
                        troopint = 0;
                        jetsint = 0;
                        turretsint = 0;
                        tanksint = 0;

                        std::cout << "Industrial complexes=" << BuildingIndustrialComplexes << std::endl;
                        std::cout << "Industrial tech=" << industrialDouble << std::endl;
                        std::cout << "Goverment Industrial tech bonus=" << industryGovermentBonus << std::endl; 
                        
                        BuildingIndustrialComplexesDouble = BuildingIndustrialComplexes;
                        troopdouble = (BuildingIndustrialComplexesDouble*industryGovermentBonus*industrialDouble);
                        troopdouble *= 1.86;
                        troopint = troopdouble;
                        tanksdouble = (BuildingIndustrialComplexesDouble*industryGovermentBonus*industrialDouble);
                        tanksdouble *= 0.4;
                        tanksint = tanksdouble;

                        //int trooprevenue = troopint*priceTroops;
                        //int jetsrevenue = troopint*priceJets;
                        std::cout << "Troops per turn " << troopint << " Profit from troops per turn= " << troopint*priceTroops << std::endl;
                        std::cout << "Jets per turn " << troopint << " Profit from jets per turn= " << troopint*priceJets << std::endl;
                        std::cout << "Turrets per turn " << troopint << " Profit from turrets per turn= " << troopint*priceTurrets << std::endl;
                        std::cout << "Tanks per turn " << tanksint <<  " Profit from turrets per turn= " << tanksint*priceTanks << std::endl;
			
			
			MakeMoney();	
                        continue;
case(104):		

			std::cout << "Farming complexes="  << farms << std::endl;
			Farmint = strToint(farms);
			std::cout << "Goverment String=" << govermentString << std::endl;
			FarmProduction = agrciculturaTech*5.3*Farmint*GovermentFarming(govermentString);
			std::cout << " Farming Production per turn =" <<FarmProduction << std::endl;
			std::cout << " Money for selling food on the market per turn =" << FarmProduction*foodPrice << std::endl;
			MakeMoney;
			continue;

case(200):
                        std::cout << militaryExpencesmoney(troops,jets, turrets , tanks ,spies , Networthint  );
                        MakeMoney();
                        continue;


case(999):
                      MakeMoney();
                      exit(0);

case(102):
                     //int priceTroops = 0;
                     //int priceJets = 0;
                     //int priceTanks = 0;
                     //int priceTurrets = 0;
    std::cout << " Troops price, Jets price, price Turrets , price Tanks" << std::endl;
    std::cin >> priceTroops ;
    std::cin >> priceJets;
    std::cin >> priceTurrets;
    std::cin >> priceTanks;
    MakeMoney();
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
