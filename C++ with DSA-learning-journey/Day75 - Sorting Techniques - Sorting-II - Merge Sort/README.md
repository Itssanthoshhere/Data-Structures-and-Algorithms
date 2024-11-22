# 🚀 Day 75: Merge Sort Explained 🚀

Welcome to **Day 75** of my coding journey! Today, we're diving into **Merge Sort**, a divide-and-conquer sorting algorithm that’s known for its efficiency and stability. It’s often used in applications that require stable sorting, like database management systems.

## 📋 Problem Explanation

Given an array, our goal is to sort it in ascending order using the Merge Sort algorithm. The process works by dividing the array into smaller sub-arrays, sorting them, and merging them back together in sorted order.

## 💡 Solution Approach

### Divide and Conquer Strategy:
1. **Divide**: The array is divided into two halves recursively until each sub-array contains just one element.
2. **Conquer**: Each sub-array is sorted individually.
3. **Merge**: The sorted sub-arrays are then merged back together in sorted order.

### Merge Sort Process:
1. **Base Case**: If the array has one element, it is already sorted.
2. **Recursive Case**: Split the array into two halves and recursively sort each half.
3. **Merging**: After both halves are sorted, merge them into a single sorted array.

## 📌 Code Example

### C++ Code for Merge Sort

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Merge two sorted sub-arrays into a single sorted array
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);  // Sort the left half
        mergeSort(arr, mid + 1, right);  // Sort the right half
        merge(arr, left, mid, right);  // Merge the sorted halves
    }
}

int main() {
    vector<int> arr = {12, 11, 13, 5, 6, 7};

    cout << "Unsorted Array: ";
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}
```

### Output:

```
Unsorted Array: 12 11 13 5 6 7
Sorted Array: 5 6 7 11 12 13
```

## ⚙️ Complexity Analysis

1. **Time Complexity**:
   - Best, Worst, and Average Case: **O(n log n)**
   - At each step, we divide the array into two halves (log n levels), and merging takes linear time (n).
2. **Space Complexity**:
   - **O(n)**: Due to the extra space required for the temporary arrays during the merge step.

## 🧩 Key Takeaways

- **Efficiency**: Merge Sort is an efficient, stable sort with a time complexity of O(n log n) in all cases.
- **Stability**: It maintains the relative order of equal elements, which is crucial in certain applications.
- **Space Complexity**: Merge Sort requires O(n) extra space for the merge process, which can be a downside in memory-constrained environments.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 75 here: [GitHub - Day75 Merge Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day75%20-%20Sorting%20Techniques%20-%20Sorting-II%20-%20Merge%20Sort/Merge_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
