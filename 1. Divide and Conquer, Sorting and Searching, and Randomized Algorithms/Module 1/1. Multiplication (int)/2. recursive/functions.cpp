
/* 
 * File:   functions.cpp
 * Author: rober
 *
 * Created on 26 de diciembre de 2024, 11:06 AM
 */

#include <iostream>
using namespace std;

int calculateNumberOfDigits(int number){
	
    int cont;
    for(cont=0; number>0; cont++){
        number/=10;
    }

    return cont;	
	
}

int getDigit(int number, int pos){
    
    int timesTen=1;
    for(int i=0; i<pos; i++){
        timesTen*=10;
    }

    return (number/timesTen)%10;
	
}
