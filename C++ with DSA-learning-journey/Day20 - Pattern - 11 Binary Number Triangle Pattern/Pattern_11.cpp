#include <bits/stdc++.h>
using namespace std;
void pattern11(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 11: Binary Number Triangle Pattern" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern11(n);
}
