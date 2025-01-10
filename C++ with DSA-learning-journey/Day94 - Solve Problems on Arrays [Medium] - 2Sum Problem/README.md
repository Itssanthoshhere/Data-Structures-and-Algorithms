# 🚀 Day 94: Solve Problems on Arrays [Medium] - Two Sum 🚀

Welcome to **Day 94** of my coding journey! Today, I worked on solving the classic **Two Sum** problem, exploring multiple approaches for efficient solutions. The Two Sum problem is an excellent example of applying logical reasoning and efficient algorithms to optimize performance.

---

## 📋 Problem Explanation

You are given:
1. An array of integers `arr[]`.
2. An integer `target`.

### Tasks:
- **Variant 1**: Return `"YES"` if there exists a pair of numbers whose sum equals the `target`; otherwise, return `"NO"`.
- **Variant 2**: Return the **indices** of the two numbers whose sum equals the `target`; otherwise, return `{-1, -1}`.

### Constraints:
- The same element cannot be used twice.

---

## 💡 Solution Approaches

### 1️⃣ Brute Force Approach  
**Steps**:
- For each element, iterate through the rest of the array to check if their sum equals the target.
  
**Complexity**:  
- **Time**: \(O(N^2)\)  
- **Space**: \(O(1)\)  

---

### 2️⃣ Hashing (Using a Map)
**Steps**:
- Traverse the array while maintaining a map to store visited elements.  
- For each element, check if `target - arr[i]` exists in the map.

**Complexity**:  
- **Time**: \(O(N)\)  
- **Space**: \(O(N)\)  

---

### 3️⃣ Two-Pointer Technique
**Steps**:
1. Sort the array.  
2. Use two pointers (`left` and `right`) to find pairs that sum to the target.  
3. Adjust pointers based on the current sum.

**Complexity**:  
- **Time**: \(O(N \log N)\) (due to sorting)  
- **Space**: \(O(1)\)

---

## 📌 Code Implementation

### Brute Force Approach (Variant 1)

```cpp
#include <iostream>
#include <vector>
using namespace std;

string twoSumBruteForce(vector<int>& arr, int target) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                return "YES";
            }
        }
    }
    return "NO";
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    cout << twoSumBruteForce(arr, target) << endl; // Output: YES
    return 0;
}
```

---

### Hashing Approach (Variant 2)

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

pair<int, int> twoSumHashing(vector<int>& arr, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int complement = target - arr[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i};
        }
        mp[arr[i]] = i;
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    pair<int, int> result = twoSumHashing(arr, target);
    cout << "Indices: {" << result.first << ", " << result.second << "}" << endl;
    return 0;
}
```

---

### Two-Pointer Technique (Variant 2)

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> twoSumTwoPointer(vector<int>& arr, int target) {
    vector<pair<int, int>> sortedArr;
    for (int i = 0; i < arr.size(); i++) {
        sortedArr.push_back({arr[i], i});
    }
    sort(sortedArr.begin(), sortedArr.end());

    int left = 0, right = sortedArr.size() - 1;
    while (left < right) {
        int sum = sortedArr[left].first + sortedArr[right].first;
        if (sum == target) {
            return {sortedArr[left].second, sortedArr[right].second};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }
    return {-1, -1};
}

int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;
    pair<int, int> result = twoSumTwoPointer(arr, target);
    cout << "Indices: {" << result.first << ", " << result.second << "}" << endl;
    return 0;
}
```

---

## ⚙️ Complexity Comparison

| Approach            | Time Complexity | Space Complexity |
|---------------------|----------------|------------------|
| Brute Force         | \(O(N^2)\)     | \(O(1)\)         |
| Hashing (Map)       | \(O(N)\)       | \(O(N)\)         |
| Two-Pointer         | \(O(N \log N)\)| \(O(1)\)         |

---

## 🧩 Key Takeaways
- **Brute Force**: Simple but inefficient.  
- **Hashing**: Fast with extra space.  
- **Two-Pointer**: Optimal for sorted arrays.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 94 here:  
[GitHub - Day 94: Two Sum Problem](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day94%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%202Sum%20Problem/2Sum_Problem.cpp)

---

## 🔗 Connect with Me
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to explore the world of **Data Structures and Algorithms**! 🚀
