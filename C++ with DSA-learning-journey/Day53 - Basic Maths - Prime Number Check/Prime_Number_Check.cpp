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