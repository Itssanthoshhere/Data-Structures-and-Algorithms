// Recursive Insertion Sort Algorithm

#include <bits/stdc++.h>
using namespace std;

// Function to perform insertion sort using recursion
void insertion_sort(int arr[], int i, int n) {
    // Base Case: If i == n, return
    if (i == n) return;

    int j = i;
    // Insert the element at index `i` into its correct position
    while (j > 0 && arr[j - 1] > arr[j]) {
        // Swap arr[j-1] and arr[j]
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }

    // Call the function for the next index
    insertion_sort(arr, i + 1, n);
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
    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call insertion sort
    insertion_sort(arr, 0, n);

    // Print the array after sorting
    cout << "After Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
