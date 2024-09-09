#include <bits/stdc++.h>
using namespace std;
void pattern17(int n) {
    for (int  i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        // Characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint) {
                ch++;
            } else {
                ch--;
            }
        }
        
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Pattern - 17: Alpha-Hill Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern17(n);
}



