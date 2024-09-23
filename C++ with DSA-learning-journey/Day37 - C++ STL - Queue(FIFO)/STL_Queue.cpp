// Queue(FIFO) operations in C++ (Containers - 5)
#include <iostream>
#include <queue>
using namespace std;

void explainQueue() {
    // Initialize a queue of integers
    queue<int> q;

    // Add elements to the back of the queue
    q.push(1);        // Queue: {1}
    q.push(2);        // Queue: {1, 2}
    q.emplace(4);     // Queue: {1, 2, 4}

    // Modify the last element of the queue
    q.back() += 5;    // Queue: {1, 2, 9} (last element becomes 9)

    // Print the last element of the queue
    cout << "Back of queue: " << q.back() << endl;  // Output: 9

    // Print the first element of the queue
    cout << "Front of queue: " << q.front() << endl;  // Output: 1

    // Remove the first element from the queue
    q.pop();         // Queue after pop: {2, 9}

    // Print the new first element after the pop
    cout << "Front of queue after pop: " << q.front() << endl;  // Output: 2

    // Print the size of the queue
    cout << "Size of queue: " << q.size() << endl;  // Output: 2

    // Check if the queue is empty
    cout << "Is the queue empty? " << (q.empty() ? "Yes" : "No") << endl;  // Output: No
}

int main() {
    explainQueue();  // Call the function to demonstrate queue operations
    return 0;
}


