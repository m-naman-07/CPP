/*
📘 Difference Between <cstring> and <string>
Feature	                             <cstring>	          <string>
From	                             C (via <string.h>)   C++
Type	                             char[], char*	      std::string
Null-terminated?	                 ✅ Yes	             ❌ Internally
                                                          managed
Memory safe?	                     ❌ No	             ✅ Yes
Supports operators (+, ==)	         ❌ No	             ✅ Yes
Can grow automatically?	             ❌ No	             ✅ Yes
Part of STL?	                     ❌ No	             ✅ Yes
Requires manual memory management?	✅ Yes	             ❌ No

🧠 1. Data Type
<cstring>: C-style String
    char name[] = "Naman";  // Array of characters

It’s just a char array ending with '\0'
No built-in length, resize, or safety

<string>: C++ std::string
    #include <string>
    std::string name = "Naman";  // High-level object

Provides rich methods like .length(), .substr(), .find(), .replace()
Automatically resizes

🛠️ 2. Syntax and Operations
✅ String Concatenation
With <cstring>:
    char a[20] = "Hello ";
    char b[] = "World";
    strcat(a, b);  // a = "Hello World"

With <string>:
    string a = "Hello ";
    string b = "World";
    string c = a + b;  // much simpler!

✅ String Comparison
<cstring>:
    strcmp("abc", "abc"); // 0 → equal

<string>:
    string a = "abc", b = "abc";
    if (a == b) cout << "Equal";  // intuitive!

✅ Length
<cstring>:
    char s[] = "abc";
    cout << strlen(s);  // Output: 3

<string>:
    string s = "abc";
    cout << s.length();  // Output: 3

💾 3. Memory Safety and Management
<cstring> is unsafe:
    char s[5];
    strcpy(s, "VeryLongString");  // ❌ Buffer overflow

<string> is safe:
    string s = "VeryLongString";  // ✅ Grows dynamically

🔍 4. Null-Termination
Type	            Ends with '\0?	                Needed for functions
C-style string	    ✅ Always	                   Yes (e.g. strlen())
std::string	        ❌ Not needed	               Internally managed

🔧 5. Convert Between the Two
std::string → C-string:
    string s = "hello";
    const char* cs = s.c_str();  // Read-only

C-string → std::string:
    char cs[] = "hello";
    string s = cs;

⚙️ 6. Performance Considerations
Case	                    <cstring>	    std::string
Small, fixed-size data	    ✅ Faster	    Slightly more overhead
Dynamic manipulation	    ❌ Painful	    ✅ Very easy
Competitive programming	    ✅ Often used	✅ Increasingly preferred
Low-level systems code	    ✅ Required	    ❌ Often not available
High-level applications	    ❌ Unsafe	    ✅ Ideal

⚠️ 7. Common Pitfalls
With <cstring>:
 - Buffer overflows
 - Forgetting null-terminator
 - Manual memory management
 - Can't use +, ==, etc.

With <string>:
 - Slightly more memory overhead
 - Needs #include <string>
 - Must use .c_str() with legacy APIs

✅ When to Use What?
Use Case	                            Recommended Type
Legacy C libraries	                    char* with <cstring>
Safe and modern string manipulation	    std::string
Performance-critical, small input	    char[]
C++ programs with dynamic string ops	std::string
*/
