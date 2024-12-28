
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

int max(int a, int b){
    return (a>b?a:b);
}

int pow(int base, int exp){
    
    if(exp==0) return 1;
    
    int result=1;
    for(int i=1; i<=exp; i++){
        result*=base;
    }
    return result;
    
}


