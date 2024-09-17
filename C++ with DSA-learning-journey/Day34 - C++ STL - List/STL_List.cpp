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

int main() {
    explainList();  // Calling the function to explain list operations
    return 0;
}
