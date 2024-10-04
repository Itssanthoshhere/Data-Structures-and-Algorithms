# Day 41 - Unordered Set Operations in C++ (Containers - Part 9) 🎯🚀

## Overview 🌟

On **Day 41** of my C++ learning journey, I explored the powerful **unordered_set** container from the STL (Standard Template Library). This container is perfect for storing unique elements in a **hash-based** structure where the **order** of elements is not important. 🧑‍💻

### Key Topics Covered 📚:
- Declaration and initialization of an `unordered_set`.
- Insertion of elements.
- Searching for elements.
- Erasing elements.
- Checking the size of the set.
- Clearing the set.

## Key Concepts 🚀

1. **unordered_set**:  
   - It provides **fast insertions, deletions**, and **searches** compared to `set` because of its hash table structure.  
   - **No specific order** is maintained.
   - Average time complexities:  
     - Insertion: **O(1)**  
     - Search: **O(1)**  
     - Deletion: **O(1)**  

2. **Hashing** 🧠:
   - Elements are stored based on their **hash values**, allowing for **quick access** and **manipulation**.

3. **Core Operations** 🔧:
   - **Insert**: Add unique elements to the set in **O(1)** time.
   - **Find**: Search for an element in **O(1)** time.
   - **Erase**: Remove an element in **O(1)** time.
   - **Clear**: Clear the entire set in **O(n)** time.
   - **Size**: Get the number of elements stored in the set.

## Code Implementation 💻

```cpp
#include <iostream>
#include <unordered_set>

using namespace std;

void explainUSet() {
    unordered_set<int> st;

    // Inserting elements
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);

    // Display elements
    cout << "Elements in the unordered set: ";
    for (int elem : st) {
        cout << elem << " ";  // No particular order is guaranteed
    }
    cout << endl;

    // Search for an element
    int findElem = 30;
    if (st.find(findElem) != st.end()) {
        cout << "Element " << findElem << " is present in the unordered set." << endl;
    } else {
        cout << "Element " << findElem << " is not present in the unordered set." << endl;
    }

    // Erase an element
    st.erase(40);
    cout << "After erasing 40, elements in the unordered set: ";
    for (int elem : st) {
        cout << elem << " ";
    }
    cout << endl;

    // Check the size
    cout << "Size of the unordered set: " << st.size() << endl;

    // Clear the set
    st.clear();
    cout << "After clearing, size of the unordered set: " << st.size() << endl;
}

int main() {
    explainUSet();
    return 0;
}
```

### Output 🎉:
```
Elements in the unordered set: 50 40 10 20 30 
Element 30 is present in the unordered set.
After erasing 40, elements in the unordered set: 50 10 20 30 
Size of the unordered set: 4
After clearing, size of the unordered set: 0
```

### Explanation 🧐:
- **Insertions**: Elements are added to the set, printed in random order.
- **Search**: Successfully finds the element `30`.
- **Erasure**: Element `40` is removed from the set.
- **Size**: Displays the size before and after clearing the set.

## Reflections 💭
- The **unordered_set** is ideal when **order doesn’t matter** and when you need **fast lookups** and **insertions**.
- It provides significant performance advantages over a **set**, especially in search and insertion operations. 🚀

## Resources 🔗
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [My Code on GitHub](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day41%20-%20C%2B%2B%20STL%20-%20UnorderedSet/STL_UnorderedSet.cpp)

---
### 📂 GitHub Repository

You can find the code implementation for Day 41 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
