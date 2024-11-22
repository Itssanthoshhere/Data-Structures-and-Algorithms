# Practiced a Question on Sorting Algorithms - Merge Sort in C++

Welcome to Day 75 of my C++ and DSA learning journey! Today, I practiced a fundamental sorting algorithm: **Merge Sort**. This algorithm is a classic example of the divide-and-conquer strategy. It divides the array into two halves, sorts them individually, and then merges them back together in a sorted order. It helped me improve my understanding of recursion and efficient sorting techniques.

## 📚 Topic Covered
- **Merge Sort Algorithm:** This problem helped me understand the mechanics of Merge Sort, including how the array is recursively divided and how the merging process works. Merge Sort has a time complexity of **O(n log n)**, which makes it highly efficient for larger datasets.

## 📝 Problem Statement
### Problem: Sort the Array Using Merge Sort

Given an array, sort it using the Merge Sort algorithm.

### Example
- **Input:** `arr[] = [4, 1, 3, 9, 7]`
- **Output:** `[1, 3, 4, 7, 9]`

### Explanation
- The algorithm splits the array into two halves, recursively sorts each half, and then merges them together to form the sorted array.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> leftArr(n1), rightArr(n2);

    // Copy data into temporary arrays
    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of leftArr[], if any
    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    // Copy remaining elements of rightArr[], if any
    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr = {4, 1, 3, 9, 7};
    int n = arr.size();
    mergeSort(arr, 0, n - 1);

    // Output the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
```

## 🗝️ Key Learnings
- **Divide-and-Conquer Approach:** Merge Sort uses the divide-and-conquer method, dividing the array into smaller parts and then merging them.
- **Efficient Sorting:** With a time complexity of **O(n log n)**, Merge Sort is efficient for large datasets compared to other algorithms like Bubble Sort or Insertion Sort.
- **Stable Sort:** Merge Sort maintains the relative order of equal elements, making it a stable sorting algorithm.

## 🔗 Additional Resources
- [GeeksforGeeks: Merge Sort](https://www.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort)
- [Coding Ninjas: Merge Sort Problem](https://www.naukri.com/code360/problems/merge-sort_920442?interviewProblemRedirection=true&search=merge&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day75%20-%20Sorting%20Techniques%20-%20Sorting-II%20-%20Merge%20Sort/Merge_Sort.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
