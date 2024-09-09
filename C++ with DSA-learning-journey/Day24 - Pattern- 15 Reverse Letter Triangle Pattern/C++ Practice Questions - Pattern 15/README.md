# Practiced a Question on Pattern - 15 Programming in C++

Welcome to Day 24 of my C++ and DSA learning journey! Today, I worked on solving **Pattern - 15: Reverse Letter Triangle** from Coding Ninjas. This problem helped me practice letter manipulation and pattern generation using nested loops in C++.

## 📚 Topic Covered
- **Pattern Programming:** Understanding and implementing reverse letter patterns using nested loops in C++. This exercise involved generating a reverse triangular structure of characters based on the input size N, starting from 'A'.

## 📝 Problem Statement
### Problem: Reverse Letter Triangle (Pattern - 15)

Given an integer N, print a reverse letter triangle starting from 'A' in the first row, with each subsequent row having one fewer character.

### Example
- **Input:** N = 4
- **Output:**
```
A B C D  
A B C  
A B  
A
```

### Explanation
- The program prints a reverse triangle of letters starting from 'A'. The first row contains N letters, the second row contains N-1 letters, and so on until the last row, which contains only one letter. Each letter is printed in sequence from 'A' on each row.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void pattern15(int n) {
    for (int i = n; i >= 1; i--) {
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of rows (N): ";
    cin >> n;
    pattern15(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** This problem reinforced my understanding of how nested loops work to generate patterns. The outer loop manages the number of rows, and the inner loop prints characters in each row.
- **Character Manipulation:** Gaining more familiarity with manipulating characters and ASCII values in C++, especially when working with patterns that involve letters.
- **Pattern Programming:** This type of exercise is excellent for improving logic-building skills and working with loops in real-world scenarios.

## 🔗 Additional Resources
- [Coding Ninjas: Reverse Letter Triangle](https://www.naukri.com/code360/problems/reverse-letter-triangle_6581906?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day24%20-%20Pattern-%2015%20Reverse%20Letter%20Triangle%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore C++ and DSA!
