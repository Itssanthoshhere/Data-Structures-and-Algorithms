# Practiced a Question on Pattern - 11 Programming in C++

Welcome to Day 20 of my C++ and DSA learning journey! Today, I practiced a fascinating pattern problem known as the **Binary Number Triangle** (Pattern - 11), which allowed me to deepen my understanding of binary number patterns and nested loops in C++. 

## 📚 Topic Covered
- **Binary Number Triangle Pattern:** The focus was on creating a binary number triangle where the elements in each row alternate between 1 and 0. The complexity lay in controlling this alternation using logical operations in nested loops. This exercise helped reinforce my concepts in loop control and binary patterns.

## 📝 Problem Statement
### Problem: Binary Number Triangle (Pattern - 11)

Aryan and his friends are intrigued by patterns. Given an integer 'N', the task is to print a binary triangle pattern where the numbers alternate between 1 and 0, with each row containing one more number than the previous row.

### Example
- **Input:** N = 4
- **Output:**
  ```
  1  
  0 1  
  1 0 1  
  0 1 0 1
  ```

### Explanation
- The pattern alternates between 1 and 0 in each row. The first row starts with 1, the second with 0, and the pattern alternates dynamically. The rows progressively increase by one element.

## 💻 Code Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;
void pattern11(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 11: Binary Number Triangle Pattern" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern11(n);
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Nested loops are fundamental when working with patterns in programming. The outer loop controls the rows, and the inner loop manages the alternating binary values for each row.
- **Binary Alternation:** Using a simple `start = 1 - start` expression made it easy to alternate between 1 and 0 dynamically, a valuable technique for binary pattern generation.

## 🔗 Additional Resources
- [Coding Ninjas: Binary Number Triangle](https://www.naukri.com/code360/problems/binary-number-triangle_6581890?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day20%20-%20Pattern%20-%2011%20Binary%20Number%20Triangle%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore and master C++ and DSA!
