
/* 
 * File:   functions.cpp
 * Author: rober
 *
 * Created on 27 de diciembre de 2024, 01:02 PM
 */

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
