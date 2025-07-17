/*
🔹String Concatenation in <cstring>
C++ provides the following C-style string concatenation functions from <cstring>:

Function	Description
strcat	    Concatenates a C-string to the end of another.
strncat	    Concatenates at most n characters to avoid overflow.

*These work on null-terminated char arrays only — not on std::string.

🔸 1. char* strcat(char* dest, const char* src);
✅ Purpose:
Appends the src string to the end of dest. The result is stored in dest.
dest must have enough space to hold the result.
Both strings must be null-terminated.

✅ Syntax:
    char dest[100] = "Hello, ";
    char src[] = "World!";
    strcat(dest, src);

🧠 Internal Working:
Finds the null terminator '\0' in dest to determine where to start appending.
Copies each character from src until it finds its '\0'.
Appends the null terminator after the last character.

🔸 2. char* strncat(char* dest, const char* src, size_t n);
✅ Purpose:
Appends at most n characters from src to dest, and then appends '\0'.
Prevents buffer overflow.
Still requires dest to be large enough.

✅ Syntax:
    char dest[20] = "Hello, ";
    char src[] = "World!";
    strncat(dest, src, 3);  // Appends "Wor"
*/

//💻 Full Example Program Demonstrating Both
    #include <iostream>
    #include <cstring>

    int main() {
        // Case 1: strcat with enough space
        char dest1[50] = "Hello, ";
        const char* src1 = "Naman";
        strcat(dest1, src1);

        std::cout << "=== Case 1: strcat ===\n";
        std::cout << "After strcat(dest1, src1): " << dest1 << "\n\n";

        // Case 2: strncat appending part of the source
        char dest2[50] = "Welcome ";
        const char* src2 = "to IIIT Sonepat";
        strncat(dest2, src2, 5);  // Appends "to II"

        std::cout << "=== Case 2: strncat (only 5 characters) ===\n";
        std::cout<<"After strncat(dest2, src2, 5):"<<dest2<< "\n\n";

        // Case 3: No space in destination (unsafe!)
        char dest3[10] = "Hello"; // only 10 bytes
        const char* src3 = "World";  // strcat will write out of bounds!

        std::cout << "=== Case 3: strcat with no space (unsafe!) ===\n";
        // Uncommenting the next line is dangerous:
        // strcat(dest3, src3);  // ❌ undefined behavior

        std::cout << "dest3 has only 10 bytes and will overflow if we strcat!\n";

        return 0;
    }
/*
📤 Sample Output:
=== Case 1: strcat ===
After strcat(dest1, src1): Hello, Naman

=== Case 2: strncat (only 5 characters) ===
After strncat(dest2, src2, 5): Welcome to II

=== Case 3: strcat with no space (unsafe!) ===
dest3 has only 10 bytes and will overflow if we strcat!

🧠 Internal Memory Working (Case 1)
Let’s take:
    char dest[50] = "Hello, ";
    const char* src = "Naman";
    strcat(dest, src);

Before Concatenation:
dest	        src
"Hello, \0"	    "Naman\0"

After strcat:
dest
"Hello, Naman\0"

Characters from src are copied starting at '\0' position in dest.

⚠️ Common Mistakes
Not leaving space in dest	
 - Buffer overflow, crash, UB

Forgetting '\0' in either string	
 - strcat may read garbage memory

Using strncat but forgetting that it still appends '\0'	    
 - May cause off-by-one overflow

🛡️ Best Practices
Situation	                        Use
You trust the size of dest	        strcat
You want safer bounded copy	        strncat
Want full safety and C++ style	    Prefer std::string +=
*/
