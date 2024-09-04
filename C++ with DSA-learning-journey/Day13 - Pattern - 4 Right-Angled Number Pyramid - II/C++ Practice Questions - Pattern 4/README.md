# Practiced a Question on Pattern - 4 Programming in C++

Welcome to Day 13 of my C++ and DSA learning journey! Today, I focused on practicing Pattern - 4 programming by solving a triangular painting problem. This problem allowed me to explore nested loops and pattern generation, essential concepts in programming.

## 📚 Topic Covered
- **Pattern Programming:** Understanding and implementing patterns in a triangular format using nested loops in C++. This exercise involved generating a triangular pattern where each row `i` consists of the number `i` repeated `i` times.

## 📝 Problem Statement
### Problem: Triangular Pattern (Pattern - 4)

Sam is making a triangular painting for a maths project. Given an integer `N`, the goal is to print an N-dimensional triangle where each row `i` contains the number `i` repeated `i` times.

### Example
- **Input:** `N = 3`
- **Output:**
  ```
  1
  2 2
  3 3 3
  ```

### Explanation
- The program generates a triangular pattern based on the input size `N`. Each row `i` in the triangle contains the number `i`, repeated `i` times.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the triangle (N): ";
    cin >> n;
    triangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Crucial for generating patterns in programming. Mastering the use of loops within loops is essential for tasks like pattern creation.
- **Pattern Programming:** An excellent way to enhance logical thinking and problem-solving abilities. It's particularly valuable for understanding how loops interact to produce specific outputs.

## 🔗 Additional Resources
- [Coding Ninjas: Triangular Pattern Problem](https://www.naukri.com/code360/problems/triangle_6573690?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day13%20-%20Pattern%20-%204%20Right-Angled%20Number%20Pyramid%20-%20II).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
