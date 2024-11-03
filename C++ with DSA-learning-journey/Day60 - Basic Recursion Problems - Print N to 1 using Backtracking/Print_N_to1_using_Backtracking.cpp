                                                                                                                                                                                                                 /*                                                             
5. Print N to 1 using Backtracking

-> Pseudo Code
void f(i, n) {
    if (i > n) {
        return;
    }
    f(i + 1, N);
    print(i);
}

int main() {
    int n;
    input(n);
    f(1, n);
}

                                                                                                                                                                                                                                                                            */ 
#include <bits/stdc++.h>
using namespace std;

void func(int i, int n) {
    // Base Condition
    if (i > n) return;

    // Recursive call to increment i until it reaches n
    func(i + 1, n);

    // Print the current value of i after recursive calls
    cout << i << endl;
}

int main() {
    int n;

    // Take input from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Start the recursive function from 1 up to n
    func(1, n);

    return 0;
}
