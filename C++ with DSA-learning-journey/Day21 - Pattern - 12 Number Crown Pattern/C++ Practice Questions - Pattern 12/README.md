# Practiced a Question on Pattern - 12 Programming in C++

Welcome to Day 21 of my C++ and DSA learning journey! Today, I delved into Pattern - 12, known as the Number Crown Pattern. This exercise allowed me to further refine my skills with nested loops and pattern construction in C++.

## 📚 Topic Covered
- **Pattern Programming:** Creating intricate patterns using numbers and spaces. This exercise involved generating a crown-like shape, combining numbers in ascending and descending order with spaces in between.

## 📝 Problem Statement
### Problem: Number Crown (Pattern - 12)

Given an integer `N`, the task is to print a crown-like pattern. The pattern consists of numbers increasing from 1 to the row number on the left, mirrored on the right side with spaces in between.

### Example
- **Input:** N = 3
- **Output:**

```
1             1  
1 2       2 1  
1 2 3 3 2 1  
```

### Explanation
- The program generates a pattern where each row starts with numbers increasing from 1 to the current row index, followed by a decreasing sequence of numbers, with spaces in between. This creates a crown-like effect.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void numberCrown(int n) {
    for (int i = 1; i <= n; i++) {
        // Print increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        // Print spaces
        for (int j = 1; j <= 2 * (n - i); j++) {
            cout << " ";
        }
        // Print decreasing numbers
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for Number Crown: ";
    cin >> n;
    numberCrown(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Essential for constructing complex patterns. Understanding how to manage multiple loops to handle different parts of the pattern.
- **Pattern Construction:** Creating visually appealing patterns using numbers and spaces enhances problem-solving skills and loop control.

## 🔗 Additional Resources
- [Coding Ninjas: Number Crown](https://www.naukri.com/code360/problems/number-crown_6581894?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this exercise in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day21%20-%20Pattern%20-%2012%20Number%20Crown%20Pattern)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore and practice various patterns in C++ and DSA!
