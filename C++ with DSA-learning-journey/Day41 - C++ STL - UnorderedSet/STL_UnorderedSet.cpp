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

int main() {
    explainUSet();
    return 0;
}
