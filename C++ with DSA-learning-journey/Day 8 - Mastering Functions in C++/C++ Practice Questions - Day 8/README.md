# Day 8: Continuing the Learning Journey of Pass by Reference and Value in C++

Welcome to Day 8 of my C++ and DSA learning journey! Today, I delved deeper into the concept of passing arguments to functions by reference and by value. This is a fundamental concept in C++ that plays a crucial role in how data is managed within a program.

## 📚 Topic Covered
- **Pass by Value:** When a function receives a copy of the argument's value. Changes made to the parameter inside the function do not affect the original argument.
- **Pass by Reference:** When a function receives a reference to the argument, allowing it to modify the original variable directly.

## 📝 Problem Statement
### Problem: Pass by Reference and Value

Given two integers, `a` and `b`, the goal is to increment `a` by 1 using pass by value, and increment `b` by 2 using pass by reference. This exercise illustrates the difference in behavior between these two methods of passing arguments.

### Example
- **Input:** `a = 1`, `b = 2`
- **Output:** `a = 2`, `b = 4`

### Explanation
- `a` is passed by value, so the increment operation affects only the local copy of `a`.
- `b` is passed by reference, so the increment operation modifies the original value of `b`.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

void modifyValues(int a, int &b) {
    a += 1;  // Pass by value - only modifies local copy
    b += 2;  // Pass by reference - modifies the original value
}

int main() {
    int a = 1;
    int b = 2;
    
    modifyValues(a, b);
    
    cout << "a: " << a << endl;  // Outputs: a: 1 (unchanged)
    cout << "b: " << b << endl;  // Outputs: b: 4 (changed)
    
    return 0;
}
```

## 🗝️ Key Learnings
- **Pass by Value:** Useful when you want to protect the original data from modification.
- **Pass by Reference:** Efficient for large data structures and necessary when you want to modify the original data.

## 🔗 Additional Resources
- [GeeksforGeeks: Pass by Value vs. Pass by Reference](https://www.geeksforgeeks.org/problems/pass-by-reference-and-value/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pass-by-reference-and-value)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day%208%20-%20Mastering%20Functions%20in%20C%2B%2B).

---

# My 100 Days of Code Challenge
I’m documenting my journey through the Striver's A2Z DSA Course, where I solve problems daily and solidify my understanding of C++ and Data Structures.

Feel free to follow along and share your thoughts!

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
