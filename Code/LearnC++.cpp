// General Skeleton for C++
# include <bits/stdc++.h> // used to import all Libraries
# include <iostream>
using namespace std;

int main() {
    // cout << "Sandy!" << "\n"; // or endl prints in newline

    // Taking input
    cout << "Input/Output: " << endl;
    int x, y;
    cin >> x >> y;
    cout << "Value of x: " << x << endl;
    cout << "Value of x: " << x << " and y: " << y;
    
    cout << "\n";
    
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


    cout << "\n" << endl;


    cout << "If-else: " << endl;
    /*
    Write a program that takes an input of age and prints if you are adult or not
    */
    int age;
    cout << "Enter your Age: " << endl;
    cin >> age;
    
    if (age >= 18) {
        cout << "You are an adult!";
    } else {
        cout << "You are not an adult!";
    }

    cout << "\n" << endl;

    cout << "If-else if: " << endl;
    /*
    A Scholl has folloeing rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user to enter marks and print the corresponding grade.
    */
    
    int marks;
    cout << "Enter the Marks: ";
    cin >> marks;
    
    if (marks < 25) {
        cout << "F"; 
    }
    else if (marks >= 25 && marks <= 44) {
        cout << "E";
    }
    else if (marks >= 45 && marks <= 49) {
        cout << "D";
    }
    else if (marks >= 50 && marks <= 59) {
        cout << "C";
    }
    else if (marks >= 60 && marks <= 79) {
        cout << "B";
    }
    else if (marks >= 80 && marks <= 100) {
        cout << "A";
    }
    

    cout << "\n" << endl;

    cout << "Nested If-else: " << endl;

    /*
    Take the age from the user and then decide accordingly
    1. If age < 18
       print --> not eligible for job
    2. If age >= 18 and age <= 54
       print --> eligible for job
    3. If age >= 55 and age <= 57
       print --> eligible for job, but retirement soon.
    4. If age > 57
       print --> retirement time
    */
    
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    
    if (age < 18) {
        cout << "Not eligible for job";
    }
    else if (age <= 57) {
        cout << "Eligible for job";
        if (age >= 55) {
            cout << ", but retirement soon.";
        }
    }
    else {
        cout << "Retirement time";
    }
    
    cout << "\n" << endl;


    cout << "Switch Statement: " << endl;
    /*
    Take the day number and print the corresponding day
    for 1 print Monday,
    for 2 print Tuesday and so on for 7 print Sunday.
    */
    
    int day;
    cout << "Enter the Day Number: ";
    cin >> day;
    
    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid" << endl;
    }

    cout << "\n" << endl;

    cout << "Array and String: " << endl;

    // 1D Array: Declaration and Initialization
    int arr[5]; // Declare an array of size 5
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4]; // Input elements
    
    arr[3] += 10; // Modify the value at index 3

    cout << "\nModified element at index 3: " << arr[3] << endl; // Output modified element
    
    // 2D Array: Declaration and Initialization
    int arr[3][5]; // Declare a 3x5 2D array (3 rows, 5 columns)
    
    arr[1][3] = 78; // Assign value to a specific element
    cout << "Element at arr[1][3]: " << arr[1][3] << endl; // Output the value
    
    // String Manipulation
    string s = "Santhosh"; // Declare and initialize a string
    cout << "Character at index 2: " << s[2] << endl; // Access and print the character at index 2
    
    int len = s.size(); // Get the length of the string
    cout << "String: " << s << endl; // Print the string
    cout << "Last character: " << s[len - 1] << endl; // Print the last character of the string


    cout << "\n" << endl;

    cout << "For Loops: " << endl;


    int i;
    // Simple loop: Print "Santhosh" 10 times
    for (i = 1; i <= 10; i++) {
        cout << "Santhosh" << endl;
    }
    cout << "Final value of i: " << i << endl; // Print final value of i after loop ends
    
    // Decrementing loop: Print "Santhosh" with decrementing counter
    for (i = 5; i > 0; i--) {
        cout << "Santhosh " << i << endl;
    }
    cout << "Final value of i: " << i << endl; // Print final value of i after loop ends
    
    // Loop with step increment: Print "Santhosh" every 5th number
    for (i = 1; i <= 25; i += 5) {
        cout << "Santhosh " << i << endl;
    }
    cout << "Final value of i: " << i << endl; // Print final value of i after loop ends
    



    return 0;
}
