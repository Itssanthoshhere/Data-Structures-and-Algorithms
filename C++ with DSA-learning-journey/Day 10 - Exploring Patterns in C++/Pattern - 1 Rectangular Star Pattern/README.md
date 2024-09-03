# Exploring Pattern-1 Rectangular Star Pattern in C++ 🌟

Welcome to Day 10 of my C++ journey! Today, I began exploring pattern programming, starting with a Rectangular Star Pattern. This is part of a larger plan to implement and understand 22 different patterns, which will help sharpen my logic-building skills in C++.

## 📝 Overview

### Key Concepts:
- Introduction to pattern programming in C++.
- Using nested loops to create patterns.
- Understanding the basics of output formatting.

### Topics Covered:
- **Nested Loops**: Understanding how to use loops within loops to control the flow and structure of output.
- **Pattern Design**: Creating a square pattern of `*` characters.
- **Input/Output**: Reading input from the user to determine the size of the pattern and displaying the result.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 1" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern1(n);
}
```

## 📘 Explanation

- **Pattern Function (`pattern1`)**:
  - The function `pattern1(int n)` generates a square pattern of `n x n` using nested loops.
  - The outer loop controls the number of rows, while the inner loop prints `*` characters in each row.
  - The `cout << endl;` statement is used to move to the next line after each row is printed.

- **Main Function**:
  - The program starts by prompting the user to input a number `n`.
  - It then calls `pattern1(n)` to display a square pattern of `*` characters based on the input.

### 🚀 What I Learned:
- The importance of nested loops in pattern programming.
- How to create and manipulate simple patterns using loops.
- Basics of input handling in C++ and formatting output for better readability.

## 💡 Reflections

Today’s exploration into pattern programming was both challenging and rewarding. Starting with simple patterns like a square made of stars helps in building a strong foundation for more complex patterns. Understanding the control structures and how they interact with each other is crucial for mastering C++.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue my journey through pattern programming in C++! More complex patterns are up next, and I’m excited to share my progress.
