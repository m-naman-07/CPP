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


*/
