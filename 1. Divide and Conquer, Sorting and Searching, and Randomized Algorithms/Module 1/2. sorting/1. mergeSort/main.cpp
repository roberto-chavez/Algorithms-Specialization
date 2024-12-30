
/* 
 * File:   main.cpp
 * Author: rober
 *
 * Created on 30 de diciembre de 2024, 11:22 AM
 */

#include <iostream>
using namespace std;

#include "functions.h"

void merge(int *C, int start, int mid, int end){
    
    int nA=(mid+1)-start;
    int nB=end-mid;
    
    int A[nA+1];
    int B[nB+1];
    
    for(int i=start; i<=mid; i++){
        A[i-start]=C[i];
    }
    
    for(int i=mid+1; i<=end; i++){
        B[i-(mid+1)]=C[i];
    }
    
    A[nA]=999999;
    B[nB]=999999;
    
    int a=0, b=0;
    for(int i=start; i<=end; i++){
        if(A[a]<B[b]){
            C[i]=A[a];
            a++;
        }
        else{
            C[i]=B[b];
            b++;
        }
    }
    
}

void mergeSort(int *C, int start, int end){
    
    if(start==end) return;
    
    int mid=(start+end)/2;
    
    mergeSort(C, start, mid);
    mergeSort(C, mid+1, end);
    
    merge(C, start, mid, end);
    
}

int main(int argc, char** argv) {
    
    int C[]={5, 4, 1, 8, 7, 2, 6, 3};
    int n=sizeof(C)/sizeof(C[0]);
    
    cout<<"Unordered:"<<endl;
    printArray(C, n);
    
    cout<<"Ordered, using mergeSort:"<<endl;
    mergeSort(C, 0, n-1);
    printArray(C, n);
    
    return 0;

}
