/*
Overflow
• When the value is more than the capacity it will take the values
again from the beginning this concept is called overflow
• Suppose there is a byte and we are already having values in it , if
1 is added to this max byte value it becomes a signed bit
therefor it become -128 magically this happens when we try
going to the next value
• The number we got is in twos compliment as -ve numbers are
stored in twos compliments, if we want to find the original
number we should again find its two compliment 
*/

#include <iostream>

int main() {
    
    char y =-128;
    y--;
    std::cout << (int)y << std::endl; //-128 to 127

    char x =127;
    x++;
    std::cout << (int)x << std::endl; //127 to -128

    
    return 0;
}
