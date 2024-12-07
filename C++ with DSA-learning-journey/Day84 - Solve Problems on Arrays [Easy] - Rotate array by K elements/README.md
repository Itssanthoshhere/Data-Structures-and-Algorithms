# 🚀 Day 84: Solve Problems on Arrays [Easy] - Rotate Array by K Elements 🚀

Welcome to **Day 84** of my coding journey! Today, we tackled the **Rotate Array by K Elements** problem, a fundamental array manipulation challenge. This problem is commonly asked in coding interviews and is a great exercise for understanding array operations.

## 📋 Problem Explanation

Given an array `arr` of size `n` and an integer `k`, rotate the array:
- **Right Rotation**: Move the last `k` elements to the front.
- **Left Rotation**: Move the first `k` elements to the end.

For example:
- Input: `arr = {1, 2, 3, 4, 5, 6, 7}`, `k = 2`
- Output:  
  - **Right Rotation**: `{6, 7, 1, 2, 3, 4, 5}`  
  - **Left Rotation**: `{3, 4, 5, 6, 7, 1, 2}`  

Edge Case:
- When `k > n`, normalize `k` using `k = k % n`.

## 💡 Solution Approach

### 🛠 Approach 1: Using a Temporary Array
1. For **Right Rotation**:
   - Copy the last `k` elements into a temporary array.
   - Shift the remaining elements to the right.
   - Copy the elements from the temporary array to the start of the original array.
2. For **Left Rotation**:
   - Copy the first `k` elements into a temporary array.
   - Shift the remaining elements to the left.
   - Copy the elements from the temporary array to the end of the original array.

#### Complexity:
- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(k)`

---

### 🛠 Approach 2: Using the Reversal Algorithm
1. **Right Rotation**:
   - Reverse the last `k` elements.
   - Reverse the first `n-k` elements.
   - Reverse the entire array.
2. **Left Rotation**:
   - Reverse the first `k` elements.
   - Reverse the last `n-k` elements.
   - Reverse the entire array.

#### Complexity:
- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(1)`

---

## 📌 Code Example

### Approach 1: Temporary Array

```cpp
#include <iostream>
#include <vector>
using namespace std;

void rotateArrayRight(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k > n
    vector<int> temp(k);

    // Copy last k elements to temp
    for (int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    // Shift remaining elements to the right
    for (int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    // Copy temp elements to the front
    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    rotateArrayRight(arr, k);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

---

### Approach 2: Reversal Algorithm

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotateArrayRight(vector<int> &arr, int k) {
    int n = arr.size();
    k = k % n; // Handle cases where k > n

    // Reverse parts of the array
    reverse(arr.begin() + (n - k), arr.end());
    reverse(arr.begin(), arr.begin() + (n - k));
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    rotateArrayRight(arr, k);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

---

## ⚙️ Complexity Analysis

### Temporary Array
- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(k)`

### Reversal Algorithm
- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(1)`

---

## 🧩 Key Takeaways

1. The **Temporary Array** method is straightforward but uses extra space.
2. The **Reversal Algorithm** is space-efficient and equally fast.
3. Always consider edge cases, such as `k > n` or `k = 0`.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 84 here: [GitHub - Day84 Rotate Array by K Elements](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day84%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Rotate%20array%20by%20K%20elements/Rotate_array_by_K_elements.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Let’s continue solving challenging problems and sharpening our DSA skills! 🚀
