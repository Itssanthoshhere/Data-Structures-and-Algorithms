# Counting Digits in a Number using C++ 🔢

Welcome to Day 48 of my C++ journey! Today, I revisited the fundamental concept of counting digits in a number. This task is a crucial part of programming, as it forms the foundation for various data processing and validation techniques.

## 📝 Overview

### Key Concepts:
- Basics of using loops in C++.
- Extracting digits from a number.
- Efficient algorithm for counting digits using division.

### Topics Covered:
- **Loop-based Digit Counting**: Using a while loop to count the number of digits in an integer.
- **Input/Output**: Reading integer input from the user and displaying the result.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int countDigits(int n) {
    int cnt = 0;
    while (n > 0) {
        n /= 10;  // Remove the last digit
        cnt++;    // Increment digit count
    }
    return cnt;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int result = countDigits(n);
    cout << "Number of Digits in " << n << ": " << result << endl;
    
    return 0;
}
```

## 📘 Explanation

- **countDigits Function**:
  - The function `countDigits(int n)` takes an integer `n` as input and returns the number of digits in `n`.
  - It uses a while loop to continuously divide `n` by 10 until `n` is reduced to 0.
  - For each iteration, the counter `cnt` is incremented, keeping track of the number of divisions (digits).

- **Main Function**:
  - Prompts the user to enter an integer.
  - Calls `countDigits(n)` to compute the number of digits.
  - Displays the result to the user.

### 🚀 What I Learned:
- This approach has a time complexity of `O(log₁₀(N))`, as each iteration reduces `n` by a factor of 10.
- Counting digits is useful for validating formats, processing data, and competitive programming.
- Reinforced my understanding of basic control structures and arithmetic operations in C++.

## 💡 Reflections

Counting digits in a number is a simple yet essential task in programming. This exercise reminded me of the power of loops in handling repetitive tasks and extracting data. It’s rewarding to revisit these basics and appreciate their application in various algorithms and problem-solving scenarios.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore and share more mathematical operations and algorithms in C++!
