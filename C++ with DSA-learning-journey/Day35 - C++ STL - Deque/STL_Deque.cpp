// Deque operations in C++ (Containers - 3)
#include <iostream>
#include <deque>
using namespace std;

void explainDeque() {
    deque<int> dq;  // Create an empty deque

    dq.push_back(1);        // {1}   : Add 1 to the back of the deque
    dq.emplace_back(2);     // {1, 2} : Add 2 to the back (same as push_back)
    dq.push_front(4);       // {4, 1, 2} : Add 4 to the front
    dq.emplace_front(3);    // {3, 4, 1, 2} : Add 3 to the front (same as push_front)

    cout << "Initial deque: ";
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    dq.pop_back();          // {3, 4, 1} : Remove the last element (2)
    dq.pop_front();         // {4, 1} : Remove the first element (3)

    cout << "After pop operations: ";
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Access the front and back elements
    cout << "Back element: " << dq.back() << endl;   // Prints the last element (1)
    cout << "Front element: " << dq.front() << endl; // Prints the first element (4)

    // Insert an element at a specific position (beginning)
    dq.insert(dq.begin(), 10); // {10, 4, 1}

    cout << "After inserting 10 at the beginning: ";
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Check the size of the deque
    cout << "Size of deque: " << dq.size() << endl;  // Size = 3

    // Use rbegin() and rend() to print in reverse order
    cout << "Deque in reverse: ";
    for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Swap contents with another deque
    deque<int> dq2 = {7, 8, 9}; // {7, 8, 9}
    dq.swap(dq2);  // Now dq contains {7, 8, 9} and dq2 contains {10, 4, 1}

    cout << "After swap, dq: ";
    for (auto it = dq.begin(); it != dq.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    cout << "After swap, dq2: ";
    for (auto it = dq2.begin(); it != dq2.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Clear the deque
    dq.clear();  // dq is now empty
    cout << "Size after clearing dq: " << dq.size() << endl;
}

int main() {
    explainDeque(); // Calling the function to explain Deque operations
    return 0;
}

