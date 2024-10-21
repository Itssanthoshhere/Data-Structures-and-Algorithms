# Practiced a Question on Basic Math - Palindrome Number in C++

Welcome to Day 50 of my C++ and DSA learning journey! Today, I worked on solving the **Palindrome Number** problem from LeetCode and Coding Ninjas. This problem allowed me to practice number manipulation and control flow in C++.

## 📚 Topic Covered
- **Basic Math in C++:** Checking whether an integer is a palindrome, requiring reversing the number and comparing it with the original value. Negative numbers cannot be palindromes due to mismatched signs.

## 📝 Problem Statement
### Problem: Palindrome Number

Given an integer `x`, return `true` if `x` is a palindrome, and `false` otherwise. An integer is a palindrome when it reads the same backward as forward. Negative numbers are not palindromes because their reverse has a negative sign.

### Example
- **Input:** x = 121  
- **Output:** true  

- **Input:** x = -121  
- **Output:** false  

### Explanation
- For a number to be a palindrome, reversing it should yield the same value as the original. If `x` is negative, it cannot be a palindrome since the reversed value will differ due to the negative sign.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;

    int original = x, reversed = 0;
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return original == reversed;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    if (isPalindrome(x)) {
        cout << x << " is a palindrome!" << endl;
    } else {
        cout << x << " is not a palindrome." << endl;
    }

    return 0;
}
```

## 🗝️ Key Learnings
- **Reversing Integers:** Understanding how to reverse a number by extracting digits and rebuilding it from scratch.
- **Control Flow:** Conditionals were used to handle negative numbers and compare the reversed value with the original.
- **Problem-Solving:** This exercise reinforced my grasp of fundamental number operations and their application to algorithmic problems.

## 🔗 Additional Resources
- [LeetCode: Palindrome Number](https://leetcode.com/problems/palindrome-number/)
- [Coding Ninjas: Palindrome Number Problem](https://www.naukri.com/code360/problems/palindrome-number_624662?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day50%20-%20Basic%20Maths%20-%20Check%20Palindrome/C%2B%2B%20Practice%20Questions%20-%20Check%20Palindrome).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue my journey of mastering C++ and DSA!
