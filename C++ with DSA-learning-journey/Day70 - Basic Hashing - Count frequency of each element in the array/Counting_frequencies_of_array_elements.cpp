// Count frequency of each element in the array

// Solution 1: Use of two loops
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n) {
    vector<bool> visited(n, false); // Keeps track of visited elements

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency of arr[i]
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " occurs " << count << " times" << endl;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    countFreq(arr, n);
    
    return 0;
}



// Solution 2: Using Map
#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n) {
    unordered_map<int, int> map;

    // Populate the map with element frequencies
    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    // Traverse through the map and print frequencies
    for (auto x : map)
        cout << x.first << " occurs " << x.second << " times" << endl;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Frequency(arr, n);

    return 0;
}

