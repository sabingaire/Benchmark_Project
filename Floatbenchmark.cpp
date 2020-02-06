#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

void float_addition(float a, float b);
void float_multiplication(float a, float b);
void float_division(float a,float b);

void float_addition(float a=1.23e+4 , float b=12.34e+2){
    long long i =0;
    while (i <100000000000){
        a+=b;
        i++;
    }
}
