# 📅 Day 38 - Priority Queue Operations in C++ (Containers - Part 6)

## 📄 Overview

On **Day 38**, we delved into the powerful **Priority Queue** data structure in C++. Priority Queues, which are implemented as **heaps** in C++, allow us to handle data based on priority. This is especially useful in scenarios like task scheduling, pathfinding algorithms, and whenever prioritization is key. We explored the differences between **Max-Heap** and **Min-Heap** and how to implement both using C++ Standard Template Library (STL).

## 📝 Concepts Covered
1. **Priority Queue Initialization**:
   - Default **Max-Heap** using `priority_queue<int>`.
   - Custom **Min-Heap** using `priority_queue<int, vector<int>, greater<int>>`.
2. **Adding Elements**: Pushing elements into the priority queue using `push()` and `emplace()`.
3. **Accessing Top Element**: Using `top()` to get the element with the highest priority.
4. **Removing Elements**: Removing the top element using `pop()`.
5. **Checking Queue Properties**:
   - `size()`: To find the number of elements in the queue.
   - `empty()`: To check if the queue is empty.

## 🚀 Code Implementation

Here’s the code that demonstrates various operations on a priority queue in C++:

```cpp
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

void explainPriorityQueue() {
    // Max-Heap (default behavior)
    priority_queue<int> maxHeap;

    maxHeap.push(10);  // Max-Heap: {10}
    maxHeap.push(30);  // Max-Heap: {30, 10}
    maxHeap.push(20);  // Max-Heap: {30, 10, 20}

    cout << "Top of Max-Heap: " << maxHeap.top() << endl;  // Output: 30

    // Min-Heap (using greater<int>)
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(10);  // Min-Heap: {10}
    minHeap.push(30);  // Min-Heap: {10, 30}
    minHeap.push(20);  // Min-Heap: {10, 30, 20}

    cout << "Top of Min-Heap: " << minHeap.top() << endl;  // Output: 10

    // Pop the top elements
    maxHeap.pop();  // Max-Heap after pop: {20, 10}
    cout << "Top of Max-Heap after pop: " << maxHeap.top() << endl;  // Output: 20
}

int main() {
    explainPriorityQueue();
    return 0;
}
```

### Key Operations:
- **Max-Heap**: The largest element has the highest priority.
- **Min-Heap**: The smallest element has the highest priority (using `greater<int>`).
- **push(10)**: Adds `10` to the queue.
- **top()**: Retrieves the element with the highest priority.
- **pop()**: Removes the element with the highest priority.

## 🌟 Output:

```shell
Top of Max-Heap: 30
Top of Min-Heap: 10
Top of Max-Heap after pop: 20
```

## 🔑 Learning Points

- **Priority Queues** are crucial for scenarios where elements need to be processed in a specific order based on their priority.
- Understanding the difference between **Max-Heap** and **Min-Heap** is essential for implementing efficient algorithms like **Dijkstra's**.
- Operations like `push()`, `pop()`, and `top()` provide efficient ways to manage priority-based tasks.

## 🔗 Additional Resources

- [C++ STL Priority Queue Documentation](https://cplusplus.com/reference/queue/priority_queue/)

### 📂 GitHub Repository

You can find the code implementation for Day 38 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day38%20-%20C%2B%2B%20STL%20-%20Priority%20Queue/STL_PriorityQueue.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
