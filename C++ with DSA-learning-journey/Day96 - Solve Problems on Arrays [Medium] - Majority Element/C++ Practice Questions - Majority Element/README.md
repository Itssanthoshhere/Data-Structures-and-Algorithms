# 🏆 Practiced a DSA Problem - Majority Element in C++

Welcome to **Day 96** of my **C++ and DSA learning journey**! Today, I worked on an interesting problem: **Majority Element** using the **Boyer-Moore Voting Algorithm**. This problem helped me understand **efficient algorithms for finding the most frequent element in an array** while maintaining optimal time and space complexity. 🚀  

---

## 📚 Topic Covered
- **Array Processing:** The problem requires finding the majority element in an array.
- **Efficient Algorithm:** Used the **Boyer-Moore Voting Algorithm** to optimize the solution.
- **Time Complexity:** Achieved an **O(n) solution** with **O(1) space complexity**.

---

## 📝 Problem Statement

### Problem: **Majority Element**

Given an array **nums** of size **n**, return the majority element.  
The **majority element** is the one that appears more than **⌊n / 2⌋ times**.  
It is guaranteed that the majority element always exists in the array.

### Example
#### **Input & Output**
```cpp
Input: nums = [3,2,3]
Output: 3

Input: nums = [2,2,1,1,1,2,2]
Output: 2
```

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums) {
    int candidate = 0, count = 0;
    
    for (int num : nums) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }
    
    return candidate;
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority Element: " << majorityElement(nums) << endl;
    return 0;
}
```

---

## 🗝️ Key Learnings
✅ **Optimized Approach:** The **Boyer-Moore Voting Algorithm** is an optimal way to find the majority element in **O(n) time** and **O(1) space**.  
✅ **Dynamic Counter:** Maintains a **candidate element** and adjusts the **counter dynamically** to identify the majority element.  
✅ **Guaranteed Existence:** Since the problem guarantees that the majority element always exists, the **final result is always correct**.  

---

## 🔗 Additional Resources
- [LeetCode - Majority Element](https://leetcode.com/problems/majority-element/)  
- [Coding Ninjas - Majority Element](https://www.naukri.com/code360/problems/majority-element_6783241?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/)  

---

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day96%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Majority%20Element/Majority_Element.cpp).  

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Excited to solve more **Array and Searching** problems and optimize my DSA approach! 🔥  

---
