# Day 3: Continuing the Learning Journey

## 📚 Today's Practice Question

### Problem: Decision Making with If-Else
*Platform:* [GeeksforGeeks](https://practice.geeksforgeeks.org/)

**Description:**

Given two integers, `n` and `m`, the task is to check the relation between `n` and `m` by comparing them. You need to determine if `n` is lesser, equal, or greater than `m`.

**Examples:**

1. **Input:** `n = 4, m = 8`  
   **Output:** `lesser`  
   **Explanation:** Since 4 < 8, the function should return "lesser".

2. **Input:** `n = 8, m = 8`  
   **Output:** `equal`  
   **Explanation:** Since 8 = 8, the function should return "equal".

3. **Input:** `n = 10, m = 3`  
   **Output:** `greater`  
   **Explanation:** Since 10 > 3, the function should return "greater".

**Your Task:**

Complete the function `compareNM()` which takes two integers `n` and `m` as input parameters and returns a string:
- `"lesser"` if `n < m`
- `"equal"` if `n == m`
- `"greater"` if `n > m`

---

### 🛠 Solution

```cpp
class Solution {
public:
    string compareNM(int n, int m) {
        if (n < m) {
            return "lesser";
        } else if (n == m) {
            return "equal";
        } else {
            return "greater";
        }
    }
};
```

---

### 🚀 What I Learned

- Reinforced my understanding of conditional statements using `if-else`.
- Practiced writing a simple function to compare two values and return a corresponding result.

### 🔗 GitHub Repository

You can find the complete code for today's problem [here](https://github.com/Itssanthoshhere/DSA/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day%203%20-%20Mastering%20Conditional%20Statements%20in%20C%2B%2B). 

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
