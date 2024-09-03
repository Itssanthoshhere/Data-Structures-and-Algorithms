# Exploring Pattern 2 - Right-Angled Triangle in C++ 🌟

In this exercise, we explore Pattern 2, which is a right-angled triangle. This pattern is a great exercise for understanding how nested loops work and how to generate patterns programmatically.

### 📋 Pattern Description

**Input:**
- An integer `n`.

**Output:**
- A right-angled triangle of `*` with `n` rows.

**Example:**

For `n = 5`, the output will be:
```
*
* *
* * *
* * * *
* * * * *
```

### 🛠️ Solution Approach

To generate the right-angled triangle pattern, follow these steps:

1. **Nested Loops:** Use nested loops to print the pattern. The outer loop controls the number of rows, while the inner loop controls the number of columns.
2. **Logic:** For each row, print the appropriate number of `*` based on the current row number.
3. **Printing:** Output the `*` in the inner loop for the required number of times.

### 💻 Code Example

Here's a sample C++ code to generate the right-angled triangle pattern:

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    // Generating the pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
```

### 📈 Output

When the above code is executed with `n = 5`, it produces:

```
Pattern - 2
5

*
* *
* * *
* * * *
* * * * *
```

### 🚀 Next Steps

Continue practicing different patterns to enhance your understanding of loop control structures and pattern generation. Each pattern presents new challenges and helps in better grasping programming concepts.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue my journey through pattern programming in C++! More complex patterns are up next, and I’m excited to share my progress.
