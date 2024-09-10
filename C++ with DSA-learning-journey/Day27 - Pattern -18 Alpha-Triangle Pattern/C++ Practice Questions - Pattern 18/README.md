# Practiced a Question on Pattern - 18 Programming in C++

Welcome to Day 27 of my C++ and DSA learning journey! Today, I practiced a pattern problem that involves printing an **Alpha-Triangle**, a reverse alphabetical triangle based on the given input size. This challenge helped me hone my skills with nested loops and character manipulation in C++.

## 📚 Topic Covered
- **Pattern Programming:** Focused on generating a triangular pattern with alphabetic characters in reverse order using nested loops.

## 📝 Problem Statement
### Problem: Alpha-Triangle (Pattern - 18)

Given an integer `N`, the task is to print a reverse triangle where the letters of the alphabet are printed in decreasing order, starting from the Nth letter. The number of letters increases with each row, forming a triangular shape.

### Example
- **Input:** N = 3  
- **Output:**
```
C  
C B  
C B A  
```

### Explanation
- The outer loop controls the rows, starting from the nth letter (`C` in this example) in each row and decreasing by one character for every additional column. The inner loop manages the number of characters in each row, printing them in reverse order.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    for (int i = 0; i < n; i++) {
        char start = 'A' + n - 1;
        for (int j = 0; j <= i; j++) {
            cout << start-- << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    alphaTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** This problem reinforced my understanding of nested loops, where the outer loop controls the rows and the inner loop handles character printing in reverse order.
- **Character Handling:** By working with characters and their ASCII values, I furthered my skills in manipulating and printing character sequences in C++.
- **Pattern Problems:** These types of challenges are great for improving logical thinking and working on detailed output formatting.

## 🔗 Additional Resources
- [Coding Ninjas: Alpha-Triangle Problem](https://www.naukri.com/code360/problems/alpha-triangle_6581429?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day27%20-%20Pattern%20-18%20Alpha-Triangle%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue exploring patterns and deepening my understanding of C++ and DSA!
