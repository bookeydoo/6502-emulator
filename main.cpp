#include<stdio.h>
#include<stdlib.h>

using byte=unsigned char;
using Word=unsigned short;

//http://www.6502.org/users/obelisk/6502/registers.html

using u32=unsigned int;

struct mem{

static constexpr u32 MAX_MEM=1024*64;
byte data[MAX_MEM];

void init(){
    for(u32 i=0;i<MAX_MEM;i++){
        data[i]=0;

    }
}
};



struct CPU

{

Word PC; //program counter
byte SP; //stack pointer for the stack
byte A, Y ,X;  //accumlator ,register x and y :registers 

//processor status fields 
byte C :1;      //this flag is set (carry flag) if last operation caused an overflow  
byte Z:1;     //zero flag set if last operation was zero
byte ID:1;   //interrupt disable :SEI(set interrupt Disable) instruction 
byte D:1;   //decimal mode for bcd operations
byte B:1;   //break flag for when a BRK instruction is used 
byte Overflow:1; //overflow flag 
byte neg:1; //negative flag


void Reset(mem memory){

PC=0xFFFC;
SP=0x0100;
C=Z= B= Overflow= neg=ID=0;
A=X=Y=0;


}


};

int main(){
mem memory;
CPU cpu;
cpu.Reset(memory);












    return 0;
}