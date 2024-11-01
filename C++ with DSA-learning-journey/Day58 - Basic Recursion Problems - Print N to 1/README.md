# 🚀 Day 58: Basic Recursion - Print N to 1 Using Recursion 🚀

This folder contains code and notes for Day 58 of my Data Structures and Algorithms (DSA) journey, where I explored a classic recursion problem by implementing a function to print numbers from `N` down to `1` without using loops.

## 📝 Problem Statement

The objective is to print numbers from `N` to `1` using a recursive function rather than iterative loops. This problem helps reinforce understanding of recursion's potential to replace loops by leveraging self-repeating functions.

### Example:
- **Input**: `N = 5`
- **Output**: `5 4 3 2 1`

## 💻 Solution Overview

### Approach:
The function recursively prints numbers in decreasing order until the base case is met, where `i < 1`.

### Pseudocode:
```cpp
void f(int i) {
    // Base condition
    if (i < 1) {
        return;
    }
    cout << i << " ";
    f(i - 1); // Recursive call with reduced i
}

int main() {
    int n;
    cin >> n;
    f(n); // Start recursion from N to 1
}
```

### Explanation
1. **Base Case**: When `i` falls below `1`, the function stops, avoiding further recursive calls.
2. **Recursive Call**: Prints the current `i`, then calls the function with `i - 1`, moving closer to the base case.

## 📈 Complexity Analysis
- **Time Complexity**: `O(N)` - Each number from `N` to `1` is printed once.
- **Space Complexity**: `O(N)` - Each recursive call adds to the stack until reaching the base case.

## 🔗 Practice Problem and Resources
- **GeeksforGeeks Problem**: [Print N to 1 Without Loops](https://www.geeksforgeeks.org/problems/print-n-to-1-without-loop/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=print-n-to-1-without-loop)
- **Striver's A2Z DSA Course**: [Striver's A2Z Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🧩 Key Takeaways
- Recursion can replace iterative loops in many sequence-based problems.
- Defining a **base case** is essential to prevent infinite recursion and stack overflow.
- Recursive approaches simplify tasks where loops might otherwise be complex.

## 🌟 Solution on GitHub

Check out my full solution on GitHub: [Day 58 - Basic Recursion Problems](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day58%20-%20Basic%20Recursion%20Problems%20-%20Print%20N%20to%201/Print_N_to_1.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Excited to dive into more recursion challenges and continue advancing through DSA! 🌱
