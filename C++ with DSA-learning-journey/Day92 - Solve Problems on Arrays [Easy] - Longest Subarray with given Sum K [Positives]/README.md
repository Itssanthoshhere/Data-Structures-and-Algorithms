# 🚀 Day 92: Solve Problems on Arrays [Easy] - Longest Subarray with Given Sum K (Positives) 🚀

Welcome to **Day 92** of my coding journey! Today, we tackled the problem of finding the **longest subarray** whose sum equals a given number **K** in an array of positive integers. This is a great problem for practicing optimization techniques and understanding the importance of efficient algorithms.

## 📋 Problem Explanation

Given an array of positive integers, our task is to find the length of the longest contiguous subarray whose sum is exactly **K**.

### Example:
- **Input**: Array = [1, 2, 3, 4, 5], K = 9
- **Output**: Length = 2 (Subarray: [4, 5])

### Approach
We can solve this problem using various approaches, and today we’ll explore multiple solutions to understand the trade-offs between them.

## 💡 Solution Approaches

### 1️⃣ Brute Force Approach
The simplest method is to generate all possible subarrays using nested loops and calculate their sum. This approach works, but it is inefficient for large arrays.

- **Time Complexity**: **O(N³)**
- **Space Complexity**: **O(1)**

### 2️⃣ Optimized Approach (Using Two Loops)
We can improve the brute force approach by calculating the sum of subarrays progressively. This way, we don’t have to recalculate the sum each time, which reduces redundant computations.

- **Time Complexity**: **O(N²)**
- **Space Complexity**: **O(1)**

### 3️⃣ Better Approach (Using Hashing)
By using a **hashmap** to store the prefix sums and their indices, we can find the sum of any subarray in constant time. This is much more efficient than the previous approaches.

- **Time Complexity**: **O(N)**
- **Space Complexity**: **O(N)**

### 4️⃣ Optimal Approach (Using Two Pointers)
The two-pointer technique allows us to dynamically adjust the subarray and track its sum without recalculating it repeatedly, making this solution optimal.

- **Time Complexity**: **O(N)**
- **Space Complexity**: **O(1)**

## 📌 Code Example (Optimal Approach)

### C++ Code Implementation Using Two Pointers

```cpp
#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(const vector<int>& arr, int K) {
    int start = 0, sum = 0, maxLength = 0;

    for (int end = 0; end < arr.size(); end++) {
        sum += arr[end];

        // Shrink the window from the left if sum exceeds K
        while (sum > K && start <= end) {
            sum -= arr[start++];
        }

        // Check if we have found the desired subarray
        if (sum == K) {
            maxLength = max(maxLength, end - start + 1);
        }
    }
    return maxLength;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int K = 9;

    cout << "Length of longest subarray with sum " << K << ": " 
         << longestSubarrayWithSumK(arr, K) << endl;

    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Time Complexity**:
   - **O(N)**: We iterate over the array only once, and each element is processed at most twice (once when added and once when removed from the window).
2. **Space Complexity**:
   - **O(1)**: We only use a few extra variables to keep track of the sum and indices.

## 🧩 Key Takeaways

- **Efficiency**: Using hashing and two-pointers can reduce the time complexity to linear time **O(N)**, making it efficient for large arrays.
- **Optimization**: The problem is a great example of how optimization techniques like sliding windows (two-pointers) and hashing can drastically improve performance.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 92 here: [GitHub - Day92 Longest Subarray with Sum K](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day92%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Longest%20Subarray%20with%20given%20Sum%20K%20%5BPositives%5D/Longest_Subarray_with_given_Sum_K%5BPositives%5D.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
