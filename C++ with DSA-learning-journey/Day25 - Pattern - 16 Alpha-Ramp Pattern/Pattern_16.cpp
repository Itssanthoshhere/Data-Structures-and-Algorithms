#include <bits/stdc++.h>
using namespace std;
void pattern16(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 16: Alpha-Ramp Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern16(n);
}
