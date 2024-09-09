# Practiced a Question on Pattern - 14 Programming in C++

Welcome to Day 23 of my C++ and DSA learning journey! Today, I worked on solving Pattern - 14, the "Increasing Letter Triangle" problem, which allowed me to dive deeper into nested loops and character patterns in C++.

## 📚 Topic Covered
- **Pattern Programming:** Creating an increasing letter triangle pattern using nested loops in C++. This practice helped me improve my understanding of loop mechanics and how to combine them with character manipulation.

## 📝 Problem Statement
### Problem: Increasing Letter Triangle (Pattern - 14)

For a given integer 'N', the task is to generate a pattern where each row contains letters from 'A' to the current row's corresponding alphabet in increasing order. 

### Example
- **Input:** N = 4
- **Output:**
```
A
A B
A B C
A B C D
```

### Explanation
- The program prints a triangle pattern of increasing letters, starting from 'A'. In each row, the number of letters increases by one, with the ith row containing the first (i+1) letters of the alphabet.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (N): ";
    cin >> n;
    nLetterTriangle(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Essential for creating complex patterns. I practiced using loops within loops, where the outer loop controls the rows, and the inner loop prints the corresponding characters.
- **Character Manipulation:** By working with ASCII values, I understood how to dynamically generate alphabets based on the current loop index.

## 🔗 Additional Resources
- [Coding Ninjas: Increasing Letter Triangle Problem](https://www.naukri.com/code360/problems/increasing-letter-triangle_6581897?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this pattern practice in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day23%20-%20Pattern%20-14%20Increasing%20Letter%20Triangle%20Pattern).
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue exploring pattern programming and C++!
