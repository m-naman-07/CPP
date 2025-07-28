/*
📌 What is a Function Pointer?
A function pointer is a variable that stores the address of a function, and can be used to call the function indirectly.

Just like a pointer to a variable holds the address of a variable, a pointer to a function holds the address of a function.

🧠 Syntax
    return_type (*pointer_name)(parameter_types);

✅ Simple Example
*/
    #include <iostream>
    using namespace std;

    // A simple function
    void greet() {
        cout << "Hello, Naman!" << endl;
    }

    int main() {
        // Declare a pointer to function greet
        void (*funcPtr)() = greet;

        // Call the function using pointer
        funcPtr();  // same as greet()

        return 0;
    }
/*
🧾 Output:
Hello, Naman!

🎯 Function Pointer with Parameters
    int add(int a, int b) {
        return a + b;
    }

    int main() {
        int (*ptr)(int, int) = add;

        int result = ptr(3, 4); // same as add(3, 4)
        cout << "Result: " << result << endl;

        return 0;
    }

🧾 Output:
Result: 7

📦 Use Case: Passing Function as Argument
    int multiply(int x, int y) {
        return x * y;
    }

    void operate(int a, int b, int (*func)(int, int)) {
        cout << "Result: " << func(a, b) << endl;
    }

    int main() {
        operate(5, 6, multiply);  // function passed as argument
        return 0;
    }

📘 Function Pointer Array
Useful in switch-case-like logic (e.g., menu-driven programs):
    int add(int a, int b) { return a + b; }
    int sub(int a, int b) { return a - b; }

    int main() {
        int (*ops[2])(int, int) = { add, sub };

        cout << "Add: " << ops[0](4, 2) << endl;
        cout << "Sub: " << ops[1](4, 2) << endl;

        return 0;
    }

🧠 Memory Behavior
•The pointer stores the address of code (not data).
•Function code is usually stored in text/code segment of memory.

⚠️ Notes
•You can’t point to non-static member functions using normal function pointers.
•Use std::function or lambdas for modern and flexible function pointers in C++11 and beyond.


*/
