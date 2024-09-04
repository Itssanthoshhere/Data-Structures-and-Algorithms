#include <bits/stdc++.h>
using namespace std;

void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 4: Right-Angled Number Pyramid - II" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern4(n);
}
