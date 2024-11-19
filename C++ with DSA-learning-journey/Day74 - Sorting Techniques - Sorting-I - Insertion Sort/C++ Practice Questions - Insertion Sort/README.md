# Practiced a Question on Sorting Algorithms - Insertion Sort in C++

Welcome to Day 74 of my C++ and DSA learning journey! Today, I explored the **Insertion Sort algorithm**, a fundamental and intuitive sorting method. This exercise helped solidify my understanding of sorting techniques and modular programming.

---

## 📚 Topic Covered
- **Sorting Algorithms:** Focused on implementing the Insertion Sort algorithm using a modular approach to improve code readability and reusability.

---

## 📝 Problem Statement

### Problem: Implement Insertion Sort using Modular Functions

Given an array of size `n`, the goal is to sort it in ascending order using the **Insertion Sort algorithm**.  

### Functional Requirements:
1. **`insert(arr, i):`** Places the current element in its correct position in the sorted portion of the array.
2. **`insertionSort(arr, n):`** Iterates through the array and sorts it using the `insert` function.

### Example
#### Input
- **Case 1:** `n = 5, arr[] = {4, 1, 3, 9, 7}`
- **Case 2:** `n = 10, arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}`

#### Output
- **Case 1:** `1 3 4 7 9`
- **Case 2:** `1 2 3 4 5 6 7 8 9 10`

---

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

// Function to place element in correct position
void insert(int arr[], int i) {
    int key = arr[i]; // Current element
    int j = i - 1;

    // Shift elements of arr[0..i-1], that are greater than key
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key; // Place key in the correct position
}

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        insert(arr, i);
    }
}

// Driver code
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

---

## 🗝️ Key Learnings
- **Sorting Fundamentals:** Insertion Sort is efficient for small or nearly sorted datasets.
- **Modular Programming:** Breaking the problem into smaller functions (`insert`, `insertionSort`) improves code clarity and debugging.
- **Complexity Analysis:**
  - **Time Complexity:**
    - Worst & Average Case: **O(n²)** (nested loops).
    - Best Case (Already Sorted): **O(n)**.
  - **Space Complexity:** **O(1)** (in-place sorting).

---

## 🔗 Additional Resources
- [GeeksforGeeks: Insertion Sort](https://www.geeksforgeeks.org/problems/insertion-sort/0?category%5B%5D=Algorithms&page=1)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day74%20-%20Sorting%20Techniques%20-%20Sorting-I%20-%20Insertion%20Sort/Insertion_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Excited to tackle advanced sorting algorithms like Quick Sort and Merge Sort next! 🚀
