# 🚀 Day 78: Sorting Techniques - Quick Sort Algorithm Explained 🚀

Welcome to **Day 78** of my learning journey! Today, we delve into the **Quick Sort Algorithm**, a popular sorting technique known for its efficiency and in-place sorting nature. Quick Sort is a fundamental algorithm every programmer should master for understanding divide-and-conquer strategies.

---

## 📋 Problem Explanation

Quick Sort sorts an array by dividing it into two partitions around a chosen **pivot**:
- Elements **smaller than the pivot** are moved to the left.
- Elements **larger than the pivot** are moved to the right.

The process repeats recursively for both partitions until the array is sorted.

---

## 💡 Solution Approach

### Key Steps of Quick Sort
1. **Choose a Pivot**: Select a pivot element (first, last, median, or random).
2. **Partition the Array**:
   - Rearrange elements so smaller ones are on the left and larger ones on the right.
3. **Recursive Sorting**:
   - Recursively sort the left and right subarrays.

### Example:
Array: `{4, 6, 2, 5, 7, 9, 1, 3}`  
1. Pivot: `4`  
2. Partitioned: `{3, 2, 1, 4, 6, 5, 7, 9}`  
3. Recursively sort `{3, 2, 1}` and `{6, 5, 7, 9}`.

---

## 📌 Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to partition the array
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low, j = high;

    while (i < j) {
        while (arr[i] <= pivot && i < high) i++;
        while (arr[j] > pivot) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

// Recursive Quick Sort function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    cout << "Before Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    quickSort(arr, 0, arr.size() - 1);

    cout << "After Sorting: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Time Complexity**:
   - Best/Average Case: **O(N⋅logN)**
   - Worst Case: **O(N²)** (occurs when pivot selection is poor).
2. **Space Complexity**:
   - **O(N)** due to recursion stack.

---

## 🧩 Key Takeaways

- **Efficient** for large datasets.
- **In-place Sorting** (no extra memory required for arrays).
- Choosing a good **pivot** minimizes the risk of worst-case performance.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 78 here:  
[GitHub - Day78 Quick Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day78%20-%20Sorting%20Techniques%20-%20Sorting-II%20-%20Quick%20Sort/Quick_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Mastering sorting algorithms brings us closer to optimizing solutions for real-world problems. What’s your go-to sorting technique? Let me know in the comments! 🚀
