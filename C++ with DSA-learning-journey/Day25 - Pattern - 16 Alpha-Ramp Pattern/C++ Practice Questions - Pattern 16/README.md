# Practiced a Question on Pattern - 16 Programming in C++

Welcome to Day 25 of my C++ and DSA learning journey! Today, I tackled a pattern problem titled **Alpha-Ramp** from Coding Ninjas, which allowed me to practice creating a triangular character-based pattern. This exercise was a great way to deepen my understanding of loops and character manipulation in C++.

## 📚 Topic Covered
- **Pattern Programming:** Implementing and understanding the Alpha-Ramp pattern using nested loops. This exercise involved generating a triangular pattern of alphabetic characters based on the given input size N.

## 📝 Problem Statement
### Problem: Alpha-Ramp (Pattern - 16)

Given an integer 'N', the task is to print an Alpha-Ramp pattern where each row contains increasing characters from 'A' to 'Z', and the number of characters in each row increases with the row number.

### Example
- **Input:** N = 3
- **Output:**
  
```
A  
B B  
C C C  
```

### Explanation
- The program prints a triangular pattern where each row contains characters that increase sequentially from 'A'. The number of characters in each row corresponds to the row number.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void alphaRamp(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i; // Determine the current character to print
        for (int j = 0; j <= i; j++) {
            cout << ch << " "; // Print the character with a space
        }
        cout << endl; // Move to the next line after printing a row
    }
}

int main() {
    cout << "Alpha-Ramp Pattern" << endl;
    int n;
    cin >> n; // Input the number of rows for the pattern
    cout << "\n";
    alphaRamp(n); // Generate the Alpha-Ramp pattern
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Essential for generating patterns in programming. Understanding how to use outer and inner loops effectively is crucial for tasks like pattern generation.
- **Character Manipulation:** Learning to manipulate and print characters based on their ASCII values enhances understanding of how to work with different data types in C++.

## 🔗 Additional Resources
- [Coding Ninjas: Alpha-Ramp](https://www.naukri.com/code360/problems/alpha-ramp_6581888?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this practice question in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day25%20-%20Pattern%20-%2016%20Alpha-Ramp%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore and master C++ and DSA, sharing my progress and insights along the way!
