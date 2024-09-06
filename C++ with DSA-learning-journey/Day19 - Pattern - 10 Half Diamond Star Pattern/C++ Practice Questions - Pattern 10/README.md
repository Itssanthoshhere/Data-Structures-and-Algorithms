# Practiced a Question on Pattern - 10: Half Diamond Star Pattern in C++

Welcome to Day 19 of my C++ and DSA learning journey! Today, I practiced a pattern problem called **Pattern - 10: Half Diamond Star Pattern**, which involved creating a rotated triangle where the number of stars increases to a midpoint and then decreases symmetrically. This was a great challenge for improving my understanding of nested loops in C++.

## 📚 Topic Covered
- **Pattern Programming:** Implementing a half diamond star pattern using nested loops in C++. This problem required me to visualize and implement a triangle that increases in star count, then mirrors back down symmetrically.

## 📝 Problem Statement
### Problem: Rotated Triangle (Pattern - 10)

Given an integer `N`, print a rotated triangle (half-diamond star pattern) where the number of stars increases until the midpoint and then decreases to form a symmetrical pattern.

### Example
- **Input:** N = 3  
- **Output:**  
```  
*  
**  
***  
**  
*  
```

### Explanation
- The pattern starts with one star (`*`) and increases by one star per row until it reaches `N` stars. After reaching the midpoint, the number of stars decreases symmetrically to form a mirrored triangle.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    // First half of the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    // Second half of the pattern
    for (int i = n-1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter value of N: ";
    cin >> n;
    nStarTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** This problem strengthened my ability to use nested loops for generating patterns, which is essential in programming.
- **Symmetry in Patterns:** Understanding how to mirror star patterns after reaching the midpoint helped me improve my logical thinking and approach to solving such problems.
- **C++ Problem Solving:** By working on this pattern problem, I gained confidence in using loops and conditionals efficiently in C++.

## 🔗 Additional Resources
- [Coding Ninjas: Rotated Triangle Problem](https://www.naukri.com/code360/problems/rotated-triangle_6573688?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day19%20-%20Pattern%20-%2010%20Half%20Diamond%20Star%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore and solve interesting patterns and problems in C++!
