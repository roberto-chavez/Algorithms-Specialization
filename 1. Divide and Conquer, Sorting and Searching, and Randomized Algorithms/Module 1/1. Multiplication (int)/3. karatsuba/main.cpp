
/* 
 * File:   main.cpp
 * Author: rober
 *
 * Created on 28 de diciembre de 2024, 11:34 AM
 */

#include <iostream>
using namespace std;

#include "functions.h"

int karatsubaMultiplication(int x, int y){
    
    if(x<10 and y<10) return x*y;
    
    int nX=calculateNumberOfDigits(x);
    int nY=calculateNumberOfDigits(y);
    int nMax=max(nX, nY);
    
    int half=(nMax+1)/2;
    int power=pow(10, half);
    
    int a=x/power;
    int b=x%power;
    int c=y/power;
    int d=y%power;
    
    int ac=karatsubaMultiplication(a, c);
    int bd=karatsubaMultiplication(b, d);
    int ad_plus_bc_partial=karatsubaMultiplication(a+b, c+d);
    int ad_plus_bc_final=ad_plus_bc_partial-ac-bd;
    
    return pow(10, nMax)*ac + pow(10, half)*(ad_plus_bc_final) + bd;
    
}

int main(int argc, char** argv) {
    
    int x=5678;
    int y=1234;
    
    cout<<karatsubaMultiplication(x, y)<<endl;
    
    return 0;

}
