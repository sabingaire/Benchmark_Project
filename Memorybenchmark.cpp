#include<iostream>
#include<cmath>
#include<ctime>
#include<fstream>
using namespace std;

class Memory{
    public:
    
    int32_t array1[500000];//I have used this and used nested loop cause my array could not hold large number
    
    
        void write_memory();
        void read_memory();
};

void Memory::write_memory(){
        int32_t temp=3;
        long long i=0;
        long long j=0;
        for (i=0;i<10000;i++){
            for (j=0;j<500000;j++){
            array1[j]=temp;
        }
        }
    }

void Memory::read_memory(){
    int32_t temp;
    long long i=0;
    long long j=0;
    for (i=0;i<10000;i++){
        for (j=0;j<500000;j++){
        temp=array1[j];
    }
}
}

int main(){
    time_t initial_time, final_time;
    initial_time =time(NULL);
    Memory memory;
    memory.write_memory();
    memory.read_memory();
    final_time=time(NULL);
    cout<<"The time taken for memory operation is ";
    cout<<final_time - initial_time<<endl;
    
    return 0;
    
}


