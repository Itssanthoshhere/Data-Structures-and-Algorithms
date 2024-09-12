#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j < n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        // Space
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n) {
    // Upper part of the diamond
    for (int i = 0; i < n; i++) {
        // Print spaces before the stars
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        // Move to the next line after printing stars
        cout << endl;
    }
    
    // Lower part of the diamond
    for (int i = 0; i < n; i++) {
        // Print spaces before the stars
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * n - (2 * i + 1); j++) {
            cout << "*";
        }
        // Move to the next line after printing stars
        cout << endl;
    }
}
void pattern10(int n) {
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2 * n - i;
        }
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern11(int n) {
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            start = 1;
        }
        else {
            start = 0;
        }
        for (int j = 0; j <= i; j++) {
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n) {
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++) {
        // Numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }

        // Space 
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }

        // Numbers
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void pattern14(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern15(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern16(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern17(int n) {
    for (int  i = 0; i < n; i++) {
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        
        // Characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++) {
            cout << ch;
            if (j <= breakpoint) {
                ch++;
            } else {
                ch--;
            }
        }
        
        // Space
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern18(int n) {
    for (int i = 0; i < n; i++) {
        for (char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void pattern19(int n)
{
      // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i = 0; i < n; i++){
          //for printing the stars in the row.
          for(int j = 1; j <= n - i; j++){
              cout << "*";
          }
          
          //for printing the spaces in the row.
          for(int j = 0; j < iniS; j++){
              cout << " ";
          }
          
          //for printing the stars in the row.
          for(int j = 1; j <= n - i; j++){
              cout << "*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS += 2;
          cout << endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2 * n - 2;
      for(int i = 1;i <= n;i++){
          
          //for printing the stars in the row.
          for(int j = 1; j <= i; j++){
              cout << "*";
          }
          
          //for printing the spaces in the row.
          for(int j=0; j < iniS; j++){
              cout << " ";
          }
          
          //for printing the stars in the row.
          for(int j=1; j<=i; j++){
              cout << "*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS -= 2;
          cout<<endl;
      }
}
void pattern20(int n) {
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++) {
        int stars = i;
        if (i > n) {
            stars = 2 * n - i;
        }
        
        // Stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        
        // Spaces
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        // Stars
        for (int j = 1; j <= stars; j++) {
            cout << "*";
        }
        
        cout << endl;
        
        if (i < n) {
            spaces -= 2;
        } else {
            spaces += 2;
        }
    }
}
void pattern21(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
void pattern22(int n) {
    for (int i = 0; i < 2 * n - 1; i++) {
        for (int j = 0; j < 2 * n - 1; j++) {
            int top = i;
            int left = j;
            int right = (2 * n - 2) - j;
            int down = (2 * n - 2) - i;
            cout << (n - min(min(top, down), min(left, right)));
        }
        cout << endl;
    } 
}




int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t;i++) {
        int n;
        cin >> n;
        pattern22(n);
    }
}
