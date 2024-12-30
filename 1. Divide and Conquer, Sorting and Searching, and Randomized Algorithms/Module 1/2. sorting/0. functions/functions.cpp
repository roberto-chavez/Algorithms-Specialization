
/* 
 * File:   functions.cpp
 * Author: rober
 *
 * Created on 30 de diciembre de 2024, 11:23 AM
 */

#include <iostream>
#include <iomanip>
using namespace std;

void printArray(int *arr, int n){
    
    for(int i=0; i<n; i++){
        cout<<setw(5)<<arr[i];
    }
    cout<<endl;
    
}

