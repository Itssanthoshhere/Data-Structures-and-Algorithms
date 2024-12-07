# Practiced a Question on Problems of Arrays [Easy] - Rotate Array to the Right by k Steps

Welcome to Day 84 of my C++ and DSA learning journey! Today, I explored an intriguing problem that involved rotating an array to the right by `k` steps. This problem challenged my understanding of array manipulation and optimization techniques using in-place operations.

## 📚 Topic Covered
- **Array Manipulation:** Gained insights into efficient methods for rotating an array using the reversal approach, optimizing both time and space complexity.
- **Problem Optimization:** Explored ways to handle edge cases where `k` is greater than the array size.

## 📝 Problem Statement
### Problem: Rotate Array to the Right by k Steps

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

### Example
- **Input:**  
  `nums = [1, 2, 3, 4, 5, 6, 7], k = 3`
- **Output:**  
  `[5, 6, 7, 1, 2, 3, 4]`
- **Explanation:**  
  After 1 step: `[7, 1, 2, 3, 4, 5, 6]`  
  After 2 steps: `[6, 7, 1, 2, 3, 4, 5]`  
  After 3 steps: `[5, 6, 7, 1, 2, 3, 4]`

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to rotate the array by k steps
void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n; // Handle cases where k >= n

    // Reverse the entire array
    reverse(nums.begin(), nums.end());

    // Reverse the first k elements
    reverse(nums.begin(), nums.begin() + k);

    // Reverse the remaining elements
    reverse(nums.begin() + k, nums.end());
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    rotateArray(nums, k);

    // Display the rotated array
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

## 🗝️ Key Learnings
- **Reversal Technique:** Learned an efficient way to rotate an array using three reverse operations, avoiding the need for extra space.
- **Edge Case Handling:** Understanding how to handle scenarios where `k` is greater than the size of the array (`k % n`).
- **In-Place Operations:** Gained confidence in solving problems without requiring additional memory.

## 🔗 Additional Resources
- [LeetCode: Rotate Array](https://leetcode.com/problems/rotate-array/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day84%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Rotate%20array%20by%20K%20elements/Rotate_array_by_K_elements.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to enhance my C++ and DSA skills!
