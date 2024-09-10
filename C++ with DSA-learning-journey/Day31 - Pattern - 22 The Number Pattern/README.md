# Exploring Pattern-22: The Number Pattern in C++ 🌟

Welcome to Day 31 of my C++ pattern programming journey! Today, I explored an exciting numeric pattern that builds a matrix based on the distance of each element from the edges. This pattern, known as the "Number Pattern," is part of my continued efforts to sharpen my logic-building skills in C++ through 22 different pattern exercises.

## 📝 Overview

### Key Concepts:
- Advanced numeric pattern generation using matrix manipulation.
- Understanding distance from edges in a matrix.
- Nested loops and conditional logic to calculate values.

### Topics Covered:
- **Nested Loops**: Utilizing nested loops to generate matrix patterns.
- **Matrix Manipulation**: Calculating each cell’s value based on its distance from the matrix borders.
- **Distance Calculation**: Using the minimum distance from a cell to the matrix’s edges to determine its value.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern22(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    } 
}

int main() {
    cout << "Pattern - 22: The Number Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern22(n);
}
```

## 📘 Explanation

- **Pattern Function (pattern22)**:
  - The function `pattern22(int n)` prints a matrix where each element is determined by the minimum distance to the nearest matrix edge.
  - The value for each cell is calculated by subtracting the minimum distance of the cell from the top, left, bottom, or right edge from \( n \).
  - The outer loop controls the rows, and the inner loop calculates the values and prints each row.

- **Main Function**:
  - The program starts by prompting the user to input a number \( n \).
  - It then calls `pattern22(n)` to generate and display the number matrix pattern based on the input size.

### 🚀 What I Learned:
- How to calculate matrix cell values based on their position and distance from edges.
- The importance of nested loops in generating matrix patterns.
- Using the `min()` function to determine the shortest distance from multiple edges in a grid.

## 💡 Reflections

Today's pattern, though a bit more challenging than the earlier ones, gave me deeper insight into working with matrices and manipulating values based on position. The logic of calculating the distance to the nearest edge was especially rewarding to implement, as it involves thinking in multiple dimensions and practicing logical problem-solving.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

I’m excited to continue learning and sharing more complex patterns in C++. Stay tuned for more updates and insights from my coding journey!
