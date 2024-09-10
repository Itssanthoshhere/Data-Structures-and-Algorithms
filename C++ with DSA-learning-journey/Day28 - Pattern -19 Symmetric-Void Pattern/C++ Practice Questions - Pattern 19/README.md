# Practiced a Question on Pattern - 19 Programming in C++

Welcome to Day 28 of my C++ and DSA learning journey! Today, I explored another intriguing pattern problem—Pattern - 19 (Symmetric Void). This problem further deepened my understanding of loops, control flow, and symmetry in C++.

## 📚 Topic Covered
- **Pattern Programming:** The focus was on generating a symmetric pattern using nested loops. The goal was to create a symmetric void pattern for a given value of N, with stars forming the outer edges and spaces in the middle, showcasing symmetry.

## 📝 Problem Statement
### Problem: Symmetric Void (Pattern - 19)

Sam is curious about symmetric patterns. For any given integer 'N', the task is to create a symmetric void pattern using stars (`*`) and spaces (` `), with stars forming the outer edges of the pattern and spaces creating the void in the center.

### Example
- **Input:** N = 3  
- **Output:**  
```
* * * * * *  
* *     * *  
*         *  
*         *  
* *     * *  
* * * * * *  
```

### Explanation
- The pattern consists of stars on the outer edges with increasing spaces between them in the top half. In the bottom half, the pattern mirrors the top, creating a symmetric void effect.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void symmetry(int n) {
    // Top half of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) cout << "* "; // Left stars
        for (int k = 0; k < 2 * i; k++) cout << "  "; // Center spaces
        for (int j = 0; j < n - i; j++) cout << "* "; // Right stars
        cout << endl;
    }
    // Bottom half of the pattern
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) cout << "* "; // Left stars
        for (int k = 0; k < 2 * (n - i - 1); k++) cout << "  "; // Center spaces
        for (int j = 0; j <= i; j++) cout << "* "; // Right stars
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the pattern (N): ";
    cin >> n;
    symmetry(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** The use of nested loops was essential for managing the stars and spaces to create a symmetric pattern.
- **Pattern Programming:** Practicing such problems helps in visualizing the output structure and gaining a better understanding of loop behavior in pattern creation.
- **Symmetry in Coding:** Manipulating spaces and characters to form a symmetric structure sharpened my logical and problem-solving skills.

## 🔗 Additional Resources
- [Coding Ninjas: Symmetric Void Problem](https://www.naukri.com/code360/problems/symmetric-void_6581919?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day28%20-%20Pattern%20-19%20Symmetric-Void%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore more patterns and challenges in C++ and DSA!
