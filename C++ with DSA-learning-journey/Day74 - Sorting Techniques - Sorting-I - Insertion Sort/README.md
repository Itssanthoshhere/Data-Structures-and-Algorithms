# 🚀 Day 74: Sorting Techniques - Insertion Sort Explained 🚀

Welcome to **Day 74** of my coding journey! Today, I delved into **Insertion Sort**, a foundational sorting algorithm that is both simple and intuitive. It’s particularly useful for small or partially sorted datasets, making it an essential addition to my sorting techniques toolkit.

## 📋 Problem Explanation

The goal of **Insertion Sort** is to sort an array by repeatedly picking an element and inserting it into its correct position relative to already sorted elements. This approach is analogous to sorting playing cards in your hand. 

### Example

- **Input**: [5, 3, 4, 1, 2]  
- **Output**: [1, 2, 3, 4, 5]  

At each step, the current element is compared with its predecessors and shifted until it is in the correct position.

## 💡 Solution Approach

### Algorithm

1. Start from the second element (index 1).
2. Compare the current element with the elements before it.
3. Shift all larger elements one position to the right.
4. Insert the current element in its correct position.
5. Repeat for all elements in the array.

### Pseudocode

```cpp
for (i = 1; i < n; i++) {
    j = i;
    while (j > 0 && a[j - 1] > a[j]) {
        swap(a[j - 1], a[j]);
        j--;
    }
}
```

## 📌 Code Example

### Insertion Sort Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        // Shift elements of arr[0..i-1] that are greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {5, 3, 4, 1, 2};
    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    insertionSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
```

### Output

- **Original Array**: 5 3 4 1 2  
- **Sorted Array**: 1 2 3 4 5  

## ⚙️ Complexity Analysis

1. **Time Complexity**:  
   - **Best Case**: **O(N)** (array is already sorted).  
   - **Worst Case**: **O(N²)** (array is in reverse order).  
   - **Average Case**: **O(N²)**.  
   
2. **Space Complexity**:  
   - **O(1)** (in-place sorting).  

## 🧩 Key Takeaways

- **Efficiency**: Best suited for small or nearly sorted datasets.  
- **Simplicity**: Easy to implement and understand, making it a great starting point for learning sorting algorithms.  
- **Limitations**: Not efficient for large datasets due to its quadratic time complexity.

---

## 🔗 Additional Resources

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

---

## 🛠️ Check out my code on GitHub

You can find the complete code for Day 74 here: [GitHub - Day74 Insertion Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day74%20-%20Sorting%20Techniques%20-%20Sorting-I%20-%20Insertion%20Sort/Insertion_Sort.cpp)

---

## 🔗 Connect with Me

- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned as I explore more sorting algorithms like Merge Sort and Quick Sort in the coming days! 🚀
