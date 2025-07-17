/*
🔹strlen()
✅ Function Signature:
    size_t strlen(const char* str);

✅ Purpose:
Returns the number of characters in the null-terminated C-string excluding the null character ('\0).

🧠 Internal Working:
 - It starts at the memory address pointed to by str.
 - Reads each byte until it encounters the null terminator ('\0').
 - Counts how many bytes it passed.

Code:
    size_t my_strlen(const char* str) {
        size_t len = 0;
        while (str[len] != '\0') {
            ++len;
        }
        return len;
    }

🧠 Example:    
    char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

🔍 Memory Layout:

Address	Value
1000	'H'
1001	'e'
1002	'l'
1003	'l'
1004	'o'
1005	'\0'

🧠 strlen(str) will:
Read 'H' → count = 1
Read 'e' → count = 2
Read 'l' → count = 3
Read 'l' → count = 4
Read 'o' → count = 5
Read '\0' → STOP

✅ Returns 5

🧪 Example Code:
    #include <iostream>
    #include <cstring>

    int main() {
        const char* name = "Naman";
       size_t len = strlen(name);

        std::cout << "Input string: " << name << "\n";
        std::cout << "Length (without null terminator): " << len << "\n";

        return 0;
    }

📥 Input:
    name = "Naman"

📤 Output:
Input string: Naman
Length (without null terminator): 5

⚠️ Edge Case:
    const char* s = "";
    std::cout << strlen(s);  // Output: 0

If you pass nullptr, it leads to undefined behavior (usually a crash):
    const char* s = nullptr;
    std::cout << strlen(s);  // ❌ Crash!



🔹strnlen() (C++17 or POSIX in older C++ compilers)
✅ Function Signature:
    size_t strnlen(const char* str, size_t maxlen);

✅ Purpose:
 - Returns the length of the string up to maxlen characters.
 - If '\0' is found before maxlen, it returns that length.
 - Otherwise, it returns maxlen.

🧠 Internal Working:
Same as strlen, but stops at maxlen if '\0' is not found.

🧠 Memory Example:
    char str[10] = {'H', 'e', 'l', 'l', 'o'}; // No null character!

Memory layout:
Index	Value
0	'H'
1	'e'
2	'l'
3	'l'
4	'o'
5–9	???

⚠️ strlen(str) here is undefined behavior (no null termination)!
✅ strnlen(str, 5) is safe → returns 5

🧪 Example Code:
    #include <iostream>
    #include <cstring>

    int main() {
        char buffer[10] = {'H', 'e', 'l', 'l', 'o'};    //No '\0'
        size_t len = strnlen(buffer, 10);

        std::cout << "Buffer content: ";
        for (int i = 0; i < 5; ++i) std::cout << buffer[i];
        std::cout << "\n";

        std::cout<<"Length using strnlen(buffer, 10):"<< len << "\n";

        return 0;
    }

📤 Output:
    Buffer content: Hello
    Length using strnlen(buffer, 10): 5

💡 Compare strlen vs strnlen
String	                        strlen(s)	        strnlen(s, 10)
"Hello"	                        5	                5
"Hi\0There"	                    2	                2
Not null-terminated (unsafe!)	❌ UB	           ✅ returns maxlen


And for strnlen:
    size_t my_strnlen(const char* str, size_t maxlen) {
        size_t len = 0;
        while (len < maxlen && str[len] != '\0') {
            ++len;
        }
        return len;
    }

🛡️ Best Practices
Situation	                                        Recommendation
You know the string is null-terminated	            Use strlen()
You're reading input buffers safely	                Use strnlen()
Working with std::string	                        Use .length() 
                                                    or .size()
Working with legacy C APIs	                        Use strnlen() if
                                                    unsure of null termination
*/
#include <iostream>
#include <cstring>  // for strlen and strnlen

int main() {
    // Case 1: Proper null-terminated string
    const char* str1 = "Naman";
    size_t len1 = strlen(str1);
    size_t nlen1 = strnlen(str1, 10);

    std::cout << "=== Case 1: Null-terminated ===\n";
    std::cout << "Input string: " << str1 << "\n";
    std::cout << "strlen(str1): " << len1 << "\n";
    std::cout << "strnlen(str1, 10): " << nlen1 << "\n\n";

    // Case 2: Manually created character array with missing '\0'
    char buffer[10] = {'H', 'e', 'l', 'l', 'o'};  // No null terminator

    std::cout << "=== Case 2: No null-terminator (undefined behavior for strlen) ===\n";
    std::cout << "Buffer content (printed manually): ";
    for (int i = 0; i < 5; ++i) std::cout << buffer[i];
    std::cout << "\n";

    // strlen(buffer); // ❌ Undefined behavior! Uncommenting may crash
    size_t safe_len = strnlen(buffer, 10);
    std::cout << "strnlen(buffer, 10): " << safe_len << " (Safe)\n\n";

    // Case 3: Null-terminator present in middle
    char str3[10] = {'H', 'i', '\0', 'T', 'h', 'e', 'r', 'e'};
    std::cout << "=== Case 3: String with early null terminator ===\n";
    std::cout << "str3 content until '\\0': " << str3 << "\n";
    std::cout << "strlen(str3): " << strlen(str3) << "\n";
    std::cout << "strnlen(str3, 10): " << strnlen(str3, 10) << "\n\n";

    // Case 4: Empty string
    const char* str4 = "";
    std::cout << "=== Case 4: Empty string ===\n";
    std::cout << "strlen(str4): " << strlen(str4) << "\n";
    std::cout << "strnlen(str4, 10): " << strnlen(str4, 10) << "\n";

    return 0;
}

/*
📥 Sample Output:
=== Case 1: Null-terminated ===
Input string: Naman
strlen(str1): 5
strnlen(str1, 10): 5

=== Case 2: No null-terminator (undefined behavior for strlen) ===
Buffer content (printed manually): Hello
strnlen(buffer, 10): 5 (Safe)

=== Case 3: String with early null terminator ===
str3 content until '\0': Hi
strlen(str3): 2
strnlen(str3, 10): 2

=== Case 4: Empty string ===
strlen(str4): 0
strnlen(str4, 10): 0
*/
