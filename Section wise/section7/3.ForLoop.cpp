#include <iostream>

int main(){
    int n{};
    std::cout<<"Enter n:";
    std::cin>>n;

    for(int i{0};i<=n;++i) 
    //++i is faster than i++
    //inside initialization is optional meanining u can initialize at the start of the program to
    {
        std::cout<<"i "<<i<<std::endl;  
        //can write ++i here too
        //it means if u initialize the variable at start of main and u write ++i here your for loop may look like for( ;i<=n; )
    }
   
    return 0;
}




