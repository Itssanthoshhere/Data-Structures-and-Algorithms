// Armstrong Numbers
#include <iostream>
#include <cmath>  // For pow() function
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    // Calculate the number of digits in the given number
    int k = to_string(num).length();
    
    // Initialize the sum of digits raised to the power of k to 0
    int sum = 0;
    
    // Copy the value of the input number to a temporary variable n
    int n = num;
    
    // Iterate through each digit of the number
    while(n > 0){
        // Extract the last digit of the number
        int ld = n % 10;
        // Add the digit raised to the power of k to the sum
        sum += pow(ld, k); 
        // Remove the last digit from the number
        n = n / 10;
    }
    
    // Check if the sum of digits raised to the power of k equals the original number
    return sum == num;
}

int main() {
    // Declare a variable to store the user's input
    int number;

    // Prompt the user to enter a number
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is an Armstrong number
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }

    return 0;
}
