# Practiced a Question on Basic Math - Reversing a Number in C++

Welcome to Day 49 of my C++ and DSA learning journey! Today, I focused on solving an interesting problem: **Reverse Integer** from LeetCode. This problem helped me improve my understanding of basic mathematics and handling edge cases such as overflow in C++.

## 📚 Topic Covered
- **Basic Math:** Reversing the digits of a 32-bit signed integer using C++. The problem involved extracting digits, reversing them, and ensuring the result remains within the valid 32-bit integer range.

## 📝 Problem Statement
### Problem: Reverse Integer

Given a signed 32-bit integer `x`, the task is to reverse its digits. If reversing `x` causes it to go outside the 32-bit signed integer range `[-2^31, 2^31 - 1]`, return `0` instead.

### Example
- **Input:** `x = 123`
- **Output:** `321`

- **Input:** `x = -123`
- **Output:** `-321`

### Explanation
- The digits of the input integer are reversed, and the sign (positive/negative) is retained. If the reversed integer exceeds the valid 32-bit signed integer range, the program returns `0`.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
    int result = 0;
    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        // Check for overflow before actually multiplying or adding
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) return 0;
        if (result < INT_MIN / 10 || (result == INT_MIN / 10 && digit < -8)) return 0;

        result = result * 10 + digit;
    }
    return result;
}

int main() {
    int x;
    cout << "Enter an integer to reverse: ";
    cin >> x;

    int reversedNumber = reverse(x);
    cout << "Reversed Number: " << reversedNumber << endl;
    return 0;
}
```

### Key Points:
- **Overflow Check:** Before multiplying or adding, the code checks whether the next step will cause an overflow. If yes, it returns `0`.
- **Digit Extraction:** The last digit of the number is extracted using the modulus operator (`x % 10`) and then added to the reversed number.

## 🗝️ Key Learnings
- **Handling Overflow:** Learned to handle overflow conditions in C++ using integer limits (`INT_MAX` and `INT_MIN`).
- **Modulus and Division:** Strengthened my knowledge of extracting and manipulating digits of a number using modulus and division operations.
- **Edge Case Management:** Solving this problem helped me improve my logic for managing edge cases efficiently, such as large integers and negative numbers.

## 🔗 Additional Resources
- [LeetCode: Reverse Integer Problem](https://leetcode.com/problems/reverse-integer/)
- [Coding Ninjas: Reverse of a Number Problem](https://www.naukri.com/code360/problems/reverse-of-a-number_624652?interviewProblemRedirection=true&search=Reverse%20of%20a%20number&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day49%20-%20Basic%20Maths%20-%20Reverse%20a%20Number/C%2B%2B%20Practice%20Questions%20-%20Reverse%20a%20Number).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
