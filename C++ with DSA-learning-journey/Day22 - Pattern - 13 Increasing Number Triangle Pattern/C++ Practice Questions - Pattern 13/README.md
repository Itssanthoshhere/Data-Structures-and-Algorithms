# Practiced a Question on Pattern - 13 Programming in C++

Welcome to Day 22 of my C++ and DSA learning journey! Today, I tackled an exciting problem related to pattern programming, specifically Pattern - 13: **Increasing Number Triangle**. This problem provided valuable practice in implementing nested loops and working with sequences.

## 📚 Topic Covered
- **Pattern Programming:** Focused on generating an increasing number triangle using nested loops in C++. The number of integers printed per row increases progressively, and the pattern is determined by the input size `N`.

## 📝 Problem Statement
### Problem: Increasing Number Triangle

Given an integer `N`, the task is to print a triangle where numbers increment row by row. The first row contains 1 number, the second row contains 2 numbers, and so on.

### Example
- **Input:** N = 3
- **Output:**
  
```
1  
2 3  
4 5 6  
```

### Explanation
- The program prints a triangle where each row contains an increasing sequence of numbers. The number of integers in each row equals the row number. For example, the first row contains 1 number, the second row contains 2 numbers, and so on until the Nth row.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    nNumberTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Key to solving pattern-based problems. The outer loop controls the rows, while the inner loop manages the printing of numbers in each row.
- **Incrementing Sequence:** The value of the numbers is incremented sequentially across rows, with each row containing an increasing number of values.

## 🔗 Additional Resources
- [Coding Ninjas: Increasing Number Triangle](https://www.naukri.com/code360/problems/increasing-number-triangle_6581893?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day22%20-%20Pattern%20-%2013%20Increasing%20Number%20Triangle%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore C++ and DSA!
