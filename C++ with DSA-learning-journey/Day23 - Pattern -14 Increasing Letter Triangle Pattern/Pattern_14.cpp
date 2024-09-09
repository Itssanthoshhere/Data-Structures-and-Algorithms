#include <bits/stdc++.h>
using namespace std;
void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern-14: Increasing Letter Triangle Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern14(n);
}
