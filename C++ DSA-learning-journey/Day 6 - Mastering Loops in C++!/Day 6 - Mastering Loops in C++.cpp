#include <iostream>
using namespace std;

int main() {
    
    // Simple loop: Print "Santhosh" 10 times
    for (int i = 1; i <= 10; i++) {
        cout << "Santhosh" << endl;
    }
    cout << "Final value of i: " << i << endl; // Print final value of i after loop ends
    
    // Decrementing loop: Print "Santhosh" with decrementing counter
    for (int i = 5; i > 0; i--) {
        cout << "Santhosh " << i << endl;
    }
    cout << "Final value of i: " << i << endl; // Print final value of i after loop ends
    
    // Loop with step increment: Print "Santhosh" every 5th number
    for (int i = 1; i <= 25; i += 5) {
        cout << "Santhosh " << i << endl;
    }
    cout << "Final value of i: " << i << endl; // Print final value of i after loop ends
    
    return 0;
}
