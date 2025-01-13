# Practiced a Question on Sort Colors Without Library Sort Function

Welcome to Day 95 of my C++ and DSA learning journey! Today, I focused on solving the **Sort Colors** problem using the Dutch National Flag algorithm. This problem was a fantastic exercise to practice in-place sorting techniques and understand efficient array manipulations.

## 📚 Topic Covered
- **In-Place Sorting:** Implementing the Dutch National Flag algorithm to sort an array without using additional space.
- **Three-Pointer Technique:** Leveraging multiple pointers (`low`, `mid`, `high`) to efficiently rearrange elements in a single pass.

## 📝 Problem Statement
### Problem: Sort Colors
Given an array of integers containing `0`, `1`, and `2` (representing colors red, white, and blue), sort the array such that objects of the same color are adjacent, in the order red, white, and blue.

### Example
- **Input:** nums = [2, 0, 2, 1, 1, 0]  
- **Output:** [0, 0, 1, 1, 2, 2]  
**Explanation:** The array is sorted so that all `0s` (red) come first, followed by `1s` (white), and then `2s` (blue).

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            mid++;
        } else { // nums[mid] == 2
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    cout << "Before sorting: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    sortColors(nums);

    cout << "After sorting: ";
    for (int num : nums) cout << num << " ";
    cout << endl;

    return 0;
}
```

## 🗝️ Key Learnings
- **Efficient Array Manipulation:** Sorting the array in-place with `O(n)` time complexity and `O(1)` space complexity.
- **Three-Pointer Algorithm:** Managing three pointers (`low`, `mid`, `high`) to rearrange elements efficiently without additional storage.
- **Algorithm Design:** Understanding the importance of identifying patterns in problems to design optimal solutions.

## 🔗 Additional Resources
- [LeetCode: Sort Colors](https://leetcode.com/problems/sort-colors/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/)
- [Coding Ninjas: Array Sorting Problems](https://www.codingninjas.com/codestudio/problems/sort-the-array-of-0-s-1-s-and-2-s_631055)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day95%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Sort%20the%20array%20of%200's%2C%201's%20and%202's/Sort_the_array_of_0's%2C1's_and_2's.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to refine my skills in C++ and DSA! 🚀

---
