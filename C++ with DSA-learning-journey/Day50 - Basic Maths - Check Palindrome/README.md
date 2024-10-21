# Checking if a Number is a Palindrome in C++ 🚀

Welcome to Day 50 of my C++ journey! Today, I explored an interesting and widely-used problem: Checking if a given number is a palindrome. This exercise helped me understand how to manipulate numbers and compare them effectively using C++.

## 📝 Overview

### Key Concepts:
- Introduction to palindrome checking in C++.
- Reversing digits of a number using basic mathematical operations.
- Comparing the original and reversed numbers to check if a number is a palindrome.

### Topics Covered:
- **Number Reversal**: Understanding how to reverse the digits of a number using loops.
- **Palindrome Check**: Comparing the reversed number with the original one to determine if it is a palindrome.
- **Edge Case Handling**: Properly handling negative numbers and other edge cases.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) return false;  // Negative numbers are not considered palindromes
    
    int originalNum = num, reversedNum = 0;
    
    while (num > 0) {
        int digit = num % 10;    // Get the last digit
        reversedNum = reversedNum * 10 + digit;  // Append the digit
        num /= 10;  // Remove the last digit from the number
    }
    
    return originalNum == reversedNum;  // Compare original and reversed numbers
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }
    
    return 0;
}
```

## 📘 Explanation

- **Palindrome Check Function (`isPalindrome`)**:
  - The function `isPalindrome(int num)` checks if a given number is a palindrome.
  - It first handles the edge case of negative numbers, as they cannot be palindromes.
  - Then, it uses a loop to reverse the digits of the number. This is done by extracting the last digit of the number, appending it to the reversed number, and removing the last digit from the original number.
  - Finally, the original number is compared with the reversed number to determine if it is a palindrome.

- **Main Function**:
  - The program prompts the user to enter a number.
  - It then calls the `isPalindrome(num)` function to check if the number is a palindrome and prints the result accordingly.

### 🚀 What I Learned:
- How to reverse a number using mathematical operations.
- Importance of handling edge cases, such as negative numbers, which cannot be palindromes.
- Efficiently solving the palindrome checking problem using a simple loop and basic comparisons.

## 💡 Reflections

Checking whether a number is a palindrome is a great exercise for understanding the basics of number manipulation and reverse operations in C++. It also reinforces the concept of working with loops and conditional statements. Tackling problems like this helps sharpen problem-solving skills and prepare for more complex algorithm challenges.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more exciting C++ challenges and algorithmic explorations! Up next, I’ll be diving into advanced topics like recursion, dynamic programming, and graph algorithms!
