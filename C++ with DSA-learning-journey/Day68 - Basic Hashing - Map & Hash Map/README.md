# 🚀 Day 68: Mastering Basic Hashing - Map & Hash Map 🚀

Welcome to **Day 68** of my coding journey! Today, we’re focusing on **Map and Hash Map** in C++, exploring how these data structures optimize frequency counting in arrays and enable efficient querying for element frequencies.

## 📋 Problem Explanation

Imagine we have an array, and we want to find the frequency of specific elements within it. Using a map or hash map, we can store each element’s occurrence and retrieve its frequency efficiently in constant time for each query.

Example:
- **Given Array**: `[1, 2, 3, 1, 3, 2, 12]`
- **Queries**: `1`, `3`, `12`
- **Output**:
  - `1`: 2
  - `3`: 2
  - `12`: 1

Using brute force, we would need to iterate through the array for each query, resulting in a time complexity of **O(Q * N)**. Instead, with hashing, we can achieve a time complexity of **O(1)** per query after preprocessing.

## 💡 Solution Approach

### Brute Force Solution
1. For each query, loop through the array to count occurrences of the element.
2. **Drawback**: This solution has **O(Q * N)** time complexity, where `Q` is the number of queries and `N` is the length of the array.

### Optimized Solution Using Map
By using maps in C++, we can store frequencies during a single pass over the array, and later retrieve them in constant time.

### Key Concepts of Maps
1. **Map**:
   - Elements are stored in sorted order, making it easier to iterate in order.
   - **O(log N)** time complexity for access.
2. **Unordered Map**:
   - Faster average **O(1)** time complexity for access but does not maintain element order, ideal for frequent lookups.

## 📌 Code Example

### Using Map

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void countElementFrequencies(const vector<int>& arr, unordered_map<int, int>& freqMap) {
    for (int num : arr) {
        freqMap[num]++;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 1, 3, 2, 12};
    unordered_map<int, int> freqMap;
    countElementFrequencies(arr, freqMap);

    // Example queries
    vector<int> queries = {1, 3, 12};
    for (int query : queries) {
        cout << "Frequency of " << query << ": " << freqMap[query] << endl;
    }
    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Preprocessing**:
   - **Time Complexity**: **O(N)**, where `N` is the length of the array.
   - **Space Complexity**: **O(K)**, where `K` is the number of unique elements.
2. **Query Handling**:
   - Each query is handled in **O(1)** on average with unordered maps.
3. **Overall Complexity**:
   - **Time Complexity**: **O(N + Q)**, where `Q` is the number of queries.
   - **Space Complexity**: **O(K)**, due to the hash map storing frequencies.

## 🧩 Key Takeaways

- Maps and hash maps streamline and accelerate frequency-related operations.
- They handle both small and large ranges, offering space-efficient solutions for sparse data.
- Ideal for applications with frequent frequency queries and varying element ranges.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 68 here: [GitHub - Day68 Map & Hash Map](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day68%20-%20Basic%20Hashing%20-%20Map%20%26%20Hash%20Map/Map_and_HashMap.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue my deep dive into C++ and DSA with Striver’s A2Z DSA Sheet!
