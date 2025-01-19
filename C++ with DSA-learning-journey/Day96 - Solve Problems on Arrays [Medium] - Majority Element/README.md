# 🚀 Day 96: Solve Problems on Arrays [Medium] - Majority Element (>n/2 times) 🚀

Welcome to **Day 96** of my coding journey! Today's focus is on solving a classic array problem: finding the **majority element** in an array, which appears more than `n/2` times. We'll explore multiple approaches, analyze their complexities, and implement them in C++.

---

## 📋 Problem Explanation

### Problem Statement

Given an array of size `N`, identify the **majority element** (an element that appears more than `N/2` times). If no majority element exists, return `-1`.

### Example Input & Output

#### Example 1:
- **Input**: `arr = [3, 3, 4, 2, 4, 4, 2, 4, 4]`
- **Output**: `4` (Appears 5 times, which is > `n/2`)

#### Example 2:
- **Input**: `arr = [1, 2, 3]`
- **Output**: `-1` (No majority element)

---

## 💡 Solution Approaches

### 1️⃣ Brute Force Approach

#### Idea:
For each element, count its occurrences. If any element appears more than `N/2` times, return it.

#### Complexity:
- **Time Complexity**: `O(N^2)` (for nested loops)
- **Space Complexity**: `O(1)`

---

### 2️⃣ Better Approach (Hashing)

#### Idea:
Use a hash map (`unordered_map`) to store the frequency of each element. Find the element with a frequency > `N/2`.

#### Complexity:
- **Time Complexity**: `O(N)` (for insertion and lookup)
- **Space Complexity**: `O(N)`

---

### 3️⃣ Optimal Approach (Moore’s Voting Algorithm)

#### Idea:
1. **Candidate Selection**: Use a counter to find a potential majority element.
2. **Validation**: Verify if the candidate appears more than `N/2` times.

#### Complexity:
- **Time Complexity**: `O(N)` (single traversal for candidate selection and another for verification)
- **Space Complexity**: `O(1)`

---

## 📌 Implementation

### Brute Force Solution

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMajorityElementBrute(const vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (arr[j] == arr[i]) count++;
        }
        if (count > n / 2) return arr[i];
    }
    return -1; // No majority element
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout << "Majority Element: " << findMajorityElementBrute(arr) << endl;
    return 0;
}
```

---

### Hashing Solution

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int findMajorityElementHash(const vector<int>& arr) {
    unordered_map<int, int> freq;
    int n = arr.size();

    for (int num : arr) freq[num]++;

    for (auto [key, count] : freq) {
        if (count > n / 2) return key;
    }
    return -1;
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout << "Majority Element: " << findMajorityElementHash(arr) << endl;
    return 0;
}
```

---

### Moore’s Voting Algorithm

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMajorityElementMoore(const vector<int>& arr) {
    int candidate = -1, count = 0;

    // Step 1: Find candidate
    for (int num : arr) {
        if (count == 0) {
            candidate = num;
        }
        count += (num == candidate) ? 1 : -1;
    }

    // Step 2: Validate candidate
    count = 0;
    for (int num : arr) {
        if (num == candidate) count++;
    }
    return (count > arr.size() / 2) ? candidate : -1;
}

int main() {
    vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    cout << "Majority Element: " << findMajorityElementMoore(arr) << endl;
    return 0;
}
```

---

## ⚙️ Complexity Analysis

| **Approach**               | **Time Complexity** | **Space Complexity** |
|----------------------------|---------------------|-----------------------|
| Brute Force               | `O(N^2)`           | `O(1)`               |
| Hashing                   | `O(N)`             | `O(N)`               |
| Moore’s Voting Algorithm  | `O(N)`             | `O(1)`               |

---

## 🔥 Key Takeaways

- **Brute force** is easy but inefficient.
- **Hashing** is faster but uses extra memory.
- **Moore’s Voting Algorithm** is optimal in both time and space.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 95 here: [Day96 Majority Element (>n/2 times)](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day96%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Majority%20Element/Majority_Element.cpp)

---

## 🔗 Connect with Me
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
