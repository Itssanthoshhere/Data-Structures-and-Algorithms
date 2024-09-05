#include <bits/stdc++.h>
using namespace std;

void pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    
    cout << "Pattern - 6: Inverted Numbered Right Pyramid" << endl;
    int n;
    cin >> n;
    
    cout << "\n";
    pattern6(n);
}
