
/* 
 * File:   stringFunctions.cpp
 * Author: rober
 *
 * Created on 2 de enero de 2025, 11:28 AM
 */

#include <iostream>
using namespace std;

#include <string>
#include <algorithm>

#include "stringFunctions.h"

string addStrings(const string& num1, const string& num2) {
    string result = "";
    int carry = 0, i = num1.size() - 1, j = num2.size() - 1;
    while (i >= 0 || j >= 0 || carry) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;
        int sum = x + y + carry;
        result += (sum % 10) + '0';
        carry = sum / 10;
    }
    reverse(result.begin(), result.end());
    return result;
}

string subtractStrings(const string& num1, const string& num2) {
    string result = "";
    int borrow = 0, i = num1.size() - 1, j = num2.size() - 1;
    while (i >= 0 || j >= 0) {
        int x = (i >= 0) ? num1[i--] - '0' : 0;
        int y = (j >= 0) ? num2[j--] - '0' : 0;
        int diff = x - y - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result += diff + '0';
    }
    while (result.size() > 1 && result.back() == '0') result.pop_back();
    reverse(result.begin(), result.end());
    return result;
}


string shiftLeft(const string& num, int n) {
    return num + string(n, '0');
}

string toString(int num) {
    string result = "";
    if (num == 0) return "0";
    bool isNegative = num < 0;
    if (isNegative) num = -num; // Handle negative numbers
    while (num > 0) {
        result += (num % 10) + '0';
        num /= 10;
    }
    if (isNegative) result += '-';
    reverse(result.begin(), result.end());
    return result;
}

