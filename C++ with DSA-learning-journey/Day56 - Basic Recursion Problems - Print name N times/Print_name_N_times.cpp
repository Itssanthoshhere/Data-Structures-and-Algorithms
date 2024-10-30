                                                                                                                                                                                                                                            /* 
1. Print Name of N times using Recursion

-> Pseudo Code
void f(i, n) {
    if (i < n) {
        return;
    }
    cout << "Santhosh";
    f(i + 1, n);
}

int main() {
    int n;
    cin >> n;
    f(1, n);
}
                                                                                                                                                                                                            */


#include <bits/stdc++.h>
using namespace std;

void func(int i, int n) {
    // Base Condition.
    if(i > n) return;

    // Print "Raj" for each recursive call.
    cout << "Raj" << endl;

    // Recursive call to print till i increments.
    func(i + 1, n);
}

int main() {
    int n;

    // Take input from the user for the value of n.
    cout << "Enter the number of times to print 'Raj': ";
    cin >> n;

    // Call the recursive function with initial value 1 and user-defined n.
    func(1, n);

    return 0;
}
