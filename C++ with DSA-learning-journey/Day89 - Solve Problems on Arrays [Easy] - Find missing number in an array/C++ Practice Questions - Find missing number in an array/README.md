# Practiced a Question on Efficient Number Finding - Missing Number

Welcome to Day 89 of my C++ and DSA learning journey! Today, I explored an efficient algorithm for solving the **Missing Number** problem. This challenge allowed me to dive deeper into the use of **bitwise operations** for array-related problems, optimizing both time and space complexity.

## 📚 Topic Covered
- **Bitwise Operations:** Leveraging the XOR operation to efficiently solve the missing number problem in an array.
- **Optimized Computation:** Learning how to achieve linear time complexity \(O(n)\) with constant space complexity \(O(1)\).

## 📝 Problem Statement
### Problem: Missing Number
Given an array `nums` containing `n` distinct numbers in the range `[0, n]`, return the number missing from the array.

### Example
1. **Input:** nums = `[3, 0, 1]`  
   **Output:** 2  
   **Explanation:** The range `[0, 3]` is missing the number `2`.  

2. **Input:** nums = `[9, 6, 4, 2, 3, 5, 7, 0, 1]`  
   **Output:** 8  
   **Explanation:** The range `[0, 9]` is missing the number `8`.  

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int missing = n; // Start with n as it does not appear as an index
    for (int i = 0; i < n; i++) {
        missing ^= i ^ nums[i]; // XOR with both index and number
    }
    return missing;
}

int main() {
    vector<int> nums = {3, 0, 1};
    cout << "Missing number is: " << missingNumber(nums) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **XOR Operation:** The XOR of a number with itself is `0`, and XOR with `0` returns the number. This property allowed us to find the missing number efficiently.
- **Optimized Space Usage:** The solution achieves \(O(1)\) space complexity by avoiding additional data structures.
- **Real-World Applications:** Efficient algorithms like this are invaluable when working with large datasets or constrained resources.

## 🔗 Additional Resources
- [LeetCode Problem: Missing Number](https://leetcode.com/problems/missing-number/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [Coding Ninjas Practice: Missing Number](https://www.codingninjas.com/studio/problems/missing-number_6680467)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day89%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20missing%20number%20in%20an%20array/Find_missing_number_in_an_array.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to solve exciting problems in C++ and DSA! 🚀
