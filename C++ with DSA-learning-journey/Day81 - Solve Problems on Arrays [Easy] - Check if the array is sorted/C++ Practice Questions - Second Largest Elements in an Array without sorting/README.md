# Practiced a Question on Problems of Arrays [Easy] - Check if the Array is Sorted and Rotated in C++

Welcome to Day 81 of my C++ and DSA learning journey! Today, I focused on solving a problem that involved checking whether an array is sorted and rotated. This problem was a great exercise in understanding array properties and leveraging modular arithmetic to handle rotated arrays effectively.

## 📚 Topic Covered
- **Arrays & Rotation:** This problem helped me explore how to check if an array was originally sorted and then rotated. It also emphasized the importance of identifying "breaks" in the array where the current element is greater than the next one.

## 📝 Problem Statement
### Problem: Check if the Array is Sorted and Rotated

Given an integer array, return true if it was originally sorted in non-decreasing order and then rotated some number of positions. Otherwise, return false. The array may contain duplicates.

### Example
- **Input:** nums = [3, 4, 5, 1, 2]
- **Output:** True  
- **Explanation:** [1, 2, 3, 4, 5] is the original sorted array, and after rotating 3 times, we get [3, 4, 5, 1, 2].

### Constraints:
- The array may contain duplicates.
- The array may contain from 1 to \(10^5\) elements.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

bool isSortedAndRotated(vector<int>& nums) {
    int n = nums.size();
    int count = 0;

    // Traverse the array and count the "breaks"
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    // The array is sorted and rotated if there is at most one "break"
    return count <= 1;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    cout << "Is the array sorted and rotated? " << (isSortedAndRotated(nums) ? "True" : "False") << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Array Rotation:** The key insight is understanding how rotations work in an array and how modular arithmetic can help handle the wraparound effect during traversal.
- **Efficient Check:** By counting the "breaks" where a current element is greater than the next one, we can efficiently determine if the array is sorted and rotated.
- **Handling Duplicates:** The solution works even when the array contains duplicates, as long as the array satisfies the rotation condition.

## 🔗 Additional Resources
- [LeetCode: Check if Array is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/)
- [Coding Ninjas: Ninja and the Sorted Check](https://www.naukri.com/code360/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day81%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Check%20if%20the%20array%20is%20sorted/Check_if_the_array_is_sorted.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
