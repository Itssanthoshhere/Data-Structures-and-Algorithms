#include <iostream>
using namespace std;

// 1. Calculating Time Complexity for a Simple Loop:


// Function to demonstrate time complexity of O(N)
void printNumbers(int N) {
    for (int i = 1; i <= N; i++) { // Loop runs N times
        cout << i << " "; // Constant time operation
    }
    cout << endl;
}

int main() {
    int N = 5;
    // Call function to print numbers
    printNumbers(N);
    return 0;
}



// 2. Nested Loops and Time Complexity:

#include <iostream>
using namespace std;

// Function to demonstrate time complexity of O(N^2)
void printPairs(int N) {
    for (int i = 1; i <= N; i++) {      // Outer loop runs N times
        for (int j = 1; j <= N; j++) {  // Inner loop runs N times
            cout << "(" << i << ", " << j << ") "; // Constant time operation
        }
        cout << endl;
    }
}

int main() {
    int N = 3;
    // Call function to print pairs
    printPairs(N);
    return 0;
}



// 3. Space Complexity Example with an Array: 

#include <iostream>
using namespace std;

// Function that uses an array to demonstrate space complexity
void arrayExample(int N) {
    int arr[N]; // Array takes O(N) space
    for (int i = 0; i < N; i++) {
        arr[i] = i; // Constant time operation
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " "; // Print array elements
    }
    cout << endl;
}

int main() {
    int N = 5;
    // Call function to work with an array
    arrayExample(N);
    return 0;
}
