#include <iostream>
#include <sstream>
int militaryExpencesmoney(int troops, int jets, int turrets , int tanks , int spies, double networth){

double networthIncreasefactor = networth;
networthIncreasefactor = (networthIncreasefactor/(200000000.00));
networthIncreasefactor++;
double amountTroops = troops;

amountTroops *=0.11;
amountTroops *= networthIncreasefactor;

double amountJets = jets;
amountJets *= 0.14;
amountJets *= networthIncreasefactor;
double amountSpies = spies;
//TODO

double amountTurrets = turrets;
amountTurrets *= 0.18;
amountTurrets *= networthIncreasefactor;

double amountTanks = tanks;
amountTanks *= 0.57;
amountTurrets *= networthIncreasefactor;
std::cout << "Troop money expense=" << amountTroops << std::endl;
std::cout << "Jets money expense=" << amountJets << std::endl;
std::cout << "Turrets money expense=" << amountTurrets << std::endl;
std::cout << "Tanks money expense=" << amountTanks << std::endl;
double temp = amountTroops+amountJets+amountTurrets+amountTanks;
int palautus = temp;
std::cout << "militaryExpencesmoney =" << palautus << std::endl;
return(amountTroops+amountJets+amountTurrets+amountTanks);
}
