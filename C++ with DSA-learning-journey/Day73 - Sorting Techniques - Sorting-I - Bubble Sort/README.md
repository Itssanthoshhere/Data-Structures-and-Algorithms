# 🚀 Day 73: Sorting Techniques - Bubble Sort in C++ 🚀

Welcome to **Day 73** of my coding journey! Today, I explored **Bubble Sort**, a fundamental sorting algorithm in C++. It’s a perfect starting point to understand sorting logic and lays the foundation for more advanced algorithms. Let’s dive in! 🫧  

## 📋 Problem Explanation

Given an unsorted array, the task is to sort it in ascending order using **Bubble Sort**. The algorithm works by repeatedly swapping adjacent elements if they are in the wrong order until the array is completely sorted. 

### Example:
- **Input**: `[4, 3, 1, 2]`  
- **Output**: `[1, 2, 3, 4]`  

## 💡 Solution Approach

### Standard Bubble Sort
1. Compare adjacent elements in the array.  
2. Swap them if they are in the wrong order.  
3. Repeat for the entire array.  
4. Shrink the range after each pass, as the largest element gets sorted at the end.

### Optimized Bubble Sort  
- Add a flag to detect if any swaps occurred in a pass.  
- If no swaps occur, the array is already sorted, and the process can terminate early.  

## 📌 Code Examples

### Standard Bubble Sort
```cpp
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {4, 3, 1, 2};
    bubbleSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

### Optimized Bubble Sort
```cpp
#include <iostream>
#include <vector>
using namespace std;

void optimizedBubbleSort(vector<int> &arr) {
    int n = arr.size();
    for (int i = n - 1; i >= 1; i--) {
        bool swapped = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break; // Stop if no swaps occurred
    }
}

int main() {
    vector<int> arr = {4, 3, 1, 2};
    optimizedBubbleSort(arr);

    cout << "Optimized Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Time Complexity**:  
   - **Worst Case**: **O(N²)** (array is reversed).  
   - **Best Case (Optimized)**: **O(N)** (array is already sorted).  
   - **Average Case**: **O(N²)**.  

2. **Space Complexity**: **O(1)** (in-place sorting).  

## 🧩 Key Takeaways

- Bubble Sort is simple and easy to implement, making it ideal for beginners.  
- Use the **optimized version** to improve efficiency for nearly sorted arrays.  
- Although not suitable for large datasets, it helps build a strong foundation for understanding sorting concepts.  

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 73 here: [GitHub - Day73 Bubble Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day73%20-%20Sorting%20Techniques%20-%20Sorting-I%20-%20Bubble%20Sort/Bubble_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more sorting algorithms as I continue my DSA journey! 🚀
