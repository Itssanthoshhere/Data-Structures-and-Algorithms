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
