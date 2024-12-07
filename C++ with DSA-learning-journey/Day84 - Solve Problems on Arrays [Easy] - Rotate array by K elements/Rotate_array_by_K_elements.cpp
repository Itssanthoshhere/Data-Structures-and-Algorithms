                                                                                                                                                                                                                                            /*
// Rotate array by K elements

// Approach 1: Using a temp array 
    --> For Rotating the Elements to right (Pseudo Code)
void Rotatetoright(int arr[], int n, int k) {
    k = k % n; 
    int temp[k];
    for (int i = n - k; i < n; i++) temp[i - n + k] = arr[i];
    for (int i = n - k - 1; i >= 0; i--) arr[i + k] = arr[i];
    for (int i = 0; i < k; i++) arr[i] = temp[i];
}
                                                                                                                                                                                                                                            */
// Code
#include <bits/stdc++.h>
using namespace std;

void Rotateright(int arr[], int n, int k) {
    if (n == 0) {
        return;
    }

    k = k % n;
    if (k > n) {
        return;
    }

    int temp[k];
    for (int i = n - k; i < n; i++) {
        temp[i - n + k] = arr[i];
    }

    for (int i = n - k - 1; i >= 0; i--) {
        arr[i + k] = arr[i];
    }

    for (int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n = 7; 
    int arr[] = {1,2,3,4,5,6,7};
    int k = 2;
    Rotateright(arr, n, k);

    cout << "After the elements to right: " << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


                                                                                                                                                                                                                                            /*
// --> For Rotating the Elements to left (Pseudo Code)
void Rotatetoleft(int arr[], int n, int k) {
    k = k % n;
    int temp[k];
    for (int i = 0; i < k; i++) temp[i] = arr[i];
    for (int i = 0; i < n - k; i++) arr[i] = arr[i + k];
    for (int i = n - k; i < n; i++) arr[i] = temp[i - n + k];
}
                                                                                                                                                                                                                                            */
// Code
#include <bits/stdc++.h>
using namespace std;

void Rotateleft(int arr[], int n, int k) {
    if (n == 0) {
        return;
    }

    k = k % n;
    if (k > n) {
        return;
    }

    int temp[k];
    for (int i = 0; i< k; i++) {
        temp[i] = arr[i];
    }

    for (int i = 0; i < n - k; i++) {
        arr[i] = arr[i + k];
    }

    for (int i = n - k; i < n; i++) {
        arr[i] = temp[i = n + k];
    }
}

int main() {
    int n = 7;
    int arr[] = {1,2,3,4,5,6,7};
    
    int k = 2;
    Rotateleft(arr, n, k);

    cout << "After Rotating the elements to left: " << endl;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}



                                                                                                                                                                                                                                            /*
// Approach 2: Using ” Reversal Algorithm “
    --> For Rotating Elements to right (Pseudo Code)
void Rotateright(int arr[], int n, int k) {
    k = k % n;
    Reverse(arr, 0, n - k - 1);
    Reverse(arr, n - k, n - 1);
    Reverse(arr, 0, n - 1);
}
                                                                                                                                                                                                                                            */
// Code
#include <bits/stdc++.h>
using namespace std;

// Function to Reverse the array
void Reverse(int arr[], int start, int end) {
    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to Rotate k elements to right
void Rotateright(int arr[], int n, int k) {
    // Reverse first n - k elements
    Reverse(arr, 0, n - k - 1);

    // Reverse last k elements
    Reverse(arr, n - k, n - 1);

    // Reverse whole array
    Reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 2;
    Rotateright(arr, n, k);

    cout << "After Rotating the k element to right: ";

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}


                                                                                                                                                                                                                                            /*
// --> For Rotating Elements to left (Pseudo Code)
void Rotateleft(int arr[], int n, int k) {
    k = k % n;
    Reverse(arr, 0, k - 1);
    Reverse(arr, k, n - 1);
    Reverse(arr, 0, n - 1);
}
                                                                                                                                                                                                                                            */
// Code
#include <bits/stdc++.h>
using namespace std;

// Function to Reverse the array
void Reverse(int arr[], int start, int end) {
    while (start <= end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to Rotate k elements to left
void Rotateleft(int arr[], int n, int k) {
    // Reverse first k elements
    Reverse(arr, 0, k - 1);

    // Reverse last n - k elements
    Reverse(arr, k, n - 1);

    // Reverse whole array
    Reverse(arr, 0, n - 1);
}

int main() {
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;
    int k = 2;
    Rotateleft(arr, n, k);

    cout << "After Rotating the k elements to left: " << endl;

    for (int i = 0; i < n; i++ ){
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
