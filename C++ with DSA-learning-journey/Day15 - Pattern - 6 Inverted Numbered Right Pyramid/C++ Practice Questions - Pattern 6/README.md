# Practiced a Question on Pattern - 6 Programming in C++

Welcome to Day 15 of my C++ and DSA learning journey! Today, I worked on solving the **Reverse Number Triangle** problem (Pattern - 6 Inverted Numbered Right Pyramid). This pattern problem deepened my understanding of nested loops and pattern generation.

## 📚 Topic Covered
- **Pattern Programming:** Focused on printing a reverse number triangle using nested loops in C++. The problem required me to generate a pyramid of decreasing numbers for each row based on a given input value N.

## 📝 Problem Statement
### Problem: Reverse Number Triangle (Pattern - 6)

Aryan and his friends are fond of patterns. Given an integer N, the task is to print an inverted number triangle where each subsequent row has fewer numbers than the previous one.

### Example
- **Input:** N = 3
- **Output:**
  ```  
  1 2 3  
  1 2  
  1  
  ```

### Explanation
- The triangle starts with N numbers in the first row and decreases by one number in each subsequent row. This was implemented using nested loops, where the outer loop controls the number of rows, and the inner loop prints numbers from 1 to the required number for each row.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (N): ";
    cin >> n;
    nNumberTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Essential for controlling both the rows and columns of the triangle. The outer loop managed the rows, while the inner loop handled the decreasing sequence of numbers.
- **Pattern-Based Problems:** Great for enhancing logical thinking and improving coding efficiency, especially with control flow using loops.

## 🔗 Additional Resources
- [Coding Ninjas: Reverse Number Triangle](https://www.naukri.com/code360/problems/reverse-number-triangle_6581889?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day15%20-%20Pattern%20-%206%20Inverted%20Numbered%20Right%20Pyramid).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore C++ and DSA!
