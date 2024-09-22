# Day 36: 🚀 Stack Operations in C++ - Containers (Part 4)

### 🔍 Overview
On **Day 36** of the C++ journey, I delved into the **Stack container** in the Standard Template Library (STL). Stacks operate on the **LIFO (Last In, First Out)** principle, making them extremely useful for scenarios like undo operations, browser history management, or recursive function calls. Their simplicity and effectiveness in managing data in this manner make them a fundamental concept in data structures.

### 🧠 Key Concepts

- **Push Elements**: Using `push()` to add elements to the top of the stack.
- **Access the Top Element**: Use `top()` to retrieve the most recent element added to the stack.
- **Pop Elements**: Remove the top element with `pop()` without returning it.
- **Check Stack Size & Emptiness**: Use `size()` to determine the number of elements and `empty()` to verify if the stack is empty.
- **Swap Two Stacks**: Swap the contents of two stacks using the `swap()` function.

### 🛠️ Code Implementation

```cpp
#include <iostream>
#include <stack>
using namespace std;

void explainStack() {
    stack<int> s;

    // Pushing elements
    s.push(5);        // Stack: {5}
    s.push(10);       // Stack: {10, 5}
    s.push(15);       // Stack: {15, 10, 5}

    // Accessing the top element
    cout << "Top element: " << s.top() << endl;  // Output: 15

    // Popping the top element
    s.pop();         // Stack after pop: {10, 5}
    cout << "Top element after pop: " << s.top() << endl;  // Output: 10

    // Stack size
    cout << "Stack size: " << s.size() << endl;  // Output: 2

    // Checking if stack is empty
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl;  // Output: No

    // Swapping two stacks
    stack<int> s2;
    s2.push(1);  // Stack2: {1}

    s.swap(s2);  // Stack1 becomes {1}, Stack2 becomes {10, 5}
    cout << "After swapping, top element of Stack1: " << s.top() << endl;  // Output: 1
}

int main() {
    explainStack();
    return 0;
}
```

### 🚧 Challenges Faced

1. **Popping from an Empty Stack**: Initially, I encountered a crash while attempting to `pop()` from an empty stack. Lesson learned: always check if the stack is empty using `empty()` before calling `pop()` or `top()`.
2. **Understanding the `swap()` Function**: Visualizing the content of stacks after swapping was tricky at first, but practicing with small examples helped to clear up the confusion.
3. **Tracking Multiple Stack States**: Keeping track of stack states, especially when using multiple stacks, was challenging. Printing the stack contents after every operation helped me debug more efficiently.

### 💡 Reflections

- **LIFO Principle**: Stacks follow the Last In, First Out order, making them ideal for undo functionalities or managing function calls in recursive algorithms.
- **Real-World Applications**: From browser history management to balancing parentheses in code, stacks offer a wide range of applications in problem-solving.
- **Stack Swap**: The `swap()` operation between stacks is a handy feature, allowing for quick exchanges of stack contents.

### 🖥️ Output Example

- Initial stack: 15 (top), 10, 5
- Top element after pop: 10
- Stack size: 2
- After swapping, top element of Stack1: 1

### ✨ Conclusion

On **Day 36**, I gained a solid understanding of the **stack container** in C++. Stacks are a fundamental part of many algorithms, and their LIFO nature is critical for various applications. I also learned how important it is to manage the state of the stack carefully, especially when handling multiple stack objects.

### 📂 GitHub Repository

You can find the code implementation for Day 36 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day36%20-%20C%2B%2B%20STL%20-%20Stack(LIFO)/STL_Stack.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
