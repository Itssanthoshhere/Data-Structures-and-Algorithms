# 🚀 Day 72: Sorting Techniques - Selection Sort in C++ 🚀  

Welcome to **Day 72** of my coding journey! Today, I focused on understanding and implementing **Selection Sort**, one of the simplest sorting algorithms in computer science. While it may not be the fastest, it's an excellent foundation for learning more advanced sorting techniques.  

---

## 📋 Problem Explanation  

Given an unsorted array, the goal is to sort it in ascending order using **Selection Sort**. For example:  

- **Input**: `[64, 34, 25, 12, 22]`  
- **Output**: `[12, 22, 25, 34, 64]`  

---

## 💡 Solution Approach  

### Selection Sort Algorithm  

1. Divide the array into two parts: sorted and unsorted.  
2. Iterate through the unsorted portion to find the smallest element.  
3. Swap the smallest element with the first unsorted element.  
4. Move the boundary between the sorted and unsorted portions one step forward.  
5. Repeat until the entire array is sorted.  

---

## 📌 Code Implementation  

Here’s the C++ implementation of Selection Sort:  

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to perform Selection Sort
void selectionSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the first element is the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update minIndex if a smaller element is found
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[minIndex], arr[i]);
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22};
    cout << "Before Selection Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    selectionSort(arr);

    cout << "After Selection Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```  

### Sample Input/Output  

- **Input**: `[64, 34, 25, 12, 22]`  
- **Output**:  
  ```
  Before Selection Sort: 64 34 25 12 22  
  After Selection Sort: 12 22 25 34 64  
  ```  

---

## ⚙️ Complexity Analysis  

### **Time Complexity**  

1. **Best Case**: `O(N²)`  
2. **Worst Case**: `O(N²)`  
3. **Average Case**: `O(N²)`  

This is due to the nested loops:  
- Outer loop: Runs `N-1` times.  
- Inner loop: Runs `N-i-1` times for each iteration of the outer loop.  

### **Space Complexity**  

- **Space**: `O(1)`  
- Selection Sort is **in-place**, meaning it sorts the array using only a constant amount of extra memory.  

---

## 🧩 Key Takeaways  

- **Simple but Inefficient**: Selection Sort is easy to implement but has poor performance on large datasets due to its `O(N²)` time complexity.  
- **In-Place Sorting**: It does not require additional memory, making it suitable for memory-constrained environments.  
- **Unstable Sorting**: By default, Selection Sort is not stable, meaning the relative order of equal elements may not be preserved.  

---

## 🔗 Resources  

1. [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  
2. My GitHub Repository: [Day 72 - Selection Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day72%20-%20Sorting%20Techniques%20-%20Sorting-I%20-%20Selection%20Sort/Selection_Sort.cpp)  

---

## 🌟 Closing Thoughts  

Selection Sort provides a great stepping stone to understanding sorting algorithms. Its simplicity makes it a perfect introduction to the concept of sorting, although it’s not efficient for large datasets. Looking forward to exploring more advanced sorting techniques in the coming days! 🚀  

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
