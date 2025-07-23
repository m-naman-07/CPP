/*
🔶 1. 🔍 What is a Function? 
📖 Definition:
A function in C++ is a named group of statements that performs a specific task and optionally returns a result. It is invoked (called) when that task needs to be performed.

✅ Deep Explanation:
1. Encapsulation of Logic:
A function wraps a piece of logic (computation, printing, calculation, etc.) so it can be reused.
Example:
    int square(int x) {
        return x * x;
    }
The above encapsulates "squaring" logic. You don’t have to write x * x every time.

2. Abstraction Layer:
Functions hide implementation. The user only needs to know what the function does, not how.
Example:
    int area = calculateCircleArea(5);

You don’t need to know π or r² formula — the function hides it.

3. Modular Design:
Functions divide complex programs into smaller, testable, and maintainable units.
    void takeInput();
    void calculateSalary();
    void displayReport();

The user doesn't need to understand the internal mechanism — just use it. That’s abstraction.

🔶 2. 📜 Syntax + Declaration + Definition + Calling
📌 Basic Syntax:
    return_type function_name(parameter_list);

🔍 Breakdown:
Part	                Meaning
return_type	            Type of value returned (int, float, void, char, etc.)
function_name	        Name used to invoke the function
parameter_list	        Input values passed when calling the function (optional)

📘 Full Example:
    int sum(int a, int b);         // declaration

    int sum(int a, int b) {        // definition
        return a + b;
    }

    int main() {
        int x = 10, y = 20;
        int result = sum(x, y);    // calling
        cout << result;
    }

🔶 3. 🧠 Function Working in Memory 
When a function is called, memory is used in a specific and layered structure: Code Segment, Stack, and Heap.

🧭 Memory Segments:
Segment	Role
Code Segment	Stores actual compiled code (e.g., main, add)
Stack Segment	Temporarily holds variables, function calls (auto-cleared)
Heap Segment	Dynamically allocated memory (you manage it manually)

🔄 Execution Flow Example:
    int add(int x, int y) {
        int z = x + y;
        return z;
    }

    int main() {
        int a = 10, b = 15, c;
        c = add(a, b);
    }
🧩 Step-by-Step Internal Behavior:
1.Program begins in main().
    - Stack allocates memory for a, b, c.
2.Function add() is called:
    -A new stack frame is pushed.
    -x gets 10, y gets 15.
    -z = x + y = 25.
3.Return value is passed:
    -z is returned to c in main().
4.Function Ends:
    -Stack frame for add() is popped (deleted) automatically.

📌 Key Point:
Variables inside functions live in the stack and are deleted after function exits.
This is why local variables don’t persist between function calls.

🔶 4. ⚠️ Heap vs Stack in Functions
📂 Stack Characteristics:
•Temporary
•Fast allocation/deallocation
•Stores:
    -Local variables
    -Function parameters
    -Return addresses
•Auto-managed

📦 Heap Characteristics:
•Manually controlled
•Slower
•Used when you need memory to persist after function exits
•Needs new and delete

🚨 Example of Heap Use (with danger):
    int* allocate() {
        int* p = new int(42);  // memory from heap
        return p;              // persists after function
    }

    int main() {
        int* ptr = allocate(); // now ptr holds 42
        delete ptr;            // manual cleanup required
    }
❌ If you forget delete, you create a memory leak.

🔶 5. 📈 Return Types and void — [Ref: Functions.pdf]
🧾 Return Types:
•int: returns integer
•float, char, etc.
•void: returns nothing

🧪 Example:
    int getAge() {
        return 21;
    }

    void sayHello() {
        cout << "Hello!";
    }

🔍 Internal View:
When a return statement is hit, the value is sent to the caller.
The stack frame is cleared afterward.

📌 Return Type Importance:
•In older C++, if you don’t specify a return type, compiler assumes int (bad practice).

•Modern C++ (C++11 and beyond): Always specify return type for:
    •Type safety
    •Clarity
    •Avoiding warnings

🔁 Common Mistake:
getAge(); // No return used
This will compile but wastes the return value. Always use returned value unless the function is void.

Basic examples of functions:
1.ADD TWO FLOATS
#include<iostream>
using namespace std;

float add(float x, float y){
    float z;
    z=x+y;
    return z;
}

int main(){
    float x{};
    float y{};

    cout<<"Enter two Floats:"<<flush;
    cin>>x>>y;

    cout<<"Sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<"\n";
    return 0;
}

2.MAX OF 3 NUMBERS
*/
#include <iostream>
using namespace std;

float Max(float a, float b, float c) {
    if (a == b && b == c) {
        cout << "All values are equal.\n";
        return a;
    }
    else if (a == b && a > c) {
        cout << "Two are equal and largest.\n";
        return a;
    }
    else if (a == c && a > b) {
        cout << "Two are equal and largest.\n";
        return a;
    }
    else if (b == c && b > a) {
        cout << "Two are equal and largest.\n";
        return b;
    }
    else if (a > b && a > c) {
        cout <<a<<" is the largest.\n";
        return a;
    }
    else if (b > a && b > c) {
        cout <<b<< " is the largest.\n";
        return b;
    }
    else {
        cout <<c<<" is the largest.\n";
        return c;
    }
}

int main() {
    float x{}, y{}, z{}, maxVal{};

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    maxVal = Max(x, y, z);
    cout << "Maximum value is: " << maxVal << endl;

    return 0;
}

/*
FAQ-Functions
🔶 1. Do functions occupy memory in C++?
✅ Yes.
When a C++ program is compiled, each function’s code is converted into machine code. That machine code is stored in a specific part of memory known as the Code Segment (or Text Segment).

🧠 Deep Explanation:
•The Code Segment is read-only and stores instructions (i.e., compiled function bodies).
•Even if the function is never called during runtime, the compiler includes it in the binary if it's defined or linked.
•Functions do not live in the stack or heap, only their logic (machine code) is in the code section.

📌 Note:
•Function definitions take up memory.
•Function declarations (int func(int);) don’t — they just tell the compiler what to expect.

🔶 2. Will a function occupy space even if it is not called?
✅ Yes.
As long as the function is defined in the program (or included via linking), it is compiled and stored in the code section.

🧠 Deeper Insight:
•This is how the linker connects calls to the correct functions.
•Whether it's used or not at runtime, the compiled code must be present in memory so it can be called if needed.
•Some optimizing compilers may exclude unused functions during optimization (called dead code elimination) — but only if it's safe and enabled.

🔶 3. Where is the memory for variables of a function created?
📍 In the Stack Segment.
Every time a function is called:
•A new activation record (stack frame) is pushed to the call stack.
•This frame contains:
    •Function parameters
    •Local variables
    •Return address

🧠 Visual:
    void myFunction() {
        int a = 5;
        float b = 3.14;
    }

When myFunction() is called:
a and b are stored in the stack frame allocated for this call.

🔶 4. When is the memory for variables allocated?
🕒 At runtime, when the function is called.
✅ Runtime Behavior:
•As soon as a function starts executing, memory for all its local variables and parameters is allocated on the stack.
•When the function ends (i.e., return), the stack frame is popped, and the memory is released automatically.

🧠 Why It Matters:
•Local variables are not persistent.
•Each call to the function gets fresh memory.

🔶 5. Is memory for function variables allocated freshly for each call?
✅ Yes, every function call creates a new stack frame.
 📌 What this means:
 •You can call a function multiple times, and each call will have its own independent  set of variables.
 •This allows recursion, nested function calls, etc.

🧪 Example:
    void test() {
        int a = 0;
        ++a;
        cout << a << endl;
    }

Calling test() multiple times prints:
1
1
1
Because a is created fresh every time.

🔶 6. What is the return type of a function?
🧾 Return Type = The data type of the value that a function returns.
✅ Deeper View:
•When a function finishes, it may return a result to the caller.
•The return type tells the compiler what kind of value to expect.

📌 Examples:
    int add(int a, int b) { return a + b; }      // returns an int
    float getPi() { return 3.14; }              // returns a float
    string getName() { return "Naman"; }        // returns a string

🔶 7. What is void?
✅ void is a special return type that indicates no value is returned from a function.
🔍 When to use:
When the function performs an action (like printing, processing) but does not compute a result.

📌 Example:
    void printMessage() {
        cout << "Hello!" << endl;
    }

🧠 Remember:
•You cannot write return value; in a void function.
•But you can still use return; to exit early.

🔶 8. Difference between int main() and void main()
Feature	        int main()	                        void main()
Return type	    int (standard)	                    void (non-standard in C++)
Meaning	        Returns 0 to OS on success	        Returns nothing
Portability 	✅ Standard C++	                    ❌ Not standard-compliant
Required by	    Most compilers, the C++ standard	Often compiles but not recommended

✅ Explanation:
•In C++, main() is the entry point.
•int main() should return 0 to indicate successful execution to the Operating System.
•void main() is not valid in standard C++ (though some compilers allow it).

📌 Standard Form:
    int main() {
        // your code
        return 0;  // return success code to OS
    }

✔️ Always use int main() in C++ programs.
*/
