/*
✅ What is a String in C++?
A string is a sequence of characters used to represent text.
In C++, strings can be created and handled in two main ways:
🔹 1. C-style strings (char[])
🔹 2. C++ std::string class

✅ What is a C-Style String?
A C-style string is an array of characters ending with a null character '\0', which marks the end of the string.

🔹 Ways to Declare and Initialize Character Arrays
1. Implicit size (auto null terminator) ✅
    
    char str[] = "Hello";  
Size is automatically set to 6 ('H', 'e', 'l', 'l', 'o', '\0').
Null character is added automatically.

2. Explicit size with string literal

    char str[10] = "Hello";  
Extra space is unused.
It's size is 6 as H,e,l,l,o,\0.
Useful when you expect to modify or expand the string later.

3. Character-by-character initialization

    char alp[] = {65,66,67,68,"\0"};  //Output: ABCD
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};  
You must manually add the null terminator '\0'.
❌ If '\0' is missing, it won't be treated as a valid string.

4. Uninitialized character array
char str[100];  
cin.getline(str, 100);  // Reads input with spaces
Used when taking input at runtime.

⚠️ Beware: Pointer to string literal

    char* str = "Hello";  
    // ✅ Works, but string is stored in read-only memory
    str[0] = 'h';          
    // ❌ Undefined behavior (modifying read-only memory)
Use only for reading, not modifying.

🛠️ Useful Functions from <cstring>
Function	            Description
strlen(str)	            Returns length (excluding '\0')
strcpy(dest, src)	    Copies a string
strcmp(a, b)	        Compares two strings
strcat(a, b)	        Concatenates strings
strchr(str, 'c')	    Finds first occurrence of char

✅ Example Code
        #include <iostream>
        #include <cstring>
        using namespace std;

        int main() {
            char name[20] = "Naman";
    
            cout << "Name: " << name << endl;
            cout << "Length: " << strlen(name) << endl;

            strcat(name, " Mishra");
            cout << "Full name: " << name << endl;

            return 0;
        }
        

✅ What is std::string?
std::string is a class in the C++ Standard Library.
It represents a sequence of characters (i.e., text).
Safer, more flexible, and easier than using char[] (C-style strings).

Requires #include <string>

#include <string>
using namespace std;  // optional, otherwise use std::string

📦 1. Declaration and Initialization
✅ Empty string:
string s;

✅ Initialization with a literal:

string s = "Hello";
✅ Constructor-style initialization:

string s("Hello");
✅ Copy another string:

string s1 = "Hi";
string s2 = s1;
✅ Repeat a character:

string s(5, '*');  // s = "*****"
✅ Substring from another string:

string s1 = "Welcome";
string s2(s1, 3, 4);  // s2 = "come"

🧠 Internal Behavior
Internally, std::string stores characters in heap memory.
Automatically resizes as needed (unlike arrays).
Null-terminated internally, but you don’t need to handle it.

✏️ 2. Input and Output
🔸 Word input (single word):

string name;
cin >> name;  // reads until space
🔸 Full line input (with spaces):

getline(cin, name);
⚠️ Note: After cin >>, use cin.ignore() before getline().

🔍 3. Accessing Characters

string s = "World";

char ch = s[0];    // W
s[1] = 'A';        // s = "WArld"
s.at(2);           // Safe access (throws exception if out of bounds)
🧮 4. Properties and Checks
Property	        Example
Size / Length	    s.size(), s.length()
Check empty	        s.empty()
Last character	    s.back()
First character	    s.front()

🛠️ 5. Modifying Strings
Operation	    Code Example
Append	        s.append("!!!"); or s += "!!!";
Insert	        s.insert(2, "abc");
Erase	        s.erase(3, 2);
Replace	        s.replace(0, 3, "New");
Clear	        s.clear();

🔍 6. Substrings and Search
cpp
Copy
Edit
string s = "HelloWorld";

s.substr(5);         // "World"
s.substr(0, 5);      // "Hello"
s.find("lo");        // returns 3
s.rfind("l");        // returns last occurrence
🔄 7. Comparing Strings
cpp
Copy
Edit
if (s1 == s2)     // true if equal
s1 != s2;         // not equal
s1.compare(s2);   // 0 if equal, <0 if s1 < s2, >0 otherwise
🔁 8. Iterating Through Strings
🔸 Using index:
cpp
Copy
Edit
for (int i = 0; i < s.size(); ++i)
    cout << s[i];
🔸 Range-based for:
cpp
Copy
Edit
for (char c : s)
    cout << c;
🔸 With reference (to modify):
cpp
Copy
Edit
for (char &c : s)
    c = toupper(c);
🔁 9. Conversions
String → int, float:
cpp
Copy
Edit
int x = stoi("123");
float y = stof("3.14");
int, float → String:
cpp
Copy
Edit
string s = to_string(456);
🔗 10. Common Use-Cases in Competitive Programming
Task	Function
Check Palindrome	Reverse and compare
Count characters	Use map<char, int>
Extract substrings	substr(start, len)
Concatenate	+ or .append()
Fast input (line)	getline()

✅ Summary Table
Feature	std::string
Header	<string>
Namespace	std
Memory	Automatically managed (heap)
Dynamic resizing	✅ Yes
Null terminator	Internally managed (you don't handle it)
Functions available	Rich (find, insert, substr, etc.)

🧪 Example Program
cpp
Copy
Edit
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hi " << name << "! Your name has " << name.size() << " characters.\n";

    name += "123";
    cout << "Modified: " << name << "\n";

    return 0;
}
*/
