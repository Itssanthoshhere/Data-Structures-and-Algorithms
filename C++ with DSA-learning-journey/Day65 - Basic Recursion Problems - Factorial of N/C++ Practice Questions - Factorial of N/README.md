# Practiced a Question on Basic Recursion - Factorial Numbers Less Than or Equal to N in C++

Welcome to Day 65 of my C++ and DSA learning journey! Today, I focused on solving a problem related to finding all factorial numbers that are less than or equal to a given number `n`. This task was a great exercise in recursion and helped me understand how to break down problems with mathematical concepts.

## 📚 Topic Covered
- **Recursion:** In this problem, we explored how to find all factorial numbers less than or equal to `n`. It provided insights into recursive problem-solving and how to approach such challenges iteratively to optimize performance.

## 📝 Problem Statement
### Problem: Find all Factorial Numbers Less Than or Equal to N

Given a number `n`, the goal is to return a list of all factorial numbers smaller than or equal to `n`.

### Example
- **Input:** n = 6
- **Output:** `1, 2, 6`

### Explanation
- We need to calculate factorial numbers starting from `1!` and check if they are less than or equal to `n`. Once the factorial value exceeds `n`, we stop.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void findFactorials(int n) {
    int fact = 1;
    vector<int> result;
    int i = 1;
    while (fact <= n) {
        result.push_back(fact);
        i++;
        fact *= i;
    }
    
    // Displaying the result
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number n: ";
    cin >> n;
    findFactorials(n);
    return 0;
}
```

## 🗝️ Key Learnings
- **Recursive Thinking:** This problem reinforced the concept of factorials and helped me understand how to implement them efficiently.
- **Iterative Solution:** Using an iterative approach for factorial calculation was optimal for this problem, as it reduced the complexity and made the algorithm more memory efficient compared to a pure recursive solution.
- **Efficient Factorial Calculation:** The factorial values grow rapidly, so understanding how to handle them effectively is crucial when working with larger numbers.

## 🔗 Additional Resources
- [GeeksforGeeks: Factorial Numbers Less Than or Equal to N](https://www.geeksforgeeks.org/problems/find-all-factorial-numbers-less-than-or-equal-to-n3548/0?problemType=functional&difficulty%255B%255D=-1&page=1&query=problemTypefunctionaldifficulty%255B%255D-1page1)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day65%20-%20Basic%20Recursion%20Problems%20-%20Factorial%20of%20N/Factorial_of_N.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
