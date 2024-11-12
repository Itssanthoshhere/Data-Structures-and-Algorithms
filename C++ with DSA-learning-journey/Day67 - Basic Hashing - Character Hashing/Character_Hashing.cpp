// Character Hashing
                                                                                                                                                                                                                 /*
Brute Force approach:

-> Pseudo Code
f(char c, s) {
    cnt = 0;
    for (i = 0; i < n; i++) {
        if (s[i] == c) {
            cnt++;
        }
    }
    return cnt;
}
                                                                                                                                                                                                                                                                            */
// Code if the string contains only lowercase:
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a lowercase string: ";
    cin >> s;

    // Precompute frequency of each letter (a-z)
    int hash[26] = {0}; // Array to store counts of 'a' to 'z'
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++; 
    }

    // Handle multiple queries
    int q;
    cout << "Enter number of queries: ";
    
    cin >> q;
    cout << "Enter query characters: " << endl;
    
    while (q--) {
        char c;
        cin >> c; 
        // Output the frequency of character c
        cout << "Frequency of '" << c << "': " << hash[c - 'a'] << endl;
    }
    return 0;
}



// Code if the string contains both uppercase and lowercase:
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Enter a mixed-case string: ";
    cin >> s;

    // Precompute frequency of each character (ASCII 0-255)
    int hash[256] = {0}; // Array for all ASCII characters
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++; 
    }

    // Handle multiple queries
    int q;
    cout << "Enter number of queries: ";

    cin >> q;
    cout << "Enter query characters: " << endl;
    
    while (q--) {
        char c;
        cin >> c; 
        // Output the frequency of character c
        cout << "Frequency of '" << c << "': " << hash[c] << endl;
    }
    return 0;
}
