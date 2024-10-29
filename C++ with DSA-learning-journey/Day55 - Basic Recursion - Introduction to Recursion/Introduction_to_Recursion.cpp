// Introduction to Recursion

// Recursive code for printing numbers from 0 to 3 : 
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


                                                                                                                                                                                                                                                        /*
What is Recursion?
    When a function calls itself until a specified condition is met.

Base Condition
Stack Overflow / Stack Space
Recursion Tree

                                                                                                                                                                                                                                                                                                    */