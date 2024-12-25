// Find the number that appears once, and other numbers twice

// Solution 1: Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    // Size of the array:
    int n = arr.size();

    // Run a loop for selecting elements:
    for (int i = 0; i < n; i++) {
        int num = arr[i]; // selected element
        int cnt = 0;

        // Find the occurence using Linear Search:
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                cnt++;
            }
        }

        // If the occurence is 1 return ans:
        if (cnt == 1) {
            return num;
        }
    }
}

int main() {
    vector<int> arr = {4,1,2,1,2};

    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;

    return 0;
}



// Solution 2: Better Approach - 1 (Using Hashing)
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    // Size of the array
    int n = arr.size();

    // Find the maximum element:
    int maxi = arr[0];
    for (int i = 0; i < n; i++) {
        maxi = max(maxi, arr[i]);
    }

    // Declare hash array of size maxi + 1 and hash the given array:
    vector<int> hash(maxi + 1, 0);
    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    // Find the single element ans return the answer:
    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1) {
            return arr[i];
        }
    }

    // This line will never execute, if the array contains a single element.
    return -1;
}

int main() {
    vector<int> arr = {4,1,2,1,2};

    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;

    return 0;
}



// Solution 2: Better Approach - 2 (Hashing using the map data structure)
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    // Size of the array
    int n = arr.size();

    // Declare the hashmap and hash the given array:
    map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    // Find the single element and return the answer:
    for (auto it : mpp) {
        if (it.second == 1) {
            return it.first;
        }
    }

    // This line will never execute, if the array contains a single element.
}

int main() {
    vector<int> arr = {4,1,2,1,2};

    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;

    return 0;
}



// Solution 3: Optimal Approach(Using XOR): 
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    // Size of the array
    int n = arr.size();

    // XOR all the elements:
    int xor = 0;
    for (int i = 0; i < n; i++) {
        xor = xor ^ arr[i];
    }
    
    return xor;
}

int main() {
    vector<int> arr = {4,1,2,1,2};

    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;

    return 0;
}
