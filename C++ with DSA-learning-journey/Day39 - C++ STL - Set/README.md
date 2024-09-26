# 🚀 𝐃𝐚𝐲 𝟑𝟗: 𝐂++ 𝐒𝐞𝐭 𝐎𝐩𝐞𝐫𝐚𝐭𝐢𝐨𝐧𝐬 𝐢𝐧 𝐒𝐓𝐋 - 𝐂𝐨𝐧𝐭𝐚𝐢𝐧𝐞𝐫𝐬 (𝐏𝐚𝐫𝐭 𝟕) 

## 📄 Overview

On **Day 39**, I delved into the **Set Operations** in C++, focusing on how to manage collections that are automatically sorted and contain unique elements. The C++ `set` container, part of the Standard Template Library (STL), is invaluable for scenarios where uniqueness and sorted data are required.

## 📝 Concepts Covered
1. **Auto-Sorted Elements**: Understanding how the `set` container automatically keeps elements in sorted order.
2. **Uniqueness Guarantee**: Ensuring that duplicate elements are ignored, making `set` perfect for managing unique datasets.
3. **Key Operations and Their Complexity**:
   - **Insertion (`insert`, `emplace`)**: O(log n) - Adds elements while maintaining order.
   - **Finding Elements (`find`, `count`)**: O(log n) - Efficient search using internal binary search.
   - **Erasure (`erase by value`)**: O(log n) - Removes specific elements efficiently.
   - **Erase by Iterator**: O(1) - Removes elements pointed to by the iterator in constant time.
   - **Other Operations**: `size()`, `empty()`, `swap()` - All have O(1) time complexity.

4. **Bound Functions**:
   - **lower_bound()**: Returns the first element greater than or equal to a given value.
   - **upper_bound()**: Returns the first element strictly greater than a given value.

## 🚀 Code Implementation

Here’s a code snippet demonstrating basic operations on a `set` in C++:

```cpp
#include <iostream>
#include <set>

using namespace std;

void explainSet() {
    set<int> s;

    // Insert elements into the set
    s.insert(3);   // Set: {3}
    s.insert(1);   // Set: {1, 3}
    s.insert(4);   // Set: {1, 3, 4}
    s.insert(1);   // Set: {1, 3, 4} (1 is not inserted again)

    // Find an element in the set
    if (s.find(3) != s.end()) {
        cout << "3 found in the set" << endl;
    }

    // Erase an element by value
    s.erase(3);   // Set: {1, 4}

    // Use of lower_bound and upper_bound
    auto lb = s.lower_bound(2);  // Points to 4
    auto ub = s.upper_bound(4);  // Points to the end

    // Check set properties
    cout << "Size of the set: " << s.size() << endl;
    cout << "Is the set empty? " << (s.empty() ? "Yes" : "No") << endl;

    // Displaying all elements
    for (auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {
    explainSet();
    return 0;
}
```

### Key Operations:
- **insert(3)**: Adds `3` to the set (Set: `{3}`)
- **insert(1)**: Adds `1` to the set (Set: `{1, 3}`)
- **insert(4)**: Adds `4` to the set (Set: `{1, 3, 4}`)
- **erase(3)**: Removes `3` from the set (Set: `{1, 4}`)
- **lower_bound(2)**: Points to the first element greater than or equal to `2` (Points to `4`)
- **upper_bound(4)**: Points to the first element strictly greater than `4` (Points to end)

## 🌟 Output:

```shell
3 found in the set
Size of the set: 2
Is the set empty? No
1 4 
```

## 🔑 Learning Points

- The `set` container is ideal for maintaining unique and sorted collections, making it suitable for tasks requiring ordered and duplicate-free data.
- Operations like `insert()`, `find()`, `erase()`, and bounds (`lower_bound()`, `upper_bound()`) are crucial for efficient data management.
- Understanding the O(log n) complexity of `set` operations is key to leveraging its performance benefits, especially with large datasets.

## 🔗 Additional Resources

- [C++ STL Set Documentation](https://cplusplus.com/reference/set/set/)

### 📂 GitHub Repository

You can find the code implementation for Day 39 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day39%20-%20C%2B%2B%20STL%20-%20Set/STL_Set.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
