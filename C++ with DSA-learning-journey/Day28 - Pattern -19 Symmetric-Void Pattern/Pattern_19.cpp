#include <bits/stdc++.h>
using namespace std;
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


int main() {
    cout << "Pattern-19: Symmetric-Void Pattern" << endl;
    int n;
    cin >> n;
    cout << "\n";
    pattern19(n);
}
