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


--------------------------------------------------------------------------------------------------------


// 	Recursive Bubble Sort Algorithm

// Approach: 
#include <bits/stdc++.h>
using namespace std;

// Function to preform bubble sort using recursion
void bubble_sort(int arr[], int n) {
    // Base Case: If range == 1, return 
    if (n == 1) {
        return;
    }


    // Perform one pass of bubble sort
    for (int i = 0; j <= n - 2; j++) {
        if (arr[j] > arr[j + 1]) {
            // Swap arr[j] and arr[j + 1]
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
        }
    }

    // Reduce the range and call recursively 
    bubble_sort(arr, n - 1);
}

int main() {
    int n;

    // Get the size of the array from the user 
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Get the elements of the array from the user
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array before sorting 
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call bubble sort 
    bubble_sort(arr, n);

    // Print the array after sorting 
    cout << "After Using Bubble Sort:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}



// Optimized approach (Reducing time complexity for the best case):

#include <bits/stdc++.h>
using namespace std;

// Function to perform bubble sort using recursion
void bubble_sort(int arr[], int n) {
    // Base Case: If range == 1, return
    if (n == 1) {
        return;
    }

    int didSwap = 0;

    // Perform one pass of the bubble sort
    for (int j = 0; j <= n - 2; i++) {
        if (arr[j] > arr[j + 1]) {
            // Swap arr[j] and arr[j + 1]
            int temp = arr[j + 1];
            arr[j + 1] = arr[j];
            arr[j] = temp;
            didSwap = 1;
        }
    }

    // If no swapping happens, array is already sorted
    if (didSwap == 0) {
        return;
    }

    // Reduce the range and call recursively 
    bubble_sort(arr, n - 1);
}

int main() {
    int n;

    // Get the size of the array from the user 
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Get the elements of the array from the user
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Print the array before sorting 
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call bubble sort
    bubble_sort(arr, n);

    // Print the array after sorting 
    cout << "After Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------

