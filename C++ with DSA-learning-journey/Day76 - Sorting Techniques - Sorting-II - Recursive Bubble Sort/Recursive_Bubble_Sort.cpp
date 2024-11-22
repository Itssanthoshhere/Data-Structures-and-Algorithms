// 	Recursive Bubble Sort Algorithm

// Approach: (Basic version)
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



// Optimized Recursive Bubble Sort (Best Case Check)

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
