# Practiced a Question on Pattern - 3 Programming in C++

Welcome to Day 12 of my C++ and DSA learning journey! Today, I continued my exploration of pattern programming by solving the N-Triangles problem (Pattern - 3) on Coding Ninjas. This exercise allowed me to further strengthen my understanding of nested loops in C++.

## 📚 Topic Covered
- **Pattern Programming:** Creating and implementing a triangular pattern filled with integers using nested loops in C++. This exercise involved generating a lower triangle of integers based on the input size `N`.

## 📝 Problem Statement
### Problem: N-Triangles (Pattern - 3)

Sam is creating a triangular painting for a maths project. For any given integer `N`, the task is to create and display the lower triangle of an N-dimensional pattern filled with integers starting from 1.

### Example
- **Input:** `N = 3`
- **Output:**
  ```
  1  
  1 2  
  1 2 3  
  ```

### Explanation
- The program generates a triangular pattern where each row contains an increasing number of integers starting from 1, with each row displaying integers up to the current row number.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the triangle (N): ";
    cin >> n;
    nTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Essential for generating patterns in programming. This exercise reinforced my understanding of how loops can work together to create specific patterns.
- **Pattern Programming:** A valuable exercise for improving logical thinking and problem-solving abilities in C++. Practicing such patterns is particularly useful for visualizing loop iterations and their outcomes.

## 🔗 Additional Resources
- [Coding Ninjas: N-Triangles Problem](https://www.codingninjas.com/codestudio/problems/n-triangles_6570181?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-3)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day12%20-%20Pattern%20-%203%20Right-Angled%20Number%20Pyramid)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to dive deeper into C++ and DSA!
