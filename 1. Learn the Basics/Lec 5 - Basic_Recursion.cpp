// Introduction to Recursion
#include<bits/stdc++.h>
using namespace std;
int cnt = 0;

void print(){
   
   // Base Condition.
   if(cnt == 3)  return;
   cout<<cnt<<endl;

   // Count Incremented
   cnt++;
   print();

}

int main(){
    print();
  return 0;
}


--------------------------------------------------------------------------------------------------------


// Basic Recursion Problems:
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


--------------------------------------------------------------------------------------------------------


// Basic Recursion Problems:
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


--------------------------------------------------------------------------------------------------------


// Basic Recursion Problems:
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


--------------------------------------------------------------------------------------------------------


// Basic Recursion Problems:
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


--------------------------------------------------------------------------------------------------------


// Basic Recursion Problems:
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


--------------------------------------------------------------------------------------------------------


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


--------------------------------------------------------------------------------------------------------


                                                                                                                                                                                                                 /*
// Reverse a given Array

- Two-Pointer Approach
- Single Pointer Approach

// 1. Two-Pointer Approach:
-> Pseudo Code
f(l, r) {
    if (l >= r) {
        return
    }
    swap(a[l], a[r])
    f(l + 1, r - 1)
}

int main() {
    arr
    f(0, n - 1)
}



// 2. Single Pointer Approach:
-> Pseudo Code
f(i) {
    if (i >= n / 2) {
        return
    }
    swap(a[i], a[n - i - 1])
    f(i + 1)
}

int main() {
    arr
    f(0)
}
                                                                                                                                                                                                                 */


--------------------------------------------------------------------------------------------------------


                                                                                                                                                                                                                 /*
// Check if the given String is Palindrome or not
-> Pseudo Code
f(i) {
    if (i > n / 2) {
        return true;
    }

    if (s[i] != s[n - i - 1]) {
        return false;
    }

    return f(i + 1);
}

int main() {
    print f(0);
}


                                                                                                                                                                                                                 */
#include <iostream>
#include <string>
using namespace std;

string s;
int n;

bool isPalindrome(int i) {
    // Base condition: If index 'i' has reached or exceeded the middle, it is a palindrome
    if (i >= n / 2) {
        return true;
    }
    // Check if characters at index 'i' and 'n - i - 1' are the same
    if (s[i] != s[n - i - 1]) {
        return false;  // Mismatch found, not a palindrome
    }
    // Recursive call with next index
    return isPalindrome(i + 1);
}

int main() {
    cout << "Enter a string: ";
    cin >> s;  // Take input from the user
    n = s.size();  // Set the size of the string
    if (isPalindrome(0)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}


--------------------------------------------------------------------------------------------------------


                                                                                                                                                                                                                 /*
// Fibonacci Number
-> Pseudo Code
int f(n) {
    // Base case: Return n if it’s 0 or 1
    if (n <= 1) {
        return n;
    }

    // Recursive calls
    int last = f(n - 1);
    int slast = f(n - 2);

    // Add the last two Fibonacci numbers
    return last + slast;
}

int main() {
    int n;
    print(f(n));
}

                                                                                                                                                                                                                 */
#include <bits/stdc++.h>
using namespace std;

int fibonacci(int N) {
    // Base Condition
    if (N <= 1) {
        return N;
    }

    // Problem broken down into 2 functional calls and their results combined and returned.
    int last = fibonacci(N - 1);
    int slast = fibonacci(N - 2);
    
    return last + slast;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;  // Getting input from the user
    cout << "Fibonacci(" << N << ") = " << fibonacci(N) << endl;
    return 0;
}


--------------------------------------------------------------------------------------------------------


                                                                                                                                                                                                                 /*
// Factorial of N numbers
-> Pseudo Code
int factorial(n) {} {
    if (n == 0) {
        return 1;
    } 

    return n * factorial(n - 1);
}

int main() {
    input n;
    factorial(n);
}
                                                                                                                                                                                                                 */
#include <bits/stdc++.h>
using namespace std;

int factorial(int n) {
    // Base condition: factorial of 0 is 1
    if (n == 0) {
        return 1;
    }

    // Recursive call: n * factorial of (n-1)
    return n * factorial(n - 1);
}

int main() {
    int n;
    
    // Prompt the user to enter a number
    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    // Calculate and display the factorial
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}


--------------------------------------------------------------------------------------------------------


















