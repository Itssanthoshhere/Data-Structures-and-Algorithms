# Practiced a Question on Basic Math - GCD Calculation in C++

Welcome to Day 54 of my C++ and DSA learning journey! Today, I practiced calculating the Greatest Common Divisor (GCD) of two numbers, a fundamental concept in mathematics that aids in optimizing algorithms involving divisors.

## 📚 Topic Covered
- **GCD Calculation:** Understanding and implementing the Euclidean algorithm to find the GCD of two integers using loops in C++. This problem helped solidify my understanding of basic mathematical concepts and iterative structures.

## 📝 Problem Statement
### Problem: GCD of Two Numbers

Given two integers `x` and `y`, find their Greatest Common Divisor (GCD). The GCD of two numbers is the largest positive integer that divides both numbers without leaving a remainder.

### Example
- **Input:** `x = 20, y = 5`
- **Output:** `5`

- **Input:** `x = 96, y = 14`
- **Output:** `2`

### Explanation
- The Euclidean algorithm is used, which involves repeatedly replacing `a` with `b` and `b` with the remainder of `a` divided by `b` until `b` becomes zero. At that point, `a` holds the GCD.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Enter two numbers to find their GCD: ";
    cin >> x >> y;
    cout << "The GCD of " << x << " and " << y << " is " << gcd(x, y) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Euclidean Algorithm:** A highly efficient method for computing the GCD by iteratively reducing the size of the problem.
- **Iterative Loops in C++:** Practiced using loops to implement the iterative approach of the algorithm, which reinforced my understanding of looping and condition checks.

## 🔗 Additional Resources
- [Coding Ninjas: GCD Problem](https://www.naukri.com/code360/problems/gcd_6557?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day54%20-%20Basic%20Maths%20-%20GCD%20Or%20HCF/GCD_Or_HCF.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to dive deeper into the world of C++ and DSA!
