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

int main() {
    explainSet();  // Call the function to demonstrate set operations
    return 0;
}
