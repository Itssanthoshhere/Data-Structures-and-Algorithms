# Day 64 - Basic Recursion Problems - Fibonacci Number

🚀 **Day 64: Fibonacci Number using Recursion**

## Problem Statement

The Fibonacci numbers are defined as a sequence, where each number is the sum of the two preceding ones, starting from 0 and 1. Formally, the sequence follows:

- `F(0) = 0`
- `F(1) = 1`
- `F(n) = F(n - 1) + F(n - 2)` for `n > 1`

Given an integer `n`, calculate the `n`th Fibonacci number.

## Examples

### Example 1
Input: `n = 2`  
Output: `1`  
Explanation: `F(2) = F(1) + F(0) = 1 + 0 = 1`

### Example 2
Input: `n = 3`  
Output: `2`  
Explanation: `F(3) = F(2) + F(1) = 1 + 1 = 2`

### Example 3
Input: `n = 4`  
Output: `3`  
Explanation: `F(4) = F(3) + F(2) = 2 + 1 = 3`

## Solution Approach

This solution leverages **recursion** to calculate the `n`th Fibonacci number:
1. **Base Cases**: If `n` is `0` or `1`, return `n` directly as the sequence defines `F(0) = 0` and `F(1) = 1`.
2. **Recursive Case**: For `n > 1`, recursively compute `F(n - 1)` and `F(n - 2)` and return their sum.

### Code

```cpp
#include <iostream>

class Solution {
public:
    int fib(int n) {
        if (n <= 1) {
            return n;
        }
        return fib(n - 1) + fib(n - 2);
    }
};

int main() {
    Solution sol;
    int n;
    std::cout << "Enter the term n: ";
    std::cin >> n;
    std::cout << "Fibonacci number F(" << n << ") is: " << sol.fib(n) << std::endl;
    return 0;
}
```

### Explanation
- **Base Case**: If `n` is `0` or `1`, return `n`.
- **Recursive Step**: Compute `fib(n - 1)` and `fib(n - 2)` and return their sum.

## Complexity Analysis

- **Time Complexity**: `O(2^n)`. This approach has an exponential time complexity due to repeated calculations of the same subproblems.
- **Space Complexity**: `O(n)` for the recursion stack depth.

### Optimization
To improve efficiency, consider **memoization** (storing previously calculated results) or an **iterative approach** to reduce time complexity to `O(n)`.

## Key Takeaways
- Recursive solutions are often elegant and straightforward, but they can be inefficient for problems with overlapping subproblems.
- This problem can be solved more efficiently using memoization or an iterative approach, reducing the time complexity.

---

## Additional Resources

- [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## My Solution Repository

Visit my GitHub repository for the full solution and additional recursion problems: [GitHub - Fibonacci Number Solution](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day64%20-%20Basic%20Recursion%20Problems%20-%20Fibonacci%20Number/Fibonacci_Numbers.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
