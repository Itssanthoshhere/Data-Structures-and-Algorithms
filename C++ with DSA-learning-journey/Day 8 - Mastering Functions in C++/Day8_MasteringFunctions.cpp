// 1. Basic Function Definition and Usage:
    
#include <iostream>
using namespace std;

// Function to print a greeting message
void printName(string name) {
    cout << "Hey " << name << endl;
}

int main() {
    // Take user input for names
    string name1;
    cin >> name1;
    // Call function to print greeting
    printName(name1);

    cout << "\n" << endl;

    string name2;
    cin >> name2;
    // Call function to print another greeting
    printName(name2);

    return 0;
}

// 2. Function with Return Value:

// Function to calculate the sum of two numbers
int sum(int num1, int num2) {
    int sum3 = num1 + num2; // Calculate sum
    return sum3; // Return the sum
}

int main() {
    // Take user input for numbers
    int num1, num2;
    cin >> num1 >> num2;
    // Call function and store result
    int result = sum(num1, num2);
    // Print the result
    cout << result;
    return 0;
}


// 3. Pass by Value:

// Function that demonstrates pass by value
void doSomething(int num) {
    cout << num << endl; // Print original number
    num += 5; // Modify local copy
    cout << num << endl; // Print modified number
    num += 5; // Further modify local copy
    cout << num << endl; // Print further modified number
}

int main() {
    int num = 10;
    // Call function with pass by value
    doSomething(num);
    // Print original number after function call
    cout << num << endl;
    return 0;
}


// 4. Pass by Reference:

// Function that demonstrates pass by reference
void Something(string &s) {
    s[0] = 't'; // Modify original string
    cout << s << endl; // Print modified string
}

int main() {
    string s = "raj";
    // Call function with pass by reference
    Something(s);
    // Print string after function call
    cout << s << endl;
    return 0;
}



// 5. Array Handling in Functions:

// Function that modifies an array passed by reference
void Something(int arr[], int n) {
    arr[0] += 100; // Modify first element of the array
    cout << "Value inside function: " << arr[0] << endl; // Print modified value
}

int main() {
    int n = 5;
    int arr[n];
    // Take user input for array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Call function with array
    Something(arr, n);

    // Print array value after function call
    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}
