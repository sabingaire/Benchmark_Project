#include<iostream>
#include<fstream>
#include <cmath>
#include<ctime>

using namespace std;

void write_harddrive(){
char val ='2';
ofstream ifile;
ifile.open("input.txt");
    long long i=0;
while(i<250000000){
    ifile.write(&val,4);
    i++;
}
ifile.close();
}

void read_harddrive(){
  char val;
  ifstream ifile;
  ifile.open("input.txt");
    long long i=0;
    while(i<250000000){
  
   ifile.read(&val,4);
        i++;
  }
 ifile.close();
}

int main() {
time_t init,final;
init=time(NULL);
    write_harddrive();
    read_harddrive();
final=time(NULL);
    cout<<"The time for harddrive is ";
cout<<final-init<<endl;


    return 0;
    
}

    
    
    

