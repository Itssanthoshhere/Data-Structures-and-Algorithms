// Map / Hash Map

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute 
    map<int, int> mp; // Map to store element frequencies
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    // Optional: Uncomment this part to print the frequency map 
    // (Iterate in the map)
    /*
    for (auto it : mp) {
        cout << it.first << " -> " << it.second << endl;
    }
    */

    // Process queries to check frequency of given numbers
    int q;
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << "Enter the numbers to query: " << endl;
    while (q--) {
        int number;
        cin >> number; // Query input
        // Fetch and display frequency from the map
        cout << "Frequency of " << number << ": " << mp[number] << endl;
    }

    return 0;
}