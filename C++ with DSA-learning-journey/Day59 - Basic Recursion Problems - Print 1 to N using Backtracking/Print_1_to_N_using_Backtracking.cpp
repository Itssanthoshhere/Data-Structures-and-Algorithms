                                                                                                                                                                                                                 /*                                                             
4. Print 1 to N using Backtracking

-> Pseudo Code
void f(i, N) {
   if(i < 1) {
    return;
    }
    f( i-1,N );
    print(i);

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
    // Base Condition
    if (i < 1) return;

    // Recursive call to reach the base case
    func(i - 1, n);

    // Print the current value of i after recursive calls
    cout << i << endl;
}

int main() {
    int n;

    // Take input from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the function with the initial value of i as n
    func(n, n);

    return 0;
}
