                                                                                                                                                                                                                                            /*
// Quick Sort Algorithm

-> Pseudo Code
quickSort(arr, low, high) {
    // checking if the range > 1
    if (low < high) {

        pIndex = partition(arr, low, high);

        // Left subarray
        quickSort(arr, low, pIndex - 1);

        // Right subarray
        quickSort(arr, pIndex + 1, high);
    }
}



// Now, let’s understand how to implement the partition() function to get the partition index (Pseudo Code)

int partition(arr, low, high) {
    pivot = arr[low];
    i = low;
    j = high;
    while (i < j) {
        // check 1:
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }

        // check 2:
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }

        if (i < j) {
            swap(arr[i], arr[j]);
        }

        swap(arr[low], arr[j]);
        return j;
    }
}
                                                                                                                                                                                                            */
#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void qs(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    qs(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nBefore Using Quick Sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    arr = quickSort(arr);

    cout << "\nAfter Using Quick Sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}

