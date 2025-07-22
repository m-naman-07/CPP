/* ***********
Reverse a number
*/
#include <iostream>

int main(){
    int n{};
    char rev[10];
    int i{};
    int r{};

    std::cout<<"Enter your no:"<<std::flush;
    std::cin>>n;

    while(n>0){
        r=n%10;
        rev[i]=r+'0';
        n=n/10;
        ++i;
    }
    rev[i]='\0';
    std::cout<<rev<<std::endl;
}
