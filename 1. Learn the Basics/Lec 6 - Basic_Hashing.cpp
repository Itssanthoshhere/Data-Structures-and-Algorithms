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


--------------------------------------------------------------------------------------------------------


// Character Hashing
                                                                                                                                                                                                                 /*
Brute Force approach:

-> Pseudo Code
f(char c, s) {
    cnt = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == c) {
            cnt++;
        }
    }
    return cnt;
}
                                                                                                                                                                                                                                                                            */
// Code if the string contains only lowercase:
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a lowercase string: ";
    cin >> s;

    // Precompute frequency of each letter (a-z)
    int hash[26] = {0}; // Array to store counts of 'a' to 'z'
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++; 
    }

    // Handle multiple queries
    int q;
    cout << "Enter number of queries: ";
    
    cin >> q;
    cout << "Enter query characters: " << endl;
    
    while (q--) {
        char c;
        cin >> c; 
        // Output the frequency of character c
        cout << "Frequency of '" << c << "': " << hash[c - 'a'] << endl;
    }
    return 0;
}





// Code if the string contains both uppercase and lowercase:
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a mixed-case string: ";
    cin >> s;

    // Precompute frequency of each character (ASCII 0-255)
    int hash[256] = {0}; // Array for all ASCII characters
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++; 
    }

    // Handle multiple queries
    int q;
    cout << "Enter number of queries: ";

    cin >> q;
    cout << "Enter query characters: " << endl;
    
    while (q--) {
        char c;
        cin >> c; 
        // Output the frequency of character c
        cout << "Frequency of '" << c << "': " << hash[c] << endl;
    }
    return 0;
}


--------------------------------------------------------------------------------------------------------


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

    // Optional: Uncomment this part to print the frequency map (Iterate in the map)
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


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------


// Find the highest/lowest frequency element

// Brute-Force approach(Using two loops): 
#include <bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n)
{
    vector<bool> visited(n, false);
    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    for (int i = 0; i < n; i++) {

        // Skip this element if already processed
        if (visited[i] == true)
            continue;

        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if (count > maxFreq) {
            maxEle = arr[i];
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = arr[i];
            minFreq = count;
        }
    }
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int n;

    // Get the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Get the array elements from the user
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the frequency count function
    countFreq(arr, n);

    return 0;
}



// Optimized approach(Using map):
#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;

    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    int maxFreq = 0, minFreq = n;
    int maxEle = 0, minEle = 0;

    // Traverse through map to find the elements
    for (auto it : map) {
        int count = it.second;
        int element = it.first;

        if (count > maxFreq) {
            maxEle = element;
            maxFreq = count;
        }
        if (count < minFreq) {
            minEle = element;
            minFreq = count;
        }
    }

    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
}

int main()
{
    int n;

    // Prompt user for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    // Prompt user for the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call the Frequency function
    Frequency(arr, n);

    return 0;
}


--------------------------------------------------------------------------------------------------------

