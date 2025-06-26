// WAP to get the name from user and print it

#include <iostream>

int main() {
    std::string name;
    std::cout << "May I know your name?" << std::endl;
    // // std::cin >> name;
    // can't use this coz 
    // cin >> reads only until the first whitespace

    // That includes:
	// •	Space ' '
	// •	Tab \t
	// •	Newline \n
    // Leaves the rest (like "world") in the input buffer
    //Use getline() to read the whole line
    getline(std::cin ,name);

    std::cout<< "Welcome,"<<name<<std::endl;

    return 0;
}
