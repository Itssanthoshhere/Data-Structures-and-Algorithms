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

int main()
{
    explainPair();
    return 0;
}