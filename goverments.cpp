//ONLY place for variables that change per round
//ONLY Thocracy done 19.5.2014

#include <string>
#include <cstdio>
#include <iostream>
#include <math.h>
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
if (Goverment != "Theocracy"){
//    puts("GovermentPop returns 1");
    return 1;
}
else {
  //  puts("GovermentPop returns 1.5");
    return 1.5;
}
}

double GovermentIndustry(std::string Goverment)
{
std::cout << "Goveverment = " << Goverment << std::endl;
	if (Goverment != "Communisim"){
	    //puts("GovermentPop returns 1");
	    return 1.35;
	}
	else{
	return 1.0;
	}


}


double GovermentFarming(std::string Goverment){

std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment == "Fascism"){
	    //puts("GovermentFarming returns 1.15");
	    return 1.15;
	}
puts("GovermentFarming returns 1.0");
return 1.0;
}

double GovermentOil(std::string Goverment){

//std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment == "Fascism"){
	    //puts("GovermentOil returns 1.75");
	    return 1.75;
	}
puts("GovermentOil returns 1.0");
return 1.0;
}



double Govermentspy(std::string Goverment){
    std::cout << "Goveverment = " << Goverment << std::endl;
    if (Goverment != "Dictatorship"){
        puts("Govermentspy returns 1");
        return 1;
    }
    else {
        puts("Govermentspy returns 1.30");
        return 1.30;
    }
}

double GovermentWeaponsTech(std::string Goverment, int points , int land){
	double GvtTech = 1.0;
	double GvtEff  = 1.0;

	if (Goverment == "Democracy"){        
	    GvtTech = 1.1;
	}
	    
	if (Goverment == "Theocracy"){        
	    GvtTech = 0.65;
	}

	if (Goverment == "Communisim"){        
	    GvtEff  = 1.2;
	}
 //std::cout << "military tech " << (1.0+(1.50*GvtTech-1.00)*GvtTech*(exp(2.71828)-1.0*points/(780+5.75*land)) << std::endl; 
   //puts("TODO");
   return 1.0;
  
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









