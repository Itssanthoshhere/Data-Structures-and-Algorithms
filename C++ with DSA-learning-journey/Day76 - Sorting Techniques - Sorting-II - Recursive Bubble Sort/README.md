# 🚀 Day 76: Sorting Techniques - Recursive Bubble Sort Algorithm 🚀

Welcome to **Day 76** of my coding journey! Today, I explored the **Recursive Bubble Sort Algorithm**, a fascinating twist on a classic sorting technique. This method uses recursion to systematically sort an array, showcasing the versatility of algorithms in programming.

---

## 📋 Problem Explanation

Given an array of integers, our task is to implement the **Recursive Bubble Sort Algorithm**. The goal is to sort the array in ascending order by recursively comparing and swapping adjacent elements.

### Examples:

1. **Input**:  
   `N = 6`, `array[] = {13, 46, 24, 52, 20, 9}`  
   **Output**: `9, 13, 20, 24, 46, 52`  

2. **Input**:  
   `N = 5`, `array[] = {5, 4, 3, 2, 1}`  
   **Output**: `1, 2, 3, 4, 5`  

---

## 💡 Solution Approach

### Algorithm:

1. **Base Case**: Stop recursion when the array size reduces to 1.  
2. **Swap Adjacent Elements**: Compare adjacent elements and swap them if they are in the wrong order.  
3. **Recursive Call**: After processing one pass, call the function for the remaining unsorted part of the array.  

This process ensures that the largest unsorted element "bubbles up" to its correct position in each pass.

---

### Code Implementation:

#### Recursive Bubble Sort

```cpp
#include <iostream>
using namespace std;

// Function to perform recursive bubble sort
void bubbleSort(int arr[], int n) {
    // Base case: If the array size is 1, it is already sorted
    if (n == 1)
        return;

    // Perform one pass of bubble sort
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // Swap adjacent elements if they are in the wrong order
            swap(arr[i], arr[i + 1]);
        }
    }

    // Recursive call for the remaining unsorted array
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Perform recursive bubble sort
    bubbleSort(arr, n);

    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Time Complexity**:  
   - Worst & Average Case: **O(N²)**  
   - Best Case (Already Sorted with optimization): **O(N)**  

2. **Space Complexity**:  
   - Auxiliary Stack Space: **O(N)** (due to recursion depth)

---

## 🧩 Key Takeaways

- **Recursive Approach**: Simplifies the implementation of traditional algorithms using function calls.  
- **Optimization**: Early stopping when no swaps occur improves efficiency.  
- **Versatility**: Recursion can replace loops in many scenarios, offering an alternate perspective on problem-solving.  

---

## 🔗 Additional Resources

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub

You can find the complete code for Day 76 here: [GitHub - Day76 Recursive Bubble Sort](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day76%20-%20Sorting%20Techniques%20-%20Sorting-II%20-%20Recursive%20Bubble%20Sort/Recursive_Bubble_Sort.cpp)

---

## 🔗 Connect with Me

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to dive deeper into sorting techniques and DSA! 🚀
