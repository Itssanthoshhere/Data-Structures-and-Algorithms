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
