# 🌟 Day 32: Exploring C++ Standard Template Library (STL) - Pairs 🌟

## 🚀 Overview

On Day 32, I explored the **C++ Standard Template Library (STL)**, focusing specifically on **Pairs**. Pairs are part of the STL and allow you to store two heterogeneous values as a single entity, making it a useful tool in various programming scenarios.

In this practice, we covered:

- Simple usage of **pairs**.
- How to work with **nested pairs**.
- Creating and accessing elements in an **array of pairs**.

## 📂 Files

- **main.cpp**: The main file containing all examples demonstrating the use of pairs in C++.
- **README.md**: This file, summarizing the day’s work and the STL concepts explored.

## 🛠️ Code Snippet

Here’s the main code for demonstrating pairs in C++:

```cpp
#include <iostream>
#include <utility> // For pairs
using namespace std;

void explainPair() {
    // Simple pair
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl; // Output: 1 3
    
    // Nested pair
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl; // Output: 1 4 3
    
    // Array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl; // Output: 5
}

int main() {
    explainPair();
    return 0;
}
```

## 💡 Concepts Covered

1. **Pair**: A container capable of holding two values of different types. Accessing elements in pairs is done using `.first` and `.second`.
2. **Nested Pair**: You can have pairs inside pairs, allowing more complex data structures.
3. **Array of Pairs**: Arrays can hold multiple pairs, useful for handling datasets like key-value pairs.

## 🤔 Challenges Faced

- Understanding how to **access nested pairs** was initially tricky.
- Debugging issues while iterating over arrays of pairs required careful inspection of `.first` and `.second` usage.

## 🔄 Reflections

Working with pairs provided me insights into the flexibility of STL containers and how they can simplify code for managing multiple data types. Moving forward, I’m eager to learn about other powerful STL components like vectors, maps, and more advanced algorithms!

## 🔗 Useful Resources

- [C++ STL Documentation](https://en.cppreference.com/w/cpp/container)
- [GeeksForGeeks - Pair in C++](https://www.geeksforgeeks.org/pair-in-cpp-stl/)
  
## 📌 GitHub Repository

You can find the full code and further examples here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day32%20-%20C%2B%2B%20STL%20-%20Pairs/STL_Pairs.cpp) 

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
