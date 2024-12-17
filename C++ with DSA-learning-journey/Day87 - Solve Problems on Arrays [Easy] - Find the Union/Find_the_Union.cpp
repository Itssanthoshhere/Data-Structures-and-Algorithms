// Find the Union (Union of Two Sorted Arrays)

// Solution 1: Using Map
#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    map <int, int> freq;
    vector <int> Union;

    for (int i = 0; i < n; i++) {
        freq[arr1[i]]++;
    }

    for (int i = 0; i < m; i++) {
        freq[arr2[i]]++;
    }

    for (auto & it: freq) {
        Union.push_back(it.first);
    }

    return Union;
}

int main() {
    int n = 10;
    int m = 7;

    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};

    vector<int> Union = FindUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is " << endl;

    for (auto & val: Union) {
        cout << val << " ";
    }

    return 0;
}



// Solution 2: Using Set (Brute Force Approach)
#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    set <int> s;
    vector<int> Union;

    for (int i = 0; i< n; i++) {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }

    for (auto & it: s) {
        Union.push_back(it);
    }

    return Union;
}

int main() {
    int n = 10; 
    int m = 7;

    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {2,3,4,4,5,11,12};

    vector<int> Union = FindUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is " << endl;

    for (auto & val: Union) {
        cout << val << " ";
    }

    return 0;
}



// Solution 3: Two pointers (Optimal Approach)
#include <bits/stdc++.h>
using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
    int i = 0, j = 0; // pointers
    vector<int> Union; // Union vector

    while (i < n && j < m) {
        // Case 1: arr1[i] < arr2[j]
        if (arr1[i] < arr2[j]) {
            if (Union.size() == 0 || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]);
            }
            i++;
        }
        // Case 2: arr1[i] > arr2[j]
        else if (arr1[i] > arr2[j]) {
            if (Union.size() == 0 || Union.back() != arr2[j]) {
                Union.push_back(arr2[j]);
            }
            j++;
        }
        // Case 3: arr1[i] == arr2[j]
        else {
            if (Union.size() == 0 || Union.back() != arr1[i]) {
                Union.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // If any elements are left in arr1
    while (i < n) {
        if (Union.back() != arr1[i]) {
            Union.push_back(arr1[i]);
        }
        i++;
    }

    // If any elements are left in arr2
    while (j < m) {
        if (Union.back() != arr2[j]) {
            Union.push_back(arr2[j]);
        }
        j++;
    }

    return Union;
}

int main() {
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};

    vector<int> Union = FindUnion(arr1, arr2, n, m);

    cout << "Union of arr1 and arr2 is: " << endl;
    for (auto &val : Union) {
        cout << val << " ";
    }

    return 0;
}
