# 🚀 Day 97: Solve Problems on Arrays [Medium] - Kadane’s Algorithm 🚀  

Welcome to **Day 97** of my coding journey! Today, I explored **Kadane’s Algorithm**, an efficient technique to find the **maximum sum of a contiguous subarray** in an array. This problem is crucial in **competitive programming** and is often asked in coding interviews.  

## 📋 Problem Statement  

Given an integer array, find the contiguous subarray (containing at least one number) that has the **largest sum** and return its sum.  

### 🔹 Example  
#### Input:  
```cpp
arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4}
```
#### Output:  
```cpp
Maximum Subarray Sum: 6  // [4, -1, 2, 1] is the subarray with the maximum sum.
```

---

## 💡 Solution Approaches  

### ✅ Solution 1: Brute-Force Approach (O(N³))  

**Intuition:**  
- Iterate over all possible subarrays and compute their sums.  
- Track the maximum sum encountered.  

**Implementation Steps:**  
1. Use three nested loops:  
   - First loop selects the starting index.  
   - Second loop selects the ending index.  
   - Third loop calculates the sum of elements in the selected subarray.  
2. Return the maximum sum encountered.  

⏳ **Time Complexity**: **O(N³)**  
💾 **Space Complexity**: **O(1)**  

---

### ✅ Solution 2: Better Approach (O(N²))  

**Intuition:**  
- Instead of recalculating sums for every subarray, maintain a **cumulative sum** and update it while iterating.  

**Implementation Steps:**  
1. Use two nested loops:  
   - The first loop selects the starting index.  
   - The second loop expands the subarray dynamically while maintaining the sum.  
2. Track the maximum sum found.  

⏳ **Time Complexity**: **O(N²)**  
💾 **Space Complexity**: **O(1)**  

---

### ✅ Solution 3: Kadane’s Algorithm (Optimal - O(N))  

**Intuition:**  
- If the **current subarray sum becomes negative**, it should be discarded because it decreases the **maximum sum**.  
- Maintain a **running sum** and reset it when it becomes negative.  

**Implementation Steps:**  
1. Initialize `sum = 0` and `maxi = INT_MIN`.  
2. Iterate through the array:  
   - Add the **current element** to `sum`.  
   - If `sum` is greater than `maxi`, update `maxi`.  
   - If `sum < 0`, reset `sum = 0`.  
3. Return `maxi`, the maximum sum found.  

⏳ **Time Complexity**: **O(N)**  
💾 **Space Complexity**: **O(1)**  

---

## 📌 Code Implementation  

```cpp
#include <iostream>
#include <climits>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int sum = 0, maxi = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];  
        maxi = max(maxi, sum);  
        
        if (sum < 0) {
            sum = 0;
        }
    }
    
    return maxi;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Maximum Subarray Sum: " << maxSubarraySum(arr, n) << endl;
    return 0;
}
```

---

## ⚙️ Complexity Analysis  

| Approach          | Time Complexity | Space Complexity |
|------------------|---------------|----------------|
| **Brute Force**  | **O(N³)**      | **O(1)**       |
| **Better Approach** | **O(N²)**      | **O(1)**       |
| **Kadane’s Algorithm** | **O(N)**        | **O(1)**       |

---

## 🧩 Key Takeaways  

- **Brute Force:** **O(N³)** – Iterate over all subarrays and compute sums.  
- **Better Approach:** **O(N²)** – Maintain a **cumulative sum** to avoid recomputation.  
- **Kadane’s Algorithm:** **O(N)** – Keep track of the **running sum** and reset if negative.  

Kadane’s Algorithm is an efficient solution to the **Maximum Subarray Problem** and is widely used in **competitive programming**! 🚀  

---

## 🔗 Additional Resources  

- 📖 **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

## 🛠️ Check out my code on GitHub  

You can find the complete code for **Day 97** here:  
[GitHub - Day 97: Kadane’s Algorithm](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day97%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Maximum%20Subarray%20Sum%20(Kadane's%20Algorithm%20)/Maximum_Subarray_Sum.cpp)

---

## 🔗 Connect with Me
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!

---
