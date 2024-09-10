# Practiced a Question on Pattern - 21 Programming in C++

Welcome to Day 30 of my C++ and DSA learning journey! Today, I practiced a new pattern problem, the "Ninja And The Star Pattern," which focuses on generating a hollow square star pattern. This exercise was an excellent way to reinforce my understanding of nested loops and matrix manipulation in C++.

## 📚 Topic Covered
- **Pattern Programming:** Implementation of hollow patterns using nested loops to create specific designs in a square grid format. Today’s focus was on generating a hollow star pattern where only the borders are filled with stars.

## 📝 Problem Statement
### Problem: Ninja And The Star Pattern

Ninja is tasked with creating a star pattern of size N. The goal is to print an N x N matrix where the border of the square is filled with stars, and the interior remains hollow.

### Example
- **Input:** N = 5
- **Output:**
  
```
*****
*   *
*   *
*   *
*****
```

### Explanation
- The `getStarPattern(int n)` function generates the pattern by iterating through each cell in the matrix. It prints stars for the border cells (first and last rows, first and last columns) and spaces for the inner cells.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void getStarPattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == n-1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the star pattern (N): ";
    cin >> n;
    getStarPattern(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Utilized to navigate through rows and columns to control where stars and spaces are printed.
- **Matrix Manipulation:** Gained insight into handling matrix boundaries and conditionally printing characters based on their positions.
- **Pattern Programming:** Improved skills in designing and implementing visual patterns using fundamental programming constructs.

## 🔗 Additional Resources
- [Coding Ninjas: Ninja And The Star Pattern](https://www.naukri.com/code360/problems/ninja-and-the-star-pattern-i_6581920?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day30%20-%20Pattern%20-%2021%20Hollow%20Rectangle%20Pattern)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore more pattern problems and deepen my understanding of C++ and DSA!
