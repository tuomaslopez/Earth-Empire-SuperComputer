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
#include "food.h"
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
   static double returnPop1 = 0;
   static double returnPop2 = 0;
   static double returnPop3 = 0;
   static double returnPop4 = 0;
   static double returnPop5 = 0;
   static double returnPop6 = 0;
   static double returnPop7 = 0;
   static double returnPop8 = 0;
   static double returnPop9 = 0;
   static double returnPop10 = 0;
   static double returnPop11 = 0;
   static double returnPop12 = 0;
   static double returnPop13 = 0;
   static double returnPop14 = 0;
   static double returnPop15 = 0;
   static double returnPop16 = 0;
   static double returnPop17 = 0;
   static double returnPop18 = 0;
   static double returnPop19 = 0;
   static double returnPop20 = 0;
   static double returnPop21 = 0;
   static double returnPop22 = 0;
   static double returnPop23 = 0;
   static double returnPop24 = 0;
   static double returnPop25 = 0;
   static double returnPop26 = 0;
   static double returnPop27 = 0;
   static double returnPop28 = 0;
   static double returnPop29 = 0;
   static double returnPop30 = 0;
   static double returnPop31 = 0;
   static double returnPop32 = 0;
   static double returnPop33 = 0;
   static double returnPop34 = 0;
   static double returnPop35 = 0;
   static double returnPop36 = 0;
   static double returnPop37 = 0;
   static double returnPop38 = 0;
   static double returnPop39 = 0;
   static double returnPop40 = 0;
   static double returnPop41 = 0;
   static double returnPop42 = 0;
   static double returnPop43 = 0;
   static double returnPop44 = 0;
   static double returnPop45 = 0;
   static double returnPop46 = 0;
   static double returnPop47 = 0;
   static double returnPop48 = 0;
   static double returnPop49 = 0;
   static double returnPop50 = 0;
   static double returnPop51 = 0;
   static double returnPop52 = 0;
   static double returnPop53 = 0;
   static double returnPop54 = 0;
   static double returnPop55 = 0;
   static double returnPop56 = 0;
   static double returnPop57 = 0;
   static double returnPop58 = 0;
   static double returnPop59 = 0;
   static double returnPop60 = 0;
   static double returnPop61 = 0;
   static double returnPop62 = 0;
   static double returnPop63 = 0;
   static double returnPop64 = 0;
   static double returnPop65 = 0;
   static double returnPop66 = 0;
   static double returnPop67 = 0;
   static double returnPop68 = 0;
   static double returnPop69 = 0;
   static double returnPop70 = 0;
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
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
std::cout << "500 tool, to find mex profit with tax rate while cashing" << std::endl;
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

                        
                        if (govermentString == "Communism"){
			    
                            industryGovermentBonus = GovermentIndustry("Communism");
                        }
                        
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
                       

                        std::cout << "Take of the part starting with -0.03 to optimise without counting how much food you need (This tells the opitimal revenue before expensies) " << NetworthString << std::endl;
                        std::cout << "Networth as String " << NetworthString << std::endl;
                        
		
                         

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
                        maxpopINT = Maxpop(taxDouble, landINT, land , BuildingResidences, residentialTech);
                        MakeMoney();
                        continue;

case(101):
                        std::cout << "TAX, eg 0.33" << std::endl ;
                        std::cin >> taxDouble ;
                        landINT =strToint(land);
                        
                        returnPop = GovermentPop(govermentString)*(BuildingResidences*24+12*landINT)*(1-0.95*taxDouble);
                        returnPop *= residentialTech;
                        std::cout << "Returnpop=" << returnPop << std::endl ;
                        //std::cout << "GovermentPOP=" <<  << std::endl;
                        

                        maxpopINT = returnPop ;


                        // Put in comments in final version
                        revenue =  maxpopINT*GDPpopdouble*taxDouble;
                        std::cout << " Are you using cashing? Type Y or N" << std::endl;
                        std::cin >> usingCashing ;
                        if (usingCashing == 'Y'){
                            cashningBonus = 1.2;
                        }
                        
                        
                        
                        
                        std::cout << "Tax Revenues with max pop=" << cashningBonus*revenue <<  std::endl;
                        std::cout << "Food consumption from max pop=" << foodComsumptionPeople(maxpopINT) << std::endl;
                        std::cout << "Food consumption from military=" << militaryFoodConsumption( troops,  jets,  turrets ,  tanks ,  spies ) << std::endl;
                        std::cout << "Food cost from pop(have you put the market value of food?)=" << foodComsumptionPeople(maxpopINT)*foodPrice << std::endl;
                        std::cout << "Food cost from military((have you put the market value of food?)=" << foodPrice*militaryFoodConsumption( troops,  jets,  turrets ,  tanks ,  spies ) ;             
                    
                        std::cout << "Profit from pop after food cost=" << (cashningBonus*revenue-1.0*maxpopINT*0.03*foodPrice) << std::endl;
                       
                       
                       
                       
                       
                       
                       
                       
                       
                        MakeMoney();
                        continue;
                        
 case(500):             
			puts("At this moment tells maximum pop with tax rate Line 749 in source");                       
                        returnPop1 = Maxpop(0.01, landINT, land , BuildingResidences, residentialTech); 
                        std::cout << "POP with 1% taxe rate " << returnPop1 << std::endl;
                        returnPop2 = Maxpop(0.02, landINT, land , BuildingResidences, residentialTech); 
                        std::cout << "POP with 2% taxe rate " << returnPop2 << std::endl;                       
                        returnPop3 = Maxpop(0.03, landINT, land , BuildingResidences, residentialTech); 
                        std::cout << "POP with 3% taxe rate " << returnPop3 << std::endl;
                        returnPop4 = Maxpop(0.04, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 4% taxe rate " << returnPop4 << std::endl;
                        returnPop5 = Maxpop(0.05, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 5% taxe rate " << returnPop5 << std::endl;
                        returnPop6 = Maxpop(0.06, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 6% taxe rate " << returnPop6 << std::endl;
                        returnPop7 = Maxpop(0.07, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 7% taxe rate " << returnPop7 << std::endl;
                        returnPop8 = Maxpop(0.08, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 8% taxe rate " << returnPop7 << std::endl;
                        returnPop9 = Maxpop(0.09, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 9% taxe rate " << returnPop9 << std::endl;
                        returnPop10 = Maxpop(0.10, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 10% taxe rate " << returnPop10 << std::endl;
                        returnPop11 = Maxpop(0.11, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 11% taxe rate " << returnPop11 << std::endl;

                        returnPop12 = Maxpop(0.12, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 12% taxe rate " << returnPop12 << std::endl;

			returnPop13 = Maxpop(0.13, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 13% taxe rate " << returnPop13 << std::endl;

			returnPop14 = Maxpop(0.14, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 14& taxe rate " << returnPop14 << std::endl;

			returnPop15 = Maxpop(0.15, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 15& taxe rate " << returnPop15 << std::endl;



			returnPop16 = Maxpop(0.16, landINT, land , BuildingResidences, residentialTech);					
                        std::cout << "POP with 16& taxe rate " << returnPop16 << std::endl;	


			returnPop17 = Maxpop(0.17, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 17& taxe rate " << returnPop17 << std::endl;
			returnPop18 = Maxpop(0.18, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 18& taxe rate " << returnPop18 << std::endl;


			returnPop19 = Maxpop(0.19, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 19& taxe rate " << returnPop18 << std::endl;

			returnPop20 = Maxpop(0.20, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 20& taxe rate " << returnPop20 << std::endl;


			returnPop30 = Maxpop(0.30, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 30% taxe rate " << returnPop30 << std::endl;

			returnPop31 = Maxpop(0.31, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 31% taxe rate " << returnPop31 << std::endl;

			returnPop32 = Maxpop(0.32, landINT, land , BuildingResidences, residentialTech);		
                        std::cout << "POP with 32% taxe rate " << returnPop32 << std::endl;

			returnPop33 = Maxpop(0.33, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 33% taxe rate " << returnPop33 << std::endl;
			returnPop34 = Maxpop(0.34, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 34% taxe rate " << returnPop34 << std::endl;

                        returnPop35 =Maxpop(0.35, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 35% taxe rate " << returnPop35 << std::endl;


                        returnPop36 = Maxpop(0.36, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 36% taxe rate " << returnPop36 << std::endl;



                        returnPop37 = Maxpop(0.37, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 37% taxe rate " << returnPop37 << std::endl;



                        returnPop38 = Maxpop(0.38, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 38% taxe rate " << returnPop38 << std::endl;




                        returnPop39 = Maxpop(0.39, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 39% taxe rate " << returnPop39 << std::endl;




                        returnPop40 = Maxpop(0.40, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 40% taxe rate " << returnPop40 << std::endl;



                        returnPop41 = Maxpop(0.41, landINT, land , BuildingResidences, residentialTech);
                        std::cout << "POP with 41% taxe rate " << returnPop41 << std::endl;


 
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
