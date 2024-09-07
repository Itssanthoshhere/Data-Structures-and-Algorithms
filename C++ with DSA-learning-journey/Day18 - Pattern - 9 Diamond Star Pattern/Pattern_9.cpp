#include <bits/stdc++.h>
using namespace std;
void pattern9(int n) {
    // Upper part of the diamond
    for (int i = 0; i < n; i++) {
        // Print spaces before the stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Move to the next line after printing stars
        cout << endl;
    }
    
    // Lower part of the diamond
    for (int i = 0; i < n; i++) {
        // Print spaces before the stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        // Move to the next line after printing stars
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 9: Diamond Star Pattern" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern9(n);
}
