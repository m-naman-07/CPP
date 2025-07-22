#include <iostream>

int main(){
    int n{};
    std::cout<<"Enter n:";
    std::cin>>n;

    for(int i{0};i<=n;++i) 
    //inside initialization is optional meanining u can initialize at the start of the program to
    {
        std::cout<<"i "<<i<<std::endl;  
        //can write ++i here too
        //it means if u initialize the variable at start of main and u write ++i here your for loop may look like         for( ;i<=n; )
    }
   
    return 0;
}

/*
🔧 Syntax of a for loop:
    for (initialization; condition; update) {
        // body
    }

Only three parts are officially allowed in the parentheses of a for loop:
-Initialization
-Condition
-Update

Each of those parts can have multiple statements, but they must be separated by commas (,), not semicolons (;).

❌ Your Code (Incorrect):
    for(int i=0;j=len-1;i<len;i++;j--) // ❌ Invalid

This is wrong because you're trying to pass 5 statements separated by semicolons, which break the 3-part rule.

j=len-1 is not initialization here, and i<len is the condition, but you still have two updates separated by ;, which is not valid.

✅ Correct Way:
You can combine multiple initializations or updates using commas ,:
    for(int i = 0, j = len - 1; i < len; i++, j--) {
        rev[i] = str[j];
    }

int i = 0, j = len - 1 → Both variables initialized in the initialization section.
i < len → A single condition.
i++, j-- → Both updates in the update section, separated by ,.
*/




