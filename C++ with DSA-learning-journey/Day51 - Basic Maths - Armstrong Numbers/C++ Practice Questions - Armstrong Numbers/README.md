# Practiced a Question on Armstrong Numbers in C++

Welcome to Day 51 of my C++ and DSA learning journey! Today, I focused on practicing a problem related to basic mathematics: checking for Armstrong numbers. This exercise allowed me to deepen my understanding of number theory and control flow in programming.

## 📚 Topic Covered
- **Armstrong Numbers:** Understanding and implementing the concept of Armstrong numbers, which are integers that are equal to the sum of their own digits each raised to the power of the number of digits.

## 📝 Problem Statement
### Problem: Check for Armstrong Numbers

You are given an integer 'n'. Return 'true' if 'n' is an Armstrong number, and 'false' otherwise.

### Example
- **Input:** 1634  
- **Output:** true  
  (as \( 1^4 + 6^4 + 3^4 + 4^4 = 1634 \))

### Explanation
- The program checks whether the sum of its digits raised to the power of the number of digits equals the original number.

## 💻 Code Implementation
```cpp
#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n) {
    int original = n, sum = 0, digits = 0;

    // Calculate the number of digits
    while (original != 0) {
        original /= 10;
        digits++;
    }

    original = n; // Reset original to n

    // Calculate the sum of digits raised to the power of digits
    while (original != 0) {
        int digit = original % 10;
        sum += pow(digit, digits);
        original /= 10;
    }

    // Check if the sum equals the original number
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << (checkArmstrong(n) ? "true" : "false") << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Digit Manipulation:** This problem enhanced my skills in handling digits of a number, a fundamental concept in many mathematical programming challenges.
- **Power Calculations:** Understanding how to use power functions in programming for mathematical computations.
- **Control Flow:** Gaining proficiency in using loops and conditionals to solve problems logically.

## 🔗 Additional Resources
- [Coding Ninjas: Check Armstrong Numbers Problem](https://www.naukri.com/code360/problems/check-armstrong_589?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day51%20-%20Basic%20Maths%20-%20Armstrong%20Numbers/Armstrong_Numbers.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
