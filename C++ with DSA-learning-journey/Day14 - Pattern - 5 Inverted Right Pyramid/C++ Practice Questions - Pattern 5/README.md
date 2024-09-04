# Practiced a Question on Pattern - 5 Programming in C++

Welcome to Day 14 of my C++ and DSA learning journey! Today, I focused on practicing pattern - 5 (Inverted Right Pyramid) programming by solving the Seeding problem from Coding Ninjas. This problem provided a great opportunity to deepen my understanding of nested loops in C++.

## 📚 Topic Covered
- **Pattern Programming:** Implementing an inverted right pyramid pattern using nested loops in C++. This exercise involved generating a pattern of `*` characters based on the given input size `N`, where the number of stars decreases with each row.

## 📝 Problem Statement
### Problem: Seeding (Pattern - 5: Inverted Right Pyramid)

Sam is planting trees on the upper half of a square field, represented by an inverted right pyramid. For any given integer `N`, the task is to print the top half of the field using `*`.

### Example
- **Input:** `N = 3`
- **Output:**
  ```
  * * *
  * *
  *
  ```

### Explanation
- The program generates an inverted right pyramid pattern of `*` characters. Each row contains decreasing numbers of stars, starting from `N` stars in the first row, `N-1` stars in the second row, and so on, until only one star is printed in the last row.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

void seeding(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the value of N: ";
    cin >> n;
    seeding(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Nested Loops:** Essential for creating complex patterns. Mastering nested loops is key for generating different patterns, such as the inverted right pyramid.
- **Pattern Programming:** Helps in visualizing loops and understanding how changes in the loop structure affect the output. It's a valuable exercise for strengthening logic and problem-solving skills in programming.

## 🔗 Additional Resources
- [Coding Ninjas: Seeding Problem](https://www.naukri.com/code360/problems/seeding_6581892?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_patternproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day14%20-%20Pattern%20-%205%20Inverted%20Right%20Pyramid).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
