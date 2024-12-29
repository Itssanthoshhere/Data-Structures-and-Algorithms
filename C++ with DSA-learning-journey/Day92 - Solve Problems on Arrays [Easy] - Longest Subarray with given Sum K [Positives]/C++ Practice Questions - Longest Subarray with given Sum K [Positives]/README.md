# Practiced a Problem on Arrays - Longest Subarray with Sum K in C++

Welcome to Day 92 of my C++ and DSA learning journey! Today, I focused on solving a problem related to finding the longest subarray with a given sum `K`. This exercise helped me understand and implement efficient techniques like the sliding window and hashing for array problems.

---

## 📚 Topic Covered
- **Sliding Window Technique:** This problem demonstrated how to use the sliding window efficiently for contiguous subarray problems.
- **Hashing for Prefix Sums:** Using a hash map to store prefix sums optimized the solution, reducing the time complexity compared to brute force approaches.

---

## 📝 Problem Statement

### Problem: Longest Subarray with Sum K

Given an integer array `a` of size `n` and an integer `k`, the task is to find the length of the longest contiguous subarray whose sum equals `k`.

### Example
- **Input:**  
  n = 7, k = 3, a = [1, 2, 3, 1, 1, 1, 1]  
- **Output:**  
  Length of the longest subarray = 3  
- **Explanation:**  
  The longest subarray with sum 3 is `[1, 1, 1]`, which has a length of 3.

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k) {
    unordered_map<int, int> prefixSumMap;
    int currentSum = 0;
    int maxLength = 0;

    for (int i = 0; i < arr.size(); i++) {
        currentSum += arr[i];

        // If the current sum equals k, update maxLength
        if (currentSum == k) {
            maxLength = i + 1;
        }

        // Check if the difference (currentSum - k) exists in the map
        if (prefixSumMap.find(currentSum - k) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[currentSum - k]);
        }

        // Store the current sum in the map if not already present
        if (prefixSumMap.find(currentSum) == prefixSumMap.end()) {
            prefixSumMap[currentSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1};
    int k = 3;

    cout << "Length of the longest subarray with sum " << k << " is: "
         << longestSubarrayWithSumK(arr, k) << endl;

    return 0;
}
```

---

## 🗝️ Key Learnings
- **Prefix Sum Optimization:** Storing prefix sums in a hash map significantly reduces the time complexity by avoiding redundant calculations.
- **Sliding Window Technique:** Understanding how to handle window-based subarray problems is essential for solving similar challenges in arrays.
- **Efficient Problem Solving:** This approach reduced the complexity to \( O(N) \), making it scalable for larger inputs.

---

## 🔗 Additional Resources
- [GeeksforGeeks: Longest Subarray with Sum K](https://www.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=longest-sub-array-with-sum-k)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day92%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Longest%20Subarray%20with%20given%20Sum%20K%20%5BPositives%5D/Longest_Subarray_with_given_Sum_K%5BPositives%5D.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue my C++ and DSA journey! 🚀
