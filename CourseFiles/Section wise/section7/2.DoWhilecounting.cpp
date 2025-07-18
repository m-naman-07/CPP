/*
while and for difference
while is used when you don't know how many time you have to repeat, so
repeat WHILE condition is true.
for is used when you know FOR how many time you have to repeat.

When to use which loop ?
1. While and doWhile are similar, they are used when we don’t know
number of times of repetitions
2. For is used when we know the number of iterations.
3. For each is used with array or STL.


What should be used in for loop i++ or ++i ?
Anyone can be used.
++i; is known to be faster than i++;.
Reason:
i++; is same as i=i+1; here i+1 is evaluated and the result is
stored in a temporary variable and then assigned to i.
++i; here i+1 is not stored in a temporary variable, directly i is
increased by 1 

*/
#include <iostream>

int main(){
    int n{};
    int i{1};
    std::cout<<"Enter value of n: ";
    std::cin>>n;
    do
    {
        std::cout<<i<<std::endl;
        ++i; //++i is faster than i++
    }while (i<=n);    //; is required
    return 0;
}
