// Sort an array of 0's 1's and 2's

// Solution - 2: Better Approach
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n) {
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cnt0++;
        }

        else if (arr[i] == 1) {
            cnt1++;
        }

        else {
            cnt2++;
        }
    }

    // Replace the places in the original array:
    for (int i = 0; i < cnt0; i++) {
        arr[i] = 0; // replacing 0's
    }

    for (int i = cnt0; i < cnt0 + cnt1; i++) {
        arr[i] = 1; // replacing 1's
    }

    for (int i = cnt0 + cnt1; i < n; i++) {
        arr[i] = 2; // replacing 2's
    }
}

int main() {
    int n = 6;
    vector<int> arr = {0,2,1,2,0,1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}



// Solution - 3: Optimized Approach(Dutch National Flag Algorithm):
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1; 

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if (arr[mid] == 1) {
            mid++;
        }
        else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n = 6;
    vector<int> arr = {0,2,1,2,0,1};
    sortArray(arr, n);
    cout << "After sorting:" << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
