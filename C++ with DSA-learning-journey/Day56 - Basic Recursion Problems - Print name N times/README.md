# Day 56: Basic Recursion - Print a Name N Times

Welcome to Day 56 of my DSA learning journey with C++! Today, I explored a foundational concept in recursion, practicing how to print a name "N" times without using loops. This README provides a breakdown of the challenge, code, and key insights about recursion.

## 🚀 Problem Statement
Given an integer `N`, print a specified name `N` times using recursion. This challenge serves as an introduction to recursion and shows how recursive functions can replace loops for repetitive tasks.

## 🖥️ Solution Code
Here's the C++ code implementing the solution:

```cpp
#include <iostream>
using namespace std;

void printName(int i, int n) {
    // Base condition
    if (i > n) {
        return;
    }
    cout << "Santhosh" << endl;
    printName(i + 1, n); // Recursive call
}

int main() {
    int n;
    cout << "Enter the number of times to print the name: ";
    cin >> n;
    printName(1, n); // Start recursion from 1 to N
    return 0;
}
```

## 📝 Explanation
1. **Base Case**: The recursion stops when `i` exceeds `n`, preventing an infinite recursive loop.
2. **Print Step**: Outputs the name "Santhosh" for each recursive call.
3. **Recursive Step**: Calls `printName(i + 1, n)`, incrementing `i` by 1 until reaching the base case.

## 🔄 Complexity Analysis
- **Time Complexity**: `O(N)` — We make `N` recursive calls.
- **Space Complexity**: `O(N)` — Each call uses stack space until reaching the base case.

## 📊 Example Output
**Input**: `N = 5`  
**Output**:  
```
Santhosh
Santhosh
Santhosh
Santhosh
Santhosh
```

## ⚙️ Additional Practice Problem
I also tackled a similar problem on [GeeksforGeeks](https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times) which involves printing "GFG" `N` times.

```cpp
void printGfg(int N) {
    if (N <= 0) return;
    cout << "GFG ";
    printGfg(N - 1);
}
```

## 🌟 Key Takeaways
- **Recursion** provides an alternative to loops by breaking down tasks into simpler repetitive calls.
- **Base Case** in recursion is crucial to avoid infinite calls and stack overflow.
- **Stack Frames**: Each recursive call adds a new frame to the stack, making it essential to manage memory and performance carefully.

## 🔗 Resources
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [GeeksforGeeks - Print "GFG" N Times](https://www.geeksforgeeks.org/problems/print-gfg-n-times/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-gfg-n-times)

## 💻 Full Solution and Code
Check out the full solution and other DSA recursion problems in my GitHub repository:
[GitHub - Itssanthoshhere/Data-Structures-and-Algorithms](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day56%20-%20Basic%20Recursion%20Problems%20-%20Print%20name%20N%20times/Print_name_N_times.cpp)

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I dive deeper into recursive problem-solving and more advanced concepts in C++!

