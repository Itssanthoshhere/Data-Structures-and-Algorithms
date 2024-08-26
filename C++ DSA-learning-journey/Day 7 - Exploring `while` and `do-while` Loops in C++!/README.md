# Day 7: While and Do-While Loops in C++ 🔁

Welcome to Day 7 of my C++ and Data Structures & Algorithms (DSA) learning journey! Today, I delved into `while` and `do-while` loops in C++, which are crucial for repeating tasks until a specific condition is met.

## 📝 Overview

### Key Concepts:
- Understanding the `while` loop and how it checks the condition before executing the loop body.
- Learning the `do-while` loop, where the loop body is executed at least once before checking the condition.
- Exploring different scenarios where these loops are more suitable than `for` loops.

### Topics Covered:
- **Basic `while` Loop:** Executing a block of code as long as a condition is true.
- **Basic `do-while` Loop:** Ensuring the code executes at least once, even if the condition is false.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    // While loop
    while (i <= 5) {
        cout << "Sandy " << i << endl;
        i++;
    }

    // Resetting i for the do-while loop
    i = 1;

    // Do-while loop
    do {
        cout << "Sandy " << i << endl;
        i++;
    } while (i <= 2);

    return 0;
}
```

## 📘 Explanation

- **`while` Loop:**
  - The `while` loop runs as long as the condition `(i <= 5)` is true. It prints "Sandy" followed by the current value of `i`, then increments `i` by 1. The loop stops when `i` exceeds 5.

- **`do-while` Loop:**
  - The `do-while` loop is similar to the `while` loop, but it guarantees that the loop body will execute at least once, regardless of the condition. Here, it prints "Sandy" twice before `i` exceeds 2, at which point the loop terminates.

### 🚀 What I Learned:
- The difference between `while` and `do-while` loops.
- When to use `do-while` loops to ensure that a block of code runs at least once.
- How loop conditions control the flow of execution in a program.

## 💡 Reflections

Understanding `while` and `do-while` loops has deepened my grasp of controlling the flow of a program. These loops are particularly useful in situations where the number of iterations isn't known beforehand or when a block of code needs to execute at least once regardless of the condition.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue my journey into C++ and DSA!
