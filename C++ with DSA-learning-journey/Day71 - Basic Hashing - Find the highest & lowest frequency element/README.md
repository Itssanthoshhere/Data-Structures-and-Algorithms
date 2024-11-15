# 🚀 Day 71: Basic Hashing - Find the Highest/Lowest Frequency Element 🚀

Welcome to **Day 71** of my coding journey! Today, I focused on solving a problem using **hashing** to determine the highest and lowest frequency elements in an array. Hashing allows us to efficiently count element frequencies, making it a powerful approach for frequency-based problems.

## 📋 Problem Explanation

Given an array of integers, we need to identify:
- The element with the **highest frequency**.
- The element with the **lowest frequency**.

### Examples

- **Example 1**:
  - **Input**: `array[] = {10, 5, 10, 15, 10, 5}`
  - **Output**: `10 15`
  - **Explanation**: The frequency of `10` is 3 (highest), and the frequency of `15` is 1 (lowest).

- **Example 2**:
  - **Input**: `array[] = {2, 2, 3, 4, 4, 2}`
  - **Output**: `2 3`
  - **Explanation**: The frequency of `2` is 3 (highest), and the frequency of `3` is 1 (lowest).

## 💡 Solution Approach

### Approach 1: Brute Force (Using Nested Loops)

1. Use a `visited` array to mark elements that have already been processed.
2. For each element, iterate through the array to count its occurrences.
3. Track the element with the **highest** and **lowest** frequencies.

#### Complexity Analysis
- **Time Complexity**: `O(N^2)`
- **Space Complexity**: `O(N)` (for the visited array)

### Approach 2: Optimized Solution (Using Hash Map)

1. Use a **hash map** to store the frequency of each element.
2. Traverse the array once to populate the hash map with element frequencies.
3. Iterate over the hash map to find the elements with the **highest** and **lowest** frequencies.

#### Complexity Analysis
- **Time Complexity**: `O(N)`
- **Space Complexity**: `O(N)` (for the hash map)

## 📌 Code Example

Here’s the C++ code for the optimized solution:

```cpp
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

void findHighestLowestFrequency(const vector<int>& arr) {
    unordered_map<int, int> frequency;

    // Count frequencies
    for (int num : arr) {
        frequency[num]++;
    }

    int highestFreq = 0, lowestFreq = arr.size();
    int highestElem = -1, lowestElem = -1;

    // Find highest and lowest frequency elements
    for (const auto& pair : frequency) {
        if (pair.second > highestFreq) {
            highestFreq = pair.second;
            highestElem = pair.first;
        }
        if (pair.second < lowestFreq) {
            lowestFreq = pair.second;
            lowestElem = pair.first;
        }
    }

    cout << "Highest Frequency Element: " << highestElem << endl;
    cout << "Lowest Frequency Element: " << lowestElem << endl;
}

int main() {
    vector<int> arr = {10, 5, 10, 15, 10, 5};
    findHighestLowestFrequency(arr);
    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Counting Frequencies**:
   - **Time Complexity**: `O(N)`, where `N` is the size of the array.
   - **Space Complexity**: `O(N)` for the hash map.
2. **Finding Min/Max Frequencies**:
   - **Time Complexity**: `O(N)` for iterating over the hash map entries.

Overall, this approach is efficient for large arrays compared to brute-force methods.

## 🧩 Key Takeaways

- Hashing is an efficient way to solve frequency-related problems in `O(N)` time complexity.
- By using a hash map, we can avoid nested loops, making our code faster and more scalable.
- This method can be extended to find multiple elements with the same highest or lowest frequencies.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 71 here: [GitHub - Day71 Basic Hashing](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day71%20-%20Basic%20Hashing%20-%20Find%20the%20highest%20%26%20lowest%20frequency%20element/Find_the_highest_%26_lowest%20frequency_element.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
