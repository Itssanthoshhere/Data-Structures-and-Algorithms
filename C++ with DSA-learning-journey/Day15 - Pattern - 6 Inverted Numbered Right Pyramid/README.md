# Exploring Pattern-6: Inverted Numbered Right Pyramid in C++ 🔢

Welcome to Day 15 of my C++ learning journey! Today, I delved into another pattern programming problem, specifically an 𝗜𝗻𝘃𝗲𝗿𝘁𝗲𝗱 𝗡𝘂𝗺𝗯𝗲𝗿𝗲𝗱 𝗥𝗶𝗴𝗵𝘁 𝗣𝘆𝗿𝗮𝗺𝗶𝗱. This problem helped me further strengthen my understanding of nested loops and number manipulation in C++.

## 📝 Overview

### Key Concepts:
- Continuation of pattern programming in C++.
- Using nested loops to create number-based patterns.
- Understanding how to print decreasing sequences in a pyramid form.

### Topics Covered:
- **Nested Loops**: Implementing nested loops where the outer loop controls the rows and the inner loop prints the numbers in decreasing order for each row.
- **Pattern Design**: Creating an inverted numbered right pyramid where the number of digits reduces with each row.
- **Input/Output**: Reading user input to determine the size of the pattern and displaying the result accordingly.

## 📂 Code Example

```cpp
#include <bits/stdc++.h>
using namespace std;

void pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 6: Inverted Numbered Right Pyramid" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern6(n);
}
```

## 📘 Explanation

- **Pattern Function (`pattern6`)**:
  - The `pattern6(int n)` function prints an inverted numbered right pyramid using nested loops.
  - The outer loop controls the number of rows, while the inner loop prints numbers from `1` to `n - i + 1` in each row, where `i` represents the current row.
  - After printing the numbers, the code moves to the next line using `cout << endl;`.

- **Main Function**:
  - The main function starts by prompting the user to input a number `n` (the height of the pyramid).
  - It then calls `pattern6(n)` to generate the inverted numbered pyramid based on the input.

### 🖥️ Output Example:
- **Input**: `5`
- **Output**:
  ```
  1 2 3 4 5 
  1 2 3 4 
  1 2 3 
  1 2 
  1 
  ```

### 🚀 What I Learned:
- Enhanced my understanding of nested loops and how they work together to generate specific patterns.
- Learned how to print decreasing sequences of numbers to form a structured pattern.
- Further improved my problem-solving skills with respect to manipulating outputs based on loops in C++.

## 💡 Reflections

This challenge was an excellent way to practice number manipulation and nested loop structures in C++. Creating patterns that decrease row-by-row not only improves logic-building but also aids in visualizing how loops function. I look forward to tackling even more complex patterns and continuing to build my problem-solving capabilities in C++.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Thanks for following along with my C++ journey! Stay tuned for more exciting patterns and coding challenges. Let's keep learning! 😊
