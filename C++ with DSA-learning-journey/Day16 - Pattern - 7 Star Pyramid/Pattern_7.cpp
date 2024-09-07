#include <bits/stdc++.h>
using namespace std;
void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 7: Star Pyramid" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern7(n);
}
