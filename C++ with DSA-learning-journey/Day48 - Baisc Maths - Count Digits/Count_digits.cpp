// Count digits in a number                           
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
