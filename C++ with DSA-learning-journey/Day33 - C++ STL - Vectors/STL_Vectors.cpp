// Vector operations in C++
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

int main() {
    explainVector();  // Call the function to explain vectors
    return 0;
}
