#include <iostream>

int main(){

    int n{};
    int i{1};
    int factorcount{1};

    std::cout<<"Enter no.:"<<std::flush; 
/*
because we do not want the output to be taken in new line but we want to flush the output buffer.
🧠 What does “flushes the buffer” mean?
In C++, when you write to std::cout, it doesn’t immediately show up on the screen.
Instead, it goes into an output buffer — a temporary memory area.
🔄 “Flushing the buffer” means:
Forcing all the buffered output to be sent to the display (or terminal) immediately.
So yes:
✅ The output is flushed onto the display (screen).
*/
    std::cin>>n;

    while(i<=n){
        if (n%i==0)
        {
            std::cout<<"Factor "<<factorcount<<" ="<<i<<"\n";     
            ++factorcount;
        }
        ++i;
    }
    if(factorcount==2){
        std::cout<<n<<" is a Prime number.\n";
    }
    else{
        std::cout<<n<<" is not a Prime number.\n";
    }

}
