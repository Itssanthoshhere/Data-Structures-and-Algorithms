# Practiced a Question on Sorting Algorithms - Bubble Sort in C++

Welcome to Day 73 of my C++ and DSA learning journey! Today, I delved into one of the foundational sorting algorithms: **Bubble Sort**. This exercise strengthened my understanding of sorting techniques and introduced optimization strategies to improve efficiency.

## 📚 Topic Covered
- **Bubble Sort Algorithm:** The algorithm involves comparing and swapping adjacent elements to sort an array in ascending order. It is a simple yet insightful introduction to sorting techniques.

## 📝 Problem Statement
### Problem: Sort an Array Using the Bubble Sort Algorithm  

Given an unsorted array, implement the **Bubble Sort** algorithm to sort the array in ascending order.

### Example
- **Input:** arr[] = [4, 1, 3, 9, 7]  
- **Output:** [1, 3, 4, 7, 9]

### Explanation
- The array is sorted by repeatedly swapping adjacent elements if they are in the wrong order.  
- An optimization is used: If no swaps occur during a pass, the algorithm terminates early.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // Break early if no elements were swapped
        if (!swapped) break;
    }
}

int main() {
    vector<int> arr = {4, 1, 3, 9, 7};
    cout << "Original array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    bubbleSort(arr);

    cout << "Sorted array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
```

## 🗝️ Key Learnings
- **Core Sorting Concepts:** Bubble Sort reinforced the fundamental idea of comparing and swapping elements to achieve sorting.
- **Optimization Techniques:** Using a `swapped` flag improved the algorithm's efficiency by terminating early when no swaps occur in a pass.
- **Time Complexity:** While the worst-case time complexity is \(O(n^2)\), the optimization can improve average performance for nearly sorted arrays.

## 🔗 Additional Resources
- [GeeksforGeeks: Bubble Sort Problem](https://www.geeksforgeeks.org/problems/bubble-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bubble-sort)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day73%20-%20Sorting%20Techniques%20-%20Sorting-I%20-%20Bubble%20Sort/Bubble_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue exploring the world of C++ and DSA with advanced sorting techniques like **Merge Sort** and **Quick Sort**! 🚀
