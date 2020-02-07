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

void read_harddrive(){
  char val;
  ifstream ifile;
  myfile.open("input.txt");
    long long i=0;
    while(i<250000000){
  
    myfile.read(&val,4);
        i++;
  }
  myfile.close();
}

int main() {
time_t init,final;
init=time(NULL);
    return 0;
    
}

    
    
    

