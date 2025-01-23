# 🏆 Practiced a Question on Kadane’s Algorithm - Maximum Subarray Sum  

Welcome to **Day 97** of my **C++ and DSA learning journey!** 🚀 Today, I focused on solving a fundamental problem: **Maximum Subarray Sum** using **Kadane’s Algorithm**. This problem is widely used in dynamic programming and helps in understanding how to optimize subarray-related problems efficiently.  

## 📚 Topic Covered  
- **Kadane’s Algorithm**: A greedy algorithm used to find the contiguous subarray with the largest sum.  
- **Dynamic Programming**: Helps in optimizing subarray-related problems by avoiding recomputation.  

## 📝 Problem Statement  
### 🧩 Problem: Maximum Subarray Sum  
Given an integer array `nums`, find the contiguous subarray (containing at least one number) that has the **largest sum**, and return the sum.  

### 📊 Example  
#### ✅ Example 1:  
**Input:** `nums = [-2,1,-3,4,-1,2,1,-5,4]`  
**Output:** `6` (Subarray `[4,-1,2,1]`)  

#### ✅ Example 2:  
**Input:** `nums = [5,4,-1,7,8]`  
**Output:** `23` (Subarray `[5,4,-1,7,8]`)  

## 💡 Solution Approach (Kadane’s Algorithm)  
1. **Initialize**:  
   - `sum = 0` (to keep track of the current subarray sum)  
   - `maxi = INT_MIN` (to store the maximum subarray sum found so far)  
2. **Iterate through the array**:  
   - Add the current element to `sum`.  
   - If `sum` exceeds `maxi`, update `maxi`.  
   - If `sum` becomes negative, reset it to `0` (as a negative sum won’t contribute to the max subarray).  
3. **Return `maxi`**, which contains the maximum subarray sum.  

## 💻 Code Implementation  

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum(vector<int>& nums) {
    int sum = 0, maxi = INT_MIN;
    
    for (int num : nums) {
        sum += num;
        maxi = max(maxi, sum);
        if (sum < 0) sum = 0; // Reset sum if it becomes negative
    }
    
    return maxi;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum Subarray Sum: " << maxSubarraySum(nums) << endl;
    return 0;
}
```

## 🗝️ Key Learnings  
🔹 **Time Complexity**: `O(n)` – The algorithm processes each element once.  
🔹 **Space Complexity**: `O(1)` – Uses only constant extra space.  
🔹 **Concepts Used**: **Dynamic Programming, Greedy Approach**.  

## 🔗 Additional Resources  
- 📌 **LeetCode Problem**: [Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)  
- 📌 **Coding Ninjas Problem**: [Maximum Subarray Sum](https://www.naukri.com/code360/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website)  
- 📌 **Striver’s A2Z DSA Course/Sheet**: [Kadane’s Algorithm](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

## 🛠️ Check out the Code  
Find my complete solution in my **GitHub repository**:  
🔗 [GitHub - Maximum Subarray Sum (Kadane’s Algorithm)](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day97%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Maximum%20Subarray%20Sum%20(Kadane's%20Algorithm%20)/Maximum_Subarray_Sum.cpp)  

---

## 🔗 Connect with Me  
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

I’ll continue solving **Dynamic Programming and Subarray problems** to strengthen my problem-solving skills. Stay tuned for more updates! 🚀  

 ---
 
