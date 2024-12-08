// Move Zeros to end

// Brute Force Approach: 
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    // Temporary array
    vector<int> temp;

    // Copy non-zero elements from original -> tem array:
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            temp.push_back(a[i]);
        }
    }

    // Number of non-zero elements
    int nz = temp.size();

    // Copy elements from temp fill first nz fields of original array:
    for (int i = 0; i< nz; i++) {
        a[i] = temp[i];
    }

    // Fill rest of the cells with 0:
    for (int i = nz; i < n; i++) {
        a[i] = 0;
    }

    return a;
}

int main() {
    vector<int> arr = {1,0,2,3,2,0,0,4,5};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }

    cout << '\n';
    return 0;
}



// Optimal Approach(Using 2 pointers): 
#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;

    // Place the pointer j:
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }

    // No non-zero elements:
    if (j == -1) {
        return a;
    }

    // Move the pointers i & j and swap accordingly:
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}

int main() {
    vector<int> arr = {1,0,2,3,2,0,0,4,5,1};
    int n = 10;
    vector<int> ans = moveZeros(n, arr);
    for (auto &it : ans) {
        cout << it << " ";
    }

    cout << '\n';
    return 0;
}

