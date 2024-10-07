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

int main() {
    explainMultiMap();
    return 0;
}
