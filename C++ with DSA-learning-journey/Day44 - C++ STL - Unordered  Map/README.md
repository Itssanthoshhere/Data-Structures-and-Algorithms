# 🚀 Day 44: Unordered Map Operations in C++ - Containers (Part 12) 🚀

Today, I explored the **Unordered Map** in C++! Unlike the `map` container, an **unordered_map** allows us to store key-value pairs without a specific order, providing **fast access** and **constant time complexity** on average. This is ideal for situations where order isn't required, but performance is essential. ⚡

## 📚 What I Learned:
- **Unordered Map Declaration:** Enables insertion and access to elements with **constant time complexity** on average, thanks to hash-based storage.
- **Key-Value Pair Storage:** Elements are stored in an **unordered** fashion, which enhances performance for lookups.
- **Checking Existence:** Using the `find()` method to verify if a particular key exists in the unordered map.

## 📜 Core Operations:
1. **Insertion:** Add elements using the `[]` operator or the `insert()` method.
2. **Accessing Elements:** Retrieve values associated with a specific key using `[]`.
3. **Checking for a Key:** The `find()` method allows us to check if a key is present.

## 💻 Code Example:
```cpp
#include <iostream>
#include <unordered_map>

using namespace std;

void explainUnorderedMap() {
    unordered_map<string, int> umap;

    // Insert values into the unordered_map
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["orange"] = 3;
    umap.insert({"grape", 4});

    // Display the contents
    cout << "Contents of unordered_map:" << endl;
    for (const auto& pair : umap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Accessing elements
    cout << "\nAccess element with key 'banana': " << umap["banana"] << endl;

    // Checking for the existence of a key
    if (umap.find("apple") != umap.end()) {
        cout << "\n'apple' is found in the unordered_map." << endl;
    } else {
        cout << "\n'apple' is not found in the unordered_map." << endl;
    }
}

int main() {
    explainUnorderedMap();
    return 0;
}
```

## 🔍 Expected Output:
```
Contents of unordered_map:
grape: 4
orange: 3
banana: 2
apple: 1

Access element with key 'banana': 2
'apple' is found in the unordered_map.
```

## 💭 Reflections:
The **unordered_map** is an efficient data structure when you need quick lookups without needing to maintain order. Today’s exploration of unordered containers added to my understanding of the C++ STL, especially in terms of performance advantages and flexibility for various applications. 💪

## 🔗 Resources:
- Striver's A2Z DSA Course/Sheet: [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- Full Code on GitHub: [Unordered Map Code](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day44%20-%20C%2B%2B%20STL%20-%20Unordered%20%20Map/STL_UnorderedMap.cpp)

---

### 📂 GitHub Repository

You can find the code implementation for Day 44 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
