
/* 
 * File:   main.cpp
 * Author: rober
 *
 * Created on 28 de diciembre de 2024, 11:34 AM
 */

#include <iostream>
using namespace std;

#include "stringFunctions.h"

string karatsubaMultiplication(const string& x, const string& y) {
    int nX = x.length();
    int nY = y.length();
    
    // Base case
    if (nX == 1 && nY == 1) return to_string((x[0] - '0') * (y[0] - '0'));

    // Pad numbers to the same length
    int nMax = max(nX, nY);
    string paddedX = string(nMax - nX, '0') + x;
    string paddedY = string(nMax - nY, '0') + y;

    int half = (nMax + 1) / 2;

    // Split into halves
    string a = paddedX.substr(0, nMax - half);
    string b = paddedX.substr(nMax - half);
    string c = paddedY.substr(0, nMax - half);
    string d = paddedY.substr(nMax - half);

    // Recursive steps
    string ac = karatsubaMultiplication(a, c);
    string bd = karatsubaMultiplication(b, d);
    string ad_plus_bc_partial = karatsubaMultiplication(addStrings(a, b), addStrings(c, d));
    string ad_plus_bc_final = subtractStrings(subtractStrings(ad_plus_bc_partial, ac), bd);

    // Combine results
    string result = addStrings(
        addStrings(shiftLeft(ac, 2 * half), shiftLeft(ad_plus_bc_final, half)),
        bd
    );

    return result;
}

int main() {
    string x = "3141592653589793238462643383279502884197169399375105820974944592";
    string y = "2718281828459045235360287471352662497757247093699959574966967627";
    
    cout << karatsubaMultiplication(x, y) << endl;
    return 0;
}
