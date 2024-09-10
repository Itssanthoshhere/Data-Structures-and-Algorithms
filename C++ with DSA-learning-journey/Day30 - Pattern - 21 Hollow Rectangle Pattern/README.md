# Exploring Pattern-21: Hollow Rectangle Star Pattern in C++ 🌟

Welcome to Day 30 of my C++ journey! Today, I explored one of the foundational problems in pattern programming: the **Hollow Rectangle Star Pattern**. This problem is part of my ongoing effort to understand and implement a variety of star patterns using loops in C++, helping me to improve my logical thinking and coding efficiency.

## 📝 Overview

### Key Concepts:
- Working with nested loops to control the printing of rows and columns.
- Identifying conditions to print stars `*` at the borders, while keeping the interior hollow.
- Managing the structure and format of the output based on specific conditions.

### Topics Covered:
- **Nested Loops**: Using outer and inner loops to control row and column iteration.
- **Conditional Logic**: Implementing `if` conditions to print stars along the borders.
- **Pattern Design**: Generating a hollow rectangle pattern of stars.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern21(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' on the borders of the rectangle
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 21: Hollow Rectangle" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern21(n);
}
```

## 📘 Explanation

- **Pattern Function (pattern21)**:
  - The function `pattern21(int n)` generates a hollow rectangle pattern of size `n x n` using nested loops.
  - The outer loop handles the number of rows, and the inner loop controls the columns.
  - Stars `*` are printed along the edges (when `i == 0`, `i == n-1`, `j == 0`, or `j == n-1`). Elsewhere, a space ` ` is printed to form the hollow center.

- **Main Function**:
  - The program begins by asking the user for an input `n`, which represents the size of the pattern.
  - It then calls the `pattern21(n)` function to print the hollow rectangle based on the input.

### 🚀 What I Learned:
- How to utilize conditional statements within nested loops to control specific print positions.
- The power of nested loops in creating different patterns and designs.
- Improved understanding of how to format output effectively in C++ for visual patterns.

## 💡 Reflections

Working on the Hollow Rectangle Star Pattern helped me deepen my understanding of nested loops and conditional logic. Patterns like these provide great practice for manipulating loops and controlling flow in C++. As I continue my pattern programming journey, I’m excited to tackle more complex designs and apply my learning to other problems.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more pattern programming exercises in C++! Next, I’ll be diving into even more challenging designs as part of my learning journey.
