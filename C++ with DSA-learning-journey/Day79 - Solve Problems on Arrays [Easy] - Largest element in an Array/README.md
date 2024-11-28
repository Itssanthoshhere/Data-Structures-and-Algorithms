# 🚀 Day 79: Mastering Arrays - Solving Problems on Arrays [Easy] 🚀

Welcome to **Day 79** of my coding journey! Today, I explored a fundamental array problem: **Finding the Largest Element in an Array**. Arrays are a versatile data structure, and understanding their manipulation is essential for solving real-world problems.

---

## 📋 Problem Explanation  

Given an array of integers, the task is to find the **largest element**. For example:  

- Input: `{2, 5, 1, 3, 0}`  
- Output: `5`  

This simple problem provides a great opportunity to compare different approaches, from brute force to optimized methods.

---

## 💡 Solution Approaches  

### 🚀 Solution 1: Brute Force (Using Sorting)  

**Steps:**  
1. Sort the array in ascending order.  
2. Return the last element, which will be the largest.  

**Code Example:**  

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

int findLargestUsingSort(int arr[], int n) {
    sort(arr, arr + n); // Sort the array
    return arr[n - 1];  // Return the last element
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest Element: " << findLargestUsingSort(arr, n) << endl;
    return 0;
}
```

**Complexity:**  
- **Time Complexity**: \( O(N \log N) \) (due to sorting).  
- **Space Complexity**: \( O(1) \) (in-place sorting).  

---

### 🚀 Solution 2: Optimized Approach (Using Max Variable)  

**Steps:**  
1. Initialize a variable `max` with the first element.  
2. Traverse the array and compare each element with `max`.  
3. Update `max` if a larger element is found.  

**Code Example:**  

```cpp
#include <iostream>
using namespace std;

int findLargestUsingMax(int arr[], int n) {
    int max = arr[0]; // Initialize max with the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
    }
    return max;
}

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Largest Element: " << findLargestUsingMax(arr, n) << endl;
    return 0;
}
```

**Complexity:**  
- **Time Complexity**: \( O(N) \).  
- **Space Complexity**: \( O(1) \).  

---

## ⚙️ Complexity Comparison  

| Approach        | Time Complexity | Space Complexity |  
|-----------------|-----------------|------------------|  
| **Brute Force** | \( O(N \log N) \) | \( O(1) \)        |  
| **Optimized**   | \( O(N) \)        | \( O(1) \)        |  

---

## 🧩 Key Takeaways  

1. **Sorting** is straightforward but not optimal for finding a single largest element.  
2. Using a **max variable** is more efficient for this task, emphasizing the importance of minimizing computations.  

---

## 🔗 Additional Resources  

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

## 🛠️ Check out my code on GitHub  

You can find the complete code for Day 79 here:  
[GitHub - Day79 Arrays](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day79%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Largest%20element%20in%20an%20Array/Find_the_Largest_element%20_in_an_array.cpp)  

---

## 🔗 Connect with Me  

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more problem-solving insights as I continue my journey into the fascinating world of **C++ with DSA**! 🚀  
