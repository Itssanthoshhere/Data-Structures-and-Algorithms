# Day 35: 🚀 Deque Operations in C++ - Containers (Part 3)

### 🔍 Overview
On **Day 35** of the C++ journey, we explored the **`deque` container** in the Standard Template Library (STL). A **deque** (double-ended queue) is a dynamic array that allows fast insertions and deletions from both the front and back, making it versatile for queue-like operations.

### 🧠 Key Concepts

- **Deque Initialization**: How to create and initialize a `deque` in C++.
- **Adding Elements**: Using `push_back()`, `emplace_back()`, `push_front()`, and `emplace_front()` to insert elements at the back or front.
- **Removing Elements**: Using `pop_back()` and `pop_front()` to remove elements from both ends of the deque.
- **Accessing Elements**: Accessing the first and last elements using `front()` and `back()`.
- **Insertions & Deletions**: Inserting elements at specific positions using `insert()` and removing elements with `erase()`.
- **Deque Size**: Using `size()` to get the number of elements in the deque.
- **Swap & Clear Operations**: Swapping the contents of two deques and clearing the deque using `swap()` and `clear()`.

### 🛠️ Code Implementation

```cpp
#include <iostream>
#include <deque>
using namespace std;

void explainDeque() {
    deque<int> dq;  // Create an empty deque

    // Adding elements
    dq.push_back(1);        // {1}
    dq.emplace_back(2);     // {1, 2}
    dq.push_front(4);       // {4, 1, 2}
    dq.emplace_front(3);    // {3, 4, 1, 2}

    // Displaying deque
    for (auto it : dq)
        cout << it << " ";  // Output: 3 4 1 2

    cout << endl;

    // Removing elements
    dq.pop_back();          // {3, 4, 1}
    dq.pop_front();         // {4, 1}

    // Inserting at specific position
    dq.insert(dq.begin(), 10); // {10, 4, 1}

    // Displaying deque
    for (auto it : dq)
        cout << it << " ";  // Output: 10 4 1

    cout << endl;

    // Size of deque
    cout << "Size: " << dq.size() << endl;  // Output: Size: 3

    // Deque in reverse order
    for (auto it = dq.rbegin(); it != dq.rend(); ++it)
        cout << *it << " ";  // Output: 1 4 10

    cout << endl;

    // Swapping deques
    deque<int> dq2 = {7, 8, 9};
    dq.swap(dq2);  // dq: {7, 8, 9}, dq2: {10, 4, 1}

    // Displaying deque after swap
    for (auto it : dq)
        cout << it << " ";  // Output: 7 8 9
}

int main() {
    explainDeque();
    return 0;
}
```

### 🚧 Challenges Faced

1. **Understanding rbegin() and rend()**: It was tricky to grasp how reverse iterators worked initially, but experimenting with `rbegin()` and `rend()` made it clearer.
2. **Efficient Modifications**: Learning when to use deque over other containers like `vector` and `list` was key to optimizing operations for both ends efficiently.

### 💡 Reflections

- **Efficiency**: The **deque** container offers quick insertions and deletions from both ends, making it ideal for use cases where frequent modifications to both the front and back are needed.
- **Reverse Iteration**: Mastering reverse iterators was an important step for cases where the container needs to be accessed in reverse order.

### 🖥️ Output Example

- Initial deque: `3 4 1 2`
- After pop operations: `4 1`
- After inserting 10 at the beginning: `10 4 1`
- Deque in reverse: `1 4 10`
- After swapping: `7 8 9`

### ✨ Conclusion

On **Day 35**, I explored the **deque** container, a powerful and flexible data structure that allows fast access and modifications at both ends. I deepened my understanding of **reverse iterators** and when to choose `deque` over other STL containers for efficient operations.

### 📂 GitHub Repository

You can find the code implementation for Day 35 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day35%20-%20C%2B%2B%20STL%20-%20Deque/STL_Deque.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
