                                                                                                                                                                                                                                            /*
// 	Selection Sort Algorithm

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


--------------------------------------------------------------------------------------------------------


                                                                                                                                                                                                                                            /*
// 	Bubble Sort Algorithm

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


--------------------------------------------------------------------------------------------------------


                                                                                                                                                                                                                                            /*
// 	Insertion Sort Algorithm

-> Pseudo Code
for (i = 0; i < n - 1; i++) {
    j = i;
    while (j < 0 && a[j - 1]) {
        swap (a[j - 1], a[j]);
        j--;
    }
}
                                                                                                                                                                                                            */
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = 1;
        while (j > 0 && arr[j - 1] > arr[j]) {
            // swap arr[j - 1] and arr[j]
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "After Using Insertion Sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Enter the number of the elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Before Using Insertion Sort: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);
    return 0;
}


--------------------------------------------------------------------------------------------------------

