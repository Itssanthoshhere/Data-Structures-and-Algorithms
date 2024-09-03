# Practiced a Question on Pattern - 1 Programming in C++

Welcome to Day 10 of my C++ and DSA learning journey! Today, I focused on practicing pattern - 1 programming by solving the N-Forest problem from Coding Ninjas. This problem allowed me to further explore loops and iteration, key concepts in programming.

## 📚 Topic Covered
- **Pattern Programming:** Understanding and implementing patterns in a square grid format using nested loops in C++. This exercise involved generating a grid pattern of `*` characters based on the given input size `N`.

## 📝 Problem Statement
### Problem: N-Forest (Pattern - 1)

Sam is working on a project to visualize a forest. For any given integer `N`, the task is to create and display an N-dimensional forest represented as a square grid of `*` characters, with `N` rows and `N` columns.

### Example
- **Input:** `N = 3`
- **Output:**
  ```
  * * *
  * * *
  * * *
  ```

### Explanation
- The program prints a perfect square grid pattern of `*` characters. Each row contains `N` stars, and the process is repeated for `N` rows.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void nForest(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
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
- **Nested Loops:** Essential for generating patterns in programming. Understanding how to effectively use loops within loops is crucial for tasks like pattern generation.
- **Pattern Programming:** A great way to strengthen logical thinking and problem-solving skills. It's particularly useful for visualizing how loops work together to achieve a desired output.

## 🔗 Additional Resources
- [Coding Ninjas: N-Forest Problem](https://www.naukri.com/code360/problems/n-forest_6570177?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)


## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day%2010%20-%20Exploring%20Patterns%20in%20C%2B%2B/Pattern%20-%201).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
