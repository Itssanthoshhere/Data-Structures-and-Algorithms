# 🚀 Day 43: Multi Map Operations in C++ - Containers (Part 11) 🚀

Today, I explored the **Multi Map** in C++! This powerful container allows for the storage of **multiple keys** or **duplicate keys** while maintaining their sorted order. It’s an excellent tool for scenarios where multiple values are associated with a single key. 📊

## 📚 What I Learned:
- **Multi Map Declaration:** Functions like a regular map but permits duplicate keys.
- **Insertion of Elements:** You can insert multiple entries for the same key without any hassle.
- **Sorted Order:** Elements are maintained in a sorted manner based on the keys, enabling efficient access.

## 📜 Core Operations:
1. **Insertion:** Utilize `insert()` to add key-value pairs to the Multi Map.
2. **Accessing Elements:** Use `equal_range()` to retrieve all values linked with a specific key.
3. **Iterating:** Easily loop through the elements to display the contents.

## 💻 Code Implementation:
Here's an example of using Multi Map in C++:

```cpp
#include <iostream>
#include <map>

using namespace std;

void explainMultiMap() {
    multimap<string, int> mpp;

    // Insert values into the multimap
    mpp.insert({"apple", 1});
    mpp.insert({"banana", 2});
    mpp.insert({"apple", 3});
    mpp.insert({"orange", 4});
    mpp.insert({"banana", 5});

    // Display the contents of the multimap
    cout << "Contents of multimap:" << endl;
    for (const auto& pair : mpp) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find and display elements with the key "apple"
    cout << "\nElements with key 'apple':" << endl;
    auto range = mpp.equal_range("apple");
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}

int main() {
    explainMultiMap();
    return 0;
}
```

### Expected Output:
```
Contents of multimap:
apple: 1
apple: 3
banana: 2
banana: 5
orange: 4

Elements with key 'apple':
apple: 1
apple: 3
```

## 💭 Reflections:
The **Multi Map** is a strong data structure that facilitates efficient storage and retrieval of duplicate keys. Today’s exploration has enhanced my understanding of C++ STL and its powerful containers! 🚀

## 🔗 Resources:
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- [My Code on GitHub](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day43%20-%20C%2B%2B%20STL%20-%20MultiMap/STL_MultiMap.cpp)
  
---

### 📂 GitHub Repository

You can find the code implementation for Day 42 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
