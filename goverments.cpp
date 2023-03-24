//ONLY place for variables that change per round
//ONLY Thocracy done 19.5.2014

#include <string>
#include <cstdio>
#include  <iostream>

double Govermentmilitary(std::string Goverment){
    std::cout << "Goveverment = " << Goverment << std::endl;
    if (Goverment != "Dictatorship"){
        puts("Govermentmilitary returns 1");
        return 1;
    }
    else {
        puts("Govermentmilitary returns 1.25");
        return 1.25;
    }
}


double GovermentPop(std::string Goverment){
    std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment != "Theocracy"){
    puts("GovermentPop returns 1");
    return 1;
}
else {
    puts("GovermentPop returns 1.5");
    return 1.5;
}
}

double GovermentIndustry(std::string Goverment)
{
std::cout << "Goveverment = " << Goverment << std::endl;
	if (Goverment != "Communisim"){
	    puts("GovermentPop returns 1");
	    return 1.35;
	}
	else{
	return 1.0;
	}


}


double GovermentFarming(std::string Goverment){

std::cout << "Goveverment = " << Goverment << std::endl;
if (Goverment == "Fascism"){
	    puts("GovermentFarming returns 1.15");
	    return 1.15;
	}
puts("GovermentFarming returns 1.0");
return 1.0;
}


