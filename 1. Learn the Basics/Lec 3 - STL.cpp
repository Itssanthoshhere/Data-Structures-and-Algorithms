/*
Algorithms
Containers
Functions
Iterators
*/

// Pairs
#include <iostream>
#include <utility> // For using pairs
using namespace std;

void explainPair()
{
    // Example 1: Simple pair
    cout << "Example 1: Simple pair" << endl;
    pair<int, int> p1 = {1, 3};
    cout << p1.first << " " << p1.second << endl; // Output: 1 3

    // Example 2: Nested pair
    cout << "Example 2: Nested pair" << endl;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.second << " " << p2.second.first << endl; // Output: 1 4 3

    // Example 3: Array of pairs
    cout << "Example 3: Array of pairs" << endl;
    pair<int, int> arr[] = {{1, 2}, {2, 5}, {5, 1}};
    cout << arr[1].second << endl; // Output: 5
}


--------------------------------------------------------------------------------------------------------


// Vector operations in C++ (Containers - 1)
#include <iostream>
#include <vector>
using namespace std;

void explainVector() {
    // Initializing an empty vector of integers
    vector<int> v;

    // Adding elements to the vector
    v.push_back(1);  // Adds 1 to the end of the vector
    v.emplace_back(2); // Similar to push_back, but more efficient

    // Initializing a vector of pairs
    vector<pair<int, int>> vec;

    // Adding a pair using push_back and emplace_back
    vec.push_back({1, 2}); // Adds pair (1,2) using push_back
    vec.emplace_back(1, 2); // Adds pair (1,2) using emplace_back

    // Initializing a vector with 5 elements, all initialized to 100
    vector<int> v1(5, 100);  // Creates a vector with 5 elements, all set to 100

    // Initializing a vector with 5 default-initialized elements (default value is 0)
    vector<int> v2(5);  // Creates a vector with 5 elements initialized to 0

    // Creating a vector v3 with 5 elements, each initialized to 20
    vector<int> v3(5, 20);

    // Copying all elements from v3 into v4
    vector<int> v4(v3);  // Copies v3 into v4

    // Iterator example: pointing to the beginning of the vector 'v1'
    vector<int>::iterator it = v1.begin();

    it++;  // Moves iterator to the next element
    cout << *(it) << " ";  // Dereferences the iterator and prints the element

    it = it + 2;  // Moves iterator 2 positions ahead
    cout << *(it) << " ";  // Prints the element at that position

    // End iterator (points to one past the last element)
    vector<int>::iterator it_end = v1.end();

    // Reverse end iterator (points to before the first element in reverse)
    vector<int>::reverse_iterator it_rend = v1.rend(); 

    // Reverse begin iterator (points to the last element)
    vector<int>::reverse_iterator it_rbegin = v1.rbegin();

    // Accessing elements using operator [] and at() method
    cout << v1[0] << " " << v1.at(0);  // Prints the first element of the vector

    // Accessing the last element of the vector using the back() function
    cout << v1.back() << " ";

    // Looping over the vector using iterators (standard for loop)
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << " ";  // Prints each element
    }

    // Looping using auto (type deduction for iterators)
    for (auto it = v1.begin(); it != v1.end(); it++) {
        cout << *(it) << " ";  // Prints each element
    }

    // Range-based for loop (simpler syntax)
    for (auto it : v1) {
        cout << it << " ";  // Prints each element
    }

    // Example vector: {10, 20, 12, 23}
    v1.erase(v1.begin() + 1);  // Removes the element at position 1 (20)

    // Example vector: {10, 20, 12, 23, 35}
    v1.erase(v1.begin() + 2, v1.begin() + 4);  // Removes elements in range [2, 4) -> {12, 23}

    // Inserting elements into the vector
    vector<int> v5(2, 100);  // Initializes a vector with 2 elements, both 100
    v5.insert(v5.begin(), 300);  // Inserts 300 at the beginning -> {300, 100, 100}
    v5.insert(v5.begin() + 1, 2, 10);  // Inserts two 10's at position 1 -> {300, 10, 10, 100, 100}

    // Inserting elements from another vector
    vector<int> copy(2, 50);  // Initializes a vector with 2 elements, both 50
    v5.insert(v5.begin(), copy.begin(), copy.end());  // Inserts elements from 'copy' at the beginning of 'v5'

    // Size of the vector
    cout << v5.size();  // Prints the size of the vector

    // Removing the last element from the vector
    v5.pop_back();  // Removes the last element

    // Swapping the contents of two vectors
    // v1 -> {10, 20}, v2 -> {30, 40}
    v3.swap(v4);  // v3 becomes {30, 40}, v4 becomes {10, 20}

    // Clearing the entire vector (removes all elements)
    v5.clear();  // Erases all elements, the vector becomes empty

    // Checking if the vector is empty
    cout << v5.empty();  // Prints 1 if the vector is empty, 0 otherwise
}


--------------------------------------------------------------------------------------------------------


// List operations in C++ (Containers - 2)
#include <iostream>
#include <list>
using namespace std;

void explainList() {
    // Declaring an empty list of integers
    list<int> ls;

    // Adding elements to the back (similar to push_back in vector)
    ls.push_back(2);  // List becomes: {2}
    ls.emplace_back(4);  // List becomes: {2, 4}

    // Adding elements to the front
    ls.push_front(5);  // List becomes: {5, 2, 4}
    ls.emplace_front(10);  // List becomes: {10, 5, 2, 4}

    // Displaying the list using an iterator
    cout << "List contents: ";
    for (auto it = ls.begin(); it != ls.end(); ++it) {
        cout << *it << " ";  // Output: 10 5 2 4
    }
    cout << endl;

    // Removing the first and last elements
    ls.pop_front();  // Removes the first element: {5, 2, 4}
    ls.pop_back();   // Removes the last element: {5, 2}

    cout << "After popping front and back: ";
    for (auto it : ls) {
        cout << it << " ";  // Output: 5 2
    }
    cout << endl;

    // Accessing size and clearing the list
    cout << "List size: " << ls.size() << endl;  // Output: 2
    ls.clear();  // Clears the list
    cout << "List size after clearing: " << ls.size() << endl;  // Output: 0

    // Inserting elements
    ls.push_back(1);
    ls.push_back(3);
    ls.push_back(5);  // List becomes: {1, 3, 5}

    auto it = ls.begin();
    advance(it, 1);  // Moving iterator to the second position

    ls.insert(it, 2);  // Inserts 2 at the second position: {1, 2, 3, 5}

    cout << "After insertion: ";
    for (auto el : ls) {
        cout << el << " ";  // Output: 1 2 3 5
    }
    cout << endl;

    // Erasing an element
    it = ls.begin();
    advance(it, 2);  // Moving iterator to the third position
    ls.erase(it);  // Erases the third element: {1, 2, 5}

    cout << "After erasing: ";
    for (auto el : ls) {
        cout << el << " ";  // Output: 1 2 5
    }
    cout << endl;
}


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------


/* Time Complexity of Push, Pop and Top:
    --> push - logn
    --> pop  - logn
    --> top  - O (1)                                                                                                                                                            */




// Set operations in C++ (Containers - 7)
#include <iostream>
#include <set>  // Required for std::set
using namespace std;

void explainSet() {
    // A set in C++ stores unique elements in sorted order (ascending by default).
    set<int> st;

    // Inserting elements into the set
    st.insert(1);    // {1}
    st.emplace(2);   // {1, 2}
    st.insert(2);    // {1, 2} - Duplicate, ignored
    st.insert(4);    // {1, 2, 4}
    st.insert(3);    // {1, 2, 3, 4} - Automatically sorted
                                                                                                                                                                                            /*
    --------------------------
    Accessing Elements with Iterators
    --------------------------
                                                                                                                                                                                                                                            */
    // begin() - Returns an iterator to the first element (smallest)
    auto it_begin = st.begin();
    cout << "First element: " << *it_begin << endl;  // Output: 1

    // end() - Returns an iterator to one past the last element
    // Note: Dereferencing end() results in undefined behavior
    auto it_end = st.end();
    --it_end;  // Move one step back to get the last element
    cout << "Last element: " << *it_end << endl;  // Output: 4

    // rbegin() - Returns a reverse iterator to the last element (largest)
    auto it_rbegin = st.rbegin();
    cout << "Largest element (reverse begin): " << *it_rbegin << endl;  // Output: 4

    // rend() - Returns a reverse iterator to one before the first element
    // Note: Dereferencing rend() results in undefined behavior
                                                                                                                                                                                                          /*
    --------------------------
    Set Size and Capacity
    --------------------------
                                                                                                                                                                                                                                                */
    // size() - Returns the number of elements in the set
    cout << "Set size: " << st.size() << endl;  // Output: 4

    // empty() - Checks if the set is empty
    if (st.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;  // Output: Set is not empty.
    }
                                                                                                                                                                                    /*
    --------------------------
    Swapping Contents
    --------------------------
                                                                                                                                                                                                                        */
    // Creating another set
    set<int> st2 = {10, 20, 30};
    cout << "Before swap, st2: ";
    for (auto val : st2) cout << val << " ";  // Output: 10 20 30
    cout << endl;

    // swap() - Swaps the contents of two sets
    st.swap(st2);  // Now st contains {10, 20, 30}, and st2 contains {1, 2, 3, 4}

    cout << "After swap, st: ";
    for (auto val : st) cout << val << " ";  // Output: 10 20 30
    cout << endl;

    cout << "After swap, st2: ";
    for (auto val : st2) cout << val << " ";  // Output: 1 2 3 4
    cout << endl;
                                                                                                                                                                                                                /*
    --------------------------
    Erasing Elements
    --------------------------
                                                                                                                                                                                                                                                        */
    // Find an element in the set (logarithmic time O(log n))
    auto it = st2.find(3);
    if (it != st2.end()) {
        cout << "Element 3 found in the set." << endl;
    }

    // Erase element by value (logarithmic time O(log n))
    st2.erase(3);  // Removes 3 from the set
                                                                                                                                                                                                                                                        /*
    --------------------------
    Bounds in Set
    --------------------------
                                                                                                                                                                                                                                                                                            */
    // lower_bound() returns an iterator to the first element >= the given value
    it = st2.lower_bound(2);  // Points to 2
    cout << "Lower bound of 2: " << *it << endl;  // Output: 2

    // upper_bound() returns an iterator to the first element > the given value
    it = st2.upper_bound(2);  // Points to the first element greater than 2 (i.e., 4)
    cout << "Upper bound of 2: " << *it << endl;  // Output: 4
}


--------------------------------------------------------------------------------------------------------


// MultiSet operations in C++ (Containers - 8)
#include <iostream>
#include <set>
using namespace std;

void explainMultiSet() {
    // Multiset is similar to set but it allows duplicate elements.
    // Elements in a multiset are stored in sorted order (ascending by default).

    multiset<int> ms;
    
    // Insert elements into the multiset
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}
    
    // All elements inserted into the multiset are stored in sorted order.
    cout << "Multiset after insertions: ";
    for (int elem : ms) {
        cout << elem << " "; // Output: 1 1 1
    }
    cout << endl;

    // Erase all occurrences of an element
    ms.erase(1); // All '1's erased, ms is now empty
    
    cout << "Multiset after erasing all 1s: ";
    for (int elem : ms) {
        cout << elem << " "; // Output: (nothing, as it's empty)
    }
    cout << endl;

    // Re-insert elements for further demonstration
    ms.insert(1); // {1}
    ms.insert(2); // {1, 2}
    ms.insert(2); // {1, 2, 2}
    ms.insert(3); // {1, 2, 2, 3}
    
    // Count the number of occurrences of an element
    int cnt = ms.count(2); // cnt = 2
    cout << "Count of 2 in multiset: " << cnt << endl;

    // Erase a single occurrence of an element
    ms.erase(ms.find(2)); // Erases one '2', multiset is now {1, 2, 3}
    
    cout << "Multiset after erasing one occurrence of 2: ";
    for (int elem : ms) {
        cout << elem << " "; // Output: 1 2 3
    }
    cout << endl;

    // Erase a range of elements
    ms.erase(ms.find(2), ms.end()); // Erases elements from '2' to the end, multiset is now {1}
    
    cout << "Multiset after erasing range from 2 to end: ";
    for (int elem : ms) {
        cout << elem << " "; // Output: 1
    }
    cout << endl;

    // Other functions such as begin(), end(), size(), empty(), and swap() work similarly as in set.
    cout << "Size of multiset: " << ms.size() << endl; // Output: 1
    cout << "Is multiset empty? " << (ms.empty() ? "Yes" : "No") << endl; // Output: No

    multiset<int> ms2;
    ms2.insert(10);
    ms2.insert(20);

    // Swap contents of ms and ms2
    ms.swap(ms2);
    cout << "Multiset after swap with ms2: ";
    for (int elem : ms) {
        cout << elem << " "; // Output: 10 20
    }
    cout << endl;
}


--------------------------------------------------------------------------------------------------------


// Unordered Set operations in C++ (Containers - 9)
#include <iostream>
#include <unordered_set>
using namespace std;

void explainUSet() {
    // Declaring an unordered set of integers
    unordered_set<int> st;

    // Inserting elements into the unordered set
    st.insert(10);
    st.insert(20);
    st.insert(30);
    st.insert(40);
    st.insert(50);

    // Displaying elements of the unordered set
    cout << "Elements in the unordered set: ";
    for (int elem : st) {
        cout << elem << " ";  // The elements are not stored in any particular order
    }
    cout << endl;

    // Searching for an element in the unordered set
    int findElem = 30;
    if (st.find(findElem) != st.end()) {
        cout << "Element " << findElem << " is present in the unordered set." << endl;
    } else {
        cout << "Element " << findElem << " is not present in the unordered set." << endl;
    }

    // Erasing an element from the unordered set
    st.erase(40);
    cout << "After erasing 40, elements in the unordered set: ";
    for (int elem : st) {
        cout << elem << " ";
    }
    cout << endl;

    // Checking the size of the unordered set
    cout << "Size of the unordered set: " << st.size() << endl;

    // Clearing all elements in the unordered set
    st.clear();
    cout << "After clearing, size of the unordered set: " << st.size() << endl;

    /*
    Note:
    - unordered_set does not maintain any order for elements.
    - lower_bound and upper_bound functions are not available in unordered_set.
    - It generally offers better performance compared to set, except when hash collisions occur.
    */
}


--------------------------------------------------------------------------------------------------------


// Map Set operations in C++ (Containers - 10)
#include <iostream>
#include <map>
using namespace std;

void explainMap() {
    //   --> Unique & Sorted

    // Declaring a map where keys are integers and values are integers
    map<int, int> mpp;

    // Example of a map where the key is an integer and the value is a pair of integers
    map<int, pair<int, int>> mppPairs;

    // Example of a map where the key is a pair of integers and the value is an integer
    map<pair<int, int>, int> mppPairKey;

    // Inserting values into the map
    mpp[1] = 2;                 // Inserts (1, 2)
    mpp.emplace(3, 1);         // Inserts (3, 1)
    mpp.insert({2, 4});        // Inserts (2, 4)
    mppPairKey[{2, 3}] = 10;          // Inserts (2, 3) with value 10

    // Displaying the elements in the map
    cout << "Elements in the map:" << endl;
    for (const auto& it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    // Accessing elements by key
    cout << "Value associated with key 1: " << mpp[1] << endl;
    cout << "Value associated with key 5 (not found, defaults to 0): " << mpp[5] << endl;

    // Finding an element in the map
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Value associated with key 3: " << it->second << endl;
    } else {
        cout << "Key 3 not found." << endl;
    }

    // Using lower_bound and upper_bound
    auto lb = mpp.lower_bound(2);  // First element not less than 2
    if (lb != mpp.end()) {
        cout << "Lower bound for key 2: " << lb->first << " -> " << lb->second << endl;
    }

    auto ub = mpp.upper_bound(3);  // First element greater than 3
    if (ub != mpp.end()) {
        cout << "Upper bound for key 3: " << ub->first << " -> " << ub->second << endl;
    }

    // Additional map operations (size, empty)
    cout << "Size of the map: " << mpp.size() << endl;
    cout << "Is the map empty? " << (mpp.empty() ? "Yes" : "No") << endl;

    // Erasing an element
    mpp.erase(1);
    cout << "After erasing key 1, elements in the map:" << endl;
    for (const auto& it : mpp) {
        cout << it.first << " " << it.second << endl;
    }
}


--------------------------------------------------------------------------------------------------------


// Multi Map operation in C++ (Containers - 11)
#include <iostream>
#include <map>
using namespace std;

void explainMultiMap() {
    // everything same as map, only it can store multiple keys or duplicate keys and in sorted way
    
    // Declare a multimap
    multimap<string, int> mpp;

    // Insert values into the multimap
    mpp.insert({"apple", 1});
    mpp.insert({"banana", 2});
    mpp.insert({"apple", 3});
    mpp.insert({"orange", 4});
    mpp.insert({"banana", 5});

    // Display the contents of the multimap
    cout << "Contents of multimap:" << endl;
    for (const auto& pair : mpp) {
        cout << pair.first << ": " << pair.second << endl;
    }

    // Find and display elements with the key "apple"
    cout << "\nElements with key 'apple':" << endl;
    auto range = mpp.equal_range("apple");
    for (auto it = range.first; it != range.second; ++it) {
        cout << it->first << ": " << it->second << endl;
    }
}


--------------------------------------------------------------------------------------------------------


// Unordered Map operation in C++ (Containers - 12)
#include <iostream>
#include <unordered_map>
using namespace std;

void explainUnorderedMap() {
    // Declare an unordered_map
    unordered_map<string, int> umap;

    // Insert values into the unordered_map
    umap["apple"] = 1;
    umap["banana"] = 2;
    umap["orange"] = 3;

    // Insert another value using insert() method
    umap.insert({"grape", 4});

    // Display the contents of the unordered_map
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


--------------------------------------------------------------------------------------------------------


// Algorithms - Sort 
#include <iostream>
#include <algorithm>
#include <functional> // for greater<int>
#include <utility>    // for pair
using namespace std;

void explainAlgorithmSort() {
    // 1. Sorting an array in ascending order
    int a[] = {5, 3, 8, 6, 2, 7};
    int n = sizeof(a) / sizeof(a[0]);
    
    // Sort entire array in ascending order
    sort(a, a + n);
    
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 2. Sorting a specific range of elements
    // Sort elements from index 2 to index 4 in ascending order
    sort(a + 2, a + 4);
    
    cout << "Array with range [2, 4) sorted: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 3. Sorting in descending order using greater<int>
    // Sort the entire array in descending order
    sort(a, a + n, greater<int>());
    
    cout << "Array sorted in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 4. Sorting an array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = sizeof(arr) / sizeof(arr[0]);

    // Custom sort: sort by second element in ascending order;
    // if second elements are the same, sort by the first element in descending order
    sort(arr, arr + m, [](pair<int, int> &p1, pair<int, int> &p2) {
        if (p1.second == p2.second) {
            return p1.first > p2.first;  // Descending order for the first element if second elements are the same
        }
        return p1.second < p2.second;    // Ascending order for the second element
    });
    
    cout << "Array of pairs sorted: ";
    for (int i = 0; i < m; i++) {
        cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
    }
    cout << endl;
}


--------------------------------------------------------------------------------------------------------


// Comp (For sorting)
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) {
        return true;
    } 
    if (p1.second > p2.second) {
        return false;
    } 
    // If second elements are the same, sort by first element in descending order
    return p1.first > p2.first;
}

int main() {
    // Define the array of pairs
    pair<int, int> a[] = {{4, 1}, {2, 1}, {1, 2}};
    int n = sizeof(a) / sizeof(a[0]);

    // Sort the array using the custom comparator
    sort(a, a + n, comp);

    // Output the sorted pairs
    cout << "Sorted pairs: ";
    for (int i = 0; i < n; i++) {
        cout << "{" << a[i].first << ", " << a[i].second << "} ";
    }
    cout << endl;

    return 0;
}


--------------------------------------------------------------------------------------------------------


// Built-in Functions and Algorithms (__builtin_popcount, __builtin_popcountll, next_permutation, max_element and min_element)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // __builtin_popcount
    int num = 7;
    int cnt = __builtin_popcount(num); // Counts 1s in the binary form of num
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    
    // __builtin_popcountll
    long long num_ll = 165786578687;
    int cnt_ll = __builtin_popcountll(num_ll); // Counts 1s in the binary form of num_ll
    cout << "Number of set bits in " << num_ll << " is: " << cnt_ll << endl;


    // next_permutation
    string s = "123";
    cout << "All permutations of " << s << ":" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));


    // max_element and min_element
    int a[] = {1, 3, 5, 7, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    int maxi = *max_element(a, a + n);
    int mini = *min_element(a, a + n);

    cout << "Maximum element in the array: " << maxi << endl;
    cout << "Minimum element in the array: " << mini << endl;

    return 0;
}


--------------------------------------------------------------------------------------------------------