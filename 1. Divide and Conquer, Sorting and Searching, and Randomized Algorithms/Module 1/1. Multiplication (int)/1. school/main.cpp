
/* 
 * File:   main.cpp
 * Author: rober
 *
 * Created on 25 de diciembre de 2024, 10:01 AM
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

int schoolMultiplication(int a, int b){

    int nA=calculateNumberOfDigits(a);
    int nB=calculateNumberOfDigits(b);	

    int sum=0;
    for(int i=0; i<nB; i++){

        int digitB=getDigit(b, i);
        int partial=0, carry=0;
        for(int j=0; j<nA; j++){
            int digitA=getDigit(a, j);
            int product=digitA*digitB;
            product+=carry;
            if(product>9 and not j==nA-1){
                carry=product/10;
                product=product%10;
            }
            for(int k=0; k<j; k++){
                product*=10;
            }
            partial+=product;
        }
        
        for(int z=0; z<i; z++){
            partial*=10;
        }
        sum+=partial;

    }

    return sum;
	
}

int main(){
	
    int a=5678;
    int b=1234;

    cout<<schoolMultiplication(a, b)<<endl;

    return 0;
}
