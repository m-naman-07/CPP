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

🔶 5. 📈 Return Types and void 
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

