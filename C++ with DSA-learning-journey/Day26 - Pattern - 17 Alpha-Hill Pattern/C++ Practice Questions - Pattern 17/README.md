# Practiced a Question on Pattern - 17 Programming in C++

Welcome to Day 26 of my C++ and DSA learning journey! Today, I focused on practicing pattern - 17 programming by solving the Alpha-Hill problem from Coding Ninjas. This problem allowed me to explore how to generate palindromic patterns using alphabets.

## 📚 Topic Covered
- **Pattern Programming:** Understanding and implementing a triangular alphabet pattern in a palindromic order using nested loops in C++. The pattern follows a hill structure where alphabets increase and then decrease symmetrically.

## 📝 Problem Statement
### Problem: Alpha-Hill Pattern (Pattern - 17)

Sam wants to create Alpha-Hills for a given integer 'N'. The task is to print a palindromic triangle pattern where alphabets increase to a midpoint and then decrease symmetrically across each row.

### Example
- **Input:** N = 3
- **Output:**

```
      A  
    A B A  
  A B C B A  
```

### Explanation
- The pattern forms a triangle of alphabets, increasing in the first half of each row and decreasing in the second half, centered on the middle character. The spaces before each row help maintain symmetry.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void alphaHill(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= (n - i); j++) {
            cout << "  ";
        }
        // Print increasing characters
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch++ << " ";
        }
        // Print decreasing characters
        ch -= 2;
        for (int j = 1; j < i; j++) {
            cout << ch-- << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    alphaHill(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Crucial for generating complex patterns. In this problem, nested loops were used to print spaces, increasing alphabets, and decreasing alphabets.
- **Alphabet Manipulation:** Understanding how to work with character variables and increment/decrement them to achieve the palindromic effect.
- **Symmetry in Patterns:** Maintaining the proper structure and symmetry in pattern programming helps in generating visually appealing outputs.

## 🔗 Additional Resources
- [Coding Ninjas: Alpha-Hill Problem](https://www.naukri.com/code360/problems/alpha-hill_6581921?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day26%20-%20Pattern%20-%2017%20Alpha-Hill%20Pattern)
---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!

--- 

This format provides a structured overview of your solution, problem statement, and key insights gained while solving the problem.
