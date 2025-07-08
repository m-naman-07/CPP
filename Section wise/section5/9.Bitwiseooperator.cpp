/*
Bitwise Operator
• These operators are performed on the bits of the data and
not as the single whole data unit
• The operations available here are
& - and
| - or
^ - xor
~ - not
<< - left shift
>> - Right Shift
• Its working 

1. and(&)
    bit1    bit2    bit1&bit2               Example   
     0       0         0                        a = 0 0 0 0 0 1 0 1 (5) 
     1       0         0                        b = 0 0 0 0 1 0 0 1 (9)
     0       1         0                      a&b = 0 0 0 0 0 0 0 1 (1)
     1       1         1                        

2. or(|)
    bit1    bit2    bit1|bit2      
     0       0         0 
     1       0         1
     0       1         1 
     1       1         1 

3. xor(^)
    bit1    bit2    bit1&bit2      
     0       0         0 
     1       0         1
     0       1         1 
     1       1         0 

4. not(~)
    bit1    ~bit1
     0        1
     1        0

If you are making device drivers , systems program, System
application , core system program and in general if a person is
working more close towards electronic there this operator is used


• Left and Right shift
int x = 5 , y;
 X = 0 0 0 0 0 1 0 1

 0 0 0 0 0 1 0 1
• When you shift all the bits on left hand side by one space(x<<1)then 5 will
get multiplied by 2 , if you move them by 2 space(x<<2) it will be multiplied
by 4 (2 to the power no. of spaces it has been shifted)
i.e x<<n   ->   x*(2^n)
    x>>n   ->   x/(2^n) 
• Here signed bit is not included , if the number is positive then it will
be positive and vice versa
*/

/*
a & b   =   ← all 1 means 1 
a | b   =   ← 1 wherever 1 
a ^ b   =   ← 1s where a and b differ
~a      =   ← flipped all bits of a (two’s complement form) [~a = -(a + 1)]
a << n  =   ← left shift (multiply by 2^n)
b >> n  =   ← right shift (divide by 2^n)
*/

#include <iostream>

int main(){
    int a=11,b=7,c;
    c=a&b;
    std::cout<<c<<std::endl;

    int d=11,e=7,f;
    f=d|e;
    std::cout<<f<<std::endl;

    int g=11,h=7,i;
    i=g^h;
    std::cout<<i<<std::endl;

    char j=5,k;
    k=j<<1;
    std::cout<<(int)k<<std::endl;

    char l=20,m;
    m=l>>1;
    std::cout<<(int)m<<std::endl;

    char x=5,y;
    y= ~ x;
    std::cout<<(int)y<<std::endl;

 return 0;
}



