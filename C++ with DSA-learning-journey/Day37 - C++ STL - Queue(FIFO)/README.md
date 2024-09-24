# 📅 Day 37 - Queue (FIFO) Operations in C++ (Containers - Part 5)

## 📄 Overview

On **Day 37**, we explored the **Queue** data structure in C++, which follows the **First In, First Out (FIFO)** principle. This structure is highly useful for managing tasks like job scheduling, buffering, and handling requests in a sequential order. In this lesson, we implemented basic operations using C++ Standard Template Library (STL) queues.

## 📝 Concepts Covered
1. **Queue Initialization**: Creating a queue of integers using `queue<int>`.
2. **Adding Elements**: Adding elements to the queue with `push()` and `emplace()`.
3. **Accessing Front and Back**: Using `front()` to access the first element and `back()` to modify the last element.
4. **Removing Elements**: Removing elements from the front of the queue using `pop()`.
5. **Checking Queue Properties**:
   - `size()`: To find the number of elements in the queue.
   - `empty()`: To check if the queue is empty.

## 🚀 Code Implementation

Here’s the code that demonstrates various operations on a queue in C++:

```cpp
#include <iostream>
#include <queue>
using namespace std;

void explainQueue() {
    queue<int> q;

    q.push(1);        // Queue: {1}
    q.push(2);        // Queue: {1, 2}
    q.emplace(4);     // Queue: {1, 2, 4}

    q.back() += 5;    // Queue: {1, 2, 9}
    cout << "Back of queue: " << q.back() << endl;  // Output: 9
    cout << "Front of queue: " << q.front() << endl;  // Output: 1

    q.pop();         // Queue after pop: {2, 9}
    cout << "Front of queue after pop: " << q.front() << endl;  // Output: 2
    cout << "Size of queue: " << q.size() << endl;  // Output: 2
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;  // Output: No
}

int main() {
    explainQueue();
    return 0;
}
```

### Key Operations:
- **push(1)**: Adds `1` to the queue (Queue: `{1}`)
- **push(2)**: Adds `2` to the queue (Queue: `{1, 2}`)
- **emplace(4)**: Adds `4` to the queue (Queue: `{1, 2, 4}`)
- **back() += 5**: Modifies the last element by adding `5` (Queue: `{1, 2, 9}`)
- **pop()**: Removes the first element from the queue (Queue: `{2, 9}`)

## 🌟 Output:

```shell
Back of queue: 9
Front of queue: 1
Front of queue after pop: 2
Size of queue: 2
Is the queue empty? No
```

## 🔑 Learning Points

- **FIFO (First In, First Out)** is ideal for task scheduling, job queues, and process management.
- Operations like `push()`, `pop()`, `front()`, and `back()` allow us to manage queue elements effectively.
- Checking the size and emptiness of the queue helps in making decisions during runtime.

## 🔗 Additional Resources

- [C++ STL Queue Documentation](https://cplusplus.com/reference/queue/queue/)

### 📂 GitHub Repository

You can find the code implementation for Day 37 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day37%20-%20C%2B%2B%20STL%20-%20Queue(FIFO)/STL_Queue.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
