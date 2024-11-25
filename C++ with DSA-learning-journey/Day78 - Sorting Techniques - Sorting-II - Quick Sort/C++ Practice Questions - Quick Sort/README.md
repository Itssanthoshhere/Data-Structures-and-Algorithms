# Practiced a Question on Quick Sort - Divide and Conquer Algorithm in C++

Welcome to Day 78 of my C++ and DSA learning journey! Today, I tackled a problem on implementing the **Quick Sort Algorithm**, a classic sorting technique based on the **Divide and Conquer** paradigm. This exercise sharpened my skills in recursive problem-solving and array partitioning.

---

## 📚 Topic Covered
- **Quick Sort Algorithm**: Understanding and implementing the Quick Sort algorithm, which uses a pivot to partition the array into smaller subarrays and sorts them recursively.
- **Partitioning**: Using the last element as the pivot and arranging elements such that values less than or equal to the pivot precede it and values greater than the pivot follow it.

---

## 📝 Problem Statement

### Problem: Quick Sort  
Sort an array `arr[]` in ascending order using the Quick Sort algorithm.

### Approach:  
- Select the **last element** as the pivot.
- Partition the array:
  - Elements ≤ pivot move to its left.
  - Elements > pivot move to its right.
- Recursively apply Quick Sort to the left and right subarrays.

---

### Example Input and Output  

#### Example 1:  
**Input**:  
`arr[] = [4, 1, 3, 9, 7]`  
**Output**:  
`[1, 3, 4, 7, 9]`

#### Example 2:  
**Input**:  
`arr[] = [5, 5, 5, 5]`  
**Output**:  
`[5, 5, 5, 5]`

---

## 💻 Code Implementation  

```cpp
#include <iostream>
using namespace std;

// Partition function
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choosing the last element as pivot
    int i = low - 1;       // Index for smaller element
    
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place pivot in correct position
    return (i + 1);
}

// Quick Sort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // Partition index
        quickSort(arr, low, pi - 1);        // Sort left subarray
        quickSort(arr, pi + 1, high);       // Sort right subarray
    }
}

// Utility function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 1, 3, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    quickSort(arr, 0, n - 1);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}
```

---

## 🗝️ Key Learnings
- **Pivot Selection**: The choice of pivot affects the partitioning efficiency and overall algorithm performance.  
- **Recursive Divide and Conquer**: Breaking down the problem into smaller subproblems is an effective strategy in sorting algorithms.  
- **Time Complexity**:  
  - **Average Case**: O(𝑛 𝑙𝑜𝑔 𝑛)  
  - **Worst Case**: O(𝑛²) when the pivot is poorly chosen.

---

## 🔗 Additional Resources
- [GeeksforGeeks: Quick Sort](https://www.geeksforgeeks.org/quick-sort/)
- [Coding Ninjas: Quick Sort](https://www.naukri.com/code360/problems/quick-sort_983625)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out the Code  
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day78%20-%20Sorting%20Techniques%20-%20Sorting-II%20-%20Quick%20Sort/Quick_Sort.cpp)

---

## 🔗 Connect with Me  
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to learn and explore C++ and DSA! 🚀
