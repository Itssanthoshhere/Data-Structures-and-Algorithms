# 🚀 Day 77: Sorting Techniques - Recursive Insertion Sort Algorithm Explained 🚀

Welcome to **Day 77** of my coding journey! Today, I delved into **Recursive Insertion Sort**, an elegant variation of the traditional iterative method. This sorting algorithm uses recursion to simplify the implementation, while maintaining the core logic of Insertion Sort.

## 📋 Problem Statement

Given an array of `N` integers, the task is to sort the array in ascending order using the **Recursive Insertion Sort** algorithm.

### Example 1:
- **Input**: `N = 6, array[] = {13, 46, 24, 52, 20, 9}`  
- **Output**: `9, 13, 20, 24, 46, 52`  

### Example 2:
- **Input**: `N = 5, array[] = {5, 4, 3, 2, 1}`  
- **Output**: `1, 2, 3, 4, 5`  

## 💡 Solution Approach

### Recursive Algorithm Steps:
1. **Base Case**: If the array has only one element, it’s already sorted.
2. **Recursive Step**: 
   - Recursively sort the first `n-1` elements.
   - Insert the `n`th element into its correct position within the sorted portion.

This recursive solution mirrors the iterative Insertion Sort but eliminates explicit loops, making it a great example for understanding recursion.

---

## 📌 Code Example

### C++ Implementation
```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to insert the last element in its correct position
void insertSorted(vector<int> &arr, int n) {
    int key = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}

// Recursive function to perform Insertion Sort
void recursiveInsertionSort(vector<int> &arr, int n) {
    if (n <= 1) return; // Base case: single element is already sorted

    // Sort the first n-1 elements recursively
    recursiveInsertionSort(arr, n - 1);

    // Insert the nth element in its correct position
    insertSorted(arr, n);
}

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    recursiveInsertionSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Time Complexity**:
   - **Worst & Average Case**: `O(N²)` (due to nested comparisons and shifts).
   - **Best Case** (already sorted): `O(N)`.
2. **Space Complexity**:
   - **Recursive Calls**: `O(N)` (stack space for recursion).

---

## 🧩 Key Takeaways

- **Recursive Insertion Sort** replaces loops with recursion, simplifying the logic.
- Although not the most efficient sorting algorithm, it’s excellent for **educational purposes**.
- It emphasizes recursive thinking, a key concept in solving advanced problems.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 77 here: [GitHub - Day77 Recursive Insertion Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day77%20-%20Sorting%20Techniques%20-%20Sorting-II%20-%20Recursive%20Insertion%20Sort/Recursive_Insertion_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Let’s continue this exciting journey of learning and growing! 🚀
