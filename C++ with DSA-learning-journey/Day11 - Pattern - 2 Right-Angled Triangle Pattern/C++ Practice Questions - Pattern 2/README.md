# Practiced a Question on Pattern - 2 Programming in C++

Welcome to Day 11 of my C++ and DSA learning journey! Today, I focused on practicing pattern - 2 (Right-Angled Triangle Pattern) programming by solving the N/2-Forest problem from Coding Ninjas. This challenge was a great exercise to deepen my understanding of nested loops in C++.

## 📚 Topic Covered
- **Pattern Programming:** Creating and implementing a right-angled triangle pattern using nested loops in C++. This exercise involved filling the lower triangle of a pattern with `*` characters based on the input size `N`.

## 📝 Problem Statement
### Problem: N/2-Forest (Pattern - 2)

Sam is working on a project to visualize a forest. For any given integer `N`, the task is to create and display the lower triangle of an N-dimensional forest represented as a right-angled triangle pattern of `*` characters.

### Example
- **Input:** `N = 3`
- **Output:**
  ```
  * 
  * *
  * * *
  ```

### Explanation
- The program generates a right-angled triangle pattern where each row contains an increasing number of `*` characters, starting from 1 star in the first row up to `N` stars in the `N`-th row.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the forest (N): ";
    cin >> n;
    nForest(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Crucial for generating patterns in programming. This exercise helped reinforce my understanding of how loops work together to create specific patterns.
- **Pattern Programming:** A valuable way to enhance logical thinking and problem-solving abilities in C++. Practicing such patterns is particularly useful for visualizing loop iterations and their outcomes.

## 🔗 Additional Resources
- [Coding Ninjas: N/2-Forest Problem](https://www.naukri.com/code360/problems/n-2-forest_6570178?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day11%20-%20Pattern%20-%202%20Right-Angled%20Triangle%20Pattern).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to dive deeper into C++ and DSA!
