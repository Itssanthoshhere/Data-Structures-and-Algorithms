# Practiced a Question on Sorting Techniques - Selection Sort in C++

Welcome to Day 72 of my C++ and DSA learning journey! Today, I focused on solving a problem using the **Selection Sort** algorithm. This exercise helped me understand in-place sorting techniques and solidified my grasp on one of the simplest yet foundational sorting algorithms.

## 📚 Topic Covered
- **Sorting Techniques:** Selection Sort is an elementary sorting algorithm that introduces the concept of selecting the smallest (or largest) element from the unsorted part of the array and placing it in its correct position.

## 📝 Problem Statement
### Problem: Sort an Unsorted Array Using Selection Sort

Given an unsorted array of size `N`, sort the array in increasing order using the Selection Sort algorithm.

### Example
- **Input:** `arr[] = {4, 1, 3, 9, 7}`
- **Output:** `1 3 4 7 9`

### Explanation
Selection Sort repeatedly selects the smallest element from the unsorted part of the array and swaps it with the first element of the unsorted portion. This process continues until the array is sorted.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

// Function to find the minimum element's index in the unsorted part of the array
int select(int arr[], int i, int n) {
    int minIdx = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[minIdx]) {
            minIdx = j;
        }
    }
    return minIdx;
}

// Function to perform Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = select(arr, i, n);
        swap(arr[i], arr[minIdx]); // Swap the found minimum with the first unsorted element
    }
}

int main() {
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    selectionSort(arr, n);
    
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
```

## 🗝️ Key Learnings
- **Time Complexity:**
  - Best, Worst, and Average Case: **O(N²)**.
  - This is because the algorithm involves nested loops for finding the minimum element in the unsorted portion.
- **Space Complexity:** **O(1)**, as Selection Sort works in-place and doesn't require additional memory.
- **In-Place Sorting:** Selection Sort is ideal for educational purposes to demonstrate how sorting can be performed without additional space.

## 🔗 Additional Resources
- [GeeksforGeeks: Selection Sort](https://www.geeksforgeeks.org/problems/selection-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=selection-sort)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day72%20-%20Sorting%20Techniques%20-%20Sorting-I%20-%20Selection%20Sort/Selection_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I dive deeper into advanced sorting algorithms and explore their efficiencies in upcoming days!
