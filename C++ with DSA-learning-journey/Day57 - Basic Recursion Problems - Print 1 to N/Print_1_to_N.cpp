                                                                                                                                                                                                                 /*                                                             
2. Print 1 to N using Recursion

-> Pseudo Code
void f(i, n ) {
   if (i > n) {
   return; 
   }
   print(i);
   f(i + 1, N);
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
    // Base Condition.
    if (i > n) return;

    // Print the current value of i.
    cout << i << endl;

    // Recursive call to increment i until it reaches n.
    func(i + 1, n);
}

int main() {
    int n;

    // Prompt user for input.
    cout << "Enter the value of n: ";
    cin >> n;

    // Call the function with the initial value of i as 1.
    func(1, n);

    return 0;
}
