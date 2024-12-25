# 🚀 Day 91: Solving Problems on Arrays [Easy] - Finding the Single Element 🚀

Welcome to **Day 91** of my coding journey! Today, I tackled a classic problem: finding the single element in an array where all other elements appear twice. This problem serves as an excellent introduction to hashing and bit manipulation concepts.

## 📋 Problem Explanation

Given an array where every element appears **twice** except for one, your task is to find the number that appears only **once**.

### Example
- **Input**: `{4, 1, 2, 1, 2}`
- **Output**: `4`

## 💡 Solution Approaches

### 1️⃣ Brute Force Approach
- **Intuition**: For each element, iterate through the array to count its occurrences.
- **Drawback**: Inefficient due to nested loops.
- **Time Complexity**: `O(N²)`
- **Space Complexity**: `O(1)`

### 2️⃣ Better Approach: Hashing
- **Array Hashing**:
  - Use a frequency array to count occurrences.
  - **Time Complexity**: `O(3N) = O(N)`
  - **Space Complexity**: `O(maxElement)`
- **Map Hashing**:
  - Use a map to store occurrences of each element.
  - **Time Complexity**: `O(N ⋅ logM)` (M = unique elements)
  - **Space Complexity**: `O(M)`

### 3️⃣ Optimal Approach: XOR
- **Intuition**:  
  - XOR of a number with itself is `0`.  
  - XOR of a number with `0` is the number itself.  
  - XOR all elements; pairs cancel out, leaving the unique number.
- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(1)`

## 💻 Code Implementation

### Optimal Approach (XOR)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findSingleElement(vector<int> &nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR operation
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single element is: " << findSingleElement(nums) << endl;
    return 0;
}
```

### Using Hash Map

```cpp
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int findSingleElement(vector<int> &nums) {
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }
    for (auto pair : freq) {
        if (pair.second == 1) {
            return pair.first;
        }
    }
    return -1; // In case no single element exists
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single element is: " << findSingleElement(nums) << endl;
    return 0;
}
```

## ⚙️ Complexity Analysis

| Approach           | Time Complexity | Space Complexity |
|---------------------|-----------------|------------------|
| Brute Force        | `O(N²)`         | `O(1)`           |
| Hashing (Array)    | `O(N)`          | `O(maxElement)`  |
| Hashing (Map)      | `O(N ⋅ logM)`   | `O(M)`           |
| XOR (Optimal)      | `O(N)`          | `O(1)`           |

## 🔑 Key Takeaways
- XOR is a powerful tool for solving problems involving pairs of numbers.
- Hashing simplifies occurrence counting but may not be the most optimal in all scenarios.
- Always evaluate the trade-off between time and space complexity based on the problem constraints.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 91 here: [GitHub - Day91 Arrays - Find the Single Element](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day91%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20the%20number%20that%20appear%20once%2C%20%26%20after%20numbers%20twice/Find_the_number_that_appear_once_%26_after_numbers_twice.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue exploring the depths of C++ and DSA! 🚀
