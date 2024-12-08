# 🚀 Day 85: Solve Problems on Arrays [Easy] - Move Zeros to End 🚀  

Welcome to **Day 85** of my coding journey! Today, I focused on solving the **Move Zeros to End** problem in arrays. Let's dive into the problem, approaches, and implementation details.

---

## 📋 Problem Overview  
The goal is to rearrange the given array such that all non-zero elements are shifted to the beginning of the array, followed by all zeros, while maintaining the order of non-zero elements.  

### Example:  
Input: `[0, 1, 0, 3, 12]`  
Output: `[1, 3, 12, 0, 0]`  

---

## 💡 Solution Approaches  

### Solution 1: Brute Force Approach  
This approach uses an extra array to store the rearranged elements.  

#### Algorithm:  
1. Traverse the array and copy all non-zero elements into a temporary array.  
2. Copy the temporary array back into the original array.  
3. Fill the remaining spaces in the original array with zeros.  

#### Complexity:  
- **Time Complexity**: `O(2 * N)`  
- **Space Complexity**: `O(N)`  

### Solution 2: Optimal Approach (Using Two Pointers)  
This approach uses two pointers to efficiently rearrange the elements in-place.  

#### Algorithm:  
1. Initialize two pointers:  
   - `j` points to the first zero in the array.  
   - `i` traverses the array to find non-zero elements.  
2. If a non-zero element is found at `i`, swap it with the element at `j`.  
3. Increment `j` after each swap to point to the next zero.  

#### Complexity:  
- **Time Complexity**: `O(N)`  
- **Space Complexity**: `O(1)`  

---

## 📌 Code Examples  

### Brute Force Approach  

```cpp
#include <iostream>
#include <vector>
using namespace std;

void moveZerosBruteForce(vector<int>& arr) {
    vector<int> temp;
    // Step 1: Store all non-zero elements
    for (int num : arr) {
        if (num != 0) {
            temp.push_back(num);
        }
    }
    // Step 2: Copy elements back to the original array
    int index = 0;
    for (int num : temp) {
        arr[index++] = num;
    }
    // Step 3: Fill the rest with zeros
    while (index < arr.size()) {
        arr[index++] = 0;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZerosBruteForce(arr);
    for (int num : arr) {
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

void moveZerosOptimal(vector<int>& arr) {
    int j = 0; // Pointer to the first zero
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 3, 12};
    moveZerosOptimal(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

---

## ⚙️ Complexity Analysis  

### Brute Force Approach:  
1. **Time Complexity**:  
   - Traversing the array twice: `O(2 * N)`  
2. **Space Complexity**:  
   - Extra array: `O(N)`  

### Optimal Approach:  
1. **Time Complexity**:  
   - Single traversal: `O(N)`  
2. **Space Complexity**:  
   - In-place rearrangement: `O(1)`  

---

## 🧩 Key Takeaways  
- The **Brute Force Approach** is simple but requires additional space.  
- The **Optimal Approach** is efficient in both time and space, making it suitable for larger datasets.  

---

## 🔗 Additional Resources  
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

---

## 🛠️ Check out my code on GitHub  
You can find the complete code for **Day 85** here:  
[GitHub - Day 85 - Move Zeros to End](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day85%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Move%20Zeros%20to%20end/Move_Zeros_to_end.cpp)  

---

## 🔗 Connect with Me  
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue my journey through **Striver's A2Z DSA Course**! 🚀
