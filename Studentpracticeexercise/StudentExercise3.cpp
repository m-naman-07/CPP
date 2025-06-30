//Program to Calculate Discounted Bill Amount
#include<iostream>

int main(){

    float billAmount;
    float discount=0.0;
    std::cout<<"Enter Bill Amount:";
    std::cin>>billAmount;
    if(billAmount>=500){
    discount=billAmount*20/100;
    }

    else if(billAmount>=100 && billAmount<500){
    discount=billAmount*10/100;
    }

    std::cout<<"Bill Amount is:"<<billAmount<<std::endl;
    std::cout<<"Discount is :"<<discount<<std::endl;
    std::cout<<"Discounted Amount is:"<<billAmount-discount<<std::endl;

    return 0;
}
