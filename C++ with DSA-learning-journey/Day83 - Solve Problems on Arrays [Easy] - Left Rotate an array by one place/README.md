# 🚀 Day 83: Solve Problems on Arrays [Easy] - Left Rotate an Array by One Place 🚀

Welcome to **Day 83** of my coding journey! Today, I worked on solving an array manipulation problem: **Left Rotating an Array by One Place**. This is a fundamental concept often seen in competitive programming and interview problems.

---

## 📋 Problem Explanation

**Task**: Given an array, rotate its elements by one position to the left.  
For example:
- **Input**: `[1, 2, 3, 4, 5]`
- **Output**: `[2, 3, 4, 5, 1]`

### Key Insight:
- The first element of the array moves to the last position.
- All other elements shift one position to the left.

---

## 💡 Solution Approaches

### 1. **Brute Force Solution**

#### Steps:
1. Create a temporary array to store the rotated elements.
2. Copy elements from the original array to their new positions in the temporary array.
3. Place the first element at the last position of the temporary array.

#### Complexity:
- **Time Complexity**: \(O(N)\) (one iteration through the array)
- **Space Complexity**: \(O(N)\) (temporary array)

---

### 2. **Optimal Solution**

#### Steps:
1. Store the first element in a temporary variable (`temp`).
2. Shift all elements of the array one position to the left **in-place**.
3. Place the stored element (`temp`) at the last position of the array.

#### Complexity:
- **Time Complexity**: \(O(N)\) (single pass through the array)
- **Space Complexity**: \(O(1)\) (no additional space used)

---

## 📌 Code Examples

### Brute Force Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> leftRotateByOne(vector<int> &arr) {
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];
    return temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> rotatedArr = leftRotateByOne(arr);

    for (int num : rotatedArr) {
        cout << num << " ";
    }
    return 0;
}
```

---

### Optimal Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

void leftRotateByOne(vector<int> &arr) {
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    leftRotateByOne(arr);

    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Brute Force Solution**:
   - **Time Complexity**: \(O(N)\)
   - **Space Complexity**: \(O(N)\)

2. **Optimal Solution**:
   - **Time Complexity**: \(O(N)\)
   - **Space Complexity**: \(O(1)\)

---

## 🧩 Key Takeaways

- **In-place Manipulation**: Efficiently modify arrays without additional space.
- **Optimization**: Transition from temporary arrays to in-place methods saves memory in competitive scenarios.
- **Iteration Techniques**: Using loops effectively to solve array-based problems.

---

## 🔗 Additional Resources

- **Striver's A2Z DSA Course**: [Link to the Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out my code on GitHub

Find the complete code for Day 83 here: [GitHub - Day83 Left Rotate an Array by One Place](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day82%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Remove%20duplicates%20from%20Sorted%20array/Remove_the_duplicates_from_Sorted_array.cpp)

---

## 🔗 Connect with Me

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue my DSA learning journey! 🚀
