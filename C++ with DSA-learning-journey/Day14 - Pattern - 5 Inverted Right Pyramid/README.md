# Exploring Pattern-5: Inverted Right Pyramid in C++ 🌟

Welcome to Day 14 of my C++ journey! Today, I delved into pattern programming with a focus on creating an Inverted Right Pyramid using stars (`*`). This pattern is part of my ongoing challenge to implement and understand various patterns to enhance my logic-building skills in C++.

## 📝 Overview

### Key Concepts:
- Understanding the relationship between rows and the number of stars.
- Utilizing nested loops to create patterns with decreasing elements.
- Implementing control structures effectively in C++.

### Topics Covered:
- **Nested Loops**: Using loops within loops to control the decreasing number of stars in each row.
- **Pattern Design**: Creating an inverted right-angled triangle pattern.
- **Input/Output**: Taking input from the user to determine the size of the pattern and displaying the result.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern5(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 5: Inverted Right Pyramid" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern5(n);
}
```

## 📘 Explanation

- **Pattern Function (`pattern5`)**:
  - The function `pattern5(int n)` generates an inverted right-angled pyramid pattern of stars.
  - The outer loop runs `n` times, representing the rows.
  - The inner loop prints stars, starting with `n` stars in the first row, and decreasing by one star in each subsequent row.
  - The `cout << endl;` statement ensures each row is printed on a new line.

- **Main Function**:
  - The program prompts the user to input a number `n`.
  - It then calls `pattern5(n)` to display the inverted right pyramid based on the input.

### 🚀 What I Learned:
- How to control the flow of loops to create patterns with decreasing elements.
- The importance of understanding the interaction between nested loops and how they impact the structure of the output.
- Techniques for creating inverted shapes and managing output formatting in C++.

## 💡 Reflections

Today's pattern programming challenge was a great way to further explore the intricacies of loop control in C++. Creating an inverted right-angled pyramid pattern required careful consideration of how the loops interact, and it was a rewarding experience to see the pattern take shape. As I progress, I’m excited to tackle more complex patterns that combine both numbers and characters.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue my journey through pattern programming in C++! More intricate and challenging patterns are on the way.
