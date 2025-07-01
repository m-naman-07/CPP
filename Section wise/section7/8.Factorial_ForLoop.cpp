/*
	•	i starts at 1.
	•	fact starts at 1 (since factorial is a product).
*/
#include<iostream>

int main(){
    int n{};
    int fact{1};
    std::cout<<"Enter no. whose factorial is req.:";
    std::cin>>n;
   
    for( int i{1};i<=n;++i) //++i is faster than i++
    {
        fact*=i;
    }
    std::cout<< n<<"!="<<fact<<std::endl;

    return 0;
}
