#include <bits/stdc++.h>
using namespace std;
void pattern18(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern-18: Alpha-Triangle Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern18(n);
}
