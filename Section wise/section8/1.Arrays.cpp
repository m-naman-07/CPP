/*
🔹 1. What is an Array?
An array is a collection of elements of the same data type, stored contiguously in memory.
Each element is accessed by its index, starting from 0.

🔹 2. Array Declaration & Initialization
        int arr[5];       // Declares an array of 5 ints (default values are garbage)
        int arr2[5] = {1, 2, 3};    // Partial init → {1, 2, 3, 0, 0}
        int arr3[] = {1, 2, 3, 4};  // Compiler decides size → size = 4

🔹 3. Input/Output
        int n, arr[100];
        std::cin >> n;
    
        for(int i = 0; i < n; ++i)
            std::cin >> arr[i];

        for(int i = 0; i < n; ++i)
            std::cout << arr[i] << " ";

🔹 4. Array Bounds
❌ No bounds checking in C++:
        arr[1000] = 10;  // ❌ Undefined Behavior if size < 1000
✅ Always ensure size is sufficient and constant:
        const int N = 1e6 + 5;
        int arr[N];  // common in CP
    
🔹 5. Best Practices in CP
Practice                                        Reason
Use const int N = 1e5+5;                        Safer sizing
Initialize with 0 using memset or loops         Avoid garbage values
Prefer std::vector for dynamic sizing           Flexible and safe
Use fast I/O for large inputs                   ios::sync_with_stdio(false);
Always check bounds manually                    Avoid TLE/Segmentation Fault

🔹 6. Memory in Arrays
	•	int arr[5] stores 5 integers contiguously
	•	Access time: O(1)
	•	Works great with loops and pointer arithmetic
*/
