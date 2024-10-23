// Print all Divisors
#include <bits/stdc++.h> 
using namespace std;

// Function to calculate and return the divisors of the number
int* printDivisors(int n, int &size) {
    // Allocate memory for the array of divisors
    int *divisors = new int[n]; 
    // Initialize the count of divisors
    int count = 0;

    // Loop to find divisors
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            // Add the divisor to the array
            divisors[count++] = i; 
        }
    }
    // Update the size parameter with the count of divisors
    size = count; 
    return divisors; 
}

int main() {
    int number;
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    int size;
    // Get the divisors for the entered number
    int *divisors = printDivisors(number, size);

    // Output the divisors
    cout << "Divisors of " << number << " are: ";
    for (int i = 0; i < size; i++) {
        cout << divisors[i] << " ";
    }
    cout << endl;

    // Free up the dynamically allocated memory
    delete[] divisors;

    return 0;
}
