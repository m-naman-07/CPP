// WAP to get the name from user and print it

#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "May I know your name?" <<flush;
    /*
    // std::cin >> name;
    can't use this coz 
    cin >> reads only until the first whitespace

    That includes:
	•	Space ' '
	•	Tab \t
	•	Newline \n
    •   '\r' (carriage return)
    Leaves the rest (like "world") in the input buffer
    Use getline() to read the whole line
    */
    getline(cin ,name);
    cout<< "Welcome,"<<name<<endl;

}
