/*
    -------Method 1-------
using normal cin<<s;

    #include <iostream>
    using namespace std;

    int main(){
        char s[20];

        cout<<"Enter your name:";
        cin>>s;

        cout<<"Welcome, "<<s<<"\n";
    }
But this will only take input until the first white space 
e.g if u give steve jobs it will only take steve as input

    ------Method 2------
using cin.get();
    #include <iostream>
    using namespace std;

    int main(){
        char s[20];

        cout<<"Enter your name:";
        cin.get(s,20);

        cout<<"Welcome, "<<s<<"\n";
    } 

*/
#include <iostream>
    using namespace std;

    int main(){
        char s[20];

        cout<<"Enter your name:";
        cin.getline(s,20);

        cout<<"Welcome, "<<s<<"\n";
    } 

