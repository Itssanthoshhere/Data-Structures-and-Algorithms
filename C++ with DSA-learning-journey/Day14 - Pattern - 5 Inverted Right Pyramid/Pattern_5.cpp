#include <bits/stdc++.h>
using namespace std;

void pattern5(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j < n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern-5: Inverted Right Pyramid" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern5(n);
}
