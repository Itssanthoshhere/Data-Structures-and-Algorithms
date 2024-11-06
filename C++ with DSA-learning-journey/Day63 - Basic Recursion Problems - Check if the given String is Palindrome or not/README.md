# Day 63: Basic Recursion - Check if the Given String is Palindrome or Not

## Problem Overview

Today, we focus on solving the problem of checking if a given string is a palindrome using recursion. A palindrome is a string that reads the same forwards and backwards (e.g., "racecar", "madam").

### Problem Statement

Given a string `s`, we need to determine if it is a palindrome using recursion. The function will compare characters from both ends of the string and move toward the center, returning `true` if the string is a palindrome and `false` otherwise.

### Approach

The problem can be solved recursively by comparing the characters at both ends of the string. If they are equal, we proceed to the next pair. If all pairs match, the string is a palindrome.

1. **Base Condition**: If the index `i` reaches the middle of the string (`i >= n / 2`), the string is confirmed to be a palindrome.
2. **Recursive Step**: Compare the characters at the `i`-th and `n - i - 1`-th positions of the string. If they match, recursively check the next pair of characters.
3. If a mismatch is found at any step, return `false`.

### Code Implementation

```cpp
#include <iostream>
using namespace std;

bool isPalindrome(int i, string &s, int n) {
    // Base condition: If index 'i' has reached or exceeded the middle, it is a palindrome
    if (i >= n / 2) {
        return true;
    }
    // Check if characters at index 'i' and 'n - i - 1' are the same
    if (s[i] != s[n - i - 1]) {
        return false;  // Mismatch found, not a palindrome
    }
    // Recursive call with next index
    return isPalindrome(i + 1, s, n);
}

int main() {
    string s = "racecar";  // Example string
    int n = s.size();
    cout << isPalindrome(0, s, n);  // Check if the string is palindrome
    return 0;
}
```

### Example

1. **Input**: `"racecar"`
   - **Output**: `true`, since `"racecar"` is a palindrome.
   
2. **Input**: `"hello"`
   - **Output**: `false`, since `"hello"` is not a palindrome.

### Complexity Analysis

- **Time Complexity**: `O(N)` – Each recursive call checks one pair of characters. The function makes `N/2` recursive calls, where `N` is the length of the string.
- **Space Complexity**: `O(N)` – Space is required for each recursive call on the stack.

### Key Takeaways

- Recursion provides an elegant and simple approach for string manipulation.
- The problem demonstrates how recursion can break down problems by narrowing the scope in each recursive call.
- This approach avoids the need for loops, making the code more readable and cleaner.

### Additional Resources

- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

### Full Solution

Check out my complete solution and more recursive problems on [GitHub](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day63%20-%20Basic%20Recursion%20Problems%20-%20Check%20if%20the%20given%20String%20is%20Palindrome%20or%20not/Check_if_a_String_is_Palindrome.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as we explore more recursion techniques and solve more interesting problems in the coming days!
