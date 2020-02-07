#include<iostream>
#include<fstream>
#include <cmath>
#include<ctime>

using namespace std;

void write_harddrive(){
char val ='10';
ofstream ifile;
ifile.open("input.txt");
    long long i=0;
while(i<250000000){
    ifile.write(&val,4);
    i++
}
ifile.close();
}

    
    
    

