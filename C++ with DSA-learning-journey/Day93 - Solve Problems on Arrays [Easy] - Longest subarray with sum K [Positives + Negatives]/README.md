# 🚀 Day 93: Solve Problems on Arrays [Easy] - Longest Subarray with Given Sum K (Positives + Negatives) 🚀

Welcome to **Day 93** of my coding journey! Today, I tackled the **Longest Subarray with a Given Sum K**, a problem that combines array manipulation with optimization techniques like prefix sums and hashing.

---

## 📋 Problem Explanation

Given an array of integers (both positive and negative) and a target sum `K`, find the **length of the longest subarray** whose sum equals `K`.

### Example

**Input**:  
`array = [10, 2, -2, -20, 10]`, `K = -10`  
**Output**:  
`3`  
**Explanation**: The subarray `[10, 2, -20]` sums up to `-10` and has the maximum length of 3.

---

## 💡 Solution Approaches

### 🟠 Naive Approach (Brute Force)

- **Idea**:  
  Use nested loops to generate all subarrays, calculate their sums, and track the maximum length for which the sum equals `K`.

- **Time Complexity**:  
  **O(N³)** - Generating all subarrays and recalculating sums.

- **Space Complexity**:  
  **O(1)** - No extra space used.

---

### 🟢 Better Approach (Two Loops)

- **Idea**:  
  Use two loops to maintain a **running sum** while iterating. Track the maximum length when the running sum equals `K`.

- **Time Complexity**:  
  **O(N²)** - Calculate sums for each subarray.

- **Space Complexity**:  
  **O(1)** - No extra data structures used.

---

### 🔵 Optimal Approach (Hashing)

- **Idea**:  
  Use a hash map to store **prefix sums**. For each element, check if the difference between the current prefix sum and `K` exists in the map. If yes, calculate the length of the subarray.

- **Steps**:
  1. Traverse the array while maintaining a running prefix sum.
  2. Check if `prefix_sum - K` exists in the hash map. If yes, calculate the length.
  3. If the prefix sum is not in the map, store it with its index.

- **Time Complexity**:  
  **O(N)** - Single pass through the array.

- **Space Complexity**:  
  **O(N)** - Hash map to store prefix sums.

---

## 📌 Code Example (Optimal Approach)

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int K) {
    unordered_map<int, int> prefixSumMap; // Store prefix sums
    int maxLength = 0, prefixSum = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        // Check if the prefix sum is equal to K
        if (prefixSum == K) {
            maxLength = max(maxLength, i + 1);
        }

        // Check if prefix_sum - K exists in the map
        if (prefixSumMap.find(prefixSum - K) != prefixSumMap.end()) {
            maxLength = max(maxLength, i - prefixSumMap[prefixSum - K]);
        }

        // Add prefix sum to the map if not already present
        if (prefixSumMap.find(prefixSum) == prefixSumMap.end()) {
            prefixSumMap[prefixSum] = i;
        }
    }

    return maxLength;
}

int main() {
    vector<int> arr = {10, 2, -2, -20, 10};
    int K = -10;
    cout << "Longest subarray length with sum " << K << ": " 
         << longestSubarrayWithSumK(arr, K) << endl;
    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Preprocessing**:  
   - **Time Complexity**: **O(N)** - Single traversal.
   - **Space Complexity**: **O(N)** - Hash map to store prefix sums.

2. **Query Handling**:  
   - Each query runs in **O(1)** by accessing the hash map.

3. **Overall Complexity**:  
   - **Time Complexity**: **O(N)**.  
   - **Space Complexity**: **O(N)**.

---

## 🧩 Key Takeaways

- **Hashing Optimization**: By leveraging prefix sums and a hash map, the problem's complexity is reduced to linear time.
- **Edge Cases**: Always consider cases where `K = 0`, negative numbers, or all positive numbers in the array.
- **Scalability**: This approach scales well for large arrays.

---

## 🔗 Additional Resources

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out my code on GitHub

You can find the complete code for **Day 93** here:  
[GitHub - Day93 Longest Subarray with Sum K](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day93%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Longest%20subarray%20with%20sum%20K%20%5BPositives%20%2B%20Negatives%5D/Longest_subarray_with_sum_K%5BPositives%2BNegatives%5D.cpp)

---

## 🔗 Connect with Me

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more as I continue to explore DSA and problem-solving!
