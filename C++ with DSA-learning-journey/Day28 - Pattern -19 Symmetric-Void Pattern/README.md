# Exploring Pattern-19: Symmetric-Void Pattern in C++ 🌟

Welcome to Day 28 of my C++ journey! Today, I delved into a more complex pattern programming challenge — the **Symmetric-Void Pattern**. This pattern involves symmetrical stars with a void in the center, providing a great exercise for practicing nested loops and output control.

## 📝 Overview

### Key Concepts:
- Advanced pattern programming using loops.
- Understanding symmetry and voids in patterns.
- Manipulating spaces and stars in a structured format using nested loops.

### Topics Covered:
- **Nested Loops**: Managing loops for upper and lower halves of the pattern.
- **Symmetry**: Creating a mirrored pattern of stars with spaces in the middle.
- **Pattern Design**: Building a symmetric void pattern with stars on both sides and spaces increasing and decreasing through rows.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern19(int n) {
    // Upper half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        for (int j = 0; j < 2 * (n - i - 1); j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern19(n);
    return 0;
}
```

## 📘 Explanation

- **Pattern Function (pattern19)**:
  - This function generates the symmetric void pattern using two nested loops for the upper and lower halves.
  - The outer loop controls the rows, and inner loops control the stars and spaces. In the upper half, the number of stars decreases while spaces increase, and in the lower half, it’s the reverse.
  
- **Main Function**:
  - The main function reads the user input (number of rows, `n`) and calls `pattern19(n)` to print the pattern.
  
### 🖥️ Output Example

**Input**: 5  
**Output**:
```
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
```

### 🚀 What I Learned:
- Mastery over nested loops for complex pattern programming.
- Handling symmetrical patterns with voids (spaces) in between.
- Enhanced understanding of manipulating both stars and spaces within a loop structure in C++.

## 💡 Reflections

Working on this symmetric-void pattern was both fun and challenging. It required meticulous control of loops and careful placement of spaces and stars. Such exercises significantly improve problem-solving skills and attention to detail in C++ programming.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Follow along as I continue my exploration into more intricate patterns and C++ concepts. Stay tuned for more updates!
