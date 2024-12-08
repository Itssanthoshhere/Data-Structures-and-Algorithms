# Practiced a Question on Problems of Arrays [Easy] - Sorted Array Search in C++

Welcome to Day 86 of my C++ and DSA learning journey! Today, I worked on a problem focused on searching for an element in a **sorted array**. This is a classic problem that can be efficiently solved using the **Linear Search** technique, leveraging the fact that the array is already sorted in ascending order.

## 📚 Topic Covered
- **Sorted Array Search:** In this problem, we utilized the sorted nature of the array and performed a binary search to quickly locate an element. It was an excellent exercise for refining my understanding of searching algorithms and improving my problem-solving speed.

## 📝 Problem Statement
### Problem: Search for an Element in a Sorted Array

Given a sorted array `arr[]` and an integer `k`, return `true` if `k` is present in the array, otherwise return `false`.

### Example
- **Input:** arr[] = [1, 2, 3, 4, 6], k = 6  
  **Output:** `true` (Since 6 is found at index 4)

- **Input:** arr[] = [1, 2, 4, 5, 6], k = 3  
  **Output:** `false` (Since 3 is not in the array)

- **Input:** arr[] = [2, 3, 5, 6], k = 1  
  **Output:** `false` (Since 1 is not in the array)

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

bool searchSortedArray(int arr[], int n, int k) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == k) {
            return true;
        }
        else if (arr[mid] < k) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6};
    int k = 6;
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (searchSortedArray(arr, n, k)) {
        cout << "Element found!" << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    return 0;
}
```

## 🗝️ Key Learnings
- **Efficient Searching:** Using **binary search** on a sorted array allows us to significantly reduce the time complexity to **O(log n)**, compared to a linear search, which is O(n).
- **Binary Search Optimization:** This technique is especially useful when dealing with large datasets, where a linear search would be too slow.
- **Array Properties:** The sorted nature of the array allows us to easily narrow down the search space, optimizing the search process.

## 🔗 Additional Resources
- [GeeksforGeeks: Binary Search](https://www.geeksforgeeks.org/binary-search/)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day86%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Linear%20Search/Linear_Search.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
