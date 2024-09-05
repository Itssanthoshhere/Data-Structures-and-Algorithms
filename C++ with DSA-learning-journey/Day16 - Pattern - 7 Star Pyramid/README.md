# Exploring Pattern-7: Star Pyramid in C++ 🌟

Welcome to Day 16 of my C++ learning journey! Today, I ventured into creating a visually appealing 𝗣𝗮𝘁𝘁𝗲𝗿𝗻 - 𝟳: 𝗦𝘁𝗮𝗿 𝗣𝘆𝗿𝗮𝗺𝗶𝗱. This is part of my ongoing challenge to explore different patterns using C++ to strengthen my problem-solving and logic-building skills.

## 📝 Overview

### Key Concepts:
- Understanding how to center align characters in a pattern.
- Using nested loops to build a symmetric pyramid pattern.
- Handling spaces and stars to create visual balance in the output.

### Topics Covered:
- **Nested Loops**: Utilizing two levels of loops—one for spaces and another for stars—to form the pyramid.
- **Pattern Design**: Structuring a centered star pyramid using simple loop manipulation.
- **Input/Output**: Prompting the user to specify the size of the pyramid, which determines the number of rows.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 7: Star Pyramid" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern7(n);
}
```

## 📘 Explanation

- **Pattern Function (pattern7)**:
  - This function generates a pyramid of stars. 
  - The outer loop controls the rows, while two inner loops manage the spaces and stars on each line.
  - The number of stars increases by two with each new row, and spaces on either side decrease symmetrically to center the pyramid.

- **Main Function**:
  - The program begins by prompting the user for an input `n`, which represents the number of rows in the pyramid.
  - It then calls `pattern7(n)` to print the star pyramid with `n` levels.

### 🚀 What I Learned:
- How to use loops creatively to generate symmetrical patterns.
- The importance of balancing spaces and characters to produce centered patterns.
- Gained more insights into controlling loops in C++ and output formatting techniques.

## 🖥️ Output Example:

For `n = 5`, the output will look like this:

```
    *    
   ***   
  *****  
 ******* 
*********
```

## 💡 Reflections

Working on the Star Pyramid pattern has provided deeper insights into managing nested loops and aligning outputs effectively. It was interesting to experiment with the space and star logic to achieve the perfect symmetry. These exercises are proving to be invaluable for honing my problem-solving skills in C++.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more pattern challenges as I continue to dive into more complex and interesting patterns in C++!
