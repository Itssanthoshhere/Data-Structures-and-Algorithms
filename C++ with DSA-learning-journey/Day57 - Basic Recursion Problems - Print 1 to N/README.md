# 🚀 Day 57: Basic Recursion - Print 1 to N Using Recursion 🚀

This folder contains code and notes for Day 57 of my Data Structures and Algorithms (DSA) journey, where I explored the basics of recursion by implementing a function to print numbers from 1 to N without using loops.

## 📝 Problem Statement

The goal is to print numbers from 1 to N using a recursive function rather than loops, which helps in understanding how recursion can simplify certain tasks by breaking them into smaller sub-problems.

### Example:
- **Input**: `N = 5`
- **Output**: `1 2 3 4 5`

## 💻 Solution Overview

### Approach:
The function uses a recursive call to print numbers incrementally until it reaches the base case where `i > n`.

### Pseudocode:
```cpp
void f(int i, int n) {
    // Base condition
    if (i > n) {
        return;
    }
    cout << i << " ";
    f(i + 1, n); // Recursive call
}

int main() {
    int n;
    cin >> n;
    f(1, n); // Starting recursion from 1 to N
}
```

### Explanation
1. **Base Case**: If `i` exceeds `n`, the function stops, preventing an infinite loop.
2. **Recursive Call**: Prints the current `i`, then calls the function with `i + 1`, moving closer to the base case.

## 📈 Complexity Analysis
- **Time Complexity**: `O(N)` - Each number up to `N` is printed once.
- **Space Complexity**: `O(N)` - Recursive calls add to the stack until the base case is met.

## 🔗 Practice Problem and Resources
- **GeeksforGeeks Problem**: [Print 1 to N Without Loops](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1)
- **Striver's A2Z DSA Course**: [Striver's A2Z Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 📂 File Structure

- `main.cpp`: Contains the code for the `f` function that implements the recursive solution.
- `notes.md`: Explanation of recursion, base cases, and key takeaways.
- `practice_problems.txt`: Links to similar problems for additional practice.

## 🧩 Key Takeaways
- Recursion is a useful tool when breaking down problems into smaller parts.
- Establishing a **base case** is crucial to prevent infinite recursion and stack overflow.
- Recursion is especially useful in scenarios where loops are restricted or harder to manage.

## 🌟 Solution on GitHub

Check out my complete solution on GitHub: [Day 57 - Basic Recursion Problems](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day57%20-%20Basic%20Recursion%20Problems%20-%20Print%201%20to%20N)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I dive deeper into recursive problem-solving and more advanced concepts in C++!
