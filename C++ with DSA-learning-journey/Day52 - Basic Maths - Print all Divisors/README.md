# Basic Maths - Print All Divisors of a Number in C++ 🚀

Welcome to Day 52 of my C++ learning journey! Today, I delved into the world of number theory and explored how to find and print all divisors of a given integer. This concept is fundamental in many algorithms and mathematical computations.

## 📝 Overview

### Key Concepts:
- Introduction to divisors in number theory.
- Efficiently finding divisors using a loop-based approach.
- Basics of optimizing the solution for larger numbers.

### Topics Covered:
- **Divisors**: Understanding what divisors are and how to find them for any integer.
- **Efficient Computation**: Implementing a simple solution with time complexity O(n), while discussing potential optimization to O(√n).
- **Input/Output**: Taking user input and printing all divisors of a given number.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void findDivisors(int n) {
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    findDivisors(n);
    return 0;
}
```

## 📘 Explanation

- **findDivisors Function**:
  - The function `findDivisors(int n)` iterates through all integers from 1 to n and checks if they are divisors of n.
  - It uses the modulus operator `%` to check if `n % i == 0`. If true, it means `i` is a divisor of `n`.
  - All divisors are printed in a single line.

- **Main Function**:
  - The user is prompted to input an integer `n`.
  - The `findDivisors` function is called to find and print all the divisors of `n`.

### 🚀 What I Learned:
- Divisors play an essential role in number theory and programming challenges.
- This simple method of finding divisors has a time complexity of O(n), but for larger numbers, it can be optimized to O(√n) by checking up to the square root of n.
- Handling user input and formatting the output cleanly in C++ is key to improving the user experience in console applications.

## 💡 Reflections

Today's exploration into divisors was insightful and introduced me to fundamental number theory concepts. Implementing the code to print all divisors helped reinforce the logic behind loops and conditional statements in C++. Understanding divisors opens doors to more advanced topics like prime factorization and mathematical optimization in algorithms.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more mathematical concepts and algorithms as I continue my learning journey in C++!
