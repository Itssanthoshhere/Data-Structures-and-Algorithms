# Reversing a Number in C++ 🚀

Welcome to Day 49 of my C++ learning journey! Today, I explored how to reverse a number using basic mathematical operations in C++. This is a key exercise in understanding number manipulation, loops, and applying C++ fundamentals in a practical way.

## 📝 Overview

### Key Concepts:
- Basic maths using modulus (`%`) and division (`/`) operators.
- Using loops to manipulate digits of a number.
- Constructing the reversed number by extracting and appending digits.

### Topics Covered:
- **Modulus & Division Operations**: Understanding how to extract and remove digits from a number.
- **Looping Mechanism**: Applying loops to handle digit manipulation.
- **Number Reversal**: How to reverse a number step by step using basic operators.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int reverseNumber(int num) {
    int reversedNum = 0;
    while (num > 0) {
        int lastDigit = num % 10;
        reversedNum = (reversedNum * 10) + lastDigit;
        num = num / 10;
    }
    return reversedNum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int result = reverseNumber(n);
    cout << "Reversed number is: " << result << endl;
    return 0;
}
```

## 📘 Explanation

- **Reverse Function (`reverseNumber`)**:
  - This function takes an integer as input, extracts its digits, and reverses the number.
  - The `num % 10` operation extracts the last digit of the number.
  - The `reversedNum = (reversedNum * 10) + lastDigit` step appends the extracted digit to the reversed number.
  - The `num / 10` operation removes the last digit from the number.
  - The loop continues until all digits are processed, and the reversed number is returned.

- **Main Function**:
  - The user is prompted to input a number.
  - The `reverseNumber` function is called with the input, and the reversed number is printed.

### 🚀 What I Learned:
- The modulus operator is crucial in extracting digits from a number.
- Building a reversed number step by step using simple arithmetic operations.
- Loops are vital for iterating over the digits of a number until it’s completely reversed.

## 💡 Reflections

Reversing a number is not only a common programming challenge but also an excellent way to reinforce basic concepts like loops, modulus, and division. This exercise has provided me with a better understanding of how to manipulate numbers and implement practical algorithms.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Thanks for following along on my C++ learning journey! Stay tuned for more exciting programming challenges and solutions.
