#include <iostream>
using namespace std;

int main() {
    /*
    Datatypes
        --> int, float, long, boolean 
        --> string and getline
    */
    cout << "\n";
    cout << "Datatypes: " << endl;
    cout << "1. String: " << endl;

    // Basic string input (stops at space)
    string s1;
    string s2;
    cin >> s1 >> s2;
    cout << s1 << " " << s2;
    
    cout << "\n";

    /*
    // Alternative method for whole string input
    string str;
    getline(cin, str);
    cout << str;
    */
    
    cout << "\n" << endl;

    cout << "2. Char: " << endl;
    // Char input
    char ch;
    cin >> ch;
    cout << ch;
    
    cout << "\n" << endl;
    
    char c = 'g';
    cout << c;

    return 0;
}
