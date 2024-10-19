// Check Palindrome
#include <iostream>
using namespace std;

// Function to check if a given integer is a palindrome
bool palindrome(int n) {
    int revNum = 0;
    int dup = n;  // Store the original number

    // Reverse the number
    while (n > 0) {
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n / 10;
    }

    // Check if the original number is equal to the reversed number
    return dup == revNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;  // Taking input from the user

    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
