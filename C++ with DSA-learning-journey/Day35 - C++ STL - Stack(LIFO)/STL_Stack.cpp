// Stack(LIFO) operations in C++ (Containers - 4)
#include <iostream>
#include <stack>
using namespace std;

void explainStack() {
    stack<int> st;  // Create an empty stack

    // Push elements onto the stack
    st.push(1);     // Stack now: {1}
    st.push(2);     // Stack now: {2, 1}
    st.push(3);     // Stack now: {3, 2, 1}
    st.push(3);     // Stack now: {3, 3, 2, 1}
    st.push(5);     // Stack now: {5, 3, 3, 2, 1}

    // Access the top element (last pushed)
    cout << "Top element: " << st.top() << endl; // Prints 5

    // Pop the top element
    st.pop();  // Removes 5, stack now: {3, 3, 2, 1}

    // Check the top element again
    cout << "Top element after pop: " << st.top() << endl; // Prints 3

    // Check the size of the stack
    cout << "Stack size: " << st.size() << endl;  // Prints 4

    // Check if the stack is empty
    cout << "Is stack empty? " << (st.empty() ? "Yes" : "No") << endl;  // Prints No (false)

    // Swap the contents of two stacks
    stack<int> st1, st2;  // Create two empty stacks
    st1.push(10);  // {10}
    st1.push(20);  // {20, 10}
    
    cout << "Top of st1 before swap: " << st1.top() << endl; // Prints 20

    // Swap st1 and st2
    st1.swap(st2);  // Now st1 is empty, and st2 has the contents of st1

    cout << "Top of st1 after swap: " << (st1.empty() ? "Stack is empty" : to_string(st1.top())) << endl;  // st1 is empty now
    cout << "Top of st2 after swap: " << st2.top() << endl;  // st2 now has the old st1's content, prints 20
}

int main() {
    explainStack();  // Calling the function to explain Stack operations
    return 0;
}


