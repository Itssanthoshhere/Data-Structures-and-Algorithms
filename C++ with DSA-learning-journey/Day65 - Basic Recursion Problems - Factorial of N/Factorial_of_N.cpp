                                                                                                                                                                                                                 /*
// Factorial of N numbers
-> Pseudo Code
int factorial(n) {} {
    if (n == 0) {
        return 1;
    } 

    return n * factorial(n - 1);
}

int main() {
    input n;
    factorial(n);
}
                                                                                                                                                                                                                 */

#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // Base condition: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive call: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int n;
    
    // Prompt the user to enter a number
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    // Calculate and display the factorial
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}
