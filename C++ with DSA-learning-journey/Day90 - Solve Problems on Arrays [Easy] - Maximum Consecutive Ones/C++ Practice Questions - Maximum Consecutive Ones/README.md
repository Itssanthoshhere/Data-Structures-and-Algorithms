# Practiced a Question on Problems of Arrays [Easy] - Maximum Consecutive Ones

Welcome to Day 90 of my C++ and DSA learning journey! Today, I tackled an exciting problem focused on finding the maximum number of consecutive 1's in a binary array. This problem allowed me to enhance my understanding of array traversal and maintaining dynamic variables to achieve efficient solutions.

## 📚 Topic Covered
- **Array Traversal:** Explored traversal techniques to efficiently iterate through binary arrays.
- **Dynamic Variable Management:** Utilized dynamic variables to track results and reset counters as needed.

## 📝 Problem Statement
### Problem: Maximum Consecutive Ones

Given a binary array `nums`, return the maximum number of consecutive 1's in the array.

### Example
- **Input:** `nums = [1, 1, 0, 1, 1, 1]`
- **Output:** `3`
- **Explanation:** The array contains three consecutive 1's as the longest streak.

### Additional Example
- **Input:** `nums = [1, 0, 1, 1, 0, 1]`
- **Output:** `2`
- **Explanation:** The longest consecutive streak of 1's is 2.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0, maxi = 0; // Initialize counter and maximum streak variables
    
    for (int num : nums) {
        if (num == 1) {
            cnt++;          // Increment counter for consecutive 1's
            maxi = max(maxi, cnt); // Update maximum streak
        } else {
            cnt = 0;        // Reset counter if 0 is encountered
        }
    }
    return maxi;            // Return the maximum streak of 1's
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "Maximum consecutive ones: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Dynamic Tracking of Values:** Learned how to dynamically maintain and update variables during array traversal.
- **Optimized Solutions:** The problem was solved in a single pass through the array with constant space, ensuring efficiency.
- **Handling Edge Cases:** Gained insights into scenarios where the array contains no 1's or is entirely filled with 1's.

## ⏳ Time and Space Complexity
- **Time Complexity:** O(n) – Single pass through the array.
- **Space Complexity:** O(1) – Constant space usage.

## 🔗 Additional Resources
- [LeetCode: Max Consecutive Ones](https://leetcode.com/problems/max-consecutive-ones/description/)
- [Coding Ninjas: Maximum Consecutive Ones](https://www.naukri.com/code360/problems/maximum-consecutive-ones_3843993?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day90%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Maximum%20Consecutive%20Ones/Maximum_Consecutive_Ones.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Excited to solve more problems and continue improving my coding skills! 🚀
