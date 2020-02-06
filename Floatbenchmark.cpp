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

void float_multiplication( float a =6.12 ,float b=3.23){
    long long i=0;
    while(i<50000000000){
        a*=b;
        i++;
    }
}

void float_division( float a=13.233, float b =4.55){
    long long int i=0;
    while(i<20000000000){
        a/=b;
        i++;
    }
}
