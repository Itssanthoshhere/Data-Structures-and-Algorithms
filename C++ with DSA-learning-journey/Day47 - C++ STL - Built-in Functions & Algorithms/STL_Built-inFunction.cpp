// Built-in Functions and Algorithms (__builtin_popcount, __builtin_popcountll, next_permutation, max_element and min_element)
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // __builtin_popcount
    int num = 7;
    int cnt = __builtin_popcount(num); // Counts 1s in the binary form of num
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    
    // __builtin_popcountll
    long long num_ll = 165786578687;
    int cnt_ll = __builtin_popcountll(num_ll); // Counts 1s in the binary form of num_ll
    cout << "Number of set bits in " << num_ll << " is: " << cnt_ll << endl;


    // next_permutation
    string s = "123";
    cout << "All permutations of " << s << ":" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));


    // max_element and min_element
    int a[] = {1, 3, 5, 7, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);

    int maxi = *max_element(a, a + n);
    int mini = *min_element(a, a + n);

    cout << "Maximum element in the array: " << maxi << endl;
    cout << "Minimum element in the array: " << mini << endl;

    return 0;
}
