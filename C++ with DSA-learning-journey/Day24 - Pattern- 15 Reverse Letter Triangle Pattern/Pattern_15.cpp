#include <bits/stdc++.h>
using namespace std;
void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern-15: Reverse Letter Triangle Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern15(n);
}
