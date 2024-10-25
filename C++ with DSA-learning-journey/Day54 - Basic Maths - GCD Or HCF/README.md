# Finding the GCD of Two Integers in C++ 🔢

Welcome to Day 54 of my C++ journey! Today, I explored an essential mathematical concept in programming—calculating the 𝗚𝗖𝗗 (Greatest Common Divisor) of two integers. This concept has applications in cryptography, data structure algorithms, and more, making it a fundamental skill in programming.

## 📝 Overview

### Key Concepts:
- Basics of GCD and its applications in programming.
- Using a loop-based approach to find the GCD.
- Understanding control structures to simplify code for better efficiency.

### Topics Covered:
- **Loop-based GCD Calculation**: Iteratively finding the largest common divisor of two numbers.
- **Modular Arithmetic**: Leveraging modular checks to determine divisibility.
- **Conditionals in C++**: Implementing simple conditionals to verify divisibility and update the GCD value.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int findGCD(int a, int b) {
    int gcd = 1;
    for (int i = 1; i <= min(a, b); i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << findGCD(num1, num2) << endl;
    return 0;
}
```

## 📘 Explanation

- **GCD Function (findGCD)**:
  - The `findGCD(int a, int b)` function iterates from `1` to the smaller of `a` or `b`.
  - During each iteration, it checks if both numbers are divisible by the current value of `i`.
  - If divisible, `gcd` is updated to the current `i` value.
  - The final `gcd` variable contains the greatest divisor common to both numbers.

- **Main Function**:
  - Prompts the user to input two integers.
  - Calls `findGCD(num1, num2)` and displays the GCD.

### 🚀 What I Learned
- How loops and conditional statements are powerful tools for mathematical operations.
- The significance of GCD in applications like simplifying fractions, cryptography, and algorithm optimizations.
- Practice with modular arithmetic and logical operations in C++.

## 💡 Reflections

Today’s exercise provided valuable insights into applying basic mathematical concepts to programming. Calculating GCD reinforces the power of loops and conditionals, and is foundational in many algorithms. Understanding how to efficiently find the GCD enhances my problem-solving skills in C++.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more as I continue exploring C++ through mathematical and algorithmic challenges!
