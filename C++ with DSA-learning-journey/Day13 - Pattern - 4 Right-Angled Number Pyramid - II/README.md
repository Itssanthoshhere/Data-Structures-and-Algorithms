# Exploring Pattern-4 Right-Angled Number Pyramid - II in C++ 🌟

Welcome to Day 13 of my C++ journey! Today, I delved into pattern programming by implementing the **Right-Angled Number Pyramid - II**. This is the fourth pattern in my series of 22 patterns, aimed at enhancing my understanding of nested loops and their application in generating different designs.

## 📝 Overview

### Key Concepts:
- Deepening understanding of pattern programming in C++.
- Mastering the use of nested loops for generating patterns.
- Exploring the relationship between loop indices and output values.

### Topics Covered:
- **Nested Loops**: Leveraging nested loops to control the structure and flow of the pattern.
- **Pattern Design**: Creating a right-angled triangle where each row contains the row number repeated.
- **Input/Output**: Handling user input to determine the number of rows in the pyramid.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 4: Right-Angled Number Pyramid - II" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern4(n);
}
```

## 📘 Explanation

- **Pattern Function (`pattern4`)**:
  - The function `pattern4(int n)` generates a right-angled number pyramid where the number `i` is printed `i` times in the `i-th` row.
  - The outer loop iterates from 1 to `n`, determining the number of rows.
  - The inner loop runs `i` times for each row, printing the row number `i` in each iteration.
  - `cout << endl;` ensures each row is printed on a new line.

- **Main Function**:
  - The program starts by asking the user to input a number `n`, representing the number of rows in the pyramid.
  - It then calls `pattern4(n)` to print the desired number pyramid.

### 🚀 What I Learned:
- The importance of nested loops in constructing various patterns.
- How to design patterns with numbers, reinforcing loop control in C++.
- Efficient input handling and output formatting to create visually clear patterns.

## 💡 Reflections

Today's exercise in pattern programming was particularly insightful as I explored how loops can be used creatively to generate number-based patterns. Understanding how the outer and inner loops interact is key to mastering pattern programming. These skills will serve as a solid foundation as I progress to more complex patterns in the days ahead.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the fascinating world of pattern programming in C++. The journey continues with more challenging patterns up next!
