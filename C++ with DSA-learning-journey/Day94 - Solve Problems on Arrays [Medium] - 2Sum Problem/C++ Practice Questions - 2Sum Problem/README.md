# Practiced a Question on Arrays - Two Sum

Welcome to Day 94 of my C++ and DSA learning journey! Today, I solved the classic **Two Sum** problem, a key challenge that tests problem-solving and optimization skills. It was a great opportunity to reinforce the use of **hashmaps** for efficient data retrieval and processing.

---

## 📚 Topic Covered
- **Hashmaps:** The solution leverages hashmaps to achieve efficient lookup and indexing, reducing time complexity significantly.
- **Array Manipulation:** This problem emphasizes understanding arrays and how to pair values effectively.

---

## 📝 Problem Statement

### Problem: Two Sum  
Given an array of integers `nums` and a target value `target`, return the indices of two numbers such that their sum equals the target.

### Example  
1️⃣ **Input:** `nums = [2, 7, 11, 15], target = 9`  
    **Output:** `[0, 1]`  
    **Explanation:** Since `nums[0] + nums[1] = 9`, return `[0,1]`.  

2️⃣ **Input:** `nums = [3, 2, 4], target = 6`  
    **Output:** `[1, 2]`  

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map; // Hashmap to store numbers and their indices
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (num_map.find(complement) != num_map.end()) {
            // Return indices if complement is found in the map
            return {num_map[complement], i};
        }
        // Store the number and its index in the map
        num_map[nums[i]] = i;
    }
    return {}; // Return empty if no solution exists
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);

    // Print the result
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }

    return 0;
}
```

---

## 🗝️ Key Learnings
- **Efficient Problem Solving:** Hashmaps reduce time complexity to 𝑶(𝒏) by enabling constant-time lookup for the complement of the target.
- **Space-Performance Tradeoff:** Using a hashmap requires additional memory but significantly improves runtime performance compared to a brute-force 𝑶(𝒏²) approach.
- **Array Manipulation Skills:** The problem helped enhance my understanding of indexing and pairing values in arrays.

---

## 🔗 Additional Resources
- [LeetCode - Two Sum](https://leetcode.com/problems/two-sum/)  
- [Coding Ninjas - Two Sum](https://www.naukri.com/code360/problems/reading_6845742?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day94%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%202Sum%20Problem/2Sum_Problem.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I explore arrays, hashmaps, and beyond in C++ and DSA! 🚀
