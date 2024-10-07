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

int main() {
    explainUnorderedMap();
    return 0;
}
