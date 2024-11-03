# Day 59: Basic Recursion - Print 1 to N Using Backtracking 🚀

## Overview
Today, we dive into the world of **Recursion** with a specific focus on **Backtracking**. The goal is to print numbers from 1 to N using a recursive approach that leverages the concept of backtracking.

This exercise illustrates how we can use recursion and the call stack to achieve ordered outputs without the use of traditional loops. Understanding how recursion unfolds and backtracks is essential for solving complex problems in **Data Structures and Algorithms (DSA)**.

---

## Problem Statement
**Print numbers from 1 to N using backtracking.**

The recursive function makes calls until it reaches the base condition. Upon returning, the function prints the values, creating a sequence from 1 up to N.

### Example:
- **Input**: N = 5
- **Output**: `1 2 3 4 5`

---

## Solution Approach

### Steps:
1. **Recursive Function**: We define a function `f(i, n)` that:
   - Calls itself with `i - 1` until it reaches the base case.
   - Prints `i` as the call stack unwinds, ensuring an ascending order.
   
2. **Base Condition**: When `i` becomes less than 1, we stop further recursive calls.

3. **Backtracking**: By printing `i` after all recursive calls, we achieve a bottom-up effect.

### Pseudocode
```cpp
void f(int i, int n) {
    if (i < 1) return;
    f(i - 1, n);
    cout << i << " ";
}

int main() {
    int n;
    cin >> n;
    f(n, n);
}
```

### Explanation
1. **Base Case**: `i < 1` stops recursion, returning control to the previous function call.
2. **Recursive Call**: Calls `f(i - 1, n)` until reaching the base case.
3. **Print Statement**: Values are printed from 1 to N as the stack unwinds, creating the required sequence.

---

## Complexity Analysis
- **Time Complexity**: `O(N)` - Each recursive call processes once for `N` iterations.
- **Space Complexity**: `O(N)` - Each recursive call is stored on the call stack until the base condition is met.

---

## Key Learnings
- **Backtracking with Recursion**: Recursion can be used to handle sequence ordering, and backtracking is an efficient technique for controlling order when returning from recursive calls.
- **Understanding Stack Unwinding**: This approach builds on understanding how the call stack unwinds, which is crucial in more complex algorithms, especially in pathfinding and branching problems.

---

## Full Solution
You can find the complete code and solution for this problem on my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day59%20-%20Basic%20Recursion%20Problems%20-%20Print%201%20to%20N%20using%20Backtracking/Print_1_to_N_using_Backtracking.cpp).

---

## Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Excited to dive into more recursion challenges and continue advancing through DSA! 🌱

---

### Future Learning
Stay tuned for more challenging recursion problems and DSA concepts as I progress further in this coding journey!
