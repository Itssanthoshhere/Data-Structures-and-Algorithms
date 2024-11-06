# Practised a Basic Recursion - Fibonacci Number

This repository contains the solution to the Fibonacci Number problem, implemented recursively in C++. This classic recursion problem is a fundamental example to understand recursion and to practice breaking down a problem into smaller sub-problems.

## Problem Statement

The goal is to calculate the nth Fibonacci number, where:
- **F(0) = 0**, **F(1) = 1**
- For any integer **n > 1**, **F(n) = F(n - 1) + F(n - 2)**

This recursive approach demonstrates the elegance of recursion but also highlights its inefficiency due to overlapping sub-problems, making it an excellent candidate for optimization.

## Approach

### Recursive Solution
The recursive function for calculating the nth Fibonacci number follows these steps:

1. **Base Cases**: If `n` is `0` or `1`, return `n` as it corresponds directly to the Fibonacci sequence definition.
2. **Recursive Calls**: For `n > 1`, the function recursively calls itself to calculate `F(n - 1)` and `F(n - 2)` and then adds these results to get `F(n)`.

### Code
```cpp
class Solution {
public:
    int fib(int n) {
        // Base case: return n if 0 or 1
        if (n <= 1) {
            return n;
        }

        // Recursive calls
        int last = fib(n - 1);
        int slast = fib(n - 2);

        // Sum of last two Fibonacci numbers
        return last + slast;
    }
};
```

### Example
For **input** `n = 4`:
- **Output**: `3`
- Explanation: The sequence up to F(4) is `0, 1, 1, 2, 3`.

## Complexity Analysis

- **Time Complexity**: `O(2^n)` due to overlapping sub-problems in recursive calls.
- **Space Complexity**: `O(n)`, which accounts for the recursion stack depth.

To optimize this solution, consider using **Memoization** or an **Iterative Approach** to reduce the time complexity to `O(n)`.

## Resources

- [LeetCode Problem Link](https://leetcode.com/problems/fibonacci-number/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
