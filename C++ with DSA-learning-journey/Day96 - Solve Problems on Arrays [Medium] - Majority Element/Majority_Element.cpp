// Majority Element (>n/2 times)

// Solution - 1: Naive Approach(Brute-force approach): 
#include <bits/stdc++>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[j] == v[i]) {
                cnt++;
            }
        }

        if (cnt > (n / 2)) {
            return v[i];
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}



// Solution - 2: Better Approach(Hashing): 
#include <bits/stdc++>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();

    map<int, int> mpp;

    // Storing the elements with its occurence:
    for (int i = 0; i < n; i++) {
        mpp[v[i]]++;
    }

    // Searching for the majority element:
    for (auto it : mpp) {
        if (it.second > (n / 2)) {
            return it.first;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}



// Solution - 3: Optimized Approach(Moore’s Voting Algorithm):
#include <bits/stdc++>
using namespace std;

int majorityElement(vector<int> v) {
    int n = v.size();
    int cnt = 0;
    int element;

    // Applying the Algorithm:
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            cnt = 1;
            element = v[i];
        }
        else if(element == v[i]) {
            cnt++;
        }
        else {
            cnt--;
        }

        // Checking if the stored element is the majority element:
        int cnt1 = 0;
        for (itn i = 0; i < n; i++) {
            if (v[i] == element) {
                cnt1++;
            }
        }

        if (cnt1 > (n / 2)) {
            return -1;
        }
    }
}

int main() {
    vector<int> arr = {2,2,1,1,1,2,2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}
