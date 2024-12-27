
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
    
    if(x<10 and y<10) return x*y;
    
    int nX=calculateNumberOfDigits(x);
    int nY=calculateNumberOfDigits(y);
    int nMax=max(nX, nY);
    
    int half=nMax/2;
    int power=pow(10, half);
    
    int a=x/power;
    int b=x%power;
    int c=y/power;
    int d=y%power;
    
    int ac=recursiveMultiplication(a, c);
    int bd=recursiveMultiplication(b, d);
    int ad=recursiveMultiplication(a, d);
    int bc=recursiveMultiplication(b, c);
    
    return pow(10, nMax)*ac + pow(10, half)*(ad+bc) + bd;
    
}

int main(int argc, char** argv) {
    
    int x=5678;
    int y=1234;
    
    cout<<recursiveMultiplication(x, y)<<endl;
    
    return 0;

}
