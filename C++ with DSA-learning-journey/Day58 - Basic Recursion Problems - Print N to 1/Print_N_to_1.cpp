                                                                                                                                                                                                                 /*                                                             
3. Print N to 1 using Recursion

-> Pseudo Code
void f(i, N) {
    if (i < 1) {
        return;
    }
    print(i);
    f(i - 1, n);
}

int main() {
    int n;
    input(n);
    f(n, n);
}
                                                                                                                                                                                                                                                                            */ 
#include <bits/stdc++.h>
using namespace std;

void func(int i, int n) {
    // Base Condition.
    if (i < 1) return;

    // Print the current value of i.
    cout << i << endl;

    // Recursive call to decrement i until it reaches 1.
    func(i - 1, n);
}

int main() {
    int n;

    // Take input from the user for the value of n.
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the function with the initial value of i as n.
    func(n, n);

    return 0;
}