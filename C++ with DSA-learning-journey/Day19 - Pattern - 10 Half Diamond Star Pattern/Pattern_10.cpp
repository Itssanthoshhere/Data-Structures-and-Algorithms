#include <bits/stdc++.h>
using namespace std;
void pattern10(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 10: Half Diamond Star Pattern" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern10(n);
}
