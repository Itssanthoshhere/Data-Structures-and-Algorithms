#include <bits/stdc++.h>
using namespace std;

void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 3" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern3(n);
}