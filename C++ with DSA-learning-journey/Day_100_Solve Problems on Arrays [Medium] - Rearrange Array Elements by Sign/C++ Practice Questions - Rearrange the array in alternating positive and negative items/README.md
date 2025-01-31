# 🏆 Day 100: Solved "Rearrange Array Elements by Sign" in C++

Welcome to **Day 100** of my **C++ and DSA learning journey**! 🎉 Today, I tackled an interesting **array manipulation problem** that required **rearranging an array** while maintaining a specific order. This problem strengthened my **two-pointer technique** and **array traversal skills**.

---

## 📚 Topic Covered  
- **Two-Pointer Technique:** Used to efficiently place positive and negative numbers in alternate positions.  
- **Array Manipulation:** Ensured relative ordering was preserved while rearranging elements.  
- **Optimized Approach:** Solved the problem in **O(N) time complexity** using additional space.  

---

## 📝 Problem Statement  
### Problem: Rearrange Array Elements by Sign  

Given an array `nums` of even length consisting of an equal number of positive and negative integers, the task is to rearrange it such that:  
✔ Every consecutive pair of integers has opposite signs.  
✔ The order of elements with the same sign is preserved.  
✔ The first element is positive.  

---

### 🔹 Example  
#### **Input:**  
```cpp
nums = [3, 1, -2, -5, 2, -4]
```
#### **Output:**  
```cpp
[3, -2, 1, -5, 2, -4]
```

#### **Explanation:**  
- The rearranged array ensures alternating **positive** and **negative** numbers while maintaining their **original relative order**.

---

## 💻 Code Implementation  

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> pos, neg, result;
    
    // Separate positive and negative numbers
    for (int num : nums) {
        if (num > 0) pos.push_back(num);
        else neg.push_back(num);
    }

    // Merge them in alternating order
    for (int i = 0; i < pos.size(); i++) {
        result.push_back(pos[i]);
        result.push_back(neg[i]);
    }

    return result;
}

int main() {
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    
    vector<int> rearranged = rearrangeArray(nums);

    // Print output
    for (int num : rearranged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

---

## 🗝️ Key Learnings  
✔ **Efficient O(N) Approach:** Used extra space to store positive and negative numbers separately.  
✔ **Maintains Relative Order:** Preserved the input order while ensuring an alternating sequence.  
✔ **Array Traversal & Manipulation:** Improved understanding of **array restructuring** and **indexing techniques**.  

---

## 🔗 Additional Resources  
- [LeetCode: Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/)  
- [Coding Ninjas: Alternate Numbers Problem](https://www.naukri.com/code360/problems/alternate-numbers_6783445?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM)  
- [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

---

## 🛠️ Check out the Code  
The complete solution is available in my **GitHub repository**:  
🔗 [GitHub - Day 100: Rearrange Array Elements by Sign]([https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day_100_Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Rearrange%20Array%20Elements%20by%20Sign](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day_100_Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Rearrange%20Array%20Elements%20by%20Sign/Rearrange_Array_Elements_by_Sign.cpp))  

---

## 🔗 Connect with Me  
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

🚀 Excited to continue solving more **DSA problems** and refining my **C++ skills**! 🎯  

---
