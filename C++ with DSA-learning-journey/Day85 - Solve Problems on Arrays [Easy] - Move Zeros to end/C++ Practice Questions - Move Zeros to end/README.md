# Practiced a Question on Problems of Arrays [Easy] - Move Zeroes to the End

Welcome to Day 85 of my C++ and DSA learning journey! Today, I tackled an interesting problem that focused on array manipulation and optimization techniques. This problem is an excellent example of applying in-place operations and the two-pointer technique for efficient solutions.

---

## 📚 Topic Covered
- **Array Manipulation:** The goal was to move all zeroes in an array to the end while maintaining the relative order of non-zero elements.
- **Two-Pointer Technique:** Efficiently solved the problem with a single traversal of the array.
- **In-Place Operations:** Modified the array without using extra space.

---

## 📝 Problem Statement
### Problem: Move All Zeroes to the End of an Array
Given an integer array `nums`, move all zeroes to the end while maintaining the relative order of non-zero elements. The solution must be in-place.

### Example
- **Input:**  
  `nums = [0, 1, 0, 3, 12]`
- **Output:**  
  `nums = [1, 3, 12, 0, 0]`

### Explanation
The non-zero elements `1`, `3`, and `12` retain their relative order, and all zeroes are moved to the end of the array.

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0; // Pointer for the position to place the next non-zero element

    // Traverse the array
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            // Swap the current element with the non-zero index
            swap(nums[nonZeroIndex], nums[i]);
            nonZeroIndex++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    // Display the modified array
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

---

## 🗝️ Key Learnings
- **Two-Pointer Technique:** A simple yet powerful approach for array problems requiring in-place modifications.
- **In-Place Operation:** Optimized memory usage by avoiding additional data structures.
- **Time Complexity:** Achieved \( O(N) \) with a single traversal of the array.
- **Space Complexity:** Used \( O(1) \) extra space, making the solution efficient.

---

## 🔗 Additional Resources
- [LeetCode: Move Zeroes Problem (283)](https://leetcode.com/problems/move-zeroes/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day85%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Move%20Zeros%20to%20end/Move_Zeros_to_end.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA! 🚀
