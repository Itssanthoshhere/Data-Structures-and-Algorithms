# Practiced a Question on Pattern - 20 Programming in C++

Welcome to Day 29 of my C++ and DSA learning journey! Today, I focused on practicing the Symmetric Butterfly Pattern, a problem from Coding Ninjas. This problem challenged my understanding of nested loops and helped me explore how loops can be utilized to create symmetrical patterns.

## 📚 Topic Covered
- **Pattern Programming:** Creating a symmetric butterfly pattern using nested loops in C++. The pattern involves stars in mirrored rows, forming a butterfly-like shape, with the number of stars increasing and decreasing symmetrically.

## 📝 Problem Statement
### Problem: Symmetric Butterfly Pattern

Sam loves symmetry and decided to create a pattern where, for a given integer `N`, a symmetric butterfly-shaped pattern is printed.

### Example
- **Input:** N = 3
- **Output:**
  
```
*         * 
* *     * * 
* * * * * * 
* *     * * 
*         *
```

### Explanation
- The pattern consists of `N` rows of stars, with the number of stars increasing until the middle row and then decreasing symmetrically. The stars are mirrored on either side, creating a butterfly-like structure.

## 💻 Code Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;
void pattern20(int n) {
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2 * n - i;
        }
        
        // Stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        
        // Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        
        cout << endl;
        
        if (i < n) {
            spaces -= 2;
        } else {
            spaces += 2;
        }
    }
}

int main() {
    cout << "Pattern - 20: Symmetric-Butterfly Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern20(n);
}
```

## 🗝️ Key Learnings
- **Nested Loops:** The problem reinforced the importance of understanding and using nested loops for pattern generation. Symmetry is achieved by controlling the loop structure carefully.
- **Pattern Programming:** Solving pattern-based problems like this one sharpens logical thinking and problem-solving skills, making it a great exercise to practice loops and conditionals in C++.

## 🔗 Additional Resources
- [Coding Ninjas: Symmetric Butterfly Pattern Problem](https://www.naukri.com/code360/problems/symmetry_6581914?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day29%20-%20Pattern%20-%2020%20Symmetric-Butterfly%20Pattern)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
