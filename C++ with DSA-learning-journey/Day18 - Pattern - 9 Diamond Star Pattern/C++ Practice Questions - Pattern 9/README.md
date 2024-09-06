# Practiced a Question on Pattern - 9 Programming in C++

Welcome to Day 18 of my C++ and DSA learning journey! Today, I practiced pattern - 9 (N-Star Diamond Pattern) programming by solving the **N-Star Diamond** problem from Coding Ninjas. This problem gave me a solid understanding of how to create symmetrical diamond-shaped patterns using nested loops.

## 📚 Topic Covered
- **Pattern Programming:** Developing the ability to generate a diamond pattern of stars using loops in C++. The challenge focuses on creating an upper and lower mirror of a star pattern based on a given input value of N.

## 📝 Problem Statement
### Problem: N-Star Diamond (Pattern - 9)

The task is to create a diamond-shaped pattern of stars for a given integer N. The upper half of the diamond consists of an increasing number of stars, while the lower half mirrors this pattern by decreasing the number of stars.

### Example
- **Input:** N = 3
- **Output:**
  
```
  *
 ***
*****
*****
 ***
  *
```

### Explanation
- The upper half of the diamond consists of `N` rows, where each row prints stars in an increasing sequence. The lower half mirrors the upper half to form a complete diamond.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nStarDiamond(int n) {
    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n; j++) {
            cout << " ";
        }
        for (int k = 1; k <= (2*i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2*i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    nStarDiamond(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Mastering the use of nested loops is key to generating complex patterns like diamonds. This problem strengthened my understanding of how loops can be used to control spaces and characters.
- **Symmetry in Patterns:** The exercise provided insight into how pattern symmetry can be achieved through appropriate control of loop variables.

## 🔗 Additional Resources
- [Coding Ninjas: N-Star Diamond Problem](https://www.naukri.com/code360/problems/star-diamond_6573686?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day18%20-%20Pattern%20-%209%20Diamond%20Star%20Pattern)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
