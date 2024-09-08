#include <bits/stdc++.h>
using namespace std;
void pattern12(int n) {
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        // Numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Space 
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        // Numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}

int main() {
    cout << "Pattern - 12: Number Crown Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern12(n);
}
