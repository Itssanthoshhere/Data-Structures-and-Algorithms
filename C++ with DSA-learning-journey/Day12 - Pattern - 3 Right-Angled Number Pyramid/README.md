# Exploring Pattern-3 Right-Angled Number Pyramid in C++ 📐

Welcome to Day 12 of my C++ journey! Today, I focused on implementing a right-angled triangle pattern filled with increasing numbers. This is part of my ongoing effort to master pattern programming and strengthen my logic-building skills in C++.

## 📝 Overview

### Key Concepts:
- Understanding and applying nested loops for pattern generation.
- Implementing a right-angled triangle with sequential numbers.
- Enhancing problem-solving skills by working on pattern-based exercises.

### Topics Covered:
- **Nested Loops**: Utilizing loops within loops to generate complex patterns.
- **Pattern Design**: Creating a right-angled triangle pattern where each row contains numbers starting from 1 up to the row number.
- **Input/Output Handling**: Reading user input to determine the size of the pattern and displaying the result accordingly.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 3: Right-Angled Number Pyramid" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern3(n);
}
```

## 📘 Explanation

- **Pattern Function (`pattern3`)**:
  - The function `pattern3(int n)` generates a right-angled triangle pattern where each row contains a sequence of numbers starting from 1 up to the row number.
  - The outer loop runs `n` times, corresponding to the number of rows.
  - The inner loop runs from `1` to the current row number (`i`), printing numbers sequentially.
  - The `cout << endl;` statement ensures that each row is printed on a new line.

- **Main Function**:
  - The program prompts the user to input a number `n`, which represents the height of the triangle.
  - It then calls `pattern3(n)` to display the right-angled triangle pattern with increasing numbers based on the input.

### 🚀 What I Learned:
- How to effectively use nested loops to generate structured patterns.
- The importance of understanding loop control for creating different types of patterns.
- Basic concepts of input handling and output formatting in C++.

## 💡 Reflections

Today’s exercise was a great opportunity to deepen my understanding of nested loops and pattern creation. By implementing the right-angled number pyramid, I’ve gained a better grasp of how to control loops and manipulate output to achieve the desired pattern. This foundational skill will be crucial as I move on to more complex patterns and problems in C++.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue exploring more challenging patterns in C++. The journey is just getting started!
