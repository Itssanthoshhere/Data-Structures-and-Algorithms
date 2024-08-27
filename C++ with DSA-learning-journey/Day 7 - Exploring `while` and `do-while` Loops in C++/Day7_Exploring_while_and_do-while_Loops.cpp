#include <iostream>
using namespace std;

int main() {
    
    int i = 1;
    
    // While loop example (commented out):
    // while(i <= 5) {
    //     cout << "Sandy " << i << endl;
    //     i++;
    // }
    
    // Do-while loop example:
    do {
        cout << "Sandy " << i << endl;
        i++;
    } while (i <= 2);
    
    cout << "Final value of i: " << i << endl; // Final value after the loop ends
    
    return 0;
}
