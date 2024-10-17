# Practiced a Question on Pattern - 22 Programming in C++

Welcome to Day 31 of my C++ and DSA learning journey! Today, I focused on solving a fascinating problem that involves generating a matrix based on a given number 'N'. This exercise allowed me to explore matrix manipulation using nested loops and understand how to calculate cell values based on their distance from the matrix boundaries.

## 📚 Topic Covered
- **Pattern Programming:** Implementing a matrix pattern where values decrease as you move towards the center of the matrix. This involves understanding how to manipulate and iterate through rows and columns using loops in C++.

## 📝 Problem Statement
### Problem: Number Pattern (Pattern - 22)

Given an integer 'N', the task is to generate and print a matrix pattern where each cell's value is calculated based on the minimum distance from the edges of the matrix. The value decreases as you approach the center.

### Example
- **Input:** N = 4
- **Output:**

```
4444444
4333334
4322234
4321234
4322234
4333334
4444444
```

### Explanation
- The output is a square matrix where the values represent the distance of each cell from the boundary. The outermost layer of the matrix has the largest number (N), and as you move towards the center, the values decrease.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void getNumberPattern(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    } 
}

int main() {
    int n;
    cout << "Enter a value for N: ";
    cin >> n;
    getNumberPattern(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** A powerful concept in pattern generation. Understanding how to manipulate matrix indices using loops was crucial for solving this problem.
- **Distance Calculation:** The pattern relies on calculating the minimum distance from the matrix's edges to determine the value of each cell.
- **Matrix Manipulation:** This problem enhanced my ability to work with multidimensional arrays and reinforced logical thinking for boundary conditions.

## 🔗 Additional Resources
- [Coding Ninjas: Number Pattern Problem](https://www.naukri.com/code360/problems/ninja-and-the-number-pattern-i_6581959?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day31%20-%20Pattern%20-%2022%20The%20Number%20Pattern)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue my journey through C++ and DSA!
