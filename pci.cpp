#include "pci.h"
#include "goverments.h"
#include <string>
#include <iostream>


double PCI( double taxrate, int Networth  , int Land  , int enterprices  , double bustech, std::string goverment){

double networhDouble =  Networth;
double landDouble = Land;
double enterpricesDouble = enterprices;


return (22.5*(1-taxrate)*(1+((networhDouble/landDouble)/18000.0))*(1.0+(2.0*(enterpricesDouble/landDouble)))*bustech*GovermentPCI(goverment)) ;

}
