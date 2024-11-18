                                                                                                                                                                                                                                            /*
// 	Bubble Sort

-> Pseudo Code
for (i = n - 1; i >= 1; i--) {
    for (j = 0; j <= i - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap;
        }
    }
}
                                                                                                                                                                                                            */
// Approach:
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // Bubble sort implementaion
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the second array 
    cout << "After Using Bubble Sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n; // Take the number of elements from the user

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}




// Optimized approach (Reducing time complexity for the best case):
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // Bubble sort implementation
    for (int i = n - 1; i >= 0; i--) {
        int didSwap = 0; // check it swapping occurred 
        for (int j = 0; j <= i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }

        // If no swaps occurred, that means array is already sorted 
        if (didSwap == 0) {
            break;
        }
     }

     cout << "After Using Bubble Sort: " << "\n";
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
     }
     cout << "\n";
}

int main() {
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    bubble_sort(arr, n);
    return 0;
}
