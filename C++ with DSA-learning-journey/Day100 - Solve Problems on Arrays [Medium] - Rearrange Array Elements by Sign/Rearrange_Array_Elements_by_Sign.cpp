// Rearrange Array Elements by Sign

/*
Variety-1

Problem Statement:

There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.

Note: Start the array with positive elements.
*/

// Solution - 1 : Brute-force approach
#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>A, int n) {
    // Define 2 vectors, one for starting positive and other for negative elements of the array.
    vector<int> pos;
    vector<int> neg;

    // Seperate the array into positives and negatives.
    for (int i = 0; i < n; i++) {
        if (A[i] > ) {
            pos.push_back(A[i]);
        }
        else {
            neg.push_back(A[i]);
        }
    }

    // Positives on even indices, negatives on odd indices.
    for (int i = 0; i  < n / 2; i++) {
        A[2 * i] = pos[i];
        A[2 * i + 1] = neg[i];
    }

    return A;
}

int main() {
    // Array Initialization:
    int n = 4;
    vector<int> A = {1, 2, -4, -5};

    vector<int> ans = RearrangebySign(A, n);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}



// Solution -2: Optimized Approach
#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>A) {
    int n = A.size();

    // Define array for storing the ans separately.
    vector<int> ans(n, 0);

    // Positive elements start from 0th index and negative from 1st index:
    int posIndex = 0;
    int negIndex = 1;

    for (int i = 0; i < n; i++) {
        // Fill negative elements in odd indices and increment the index by 2:
        if (A[i] < 0) {
            ans[negIndex] = A[i];
            negIndex += 2;
        }

        // Fill positive elements in even indices and increment the index by 2:
        else {
            ans[posIndex] = A[i];
            posIndex += 2;
        }
    }

    return ans;
}

int main() {
    // Array Initialization:
    vector<int> A = {1,2,-4,-5};

    vector<int> ans = RearrangebySign(A);
  
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}



// Variety-2

/*
Problem Statement:
There’s an array ‘A’ of size ‘N’ with positive and negative elements (not necessarily equal). Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values. The leftover elements should be placed at the very end in the same order as in array A.

Note: Start the array with positive elements.

*/

// --> Code for Variant 2:
#include <bits/stdc++.h>
using namespace std;

vector<int> RearrangebySign(vector<int>A, int n) {
    // Define 2 vectors, one for starting positive and other for negative elements of the array.
    vector<int> pos;
    vector<int> neg;
  
    // Segregate the array into positives and negatives.
    for(int i=0;i<n;i++){
        if(A[i]>0) pos.push_back(A[i]);
        else neg.push_back(A[i]);
    }
  
    // If positives are lesser than the negatives.
    if(pos.size() < neg.size()){
      
    // First, fill array alternatively till the point where positives and negatives ar equal in number.
    for(int i=0;i<pos.size();i++){
        A[2*i] = pos[i];
        A[2*i+1] = neg[i];
    }
    
    // Fill the remaining negatives at the end of the array.
    int index = pos.size()*2;
    for(int i = pos.size();i<neg.size();i++){
        A[index] = neg[i];
        index++;
        }
    }
  
    // If negatives are lesser than the positives.
    else{
      
        // First, fill array alternatively till the point where positives and negatives ar equal in number.
        for(int i=0;i<neg.size();i++){
            A[2*i] = pos[i];
            A[2*i+1] = neg[i];
        }
    
        // Fill the remaining positives at the end of the array.
        int index = neg.size()*2;
        for(int i = neg.size();i<pos.size();i++){
            A[index] = pos[i];
            index++;
        }
    }
    return A; 
}

int main() {
    // Array Initialisation.
    int n = 6;
    vector<int> A {1,2,-4,-5,3,4};

    vector<int> ans = RearrangebySign(A,n);
  
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
