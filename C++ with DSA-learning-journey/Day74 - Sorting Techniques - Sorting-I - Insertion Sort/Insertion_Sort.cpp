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

