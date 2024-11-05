# 🚀 Day 61: Basic Recursion - Sum of First N Natural Numbers 🚀

This README provides an overview of the methods used to calculate the sum of the first `N` natural numbers using recursion. We explore two recursive techniques: the Parameterized Way and the Functional Way. This example illustrates fundamental recursion techniques in C++, highlighting their differences and use cases.

## Table of Contents
1. [Problem Statement](#problem-statement)
2. [Approach 1: Parameterized Way](#approach-1-parameterized-way)
3. [Approach 2: Functional Way](#approach-2-functional-way)
4. [Example Usage](#example-usage)
5. [Complexity Analysis](#complexity-analysis)
6. [Key Takeaways](#key-takeaways)
7. [Additional Resources](#additional-resources)

---

### Problem Statement
**Objective**: Compute the sum of the first `N` natural numbers using recursive methods without using loops.

For example, given `N = 5`, the expected output is:
```
1 + 2 + 3 + 4 + 5 = 15
```

---

## Approach 1: Parameterized Way

This approach leverages a parameter to accumulate the sum within each recursive call.

### Code Implementation

```cpp
void f(int i, int sum) {
    // Base condition: If i < 1, print the accumulated sum
    if (i < 1) {
        cout << sum;
        return;
    }
    // Recursive call with updated parameters
    f(i - 1, sum + i);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    f(n, 0);  // Initialize sum with 0
}
```

### Explanation
1. **Base Condition**: When `i` reaches 0, we stop the recursion and print the accumulated `sum`.
2. **Recursive Step**: Each call decrements `i` while adding it to `sum`, moving towards the base case.

---

## Approach 2: Functional Way

In this approach, each recursive call returns a value that is accumulated, without needing extra parameters.

### Code Implementation

```cpp
int f(int n) {
    // Base condition: If n is 0, return 0
    if (n == 0) return 0;
    
    // Recursive return: Add n to the result of f(n - 1)
    return n + f(n - 1);
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << f(n);  // Directly outputs the sum
}
```

### Explanation
1. **Base Condition**: Returns `0` when `n` reaches `0`.
2. **Recursive Return**: Adds `n` to `f(n - 1)` until reaching the base case, summing up all values.

---

## Example Usage

Input:
```
Enter n: 5
```

Output:
- **Parameterized Way**: 15
- **Functional Way**: 15

---

## Complexity Analysis
- **Time Complexity**: `O(N)` – Both methods make `N` recursive calls.
- **Space Complexity**: `O(N)` – Stack space is needed for each recursive call up to `n`.

---

## Key Takeaways
- **Parameterized Approach** is useful for carrying forward values like intermediate sums.
- **Functional Approach** simplifies code by returning values without additional parameters.
- Recursion offers cleaner code for repetitive summing or counting tasks.

---

## Additional Resources
- **Striver’s A2Z DSA Course/Sheet**: [Striver's A2Z DSA](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
  
For more recursion examples, visit the repository: [GitHub - Day61](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day61%20-%20Basic%20Recursion%20Problems%20-%20Sum%20of%20first%20n%20numbers/Sum_of_first_n_numbers.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
