                                                                                                                                                                                                                                            /*
// Check if the array is sorted

-> Pseudo Code
for (i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {

    }
    else {
        return false;
    }
}
                                                                                                                                                                                                            */
// Approach: Brute Force
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    bool ans = isSorted(arr, n);

    if (ans) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}



// Approach: Efficient (Single traversal)
#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;

    printf("%s", isSorted(arr, n) ? "True" : "False");
}

// Check if the array is sorted

-> Pseudo Code
for (i = 1; i < n; i++) {
    if (arr[i] >= arr[i - 1]) {

    }
    else {
        return false;
    }
}