#include <iostream>
using namespace std;

int main(){
    int i{};
    int A[7]{};
    int min{};

    for(int &x:A){
        cout<<"Enter element for index "<<i<<":";
        cin>>x;
        ++i;
    }

    for(int x:A){
        if(min>x){
            min=x;
        }
    }

    cout<<"Min element of the given Array [";
    for(int y{};y<7;++y){
        cout<<A[y]<<" ";
    }
    cout<<"]"<<" is "<< min<<".\n";
}



















