# Day 65: Basic Recursion - Factorial of N

Welcome to Day 65 of my DSA learning journey with C++! Today, I focused on understanding a fundamental concept in recursion by calculating the factorial of a number. This README provides a breakdown of the challenge, solution, and key insights about recursion.

## 🚀 Problem Statement
The goal is to compute the factorial of a non-negative integer `N` using recursion. The factorial of `N`, denoted as `N!`, is the product of all positive integers less than or equal to `N`. This is a classic example of how recursion can simplify solving problems by breaking them down into smaller subproblems.

## 🖥️ Solution Code
Here's the C++ code implementing the solution:

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive call
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
```

## 📝 Explanation
1. **Base Case**: The recursion stops when `n` equals 0, returning 1, as `0! = 1`.
2. **Recursive Step**: For any number greater than 0, the function multiplies `n` by the result of `factorial(n - 1)`, gradually reducing the problem until it reaches the base case.
3. **Output**: The result is printed as the factorial of the input number.

## 🔄 Complexity Analysis
- **Time Complexity**: `O(N)` — The recursion makes `N` calls to calculate the factorial.
- **Space Complexity**: `O(N)` — Each recursive call adds a new frame to the stack, which takes up memory until the base case is reached.

## 📊 Example Output
**Input**: `n = 5`  
**Output**:  
```
Factorial of 5 is: 120
```

**Input**: `n = 0`  
**Output**:  
```
Factorial of 0 is: 1
```

## ⚙️ Additional Practice Problem
I also worked on a similar problem related to factorials on [GeeksforGeeks](https://www.geeksforgeeks.org/factorial-of-a-number-using-recursion/) which reinforces the use of recursion in mathematical problems.

## 🌟 Key Takeaways
- **Base Case**: Every recursive function needs a base case to stop the recursion. Without it, the function would call itself infinitely, leading to a stack overflow.
- **Recursion for Simplification**: Recursion can make problems like factorials more intuitive and elegant, mirroring the mathematical definition.
- **Memory Usage**: Recursive functions use stack memory, which is essential to manage carefully, especially for large inputs.

## 🔗 Resources
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [GeeksforGeeks - Factorial using Recursion](https://www.geeksforgeeks.org/factorial-of-a-number-using-recursion/)

## 💻 Full Solution and Code
Check out the full solution and other DSA recursion problems in my GitHub repository:
[GitHub - Itssanthoshhere/Data-Structures-and-Algorithms](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day65%20-%20Basic%20Recursion%20Problems%20-%20Factorial%20of%20N/factorial_of_n.cpp)

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore recursion and other important concepts in C++!
