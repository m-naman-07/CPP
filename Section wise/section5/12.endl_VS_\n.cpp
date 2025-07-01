/*
🔄 \n vs std::endl — What’s the Difference?

✅ 1. \n → Just a newline character
        
        std::cout << "Hello\n";

    •	Simply inserts a newline.
	•	Fast and efficient.
	•	Doesn’t force any flushing of the output buffer.

⚠️ 2. std::endl → Newline plus flush

        std::cout << "Hello" << std::endl;

    •	Inserts a newline (\n)
	•	Then flushes the output buffer (forces immediate output)
	•	Slower than \n in loops or heavy output

🧠 What is “flushing”?
    Flushing means:
    “Immediately force all buffered output to be written to the terminal.”

    This is useful when:
	    •	You’re debugging
	    •	You want to see output instantly
	    •	You’re waiting for user input next

🚀 Performance Tip:
    ❌ Don’t do this in a tight loop:
        for (int i = 0; i < 1e6; ++i)
        std::cout << i << std::endl;  // Slow! Flushes every time
    ✅ Use this instead:
        for (int i = 0; i < 1e6; ++i)
        std::cout << i << '\n';  // Much faster

🔧 Recommendation:
	•	🔁 Use \n in loops or regular output
	•	🛠 Use std::endl if you need to flush immediately (e.g., before std::cin)



✅ std::endl vs \n in C++ — Summary

🔹 \n
	•	Adds a newline character to the output
	•	Does not flush the output buffer
	•	Faster, especially in loops
	•	✅ Use when you just want a new line

🔹 std::endl
	•	Adds a newline character
	•	Also flushes the output buffer immediately
	•	❌ Slower (especially inside loops)
	•	✅ Use when:
	•	You need to force output to appear immediately
	•	e.g., before std::cin
	•	or during debugging



You’re outputting a final message like:
		if(factorcount == 2) {
    		std::cout << n << " is a Prime number.";
		}
		else {
   	 		std::cout << n << " is not a Prime number.";
		}

Now the question is:

Should you use \n or std::endl at the end?

✅ Recommended: Use \n
		std::cout << n << " is a Prime number.\n";

🔎 Why?
	•	You are not taking input right after this.
	•	You don’t need to force-flush the buffer.
	•	\n is faster and better for such output.

⸻

🔁 Only use std::endl if:
	•	You want the output to immediately appear before cin, or
	•	You’re debugging and want to ensure everything prints before a crash or freeze


	 std::cout<<"Enter no.:"<<std::flush; 
because we do not want the output to be taken in new line but we want to flush the output buffer.
🧠 What does “flushes the buffer” mean?
In C++, when you write to std::cout, it doesn’t immediately show up on the screen.
Instead, it goes into an output buffer — a temporary memory area.
🔄 “Flushing the buffer” means:
Forcing all the buffered output to be sent to the display (or terminal) immediately.
So yes:
✅ The output is flushed onto the display (screen).

*/
