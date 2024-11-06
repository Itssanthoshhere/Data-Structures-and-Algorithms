                                                                                                                                                                                                                 /*
// Fibonacci Number
-> Pseudo Code
int f(n) {
    // Base case: Return n if it’s 0 or 1
    if (n <= 1) {
        return n;
    }

    // Recursive calls
    int last = f(n - 1);
    int slast = f(n - 2);

    // Add the last two Fibonacci numbers
    return last + slast;
}

int main() {
    int n;
    print(f(n));
}
                                                                                                                                                                                                                 */
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N) {
    // Base Condition
    if (N <= 1) {
        return N;
    }

    // Problem broken down into 2 functional calls and their 
    // results combined and returned.
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);
    
    return last + slast;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;  // Getting input from the user
    cout << "Fibonacci(" << N << ") = " << fibonacci(N) << endl;
    return 0;
}