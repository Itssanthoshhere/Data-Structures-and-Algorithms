# Practiced a Question on Arrays [Easy] - Remove Duplicates from Sorted Array in C++

Welcome to Day 82 of my C++ and DSA learning journey! Today, I tackled an interesting array problem, which focuses on removing duplicates from a sorted array. This exercise helped me strengthen my understanding of in-place array manipulation and efficient algorithm design.

---

## 📚 Topic Covered
- **In-Place Array Manipulation:** Efficiently modifying an array without using extra space.
- **Two-Pointer Technique:** A commonly used method to solve array-related problems with reduced time and space complexity.

---

## 📝 Problem Statement
### Problem: Remove Duplicates from Sorted Array

Given a sorted array, the goal is to remove duplicates **in-place** such that each unique element appears only once. The function should return the number of unique elements (`k`) while ensuring the array's relative order remains unchanged.

### Example
- **Input:** [1, 1, 2]  
  **Output:** `k = 2`, Modified array: [1, 2, ...]

- **Input:** [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]  
  **Output:** `k = 5`, Modified array: [0, 1, 2, 3, 4, ...]

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.size() == 0) return 0;

    int i = 0; // Pointer to track unique elements
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++; // Move to the next position for unique element
            nums[i] = nums[j]; // Replace duplicate with unique element
        }
    }
    return i + 1; // Return the count of unique elements
}

int main() {
    vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int k = removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;
    cout << "Modified array: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}
```

---

## 🗝️ Key Learnings
1️⃣ **Two-Pointer Technique:** The method significantly reduces space complexity by manipulating the array in place.  
2️⃣ **Time Complexity:** The array is traversed once, making the solution efficient with a time complexity of **O(n)**.  
3️⃣ **Sorted Array Property:** Utilizing the sorted property simplifies duplicate detection.

---

## 🔗 Additional Resources
- [LeetCode Problem: Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  
- [Coding Ninjas Practice Problem](https://www.naukri.com/code360/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse)  

---

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day82%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Remove%20duplicates%20from%20Sorted%20array/Remove_the_duplicates_from_Sorted_array.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Excited to tackle more problems and improve my problem-solving skills! 🚀
