# Day 60: Basic Recursion - Print N to 1 Using Backtracking 🚀

## Overview
Today's challenge focuses on **Recursion** using a backtracking approach to print numbers from **N down to 1**. This exercise demonstrates how recursion, specifically **backtracking**, can be applied to reverse the order of outputs efficiently, making it a useful approach for solving certain types of **Data Structures and Algorithms (DSA)** problems.

---

## Problem Statement
**Print numbers from N to 1 using recursion.**

By making recursive calls until we reach the base condition, we print values in reverse order as the call stack unwinds, achieving a descending sequence from N to 1.

### Example:
- **Input**: N = 5
- **Output**: `5 4 3 2 1`

---

## Solution Approach

### Steps:
1. **Recursive Function**: Define a function `func(i, n)` that:
   - Recursively calls itself, incrementing `i` until it hits the base condition (`i > n`).
   - Prints the current value of `i` after returning from each recursive call, achieving the reverse order.

2. **Base Condition**: When `i` exceeds `n`, the function stops making recursive calls and begins unwinding.

3. **Backtracking**: The unwinding phase of recursion enables printing from N down to 1.

### Pseudocode
```cpp
void func(int i, int n) {
    if (i > n) return;
    func(i + 1, n);  // Recursive call to reach the base case
    cout << i << " "; // Printing as the call stack unwinds
}

int main() {
    int n;
    cin >> n;
    func(1, n);
}
```

### Explanation
1. **Base Case**: Stops recursion when `i` becomes greater than `n`.
2. **Recursive Call**: Calls `func(i + 1, n)` until reaching the base case.
3. **Printing**: Prints each value from N to 1 as the stack unwinds, creating the reversed sequence.

---

## Complexity Analysis
- **Time Complexity**: `O(N)` - The function is called recursively `N` times.
- **Space Complexity**: `O(N)` - Each call is stored on the stack until the base case is reached.

---

## Key Learnings
- **Backtracking in Recursion**: This exercise showcases the power of recursion for reversing sequences and solving ordering problems.
- **Stack Unwinding**: Understanding how values are printed during stack unwinding is crucial for mastering backtracking techniques in recursive algorithms.

---

## Full Solution
For the complete code and solution, check out my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day60%20-%20Basic%20Recursion%20Problems%20-%20Print%20N%20to%201%20using%20Backtracking/Print_N_to1_using_Backtracking.cpp).

---

## Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Continuing to build skills in recursion and backtracking as I advance in DSA! 💡

---

### Future Learning
Looking forward to exploring more challenging recursion and backtracking problems as part of this journey!
