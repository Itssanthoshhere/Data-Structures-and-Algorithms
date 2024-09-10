#include <bits/stdc++.h>
using namespace std;
void pattern22(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    } 
}

int main() {
    cout << "Pattern - 22: The Number Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern22(n);
}
