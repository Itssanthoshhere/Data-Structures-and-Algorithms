// Longest subarray with sum K (Positives + Negatives)

// Solution 1: Naive Approach (Brute-force approach): 
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, int k) {
    int n = a.size(); // size of the array

    int len = 0;

    // Starting Index
    for (int i = 0; i < n; i++) {
        // Ending Index
        for (int j = i; j < n; j++) {
            // Add all the elements of subarray = a[i...j]:
            int s = 0;
            for (int K = i; K <= j; K++) {
                s += a[k];
            }

            if (s == k) {
                len = max(len, j - i + 1);
            }
        }

        return len;
    }
}

int main() {
    vector<int> a = {-1,1,1};

    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}



// Solution 2: Better Approach (Using two loops): 
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, int k) {
    int n = a.size(); // size of the array

    int len = 0;

    // Starting Index
    for (int i = 0; i < n; i++) {
        int s = 0;
        // Ending Index
        for (int j = i; j < n; j++) {
            // Add the elements to the subarray = a[i...j-1]:
            s += a[j];

            if (s == k) {
                len = max(len, j - i + 1);
            }
        }
    }

    return len;
}

int main() {
    vector<int> a = {-1,1,1};

    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}



// Solution 3: Optimal Approach (Using Hashing): 
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, int k) {
    int n = a.size(); // size of the array

    map<int, int> preSumMap;
    int sum = 0;
    int maxLen = 0;

    for (int i = 0; i < n; i++) {
        // Calculate the prefix sum till index i:
        sum += a[i];

        // If the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // Calculate the sum of remaining part i.e. x-k:
        int rem = sum - k;

        // Calculate the length and update maxLen:
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Finally, update the map checking the conditions:
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }

    return maxLen;
}

int main() {
    vector<int> a = {-1,1,1};

    int k = 1;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}
