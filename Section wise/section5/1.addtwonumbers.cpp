// WAP to take input and add two numbers
#include <iostream>

int main() {
    
    int a{};
    int b{};
    int c{};
    
    std::cout << "Enter two nos a & b" << std::endl;
    std::cin >> a >> b;

    c = a+b;

    std::cout<<"Sum of a and b is equal to "<<c<<"\n";

    return 0;
}
