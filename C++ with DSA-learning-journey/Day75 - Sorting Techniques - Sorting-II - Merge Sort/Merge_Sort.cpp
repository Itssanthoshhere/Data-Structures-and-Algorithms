                                                                                                                                                                                                                                            /*
// 	Merge Sort Algorithm

-> Pseudo Code
mergeSort(arr[], low, high) {
    // Base Case
    if (low >= high) {
        return;
    }

    int mid = (low + high) / 2;

    // Left Half
    mergeSort(arr, low, mid);

    // Right Half
    mergeSort(arr, mid + 1, high);

    merge(arr, low, mid, high);
}

 low = leftmost index of the array
 high = rightmost index of the array
 mid = Middle index of the array 
                                                                                                                                                                                                            */
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    // Storing elements in the temporary array in a sorted manner
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If elements on the left half are still left
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If elements on the right half are still left
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Transferring all elements from temporary to arr
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);  // Left half
    mergeSort(arr, mid + 1, high); // Right half
    merge(arr, low, mid, high);  // Merging sorted halves
}

int main() {
    int n;

    // Taking input for the size of the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);

    // Taking input for the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sorting the array using mergeSort
    mergeSort(arr, 0, n - 1);

    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
