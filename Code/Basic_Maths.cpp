// Count digits                           
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to count the number of digits in an integer 'n'.
int countDigits(int n){
    // Initialize a counter variable 'cnt' to store the count of digits.
    int cnt = 0;
    // While loop iterates until 'n' becomes 0 (no more digits left).
    while(n > 0){
        // Increment the counter for each digit encountered.
        cnt = cnt + 1;
        // Divide 'n' by 10 to remove the last digit.
        n = n / 10;
    }
    // Return the count of digits.
    return cnt;
}

int main() {
    int N;
    cin >> N;
    cout << "N: "<< N << endl;
    int digits = countDigits(N);
    cout << "Number of Digits in N: "<< digits << endl;
    return 0;
}


// Alternative Code to solve the Count Digits Problem
// #include <bits/stdc++.h>
// using namespace std;

// int count(int n) {
//     int cnt = (int)(log10(n) + 1);
//     return cnt;
// }


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------

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


--------------------------------------------------------------------------------------------------------

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


--------------------------------------------------------------------------------------------------------

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



// void printDivisors(int n) {
//     vector<int> list;
//     // 6 * 6 <= 36
//     // 7 * 7 <= 36 false
//     // O(sqrt(n))
//     for (int i = 1; i <= sqrt(n); i++) {
//         if (n % i == 0) {
//             list.push_back(i);
//             if ((n / i) != i) {
//                 list.push_back(n / i);
//             }
//         } 
//     }
//     // O(no. of factors * log(no. of factors)) : n is the number factors
//     sort(list.begin(), list.end());

//     // O(number of factors)
//     for (auto it : list) {
//         cout << it << " ";
//     }
// }


--------------------------------------------------------------------------------------------------------


// Prime Number Check
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

// Function to check if a given number is prime.
bool checkPrime(int n){ 
    int cnt = 0;
    // Loop through numbers from 1 to n.
    for(int i = 1; i<=n; i++){ 
        // If n is divisible by i without any remainder.
        if(n%i ==0){ 
            cnt = cnt+1;
        }
    }

     // If the number of factors is exactly 2
    if(cnt==2){
        return true;
    }
    else{ 
        return false; 
    }
}

int main() {
    int n;
    cout << "Enter a number to check if it's prime: ";
    cin >> n;

    bool isPrime = checkPrime(n);
    if(isPrime){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
                               
                            
--------------------------------------------------------------------------------------------------------


// GCD Or HCF
#include <iostream>
#include <algorithm>
using namespace std;

int findGcd(int n1, int n2) {
    // Initialize gcd to 1
    int gcd = 1;

    // Iterate from 1 up to the minimum of n1 and n2
    for(int i = 1; i <= min(n1, n2); i++) {
        // Check if i is a common factor of both n1 and n2
        if(n1 % i == 0 && n2 % i == 0) {
            // Update gcd to the current common factor i
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int n1, n2;

    cout << "Enter two integers: ";
    cin >> n1 >> n2;

    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}


--------------------------------------------------------------------------------------------------------
