# 🚀 Day 95: Solve Problems on Arrays [Medium] - Sort an Array of 0's, 1's, and 2's 🚀

Welcome to **Day 95** of my coding journey! Today, we're solving a **medium-level** array problem where we need to sort an array consisting only of `0`s, `1`s, and `2`s in **non-decreasing order**. The challenge here is to do it **without using any inbuilt sorting methods**.

## 📋 Problem Explanation

You are given an array containing only `0`, `1`, and `2`. The task is to sort the array in non-decreasing order. This means that after sorting, all the `0`s should appear first, followed by all the `1`s, and then the `2`s. 

For example:
- **Input**: [0, 1, 2, 1, 0, 2, 1, 0]
- **Output**: [0, 0, 0, 1, 1, 1, 2, 2]

## 💡 Solution Approach

### 1️⃣ Brute Force Approach:
- **Algorithm**: You can sort the array using any general sorting algorithm like merge sort, quicksort, etc.
- **Time Complexity**: **O(N log N)**, where N is the length of the array.
- **Space Complexity**: **O(1)** (for in-place sorting).

### 2️⃣ Optimized Approach (Counting):
- **Algorithm**: Count the occurrences of `0`, `1`, and `2` in the array, and then overwrite the original array based on these counts. 
- **Time Complexity**: **O(N)**.
- **Space Complexity**: **O(1)** (for the count variables).

### 3️⃣ Optimal Approach (Dutch National Flag Algorithm):
- **Algorithm**: Use three pointers (`low`, `mid`, `high`) to partition the array:
  - `arr[0...low-1]` → 0's
  - `arr[low...mid-1]` → 1's
  - `arr[high+1...n-1]` → 2's
- **Process**: Traverse the array and swap elements as necessary to ensure all 0's are at the front, 1's in the middle, and 2's at the end.
- **Time Complexity**: **O(N)**, where N is the number of elements in the array.
- **Space Complexity**: **O(1)** (for the pointers).

## 📌 Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

void sortArray(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;
    
    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    sortArray(arr);
    
    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
```

### Output:
```
Sorted Array: 0 0 0 1 1 1 2 2
```

## ⚙️ Complexity Analysis

1. **Time Complexity**:
   - Brute Force: **O(N log N)**.
   - Optimized (Counting): **O(N)**.
   - Dutch National Flag: **O(N)**.
   
2. **Space Complexity**:
   - Brute Force: **O(1)**.
   - Optimized (Counting): **O(1)**.
   - Dutch National Flag: **O(1)**.

## 🧩 Key Takeaways

- The **Dutch National Flag** algorithm is the most efficient way to solve this problem, achieving **O(N)** time complexity.
- Both the **brute force** and **counting** approaches have **O(1)** space complexity, but the Dutch National Flag is more optimal in terms of time complexity.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 95 here: [GitHub - Day95 Sorting Array of 0's, 1's, and 2's](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day95%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Sort%20the%20array%20of%200's%2C%201's%20and%202's/Sort_the_array_of_0's%2C1's_and_2's.cpp)

---

## 🔗 Connect with Me
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
