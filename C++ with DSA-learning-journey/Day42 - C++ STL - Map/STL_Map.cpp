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

int main() {
    explainMap();
    return 0;
}
