# Practised a Question on Valid Palindrome - C++ Solution

This repository contains a C++ solution to the **Valid Palindrome** problem, which is a common string manipulation exercise often encountered in coding interviews and on platforms like LeetCode. The solution uses an efficient two-pointer technique to determine whether a given string is a palindrome after processing it for alphanumeric characters and case-insensitivity.

## Problem Description

**Platform**: [LeetCode](https://leetcode.com/problems/valid-palindrome/)

Given a string `s`, we need to determine if it reads the same forward and backward after:
- Converting all characters to lowercase
- Removing non-alphanumeric characters

**Examples**:
1. Input: `"A man, a plan, a canal: Panama"`  
   Output: `true`  
   Explanation: After removing non-alphanumeric characters and making lowercase, it reads `"amanaplanacanalpanama"`.

2. Input: `"race a car"`  
   Output: `false`  
   Explanation: After processing, it reads `"raceacar"`, which is not a palindrome.

## Solution Approach

### Two-Pointer Technique

This solution implements a two-pointer technique, which is both time-efficient and avoids using extra space:
1. **Initialize two pointers**: 
   - `left` starts from the beginning of the string.
   - `right` starts from the end of the string.
2. **Character Filtering**:
   - Move each pointer until they point to alphanumeric characters. Skip any non-alphanumeric characters.
3. **Comparison**:
   - Convert characters to lowercase and compare. If characters don’t match, the string is not a palindrome.
4. **Return Result**:
   - If all characters match in a mirrored fashion, return `true`; otherwise, return `false`.

### Complexity Analysis
- **Time Complexity**: O(n), where n is the length of the string. Each character is processed at most once.
- **Space Complexity**: O(1), as the algorithm operates in-place without additional data structures.

## Code

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        
        while (left < right) {
            // Move left pointer to the next alphanumeric character
            while (left < right && !isalnum(s[left])) left++;
            // Move right pointer to the previous alphanumeric character
            while (left < right && !isalnum(s[right])) right--;
            
            // Convert to lowercase and compare
            if (tolower(s[left]) != tolower(s[right])) return false;
            
            left++;
            right--;
        }
        
        return true;
    }
};
```

## Key Takeaways
- **Two-pointer technique** is an efficient approach for palindrome checks and minimizes additional memory usage.
- **String Manipulation**: Understanding how to filter and process characters efficiently is essential for solving palindrome and related problems.
  
## Further Exploration
If interested, you can optimize this approach with additional algorithms for faster processing of large strings, or try solving similar palindrome problems with recursive or iterative methods.

## Additional Resources
- [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [LeetCode Problem Link](https://leetcode.com/problems/valid-palindrome/)

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
