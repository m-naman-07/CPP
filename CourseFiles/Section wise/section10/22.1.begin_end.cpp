/*
🔹 OVERVIEW
Function	Purpose
begin()	Returns an iterator to the first character of the string.
end()	Returns an iterator to one past the last character (not a valid character).

🔸 SYNTAX
    iterator begin();
    const_iterator begin() const;

    iterator end();
    const_iterator end() const;

e.g_
std::string s = "text";
std::string::iterator it = s.begin();     // modifiable iterator
std::string::const_iterator it2 = s.end(); // read-only iterator 
                                            (good for const strings)

iterator: allows modification of the string.
const_iterator: read-only access (if the string is const).

🔹 BASIC EXAMPLE
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Real";
    
    // begin()
    cout << "First character: " << *s.begin() << endl;

    // end() - points just past the last character, not safe to dereference
    if (s.end() == s.begin() + s.length())
        cout << "s.end() points one past the last character\n";

    return 0;
}

/*
🟢 Output:
First character: R
s.end() points one past the last character

🔸 MEMORY DIAGRAM
For: string s = "Real";
Index:      0    1    2    3
Character: 'R'  'e'  'a'  'l'
Pointer:   ↑         ↑        ↑
        s.begin()        s.end()
s.begin() → points to 'R'
s.end() → points to memory after 'l' (not dereferenceable)

🔹 USING begin() and end() IN LOOPS
➤ Range-based loop (uses begin() and end() internally):
    for (char ch : s)
        cout << ch << " ";

➤ Iterator-based loop:
    for (auto it = s.begin(); it != s.end(); ++it)
        cout << *it << " ";

🟢 Output:
R e a l 

🔸 USE CASES
Traversal
    auto it = s.begin() + 4;

Insertion
    s.insert(s.begin() + 2, 'X');  // Insert 'X' at index 2

Erasing
    s.erase(s.begin() + 1);  // Removes the second character

Reversal
    reverse(s.begin(), s.end());

🔹 EDGE CASES
🔸 Empty String:
    string s = "";

    if (s.begin() == s.end())
        cout << "Empty string has equal begin() and end()";

✅ This condition is true. Never dereference begin() if the string is empty!

🔸 const begin() / end()
Used when string is const:
    const string s = "Hello";
    auto it = s.begin();  // const_iterator

You can read, but not modify.

✅ KEY TAKEAWAYS
Concept	                    Explanation
s.begin()	                Iterator to first character
s.end()	                    Iterator to one-past-last character
*s.begin()	                Dereferences to first char
*s.end()	                ❌ Invalid (don't dereference)
Use with STL algorithms	    reverse, sort, find, etc.
Empty string	            begin() == end()
*/
