
#include "strToInt.h"
#include <string.h>
#include <iostream>
#include <iostream>
#include <math.h>


int charToint(char str){
    if( str == '1'){
     return 1;
    }
    if( str == '2'){
     return 2;
    }
    if( str == '3'){
     return 3;
    }

    if( str == '4'){
     return 4;
    }

    if( str == '5'){
     return 5;
    }

    if( str == '6'){
     return 6;
    }

    if( str == '7'){
     return 7;
    }

    if( str == '8'){
     return 8;
    }
    if( str == '9'){
     return 9;
    }
    return 0;


}

int strToint(std::string str){
    //std::cout << "strToint annettu " << str <<  "\n" << std::endl;
    //UUTTA 15.4
    long unsigned int pilkunPaikka = 0;
    long unsigned int dollarinPaikka = 0;
    while( str.find( '.') != std::string::npos){
        pilkunPaikka = str.find('.');
        str.erase(pilkunPaikka, 1);
    }
    
    while( str.find( '$') != std::string::npos){
        dollarinPaikka = str.find('$');
        str.erase(dollarinPaikka, 1);
    }
    
    //std::cout << "\n" << "Stringi '.' poiston jalkeen" << str << std::endl;

    //UUTTA 15.4
    size_t palautus = 0;
    size_t paikka = 0;
    while( str.find(',') != std::string::npos ){
    paikka = str.find(',');
    str.erase(paikka, 1);
    }
    //std::cout << "Rivilla 55 " << std::endl;
    double koko = str.length();
    //std::cout << "Stringi nyt " << str << std::endl;
    double kohta = 0;  //alussa 0;
    double kertoja;
    while(koko != kohta){
    kertoja = pow( 10.0, (koko-kohta-1.00 ));
    palautus += kertoja*(charToint(str[kohta]));
    //std::cout << "Koko palautus on " << palautus <<  "\n" << std::endl;
    //std::cout << "Koko oli " << koko << " kohta oli " << kohta << "\n" << std::endl;
    kohta++;
    }
    return palautus;
}

