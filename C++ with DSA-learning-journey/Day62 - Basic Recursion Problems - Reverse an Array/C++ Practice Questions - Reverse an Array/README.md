# Reverse an Array - C++ Practice

This repository contains the solution to the problem **"Reverse an Array"** using C++. The problem is a fundamental exercise to manipulate arrays efficiently and helps improve understanding of array operations and in-place algorithms.

## Problem Statement
The task is to reverse an array of integers in place. The array `[1, 2, 3, 4]` should be reversed to `[4, 3, 2, 1]`.

### Example
For the input:
```cpp
arr = {1, 2, 3, 4}
```

**Output:**
```cpp
arr = {4, 3, 2, 1}
```

## Algorithm
- We reverse the array in place by swapping elements from the beginning of the array with those at the end.
- The process involves:
  1. Identifying the size of the array.
  2. Iterating through the first half of the array and swapping each element with its corresponding element from the end.

### Steps:
1. Define a function `reverseArray(vector<int> &arr)` that takes a reference to a vector of integers as input.
2. Use a loop to iterate over the first half of the array.
3. For each iteration, swap the element at the current index with the corresponding element from the end of the array.
4. The process continues until the middle of the array is reached.

### Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to reverse an array in place
void reverseArray(vector<int> &arr) {
    int start = 0;
    int end = arr.size() - 1;
    
    while (start < end) {
        swap(arr[start], arr[end]); // Swap the elements
        start++;  // Move forward in the array
        end--;    // Move backward in the array
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    
    reverseArray(arr);  // Reverse the array
    
    // Output the reversed array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

## Key Takeaways
- **Time Complexity:** O(n), where n is the number of elements in the array.
- **Space Complexity:** O(1), as the array is reversed in place without using extra space.
- Mastering this technique is essential for optimizing memory usage and improving problem-solving skills.

## Additional Resources
- **GeeksforGeeks Problem:** [Reverse an Array - GeeksforGeeks](https://www.geeksforgeeks.org/problems/reverse-an-array/0)
- **Striver's A2Z DSA Course/Sheet:** [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## About
This repository is part of my ongoing learning journey in Data Structures and Algorithms (DSA) using C++. 

Feel free to explore, contribute, or learn from the provided solutions. Let's connect and grow together in this programming journey!

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
