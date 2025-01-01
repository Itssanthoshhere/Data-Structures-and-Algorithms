# Practiced a Question on Moderate DSA - Longest Subarray with Sum K (Positives + Negatives) in C++

Welcome to Day 93 of my DSA learning journey! Today, I tackled an exciting array problem that dives into the optimization and use of hashmaps. The task was to find the length of the longest subarray where the sum equals a given value \( K \). It was a great opportunity to practice both problem-solving and optimization techniques.

## 📚 Topic Covered
- **Hashmaps and Prefix Sums:** This problem leveraged the use of hashmaps to store prefix sums for efficient lookups, significantly improving the solution's performance.

## 📝 Problem Statement
### Problem: Longest Subarray with Sum K

Given an array of integers `NUMS` of size \( N \) and a target sum \( K \), find the length of the longest subarray whose sum equals \( K \). If no such subarray exists, return 0.

### Example
- **Input:**  
  \( N = 5, K = 4, \text{NUMS} = [1, 2, 1, 0, 1] \)
- **Output:**  
  \( 4 \)
- **Explanation:**  
  The subarrays `[1, 2, 1]` and `[2, 1, 0, 1]` both sum to \( K = 4 \). The longest subarray has a length of 4.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& nums, int K) {
    unordered_map<int, int> prefixSumMap;
    int runningSum = 0, maxLength = 0;

    for (int i = 0; i < nums.size(); i++) {
        runningSum += nums[i];

        // If running sum equals K, update maxLength
        if (runningSum == K) {
            maxLength = i + 1;
        }

        // Check if runningSum - K exists in the prefixSumMap
        if (prefixSumMap.find(runningSum - K) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[runningSum - K]);
        }

        // Store running sum in prefixSumMap if not already present
        if (prefixSumMap.find(runningSum) == prefixSumMap.end()) {
            prefixSumMap[runningSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> nums = {1, 2, 1, 0, 1};
    int K = 4;
    cout << "Length of longest subarray with sum " << K << " is: "
         << longestSubarrayWithSumK(nums, K) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Optimized Approach:** Using hashmaps to store prefix sums reduced the time complexity to \( O(N) \), compared to a brute-force \( O(N^2) \) solution.
- **Handling Edge Cases:** Covered scenarios such as no subarray matching \( K \) and negative numbers.
- **Hashmaps in Action:** Reinforced the use of hashmaps for efficient lookups, which is a fundamental concept in many DSA problems.

## 🔗 Additional Resources
- [GeeksforGeeks: Longest Subarray with Sum K](https://www.geeksforgeeks.org/longest-subarray-with-given-sum-k/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day93%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Longest%20subarray%20with%20sum%20K%20%5BPositives%20%2B%20Negatives%5D/Longest_subarray_with_sum_K%5BPositives%2BNegatives%5D.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to dive deeper into arrays, hashmaps, and DSA! 🚀
