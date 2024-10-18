// Reverse a Number      
#include <iostream>
using namespace std;

int main() {
	// Declare a variable 'n' to store the input integer.
	int n;
	// Prompt the user to enter an integer and store it in 'n'.
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number to reverse: " << n << endl;

	// Initialize a variable 'revNum' to store the reverse of the input integer.
	int revNum = 0;
	// Start a while loop to reverse the digits of the input integer.
	while(n > 0){
		// Extract the last digit of 'n' and store it in 'ld'.
		int ld = n % 10;
		// Multiply the current reverse number by 10 and add the last digit.
		revNum = (revNum * 10) + ld;
		// Remove the last digit from 'n'.
		n = n / 10;
	}
	// Print the reversed number.
    cout << "Reversed number: " << revNum << endl;
}
