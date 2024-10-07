# 🚀 𝐃𝐚𝐲 𝟒𝟐: 𝐌𝐚𝐩 𝐎𝐩𝐞𝐫𝐚𝐭𝐢𝐨𝐧𝐬 𝐢𝐧 𝐂++ - 𝐂𝐨𝐧𝐭𝐚𝐢𝐧𝐞𝐫𝐬 (𝐏𝐚𝐫𝐭 𝟏𝟎) 🚀

## Overview 🌟

On **Day 42** of my C++ learning journey, I delved into the **Map** container from the STL (Standard Template Library). This powerful data structure allows you to store **key-value** pairs with **unique keys** and sorts them by default, making it ideal for scenarios that require **fast access** and **sorted data** 🌐.

### Key Topics Covered 📚:
- **Basic Operations**: 
  - Insertion, access, searching, and erasing elements.
  - Utilizing `lower_bound` and `upper_bound` functions for range queries.
- **Types of Maps**:
  - Simple maps with **integers** as keys and values.
  - Nested maps where the **value** is a pair or the **key** is a pair 🗝️.
- **Complexity**: 
  - Operations like insertion, deletion, and access are **O(log n)**.

## Key Concepts 🚀

1. **Map**:  
   - Stores **key-value pairs** with unique keys, providing **efficient access** and retrieval based on the key.
   - Average time complexities:  
     - Insertion: **O(log n)**  
     - Search: **O(log n)**  
     - Deletion: **O(log n)**  

2. **Key Operations** 🔧:
   - **Insert**: Add key-value pairs in **O(log n)** time.
   - **Find**: Retrieve an element using its key in **O(log n)** time.
   - **Erase**: Remove an element by key in **O(log n)** time.
   - **Lower Bound & Upper Bound**: Efficiently locate ranges of values in a sorted map 🎯.

## Code Implementation 💻

```cpp
#include <iostream>
#include <map>

using namespace std;

void explainMap() {
    map<int, string> m;

    // Inserting elements
    m[1] = "Apple";
    m[2] = "Banana";
    m[3] = "Cherry";
    m[4] = "Date";
    
    // Display elements
    cout << "Elements in the map: " << endl;
    for (const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Finding an element
    auto it = m.find(2);
    if (it != m.end()) {
        cout << "Element with key 2 is: " << it->second << endl;
    } else {
        cout << "Element with key 2 not found." << endl;
    }

    // Using lower_bound and upper_bound
    auto lb = m.lower_bound(2);
    auto ub = m.upper_bound(3);
    cout << "Lower bound for key 2: " << lb->first << endl;
    cout << "Upper bound for key 3: " << ub->first << endl;

    // Deleting an element
    m.erase(3);
    cout << "After erasing key 3, elements in the map: " << endl;
    for (const auto& pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }
}

int main() {
    explainMap();
    return 0;
}
```

### Output 🎉:
```
Elements in the map: 
1: Apple
2: Banana
3: Cherry
4: Date
Element with key 2 is: Banana
Lower bound for key 2: 2
Upper bound for key 3: 4
After erasing key 3, elements in the map: 
1: Apple
2: Banana
4: Date
```

### Explanation 🧐:
- **Insertions**: Key-value pairs are added to the map and displayed in sorted order by key.
- **Finding**: Successfully retrieves the value associated with key `2`.
- **Lower and Upper Bounds**: Efficiently identifies bounds in the sorted map.
- **Erasure**: Element with key `3` is removed from the map.

## Reflections 💭
- The **Map** container is incredibly versatile for applications needing sorted data and quick lookups based on keys.
- Its efficiency in operations makes it a vital data structure in many algorithms and applications. 🚀

## Resources 🔗
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [My Code on GitHub](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day42%20-%20C%2B%2B%20STL%20-%20Map/STL_Map.cpp)

---
### 📂 GitHub Repository

You can find the code implementation for Day 42 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
