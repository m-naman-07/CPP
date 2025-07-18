/*
Loops
• Loops are iterative statements
• Block of statements are repeatedly executed as long as condition is true
• Condition given in loop must become false after some finite iterations otherwise its a
infinite loop
• Values used in condition must update inside the body of finite loop
Four types of loops
• pre-tested loop while()
• post-tested loop do..while()
• counter controlled loop for()
• for each loop for Collections for()
*/
#include <iostream>

int main(){
    int n{};
    int i{1};
    std::cout<<"Enter value of n: ";
    std::cin>>n;
    while(i<=n)
    {
        std::cout<<i<<std::endl;
        ++i; //++i is faster than i++
    }
    return 0;
}
