/* 3.14 is treated as a double in C++.
    3.14f is treated as a float.
    Even if area is declared as float, using 3.14f helps the compiler perform float arithmetic, rather than mixing double and float.
    -if you write 3.14
     3.14 is a double
	 r is a float
	 So C++ promotes r to double, does double multiplication,
     and finally converts the result back to float (possible precision loss + overhead)
    -but if you write 3.14f
     All operands are float
	 Entire computation is done in float precision
	 No implicit promotion to double → faster and more consistent
*/
#include <iostream>

int main() {
    float r;
    float area;
    std::cout << "Enter radius" << std::endl;
    std::cin >> r;
    area=3.14f*r*r; 
    std::cout<<"Area is :"<< area;
    return 0;
}
/*
if you write 22/7 answer will be wrong as 22/7 gives 3 
so if you want to write 22/7 u have to use 
explicit type casting(You manually force the conversion using cast syntax)
like (float)22/7*r*r 
or
you can use 22.0/7. or 22/7.0 but it will give double data type 
*/
