# Exploring Pattern-20 Symmetric Butterfly Pattern in C++ 🦋

Welcome to Day 29 of my C++ learning journey! Today, I explored a visually captivating pattern known as the **Symmetric Butterfly Pattern**. This exercise is part of my deep dive into pattern programming, where I aim to enhance my understanding of nested loops, symmetry, and space manipulation for creating dynamic outputs in C++.

## 📝 Overview

### Key Concepts:
- Symmetry and space manipulation in pattern generation.
- Usage of nested loops to form both sides of a symmetric pattern.
- Understanding row-wise control for decreasing and increasing stars.

### Topics Covered:
- **Symmetry**: Achieving perfect balance between left and right sides of the pattern using stars (`*`) and spaces.
- **Nested Loops**: Using multiple loops to print stars and spaces, controlling the structure of each row.
- **Pattern Design**: Creating a symmetric butterfly using stars, enhancing logical thinking.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

void pattern20(int n) {
    // Upper part of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the butterfly
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    cout << "Symmetric Butterfly Pattern\n";
    int n;
    cin >> n;
    pattern20(n);
    return 0;
}
```

## 📘 Explanation

- **Pattern Function (pattern20)**:
  - The function `pattern20(int n)` generates a symmetric butterfly pattern using nested loops.
  - The first set of loops handles the upper half of the butterfly, printing stars followed by spaces and stars again to create symmetry.
  - The second set of loops handles the lower half, working in reverse to complete the butterfly shape.

- **Main Function**:
  - The user is prompted to enter an integer `n`, which determines the size of the butterfly pattern.
  - The `pattern20(n)` function is called to print the pattern with `n` rows in the upper and lower sections.

### 🚀 What I Learned:
- How symmetry plays a crucial role in visual pattern generation.
- Manipulating spaces and stars in a controlled manner using nested loops.
- Combining increasing and decreasing sequences in a single pattern to create a symmetric output.

## 💡 Reflections

Exploring the Symmetric Butterfly Pattern challenged my understanding of space manipulation and symmetry in pattern programming. This exercise deepened my knowledge of how loops interact to create complex structures. I’m excited to dive into even more intricate patterns in the coming days, such as number-based and character-based designs.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

I’m continually pushing my boundaries, and pattern programming has been a rewarding way to strengthen my problem-solving skills in C++. Stay tuned for more exciting patterns and insights as I continue my coding journey!
