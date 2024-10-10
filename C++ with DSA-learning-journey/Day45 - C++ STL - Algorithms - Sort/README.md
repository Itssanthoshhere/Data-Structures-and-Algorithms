# 🚀 Day 45: Mastering Sorting Algorithms in C++! 🚀

Today, I focused on **sorting algorithms** in C++! Sorting is a fundamental operation in programming, and the C++ STL provides powerful tools to make it easy and efficient. Here’s a breakdown of what I learned and practiced.

## 📚 What I Learned:
- **Sorting an Array in Ascending Order**: Used `sort()` to order an entire array from smallest to largest.
- **Sorting a Specific Range**: Sorted selected portions of an array, useful when only part of the data needs ordering.
- **Sorting in Descending Order**: Leveraged `greater<int>()` for sorting from largest to smallest.
- **Sorting an Array of Pairs**: Explored custom sorting using a **lambda function** to order pairs based on the second element, and by the first when they’re equal.

## 📜 Core Operations:
1. **Sorting an Entire Array**: Used `sort()` for ascending order and `sort(..., greater<int>())` for descending order.
2. **Sorting a Range**: Selected specific ranges within the array to sort with `sort(begin, end)`.
3. **Custom Pair Sorting**: Implemented a **lambda function** to sort pairs with dual conditions for efficiency and flexibility.

## 💻 Code Example:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void explainSorting() {
    vector<int> arr = {5, 3, 8, 6, 2, 7};

    // Sort the entire array in ascending order
    sort(arr.begin(), arr.end());
    cout << "Array sorted in ascending order: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Sort a specific range in the array
    sort(arr.begin() + 2, arr.end() - 1);
    cout << "Array with range [2, end-1) sorted: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Sort the entire array in descending order
    sort(arr.begin(), arr.end(), greater<int>());
    cout << "Array sorted in descending order: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Sorting an array of pairs
    vector<pair<int, int>> pairs = {{1, 2}, {2, 1}, {4, 1}};
    sort(pairs.begin(), pairs.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    cout << "Array of pairs sorted: ";
    for (auto p : pairs) {
        cout << "{" << p.first << ", " << p.second << "} ";
    }
    cout << endl;
}

int main() {
    explainSorting();
    return 0;
}
```

## 🔍 Expected Output:
```
Array sorted in ascending order: 2 3 5 6 7 8
Array with range [2, end-1) sorted: 2 3 5 6 7 8
Array sorted in descending order: 8 7 6 5 3 2
Array of pairs sorted: {4, 1} {2, 1} {1, 2}
```

## 💭 Reflections:
Understanding sorting algorithms and techniques strengthens C++ programming skills. These tools are essential for optimizing performance, allowing for robust and efficient applications. I’m excited to apply these concepts in future projects! 💪

## 🔗 Resources:
- Striver's A2Z DSA Course/Sheet: [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- Full Code on GitHub: [Sorting Algorithms Code](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day45%20-%20C%2B%2B%20STL%20-%20Algorithms%20-%20Sort/STL_AlgorithmsSort.cpp)

---

### 📂 GitHub Repository

You can find the code implementation for Day 45 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
