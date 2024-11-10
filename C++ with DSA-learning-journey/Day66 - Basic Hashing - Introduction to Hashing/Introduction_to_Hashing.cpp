                                                                                                                                                                                                                                            /*
// Introduction to Hashing: 
        - pre-storing / fetching

Brute Force approach:

-> Pseudo Code
number = 1;
int f(number, a[]) {
    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) {
            cnt = cnt + 1;
        }
    }

    return cnt;
}
                                                                                                                                                                                                            */











































#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    // Input the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    int arr[n];
    // Input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize hash array with zero values (assuming values are between 0 and 12)
    int hash[13] = {0};

    // Pre-compute the frequency of each element in the array
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;  // Increment count at the index corresponding to the value in arr
    }

    int q;
    // Input the number of queries
    cout << "Enter the number of queries: ";
    cin >> q;

    // Process each query
    while (q--) {
        int number;
        cout << "Enter the number to check its frequency: ";
        cin >> number;

        // Fetch and display the frequency of 'number' from the hash array
        if (number >= 0 && number <= 12) {  // Check if 'number' is within bounds
            cout << "Frequency of " << number << " is: " << hash[number] << endl;
        } else {
            cout << "Number out of bounds (0-12)" << endl;
        }
    }

    return 0;
}
