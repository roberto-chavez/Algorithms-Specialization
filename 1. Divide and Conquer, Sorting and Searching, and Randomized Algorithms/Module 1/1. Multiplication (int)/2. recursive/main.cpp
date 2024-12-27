
/* 
 * File:   main.cpp
 * Author: rober
 *
 * Created on 26 de diciembre de 2024, 10:54 AM
 */

#include <iostream>
using namespace std;

#include "functions.h"

int recursiveMultiplication(int x, int y){
    
    int nX=calculateNumberOfDigits(x);
    int nY=calculateNumberOfDigits(y);
    
    //1169
    int a=0, b=0;
    for(int i=0; i<nX; i++){
        int digit=getDigit(x, i);
        if(i<(nX/2)) b+=((10*(i+1)/10)*digit);
        else a+=((10*(i+1)/10)*digit);
    }
    
    int c, d;
    
    
    
    
    
    return 0;
    
}

int main(int argc, char** argv) {
    
    int x=5678;
    int y=1234;
    
    cout<<recursiveMultiplication(x, y)<<endl;
    
    return 0;

}
