                                                                                                                                                                                                                                            /*
// 	Selection Sort

-> Pseudo Code
for (i = 0; i <= n - 2; i++) {
    for (j = i; j <= n - 1; j++) {
        if (arr[j] < arr[min]) {
            min = j;
        }
    }

    swap (arr[min], arr[i])
}
                                                                                                                                                                                                            */
#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    // Selection sort 
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }

    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;

    // Prompt user for the number of elements 
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    // Prompt user for the array elements
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Display the array before sorting 
    cout << "Before selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    // Perform selection sort 
    selection_sort(arr, n);

    return 0;
}

