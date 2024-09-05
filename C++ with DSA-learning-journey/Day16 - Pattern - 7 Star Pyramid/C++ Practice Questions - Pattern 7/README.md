# Practiced a Question on Pattern - 7 Programming in C++

Welcome to Day 16 of my C++ and DSA learning journey! Today, I focused on solving the Star Triangle problem (Pattern - 7). This problem enhances understanding of pattern programming by constructing a symmetric star triangle using loops, and it was both a challenging and fun problem to practice.

## 📚 Topic Covered
- **Pattern Programming:** Learning to implement symmetric patterns using nested loops in C++. The task focused on building a centered star triangle for a given input size `N`.

## 📝 Problem Statement
### Problem: Star Triangle (Pattern - 7)

For any given integer `N`, the task is to construct and display a symmetric star triangle with `N` rows. Each subsequent row in the triangle increases the number of stars symmetrically.

### Example
- **Input:** N = 3
- **Output:**
    ```
      *  
     ***  
    *****  
    ```

### Explanation
- The program prints a centered star triangle where each row contains an increasing number of stars symmetrically aligned. The number of spaces before the stars decreases as the row number increases.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " "; // Print spaces
        }
        for (int j = 0; j < (2 * i + 1); j++) {
            cout << "*"; // Print stars
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows for the triangle (N): ";
    cin >> n;
    nStarTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Understanding the use of nested loops for constructing complex patterns is essential. The first loop is used for printing spaces, while the second loop prints stars.
- **Symmetric Patterns:** This exercise helped in visualizing how to maintain symmetry while increasing or decreasing the number of stars in each row.
- **Pattern Programming:** Solving these types of problems strengthens logical thinking and the ability to work with different variations of loops.

## 🔗 Additional Resources
- [Coding Ninjas: Star Triangle Problem](https://www.naukri.com/code360/problems/star-triangle_6573671?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day16%20-%20Pattern%20-%207%20Star%20Pyramid).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore C++ and DSA!
