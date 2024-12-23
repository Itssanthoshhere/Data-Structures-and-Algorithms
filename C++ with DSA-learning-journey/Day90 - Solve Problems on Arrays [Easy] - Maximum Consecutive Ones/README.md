# 🚀 Day 90: Solve Problems on Arrays [Easy] - Maximum Consecutive Ones 🚀

Welcome to **Day 90** of my coding journey! Today, I worked on an interesting problem called **Maximum Consecutive Ones**, which focuses on finding the longest streak of `1`s in a binary array. This problem is a great exercise for improving traversal logic and optimization techniques. 🌟

---

## 📋 Problem Explanation

Given a binary array `nums`, the goal is to find the maximum number of consecutive `1`s in the array.

### Example:

- **Input**: `nums = [1, 1, 0, 1, 1, 1]`  
- **Output**: `3`  
- **Explanation**: The array contains a maximum of three consecutive `1`s.

---

## 💡 Solution Approach

### Steps to Solve:

1. Initialize two variables:  
   - `cnt`: Tracks the current streak of consecutive `1`s.  
   - `maxi`: Stores the maximum streak encountered so far.  
2. Traverse the array:  
   - If the current element is `1`, increment `cnt`.  
   - If the current element is `0`, reset `cnt` to `0`.  
3. Continuously update `maxi` to store the larger value between `cnt` and itself.  
4. Return `maxi` as the final result.

---

## 📌 Code Implementation

Here’s the C++ implementation:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int cnt = 0;  // Current streak of 1's
    int maxi = 0; // Maximum streak of 1's

    for (int num : nums) {
        if (num == 1) {
            cnt++;
            maxi = max(maxi, cnt);
        } else {
            cnt = 0; // Reset streak
        }
    }
    return maxi;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << "The maximum consecutive 1's are: " << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Time Complexity**: **O(n)**  
   - We traverse the array once, where `n` is the size of the array.
2. **Space Complexity**: **O(1)**  
   - We use constant extra space.

---

## 🧩 Key Takeaways

- Efficiently solving array problems often requires understanding traversal patterns and maintaining intermediate states (like streaks in this problem).  
- By continuously updating the result, we minimize redundant operations.

---

## 🔗 Additional Resources

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out my code on GitHub

You can find the complete code for Day 90 here:  
[GitHub - Day90 Maximum Consecutive Ones](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day90%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Maximum%20Consecutive%20Ones/Maximum_Consecutive_Ones.cpp)

---

## 🔗 Connect with Me

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Let’s keep exploring, learning, and coding! 🚀
