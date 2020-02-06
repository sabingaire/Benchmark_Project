#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

void int_addition(int a, int b);
void int_multiplication(int a, int b);
void int_division(int a,int b);

void int_addition(int a=6 , int b=12){
    long long i =0;
    while (i <100000000000){
        a+=b;
        i++;
    }
}


void int_multiplication( int a =23 ,int b=45){
    long long i=0;
    while(i<50000000000){
        a*=b;
        i++;
    }
}

void int_division( int a=100, int b =25){
    long long int i=0;
    while(i<20000000000){
        a/=b;
        i++;
    }
}

int main(){
    time_t intial_time , final_time;
    intial_time= time(NULL);
    int_addition();
    int_multiplication();
    int_division();
    
    return 0;
}
