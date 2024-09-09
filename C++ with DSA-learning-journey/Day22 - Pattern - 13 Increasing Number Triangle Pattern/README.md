# Exploring Pattern-13 Increasing Number Triangle in C++ 🌟

Welcome to Day 22 of my C++ journey! Today, I explored an interesting pattern called the Increasing Number Triangle. This pattern helps sharpen my skills in using nested loops and managing incrementing numbers efficiently. It's a continuation of my journey through pattern programming to enhance my logic-building abilities.

## 📝 Overview

### Key Concepts:
- Building triangular patterns in C++.
- Using nested loops to control the flow of rows and columns.
- Managing and incrementing values in each row dynamically.

### Topics Covered:
- **Nested Loops**: Understanding how to use loops within loops to generate number-based patterns.
- **Pattern Design**: Creating a triangular arrangement of increasing numbers.
- **Incrementing Values**: Keeping track of numbers as they increase across rows.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

void pattern13(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    pattern13(n);
    return 0;
}
```

## 📘 Explanation

- **Pattern Function (pattern13)**:
  - The function `pattern13(int n)` generates a triangular pattern with increasing numbers.
  - The outer loop controls the number of rows, starting from 1.
  - The inner loop handles the printing of numbers within each row. The variable `num` keeps track of the current number, which increases with each iteration.

- **Main Function**:
  - The program begins by asking the user for input to determine the number of rows.
  - It then calls `pattern13(n)` to display the triangular pattern with increasing numbers based on the input.

### 🖥️ Example Output:

**Input:**  
```
4
```

**Output:**
```
1  
2 3  
4 5 6  
7 8 9 10
```

### 🚀 What I Learned:
- How to handle number increments in nested loops.
- The importance of managing counters and variables across rows.
- Better understanding of constructing triangular patterns with increasing sequences.

## 💡 Reflections

Working on this pattern has been a valuable exercise in loop control and incrementing variables. Creating triangular patterns helps strengthen the foundation for more advanced logic-building in C++. Each new pattern offers its own unique challenges and insights, making the process both engaging and rewarding.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore more complex patterns in C++ and refine my skills through hands-on practice!
