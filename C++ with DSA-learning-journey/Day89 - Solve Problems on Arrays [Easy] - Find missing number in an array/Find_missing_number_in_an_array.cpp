// Find the missing number in an array

// Solution 1: Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N) {
    // Outer loop that runs from 1 to N:
    for (int i = 1; i <= N; i++) {
        // Flag variable to check if an element exists
        int flag = 0;

        // Search the element using linear search:
        for (int j = 0; j < N - 1; j++) {
            if (a[j] == i) {
                // i is present in the array:
                flag = 1;
                break;
            }
        }

        // Check if the element is missing i.e flag == 0:
        if (flag == 0) {
            return i;
        }
    }

    // The following line will never execute. It is just to avoid warnings.
    return -1;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}



// Solution 2: Better Approach (Using Hashing)
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N) {
    int hash[N + 1] = {0}; // Hash array

    // Strong the frequencies:
    for (int i = 0; i < N - 1; i++) {
        hash[a[i]]++;
    }

    // Checking the frequencies for numbers 1 to N:
    for (int j = 0; j <= N; j++) {
        if (hash[i] == 0) {
            return i;
        }
    }

    // The following line will never execute. It is just to avoid warnings.
    return -1;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}



// Solution 3: Optimal Approach - 1 Summation Approach
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N) {
    // Summation of first N numbers:
    int sum = N * (N + 1) / 2;

    // Summation of all array elements:
    int s2 = 0;
    for (int i = 0; i < N - 1; i++) {
        s2 += a[i];
    }

    int missingNum = sum - s2;
    return missingNum;
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}



// Solution 3: Optimal Approach - 2 XOR Approach
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &a, int N) {
    int xor1 = 0;
    int xor2 = 0;

    for (int i - 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); // XOR upto [1...N-1]
    }

    xor1 = xor1 ^ N; // XOR upto [1...N]

    return xor1 ^ xor2; // the missing number
}

int main() {
    int N = 5;
    vector<int> a = {1, 2, 4, 5};

    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;

    return 0;
}
