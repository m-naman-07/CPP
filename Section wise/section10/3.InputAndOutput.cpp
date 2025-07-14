/*
----------------------------Method 1------------------------------------
using normal cin<<s;

Code example:
    #include <iostream>
    using namespace std;

    int main(){
        char s[20];

        cout<<"Enter your name:";
        cin>>s;

        cout<<"Welcome, "<<s<<"\n";
    }
But this will only take input until the first white space 
e.g if u give steve jobs it will only take steve as input
    std::string s;
    std::cin >> s;
🔹 Input:
steve jobs⏎

🧠 What Happens Internally:
 - cin >> s;:
   Reads characters up to the first whitespace (' ' in this case)
 - Stores "steve" in s
 - Stops reading
 - Leaves the space and "jobs\n" in the input buffer
So after this:
s = "steve"
The input buffer still contains: " jobs\n"


✅ What if you take input again?

std::string s2;
std::cin >> s2;
It will read "jobs" because it's still sitting in the input buffer.

steve jobs⏎
First cin >> s1; → reads "steve", leaves " jobs\n"
Second cin >> s2; → skips space, then reads "jobs"
The \n is then skipped too

🟢 Input:
steve jobs

🟢 Output:
First: steve
Second: jobs

⚠️ Important Notes:
 -cin >> s; skips leading whitespace, then reads until it hits next whitespace
 -Remaining characters stay in the input buffer
 -You don’t need to press Enter again for the second input if the leftover content is still there
 - cin >> leaves the newline (\n) in the buffer.

---------------------Method 2-------------------------------------------
using cin.get();

Code Example:
    #include <iostream>
    using namespace std;

    int main(){
        char s[20];

        cout<<"Enter your name:";
        cin.get(s,20);

        cout<<"Welcome, "<<s<<"\n";
    } 


🧠 What is cin.get()?
The cin.get() function is part of the C++ input stream (cin) and is used to read characters from standard input.

✅ Key Features:
Reads input character-by-character.
Can include whitespace (spaces, tabs, newlines).
Can be used in three forms.

🔂 1. cin.get() – Reads and returns one character
✅ Syntax:
    char ch;
    ch = cin.get();

✅ Behavior:
Reads one character at a time, including whitespace.
Returns the ASCII integer value of the character read.

✅ Code Example:
#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    ch = cin.get();
    cout << "You entered: " << ch << endl;
    return 0;
}
✅ Input:
A

✅ Output:
Enter a character: You entered: A

📊 Visual Diagram:
Input Stream: | A | \n | (Enter key pressed)
              ↑
              cin.get() reads 'A'
After the first cin.get():
A is read.
\n remains in the input buffer.

🔂 2. cin.get(char &ch) – Reads one character into a variable
✅ Syntax:
    char ch;
    cin.get(ch);

✅ Behavior:
 - Reads a single character and stores it in the provided variable.
 - Useful when you want to store and manipulate input directly.

✅ Code Example:
    #include <iostream>
    using namespace std;

    int main() {
        char ch;
        cout << "Enter any character: ";
        cin.get(ch);
        cout << "You entered: " << ch << endl;
        return 0;
    }
✅ Input:
x

✅ Output:
Enter any character: You entered: x

📊 Visual Diagram:
Input Stream: | x | \n |
              ↑
         cin.get(ch) reads 'x'

After reading:
'x' is stored in ch
'\n' remains in the buffer.

🔂 3. cin.get(char* buffer, int size) – Reads a string including spaces
✅ Syntax:
    char str[50];
    cin.get(str, 50);

✅ Behavior:
- Reads up to size - 1 characters or until it encounters newline (\n).
- Appends null character '\0' at the end.
- Keeps the newline in the buffer (doesn't consume it).

✅ Code Example:
    #include <iostream>
    using namespace std;

    int main() {
        char name[50];
        cout << "Enter your full name: ";
        cin.get(name, 50);
        cout << "You entered: " << name << endl;
        return 0;
    }
✅ Input:
Steve Jobs

✅ Output:
Enter your full name: You entered: Steve Jobs

📊 Visual Diagram:
Input Stream: | S | t | e | v | e |   | J | o | b | s | \n |
              ↑
        cin.get(name, 50) reads up to '\n' (but doesn't consume it)

Buffer name[] contains:
['S', 't', 'e', 'v', 'e', ' ', 'J', 'o', 'b', 's', '\0']

Input stream after:
\n remains in the buffer!

🔂 4. cin.get(char* buffer, int size, char delim) – Custom delimiter
✅ Syntax:
char str[50];
cin.get(str, 50, '#');  // Stops at '#'

✅ Behavior:
Reads characters into buffer until:
  - size - 1 is reached
  - or delimiter is encountered (e.g., #)
Adds null-terminator \0 at the end.
Delimiter is NOT removed from the input stream.

✅ Code Example:
    #include <iostream>
    using namespace std;

    int main() {
        char data[50];
        cout << "Enter a message (stop at #): ";
        cin.get(data, 50, '#');
        cout << "You entered: " << data << endl;
        return 0;
    }

✅ Input:
Hello world#This is ignored

✅ Output:
Enter a message (stop at #): You entered: Hello world

📊 Visual Diagram:
Input Stream:|H|e|l|l|o|  |w|o|r|l|d|#|T|h|i|s|
              ↑
         cin.get(data, 50, '#') stops at #

Buffer data[] contains:
['H', 'e', 'l', 'l', 'o', ' ', 'w', 'o', 'r', 'l', 'd', '\0']
Input stream after:
#This is ignored (still in buffer)

⚠️ Common Problem: Mixing cin >> with cin.get()
If you use cin >> before cin.get(), a newline (\n) remains in the buffer. cin.get() may read this newline unintentionally.

❗ Fix: Use cin.ignore() before cin.get()
    int age;
    char name[50];
    cin >> age;
    cin.ignore(); // discard leftover '\n'
    cin.get(name, 50);

---------------------------Method 3-------------------------------------
Using cin.getline();

Code Example:
    #include <iostream>
    using namespace std;

    int main(){
        char s[20];

        cout<<"Enter your name:";
        cin.getline(s,20);

        cout<<"Welcome, "<<s<<"\n";
    } 


*/


