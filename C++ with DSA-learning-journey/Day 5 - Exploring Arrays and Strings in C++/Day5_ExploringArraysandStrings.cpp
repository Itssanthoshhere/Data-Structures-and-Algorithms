#include <iostream>
using namespace std;

int main() {
    
    // 1D Array: Declaration and Initialization
    int arr[5]; // Declare an array of size 5
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // Input elements
    
    arr[3] += 10; // Modify the value at index 3

    cout << "\nModified element at index 3: " << arr[3] << endl; // Output modified element
    
    // 2D Array: Declaration and Initialization
    int arr[3][5]; // Declare a 3x5 2D array (3 rows, 5 columns)
    
    arr[1][3] = 78; // Assign value to a specific element
    cout << "Element at arr[1][3]: " << arr[1][3] << endl; // Output the value
    
    // String Manipulation
    string s = "Santhosh"; // Declare and initialize a string
    cout << "Character at index 2: " << s[2] << endl; // Access and print the character at index 2
    
    int len = s.size(); // Get the length of the string
    cout << "String: " << s << endl; // Print the string
    cout << "Last character: " << s[len - 1] << endl; // Print the last character of the string
    
    return 0;
}
