// Algorithms - Sort 
#include <iostream>
#include <algorithm>
#include <functional> // for greater<int>
#include <utility>    // for pair

using namespace std;

void explainAlgorithmSort() {
    // 1. Sorting an array in ascending order
    int a[] = {5, 3, 8, 6, 2, 7};
    int n = sizeof(a) / sizeof(a[0]);
    
    // Sort entire array in ascending order
    sort(a, a + n);
    
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 2. Sorting a specific range of elements
    // Sort elements from index 2 to index 4 in ascending order
    sort(a + 2, a + 4);
    
    cout << "Array with range [2, 4) sorted: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 3. Sorting in descending order using greater<int>
    // Sort the entire array in descending order
    sort(a, a + n, greater<int>());
    
    cout << "Array sorted in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // 4. Sorting an array of pairs
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}};
    int m = sizeof(arr) / sizeof(arr[0]);

    // Custom sort: sort by second element in ascending order;
    // if second elements are the same, sort by the first element in descending order
    sort(arr, arr + m, [](pair<int, int> &p1, pair<int, int> &p2) {
        if (p1.second == p2.second) {
            return p1.first > p2.first;  // Descending order for the first element if second elements are the same
        }
        return p1.second < p2.second;    // Ascending order for the second element
    });
    
    cout << "Array of pairs sorted: ";
    for (int i = 0; i < m; i++) {
        cout << "{" << arr[i].first << ", " << arr[i].second << "} ";
    }
    cout << endl;
}

int main() {
    explainAlgorithmSort();
    return 0;
}
