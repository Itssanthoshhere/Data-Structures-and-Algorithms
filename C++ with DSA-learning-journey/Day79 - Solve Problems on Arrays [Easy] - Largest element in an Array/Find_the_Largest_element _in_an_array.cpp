// Find the Largest element in an array

// Brute Force Approach -> Solution1: Using Sorting
#include <bits/stdc++.h>
using namespace std;

// Function to sort the array and return the largest element
int sortArr(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - ];
}

int main() {
    int n;
    cout << "Enter the number of elements in the first array: ";
    cin >> n;

    vector<int> arr1(n);
    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the number of the elements in the second array: ";
    cin >> n;

    vector<int> arr2(n);
    cout << "Enter the elements of the second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    cout << "The Largest element in the first array is: " << sortArr(arr1) << endl;
    cout << "The Largest element in the second array is: " << sortArr(arr2) << endl;

    return 0;
}



                                                                                                                                                                                                                                            /*
// Recursive Approach -> Solution2: Using a max variable

-> Pseudo Code
largest = a[0]
for (i = 0; i < n; i++) {
    if (a[i] > largest) {
        largest = a[i];
    }
}

print(largest);
                                                                                                                                                                                                            */

#include <bits/stdc++.h>
using namespace std;

// Function to find the largest element in an array
int findlargestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int n;

    cout << "Enter the number of elements in the first array: ";
    cin >> n;

    int arr1[n];
    cout << "Enter the elements of the first array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }


    int max = findlargestElement(arr1, n);
    cout << "The largest element in the first array is: " << max << endl;


    cout << "Enter the number of elements in the second array: ";
    cin >> n;

    int arr2[n];
    cout << "Enter the elements of the second array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    max = findlargestElement(arr2, n);
    cout << "The largest element in the second array is: " << max << endl;

    return 0;
}
