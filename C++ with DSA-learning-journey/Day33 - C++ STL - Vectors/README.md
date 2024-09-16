# **Day 33: C++ STL - Vectors**

## 🚀 Overview

On **Day 33**, I explored the **C++ Standard Template Library (STL)** with a focus on **vectors**. Vectors are dynamic arrays that provide flexibility in managing collections of data, offering numerous functions for inserting, deleting, and accessing elements.

## 📋 Key Topics Covered

1. **Vector Initialization**:
   - **Empty vector**: `vector<int> v;`
   - **Vector with default values**: `vector<int> v1(5, 100);` (creates a vector of 5 elements, all initialized to 100)
   - **Copying vectors**: `vector<int> v2(v1);`

2. **Adding Elements**:
   - `v.push_back(1);` – Adds elements at the end.
   - `v.emplace_back(2);` – Similar to `push_back()` but more efficient.

3. **Accessing Elements**:
   - Using `[]`: `v[0]`
   - Using `at()`: `v.at(0)` (safer as it checks bounds)
   - **Last element**: `v.back()`

4. **Iterators**:
   - **Forward iterators**: `vector<int>::iterator it = v.begin();`
   - **Reverse iterators**: `vector<int>::reverse_iterator rit = v.rbegin();`
   - Iterators allow easy traversal and modification of elements.

5. **Modifying Vectors**:
   - **Erase**: `v.erase(v.begin() + 1);` (removes element at position 1)
   - **Insert**: `v.insert(v.begin(), 300);` (inserts 300 at the start)
   - **Pop back**: `v.pop_back();` (removes the last element)
   - **Swap**: `v1.swap(v2);` (swaps contents of two vectors)

6. **Size & Capacity**:
   - `v.size();` – Get the number of elements in the vector.
   - `v.clear();` – Removes all elements.

7. **Checking for Empty Vector**:
   - `v.empty();` – Returns `1` if the vector is empty, otherwise `0`.

## 💻 Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100);
    vector<int> v2(5);
    vector<int> v3(5, 20);
    vector<int> v4(v3);

    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it) << " ";  // Output: 100

    it = it + 2;
    cout << *(it) << " ";  // Output: 100

    for (auto it : v1) {
        cout << it << " ";  // Output: 100 100 100 100 100
    }
}

int main() {
    explainVector();
    return 0;
}
```

## 🧠 Challenges Faced

- Efficiently manipulating **iterators** while iterating through vector elements.
- Differentiating between **push_back()** and **emplace_back()** for optimal performance.

## 💡 Reflections

C++ vectors provide an excellent way to manage dynamic arrays and are fundamental to many C++ applications. Understanding iterators and vector operations is essential for optimizing performance when working with large datasets.

## 🔗 Resources

- [C++ STL Documentation](https://en.cppreference.com/w/cpp/container/vector)

## 🔗 GitHub Repository

Link to the code and examples: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day33%20-%20C%2B%2B%20STL%20-%20Vectors/STL_Vectors.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
