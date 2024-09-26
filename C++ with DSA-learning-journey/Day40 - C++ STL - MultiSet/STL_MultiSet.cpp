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

int main() {
    explainMultiSet();  // Call the function to demonstrate Multi Set operations
    return 0;
}


