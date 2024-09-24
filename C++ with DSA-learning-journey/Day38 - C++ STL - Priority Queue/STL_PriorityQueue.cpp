// Priority Queue operations in C++ (Containers - 6)
#include <iostream>
#include <queue> // Include the queue header for using priority_queue
using namespace std;

void explainPQ() {
    // Max-Heap: The default priority_queue (largest element on top)
    priority_queue<int> pq;

    pq.push(5);    // {5}  // Add 5 to the queue
    pq.push(2);    // {5, 2}  // Add 2 (5 is still the top)
    pq.push(8);    // {8, 5, 2}  // Add 8 (8 becomes the top)
    pq.emplace(10); // {10, 8, 5, 2}  // Directly add 10, now 10 is the top

    // Top element in the max-heap (largest element)
    cout << "Top element (Max-Heap): " << pq.top() << endl; // Output: 10

    // Remove the top element (10)
    pq.pop(); // {8, 5, 2}

    // Access the new top element
    cout << "Top element after pop (Max-Heap): " << pq.top() << endl; // Output: 8

    // size(): Returns the number of elements in the priority_queue
    cout << "Size of the priority queue: " << pq.size() << endl; // Output: 3

    // empty(): Returns true if the priority_queue is empty, false otherwise
    if (!pq.empty()) {
        cout << "The priority queue is not empty." << endl; // Output: not empty
    }


    // Min-Heap: Use greater<int> to make a min-heap (smallest element on top)
    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(5);    // {5}
    min_pq.push(2);    // {2, 5}
    min_pq.push(8);    // {2, 5, 8}
    min_pq.emplace(10); // {2, 5, 8, 10}

    // Top element in the min-heap (smallest element)
    cout << "Top element (Min-Heap): " << min_pq.top() << endl; // Output: 2

    // Note: You cannot swap pq (max-heap) and min_pq (min-heap) directly
    // because they have different types (less<int> vs. greater<int>).
}

int main() {
    explainPQ();  // Call the function to demonstrate priority_queue operations
    return 0;    
}
