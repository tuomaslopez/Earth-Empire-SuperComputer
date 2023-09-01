//ONLY place for variables that change per round
//ONLY Thocracy done 19.5.2014

#include <string>
#include <cstdio>
#include <iostream>
#include <math.h>
#include <cmath>
double Govermentmilitary(std::string Goverment){
    //std::cout << "Goveverment = " << Goverment << std::endl;
    
    if (Goverment == "Republic"){
    
    //	puts("Govermentmilitary returns 0.9");
    	return 0.90;
    }
    
    if (Goverment != "Dictatorship"){
      //  puts("Govermentmilitary returns 1");
        return 1;
    }
    
    else {
        //puts("Govermentmilitary returns 1.25");
        return 1.25;
    }
}


double GovermentPop(std::string Goverment){
   // std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment == "Theocracy"){
//    puts("GovermentPop returns 1");
    return 1.5;
}

if (Goverment == "Fascism"){

   return 0.85;
}


else {
  //  puts("GovermentPop returns 1.5");
    return 1.0;
}
}

double GovermentIndustry(std::string Goverment)
{
//std::cout << "Goveverment = " << Goverment << std::endl;
	if (Goverment != "Communisim"){
	    //puts("GovermentPop returns 1");
	    return 1.35;
	}
	else{
	return 1.0;
	}


}


double GovermentFarming(std::string Goverment){

//std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment == "Fascism"){
	    //puts("GovermentFarming returns 1.15");
	    return 1.15;
	}
//puts("GovermentFarming returns 1.0");
return 1.0;
}

double GovermentOil(std::string Goverment){

//std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment == "Fascism"){
	    //puts("GovermentOil returns 1.75");
	    return 1.75;
	}
//puts("GovermentOil returns 1.0");
return 1.0;
}



double Govermentspy(std::string Goverment){
    std::cout << "Goveverment = " << Goverment << std::endl;
    if (Goverment != "Dictatorship"){
//        puts("Govermentspy returns 1");
        return 1;
    }
    else {
        puts("Govermentspy returns 1.30");
        return 1.30;
    }
}

double GovermentWeaponsTech(std::string Goverment, int points , int land){
	//std::cout << "GovermentWeaponsTech, Goverment = " << Goverment << " points in weapons = " << points << " land is = " << land << std::endl;
	double GvtTech = 1.0;
	double GvtEff  = 1.0;
	double MaxTech = 1.5;
	if (Goverment == "Democracy"){
	
	MaxTech = 1.55;
	
	}
	
	if (Goverment == "Theocracy"){
	
	MaxTech = 1.325;
	
	}
   // std::cout << " inside GovermentWeaponsTech " << std::endl;
	if (Goverment == "Democracy"){        
	    GvtTech = 1.1;
	}
	    
	if (Goverment == "Theocracy"){        
	    GvtTech = 0.65;
	}

	if (Goverment == "Communisim"){        
	    GvtEff  = 1.2;
	}
	
	//if (points != 0){
	//std::cout << "points is not 0, this part of the code has not been player tested" << std::endl;
	//}
	

//    std::cout << "military tech (if this value is not 1.0, it has not been player tested yet=" << (1.0+(//MaxTech*GvtTech-1.00)*GvtTech*(exp(2.71828)-1.0*points/(780+5.75*land))) << std::endl;
  //BaseTech%+(MaxTech%-BaseTech%)*GvtTech*(1-EXP(-GvtEff*TechPts/(C1+C2*Land)))   
   //puts("TODO");
   return 1.0+(MaxTech-1.00)*GvtTech*(1.0-exp(-GvtEff*points/(780+5.75*land))) ;
  
}


double GovermentPCI(std::string Goverment){
//puts("Linie 115 Goorments.cpp");
//std::cout << "Goverment is=" << Goverment << std::endl;
 if (Goverment == "Republic"){
    	
    	//puts("GovermentmPCI 1.1");
    	return 1.10;
    }

 return 1.0;
}









