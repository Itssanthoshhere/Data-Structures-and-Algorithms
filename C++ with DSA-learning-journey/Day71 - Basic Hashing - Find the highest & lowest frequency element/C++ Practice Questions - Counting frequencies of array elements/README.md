# Practiced a Medium-Level Problem: Frequency of the Most Frequent Element

Welcome to Day 71 of my C++ and DSA learning journey! Today, I worked on an interesting problem involving array manipulation, focusing on optimizing the solution with a sliding window technique.

## 📚 Topic Covered
- **Sliding Window Technique:** This problem leverages the sliding window technique to determine the maximum frequency of any element in an array after performing a limited number of increment operations.
- **Array Manipulation:** Optimized solution that involves sorting and maintaining valid ranges for performance efficiency.

## 📝 Problem Statement
### Problem: Frequency of the Most Frequent Element

Given an array of integers `nums` and an integer `k`, you are allowed to perform at most `k` increment operations on the array. The task is to find the maximum frequency of any element that can be achieved by making these modifications.

### Example
1. **Input:** `nums = [1, 2, 4], k = 5`  
   **Output:** `3`  
   **Explanation:** We can increment elements to get `[4, 4, 4]`, resulting in a maximum frequency of `3`.

2. **Input:** `nums = [1, 4, 8, 13], k = 5`  
   **Output:** `2`  
   **Explanation:** With optimal increments, we achieve a maximum frequency of `2`.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxFrequency(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int left = 0, right = 0, maxFreq = 0;
    long long total = 0;

    while (right < nums.size()) {
        total += nums[right];
        
        while (nums[right] * (right - left + 1) > total + k) {
            total -= nums[left];
            left++;
        }

        maxFreq = max(maxFreq, right - left + 1);
        right++;
    }

    return maxFreq;
}

int main() {
    vector<int> nums = {1, 2, 4};
    int k = 5;
    cout << "Maximum frequency: " << maxFrequency(nums, k) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Sliding Window Efficiency:** Using a sliding window helps in keeping the valid range, allowing us to avoid unnecessary computations and achieve an optimal time complexity of `O(n log n)`.
- **Real-World Application:** This problem illustrates the importance of efficiency when working with constraints, especially in data-heavy applications.
- **Optimization Insights:** Understanding how to optimize array manipulations through techniques like sorting and sliding windows is essential for improving performance.

## 🔗 Additional Resources
- [LeetCode Problem: Frequency of the Most Frequent Element](https://leetcode.com/problems/frequency-of-the-most-frequent-element/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day71%20-%20Basic%20Hashing%20-%20Find%20the%20highest%20%26%20lowest%20frequency%20element/Find_the_highest_%26_lowest%20frequency_element.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue exploring C++ and DSA!
