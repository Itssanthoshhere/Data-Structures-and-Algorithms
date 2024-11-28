# 🚀 Day 81: Solving Problems on Arrays [Easy] - Check if the Array is Sorted 🚀

Welcome to **Day 81** of my coding journey! Today, we are tackling a problem where we need to check whether a given array is sorted in **non-decreasing order**. This problem can be approached in two ways: **Brute Force** and **Efficient**.

## 📋 Problem Explanation

Given an array of integers, we need to determine if the array is sorted in **non-decreasing order**. In other words, for every element in the array, the current element should be less than or equal to the next element.

For example:
- **Array**: [1, 2, 2, 4, 5] → **Result**: Sorted
- **Array**: [1, 3, 2, 4, 5] → **Result**: Not Sorted

## 💡 Solution Approach

### Brute Force Solution
The brute force approach involves comparing every element with all the elements that come after it. If we find any element that is smaller than its predecessor, we return `False`, indicating the array is not sorted.

### Algorithm:
1. Start from the first element at index `0`.
2. Compare it with each future element in the array.
3. If any element is smaller than its predecessor, return `False`.
4. If no such element is found, return `True`.

### Time Complexity: **O(N^2)**  
### Space Complexity: **O(1)**

### Efficient Solution
In this approach, we will traverse the array only once and compare each element with the previous one to check if it's greater than or equal to the previous element. This reduces the time complexity to **O(N)**.

### Algorithm:
1. Traverse the array starting from index `1`.
2. For each element, compare it with the previous one.
3. If any element is smaller than its predecessor, return `False`.
4. If the entire array is traversed successfully, return `True`.

### Time Complexity: **O(N)**  
### Space Complexity: **O(1)**

## 📌 Code Example

### Brute Force Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

bool isSortedBruteForce(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    if (isSortedBruteForce(arr)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
```

### Efficient Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

bool isSortedEfficient(const vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    if (isSortedEfficient(arr)) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Brute Force Approach**:
   - **Time Complexity**: **O(N^2)**, where N is the number of elements in the array.
   - **Space Complexity**: **O(1)**.
   
2. **Efficient Approach**:
   - **Time Complexity**: **O(N)**, where N is the number of elements in the array.
   - **Space Complexity**: **O(1)**.

## 🧩 Key Takeaways

- The **Brute Force Approach** is easy to understand but inefficient for large arrays.
- The **Efficient Approach** reduces the time complexity to **O(N)**, making it ideal for larger arrays.
- **Array Traversal** is a simple yet powerful technique for solving a variety of problems.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 81 here: [GitHub - Day81 Check if Array is Sorted](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day81%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Check%20if%20the%20array%20is%20sorted/Check_if_the_array_is_sorted.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
