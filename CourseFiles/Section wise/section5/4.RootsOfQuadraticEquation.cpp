#include <iostream>
#include <cmath> 


 int main() {
    float a, b, c, root1, root2;
    
    std::cout << "Enter the coefficients respectively"<<std::endl;
    std::cin>>a>>b>>c;

    root1=(-b+std::sqrt(std::pow(b,2)-4*a*c))/(2*a);
    root2=(-b-std::sqrt(std::pow(b,2)-4*a*c))/(2*a);
    
    std::cout<<"Roots are "<<root1<<" and "<<root2<<"."<<std::endl;
    return 0;
}

//NaN stands for “Not a Number” 
//so if you get nan it maybe because roots are complex

/*
🔹 math.h
•Comes from C
•Functions live in the global namespace
•No function overloading (strict types only) Can lead to name clashes in C++ due to no namespace.
Usage Style:C-style (sqrt(x))

🔹 cmath (C++ version)
•Wraps math.h in the std namespace
•Adds function overloading (e.g., for float, long double)
•Works better with type safety and C++-style code
Preferred in C++ because it supports function overloading and avoids polluting the global namespace.
Usage Style:C++-style (std::sqrt(x))

✅ Always use #include <cmath> in C++.
Unless you’re writing C code or interfacing with C libraries, avoid math.h.
*/
