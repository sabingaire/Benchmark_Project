#include<iostream>
#include<cmath>
#include<ctime>
#include<fstream>
using namespace std;

class Memory{
private:
    int32_t array1[5000000000];
    
    public:
        void write_memory();
        void read_memory();
    }

void Memory::write_memory(){
        int 32_t temp=3;
        long long i=0;
        for (i=0;i<5000000000;i++){
            array1[i]=temp;
        }
    }

void Memory::read_memory(){
    int 32_t temp;
    long long i=0;
    for (i=0;i<5000000000;i++){
        temp=array1[i]
    }
}

int main{
    time_t initial_time, final_time;
    
    return 0;
    
}


