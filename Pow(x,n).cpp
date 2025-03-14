#include <vector>
#include <stdio.h>
#include <cmath> 
#include <iostream>
using namespace std;

double myPow(double x, int n) {
    // double m = n;
    double power = pow(x,n);
    return power;
}
int main(){
    double x = 2.00000;
    int n = 10;
    double result =  myPow(x,n);
    
    cout << result << endl;
    return 0;
}