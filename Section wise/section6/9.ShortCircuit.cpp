/*
SHORT-CIRCUIT
In C++, short-circuit evaluation refers to the way logical operators (&& and ||) evaluate expressions. It allows the program to stop evaluating further conditions as soon as the result is already determined.

✅ How Short-Circuiting Works:

1. && (Logical AND) Operator:
	•	Short-circuits (stops evaluating) when the left-hand operand is false.
	•	Since false && anything is always false, the second operand doesn’t need to be checked.

Example:
    if (false && (5 / 0 == 0)) {
        cout << "This won't print!";
    }
    •	Why? The expression false && (5 / 0 == 0) is already false, so the program won’t attempt to evaluate (5 / 0 == 0), avoiding a division by zero error.

2. || (Logical OR) Operator:
	•	Short-circuits (stops evaluating) when the left-hand operand is true.
	•	Since true || anything is always true, the second operand doesn’t need to be checked.

Example:
    if (true || (5 / 0 == 0)) {
        cout << "This will print!";
    }
    •	Why? The expression true || (5 / 0 == 0) is already true, so the program doesn’t evaluate (5 / 0 == 0) and avoids the error.

✅ Why is Short-Circuiting Useful?
	1.	Performance:
	•	If the result can be determined early, the program doesn’t waste time evaluating further conditions.
	2.	Avoiding Errors:
	•	Short-circuiting helps you avoid undefined behavior, like dividing by zero or accessing invalid memory.

Example of Short-Circuiting:

Code with && (Logical AND):
    int a = 5, b = 0;

    if (b != 0 && a / b == 2) {
        cout << "No error" << endl;
    }
    else {
    cout << "b is zero, no division performed" << endl;
    }

    Explanation:
	    •	b != 0 is false.
	    •	Because of short-circuiting, the second part a / b == 2 is not evaluated — thus avoiding a division by zero error.

Code with || (Logical OR):
    int a = 5, b = 0;

    if (b == 0 || a / b == 2) {
        cout << "b is zero, no division performed" << endl;
    }
    else {
        cout << "No error" << endl;
    }   

    Explanation:
	    •	b == 0 is true.
	    •	Because of short-circuiting, the second part a / b == 2 is not evaluated, preventing the division by zero error.

So basically:
	•	Short-circuiting allows conditional expressions to stop evaluating as soon as the result is determined.
	•	&& short-circuits if the left side is false.
	•	|| short-circuits if the left side is true.
	•	Useful for improving performance and avoiding errors.
*/
//Program to Demonstrate Short Circuit
#include <iostream>

int main(){

    int a=10,b=5,i=5;
    if(a>b && ++i<=b){
    }
    std::cout<<i<<std::endl;
    //as first condition was true so the second statement was checked in the above
    if(a>b || ++i<=b){
    }
    std::cout<<i<<std::endl;
    //as first condition was true so the second statement was not checked in the above
}
