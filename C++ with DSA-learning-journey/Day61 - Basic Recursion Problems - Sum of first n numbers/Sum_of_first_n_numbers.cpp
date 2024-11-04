                                                                                                                                                                                                                 /*
Sum of first N numbers:

Recursive way of calculating the sum of first N Natural Numbers:

- Parameterized Way
- Functional Way


// 1. Parameterized way
-> Pseudo Code
void f(i, sum) {
    if(i < 1) {
        print(sum);
        return;
    }

    f(i - 1, sum + i);
}

int main() {
    input(n);
    f(n, 0);
}
                                                                                                                                                                                                                                                                            */
#include <bits/stdc++.h>
using namespace std;

void func(int i, int sum) {
    // Base Condition
    if (i < 1) {
        cout << "Sum: " << sum << endl;
        return;
    }

    // Recursive call, adding i to sum until i decrements to 1
    func(i - 1, sum + i);
}

int main() {
    int n;

    // Take input from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Start the recursive function with sum initialized to 0
    func(n, 0);

    return 0;
}
                                                                                                                                                                                                                 /*

// 2. Functional way
-> Pseudo Code
void f(n) {
    if(n == 0) {
         return 0;
    }

    return n + f(n - 1);
}

main() {
   input(n);
   f(n);
} 
                                                                                                                                                                                                                 */
#include <bits/stdc++.h>
using namespace std;

int func(int n) {
    // Base Condition
    if (n == 0) {
        return 0;
    }

    // Recursive call, adding n to the sum of numbers from (n-1)
    return n + func(n - 1);
}

int main() {
    int n;

    // Take input from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Output the result of the function
    cout << "Sum from 1 to " << n << " is: " << func(n) << endl;

    return 0;
}
