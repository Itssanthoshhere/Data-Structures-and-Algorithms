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
    // Base condition: If index 'i' has reached or exceeded the middle, it is a 
    // palindrome
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
