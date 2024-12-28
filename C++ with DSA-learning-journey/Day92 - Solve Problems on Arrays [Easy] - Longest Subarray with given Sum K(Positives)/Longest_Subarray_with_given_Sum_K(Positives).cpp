// Longest subarray with given sum K(positives)

// Solution 1: Brute Force Approach
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k) {
    int n = a.size(); // size of the array

    int len = 0;

    // Starting Index
    for (int i = 0; i < n; i++) { 
        // Ending Index
        for (int j = i; j < n; j++) { 
            // Add all the elements of subarray = a[i...j]:
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[k];
            }

            if (s == K) {
                len = max(len, j - i + 1);
            }
        }
    }
    
    return len;
}

int main() {
    vector<int> a = {2,3,5,1,9};
    long long k = 10;

    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}



// Solution 2: Optimizing the Naive Approach (Using two loops): 
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k) {
    int n = a.size(); // size of the array

    int len = 0;

    // Starting Index
    for (int i = 0; i < n; i++) { 
        // Sum Variable
        long long s = 0;

        // Ending Index
        for (int j = i; j < n; j++) {
            // Add the current element to the subarray a[i...j-1]:
            s += a[j];

            if (s == k) {
                len = max(len, j - i + 1);
            }
        }

        return len;
    }
}

int main() {
    vector<int> a = {2,3,5,1,9};
    long long k = 10;

    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}



// Solution 3: Better Approach(Using Hashing):
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k) {
    int n = a.size(); // size of the array

    map<long long, int> preSumMap;
    long long sum = 0;

    int maxLen = 0;
    for (int i = 0; i < n; i++) {
        // Calculate the prefix sum till index i:
        sum += a[i];

        // If the sum = k, update the maxLen:
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // Calculate the sum of remaining part  i.e. x - k:
        long long rem = sum - k;

        // Calculate the Length and Update maxLen:
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
    vector<int> a = {2,3,5,1,9};
    long long k = 10;

    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}



// Solution 4: Optimal Approach (Using 2 pointers): 
#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int> &a, long long k) {
    int n = a.size(); // size of the array

    // 2 pointers
    int left = 0; 
    int right = 0;

    long long sum = a[0];
    int maxLen = 0;

    while (right < n) {
        // If sum > k, reduce the subarray from Left until sum becomes Less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // If sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Move forward with right pointer:
        right++;
        if (right < n) {
            sum += a[right];
        }
    }

    return maxLen;
}

int main() {
    vector<int> a = {2,3,5,1,9};
    long long k = 10;

    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";

    return 0;
}
