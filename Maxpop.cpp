#include "Maxpop.h"
#include <stdlib.h>
#include <stdio.h>
#include <streambuf>
#include <iostream>
#include "strToInt.h"


int Maxpop(float taxDouble, int landINT, std::string land, double BuildingResidences, double residentialTech){
//std::cout << "TAX, eg 0.33" << std::endl ;
//std::cin >> taxDouble ;
//std::cout << "TAXDouble=" << taxDouble << std::endl;
landINT =strToint(land);
std::cout << "land=" << land << std::endl;
std::cout << "Residences=" << BuildingResidences << std::endl;
double returnPop = (BuildingResidences*24+12*landINT)*(1-0.95*taxDouble);
returnPop *= residentialTech;
std::cout << "Max pop=" << returnPop << std::endl ;
int maxpopINT = returnPop ;
std::cout << "Max pop as int=" << maxpopINT << std::endl;
return maxpopINT;
}
