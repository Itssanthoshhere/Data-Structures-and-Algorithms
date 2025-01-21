# Practiced a Question on Arrays - Maximum Score from Subarray Minimums in C++

Welcome to Day 98 of my C++ and DSA learning journey! Today, I focused on solving a problem related to calculating the maximum score from subarray minimums. This problem challenged me to think about optimizing the process of finding the smallest and second smallest elements in subarrays and maximizing the sum of these values across all possible subarrays.

## 📚 Topic Covered
- **Arrays:** The problem required working with arrays, specifically focusing on identifying subarrays and calculating the sum of their minimum and second minimum elements efficiently.

## 📝 Problem Statement
### Problem: Maximum Score from Subarray Minimums

Given an array `arr[]`, with 0-based indexing, select two indices `i` and `j` such that `i < j`. From the subarray `arr[i...j]`, choose the smallest and second smallest numbers, sum them, and return the maximum possible sum across all subarrays.

### Example
- **Input:** `arr[] = [4, 3, 1, 5, 6]`
- **Output:** `11`
  
### Explanation
- The subarray `[5, 6]` has the smallest element = 5 and the second smallest element = 6. The sum is 5 + 6 = 11, which is the maximum possible sum.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxScoreFromSubarray(const vector<int>& arr) {
    int n = arr.size();
    int maxScore = INT_MIN;
    
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int minVal = INT_MAX, secondMinVal = INT_MAX;
            // Find the smallest and second smallest numbers in arr[i...j]
            for (int k = i; k <= j; ++k) {
                if (arr[k] < minVal) {
                    secondMinVal = minVal;
                    minVal = arr[k];
                } else if (arr[k] < secondMinVal) {
                    secondMinVal = arr[k];
                }
            }
            maxScore = max(maxScore, minVal + secondMinVal);
        }
    }
    
    return maxScore;
}

int main() {
    vector<int> arr = {4, 3, 1, 5, 6};
    cout << "Maximum Score from Subarray Minimums: " << maxScoreFromSubarray(arr) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Efficient Array Traversal:** This problem helped me improve my array traversal techniques, where I focused on selecting pairs of elements efficiently.
- **Subarray Handling:** By maintaining a sliding window of indices, I could handle subarrays more efficiently and compute the required sum.
- **Optimization:** The brute-force approach can be optimized further by using stacks or other methods to minimize the time complexity.

## 🔗 Additional Resources
- [GeeksforGeeks: Maximum Score from Subarray Minimums](https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0?category&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=max-sum-in-sub-arrays)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day98%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Print%20subarray%20with%20maximum%20subarray%20sum/Print_subarray_with_maximum_subarray_sum.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!

---

