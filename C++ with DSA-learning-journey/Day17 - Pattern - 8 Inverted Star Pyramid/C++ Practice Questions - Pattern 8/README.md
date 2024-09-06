# Practiced a Question on Pattern - 8 Programming in C++

Welcome to Day 17 of my C++ and DSA learning journey! Today, I practiced solving the Reverse N-Star Triangle problem (Pattern - 8 Inverted Star Pyramid) from Coding Ninjas. This problem challenged my understanding of nested loops and space management in pattern programming.

## 📚 Topic Covered
- **Pattern Programming:** Understanding and implementing reverse star patterns in C++ using nested loops. This problem involves decreasing the number of stars while increasing spaces with each row.

## 📝 Problem Statement
### Problem: Reverse N-Star Triangle (Pattern - 8 Inverted Star Pyramid)

Given an integer N, the task is to print a reverse N-star triangle, where the stars in each row decrease as the spaces increase. The first row has the maximum stars, and each subsequent row has one less star.

### Example
- **Input:** N = 3
- **Output:**
  
  ```  
  *****  
   ***  
    *  
  ```  

### Explanation
- The program prints an inverted star triangle. The number of stars in each row decreases by one, while the spaces before the stars increase by one in each row.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int k = 0; k < (2 * (n - i) - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (N): ";
    cin >> n;
    nStarTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Critical for managing spaces and stars in pattern problems. The outer loop controls the number of rows, the first inner loop handles spaces, and the second inner loop prints the stars.
- **Pattern Programming:** Reinforces problem-solving skills and logic building in C++. This problem is useful for understanding how to manage columns and rows with varying values.

## 🔗 Additional Resources
- [Coding Ninjas: Reverse Star Triangle](https://www.naukri.com/code360/problems/reverse-star-triangle_6573685?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day17%20-%20Pattern%20-%208%20Inverted%20Star%20Pyramid).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore patterns and DSA in C++!
