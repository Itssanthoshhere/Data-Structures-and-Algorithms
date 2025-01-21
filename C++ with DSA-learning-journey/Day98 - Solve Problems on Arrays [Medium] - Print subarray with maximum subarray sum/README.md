# 🚀 Day 98: Solve Problems on Arrays [Medium] - Print Subarray with Maximum Subarray Sum 🚀  

Welcome to **Day 98** of my DSA journey! Today, I tackled an important **Dynamic Programming & Greedy** problem: **Finding the subarray with the maximum sum using Kadane’s Algorithm**.  

## 📋 Problem Explanation  

Given an integer array `arr[]`, the task is to find the **contiguous subarray** that has the **maximum sum** and print that subarray. If multiple subarrays have the same sum, any one of them can be printed.  

### Example  

#### **Input:**  
```cpp
arr = [-2, 1, -3, 4, -1, 2, 1, -5, 4]
```
#### **Output:**  
```
The subarray is: [4 -1 2 1]  
The maximum subarray sum is: 6  
```

## 💡 Solution Approach  

### ✅ Kadane’s Algorithm (Modified)  

Kadane’s Algorithm efficiently finds the **maximum subarray sum** in **O(n) time** while keeping track of indices to print the subarray.  

### **Implementation Steps**  
1️⃣ Initialize `maxi` as `LONG_MIN`, `sum = 0`, and variables for tracking the start and end indices.  
2️⃣ Traverse the array, adding elements to `sum`.  
3️⃣ If `sum > maxi`, update `maxi` and store the subarray's start & end indices.  
4️⃣ If `sum < 0`, reset it to `0` and update the start index.  
5️⃣ Print the subarray from `ansStart` to `ansEnd`.  

## 📌 Code Implementation  

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void findMaxSubarray(vector<int> &arr) {
    int n = arr.size();
    int maxi = INT_MIN, sum = 0;
    int start = 0, ansStart = -1, ansEnd = -1;

    for (int i = 0; i < n; i++) {
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
            start = i + 1;
        }
    }

    cout << "The subarray is: [";
    for (int i = ansStart; i <= ansEnd; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;

    cout << "The maximum subarray sum is: " << maxi << endl;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    findMaxSubarray(arr);
    return 0;
}
```

## ⚙️ Complexity Analysis  

- **Time Complexity**: **O(n)** (Single pass traversal).  
- **Space Complexity**: **O(1)** (Constant extra space).  

## 🧩 Key Takeaways  

✅ **Kadane’s Algorithm** is an efficient **O(n) approach** to find the maximum subarray sum.  
✅ It uses **Dynamic Programming** with an **iterative greedy approach**.  
✅ Can be modified for **circular subarrays**, **maximum product subarrays**, and **prefix sum techniques**.  

---

## 🔗 Additional Resources  
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

## 🛠️ Check out my code on GitHub  
📌 **GitHub Repository:** [Print Subarray with Maximum Subarray Sum](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day98%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Print%20subarray%20with%20maximum%20subarray%20sum/Print_subarray_with_maximum_subarray_sum.cpp)  

---

## 🔗 Connect with Me  
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to explore the depths of **C++ and DSA**! 🚀🔥  

---
