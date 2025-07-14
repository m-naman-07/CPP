#include <iostream>

int main() {
    int a=5,b=5,e=5,f=10,c,d,g,i=4;

    // pre Increment
    std::cout << "Pre Increment" << std::endl;
    c=++a;
    std::cout << a << std::endl;
    std::cout << c << std::endl;

    std::cout << "Post Increment" << std::endl;
    d=b++;
    
    std::cout << b << std::endl;
    std::cout << d << std::endl;

    std::cout << "Post Increment another example" << std::endl;
    g= e++ * f;  //First multiply(e*f) then increment e.

    std::cout << g << std::endl;
    std::cout << e << std::endl;

    //these all mean the same thing
    //i = i + 1;   ->  i +=1 ;   ->   i++;
    std::cout << "Value of i increased" << std::endl;    
    ++i; //alway use ++i for these type statements it is fast 
    std::cout<<i<<std::endl;
    return 0;
}


/*
Increment and Decrement Operator
• Increment and Decrement are of two types I.e pre increment,
post increment and pre decrement ,post decrement

Example :
Pre inc : ++x ;               
Post inc : x++;              
Pre dec : ++x ;                     
Post dec : x++;     

• These variables are useful for counting as they are very common
  so c++ has introduced this concept  
• This is used mostly in loops
• The meaning of pre increment(++x) is, first increment the value then assign the result to the variable.

• The meaning of post increment(x++) is first assign then increment it
  the value.

  int x = 5,y;

  pre increment
  y=++x;  -> y=6
             x=6

  post increment
  y=x==;  -> y=5
             x=6
*/

/*
what will be the output of following??
int i=5,j;
j=2* ++i + 2* i++    
->j=2*6 + 2*6(as i was already pre incremented in the same line) , i=7
j=2* i++ + 2* i++     
->j=2*5 + 2*6 (as i was already post incremented in the same line) , i=7

j=2* ++i + 2* i++   
In C++, these kind of lines causes undefined behavior because:
	•	You’re modifying i twice:
	•	once via ++i (pre-increment)
	•	and once via i++ (post-increment)
	•	Without a defined order of evaluation between them
⚠️ In C++ (especially pre-C++17), the order in which sub-expressions are evaluated is unspecified.
so has no guaranteed order of:
	•	when ++i executes
	•	when i++ executes
	•	when i is read

the compiler is free to do anything:
	•	It might do ++i first
	•	Or i++ first
	•	Or reuse i in an intermediate form
	•	Or optimize in strange ways

❌ That’s called undefined behavior, and it can cause:
	•	wrong output
	•	compiler warnings/errors
	•	hard-to-debug crashes
Fix: break into steps

What should be used in for loop i++ or ++i ?
Anyone can be used.
++i; is known to be faster than i++;.
Reason:
i++; is same as i=i+1; here i+1 is evaluated and the result is
stored in a temporary variable and then assigned to i.
++i; here i+1 is not stored in a temporary variable, directly i is
increased by 1 
*/
