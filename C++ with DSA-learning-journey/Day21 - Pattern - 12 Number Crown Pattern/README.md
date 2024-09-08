# Exploring Pattern-12 Number Crown Pattern in C++ 🌟

Welcome to Day 21 of my C++ journey! Today, I tackled a fascinating pattern known as the Number Crown Pattern. This pattern involves creating a symmetric shape with numbers and spaces, resembling a crown. It’s part of my ongoing exploration into pattern programming to enhance my skills with nested loops and output formatting.

## 📝 Overview

### Key Concepts:
- Advanced pattern programming in C++.
- Utilizing nested loops to create complex patterns.
- Understanding and implementing spacing and number symmetry.

### Topics Covered:
- **Nested Loops**: Leveraging multiple loops to handle numbers and spaces for pattern generation.
- **Pattern Design**: Constructing a crown-like pattern with numbers and spaces.
- **Output Formatting**: Managing spaces and numbers to achieve symmetry.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

void pattern12(int n) {
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        
        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 12: Number Crown Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern12(n);
}
```

## 📘 Explanation

- **Pattern Function (pattern12)**:
  - The function `pattern12(int n)` generates the Number Crown pattern for a given number of rows.
  - The outer loop controls the rows of the pattern.
  - The first inner loop prints increasing numbers from 1 to the current row number.
  - The second inner loop prints spaces, which decrease by 2 for each subsequent row.
  - The third inner loop prints decreasing numbers from the current row number back to 1.
  - The `cout << endl;` statement moves to the next line after each row is printed.

- **Main Function**:
  - The program begins by prompting the user to input the number of rows `n`.
  - It then calls `pattern12(n)` to display the Number Crown pattern based on the input.

### 🚀 What I Learned:
- The complexity of combining numbers and spaces to create symmetrical patterns.
- The role of nested loops in achieving desired pattern effects.
- Effective output formatting to enhance pattern readability.

## 💡 Reflections

Today's exploration into the Number Crown Pattern was both engaging and enlightening. It deepened my understanding of how to manipulate nested loops and spaces to produce complex patterns. This exercise is a great example of how pattern programming can enhance problem-solving skills and mastery of C++ control structures.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more pattern programming challenges as I continue to push the boundaries of my C++ skills! 💪
