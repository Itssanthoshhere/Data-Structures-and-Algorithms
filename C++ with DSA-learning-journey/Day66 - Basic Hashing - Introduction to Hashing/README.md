# Day 66: Basic Hashing - Introduction to Hashing

## Overview
In Day 66, I focused on **Hashing**, a powerful technique used to optimize data retrieval. Hashing involves **pre-storing** data for quick retrieval, especially useful when performing repetitive queries. Through a simple **Frequency Counting** problem, we explored how Hashing can drastically improve the time complexity of certain operations compared to a brute force approach.

## Problem Statement: Frequency Counting
The problem was to count the frequency of specific numbers in an array of integers. This can be done with two approaches:

1. **Brute Force Approach**: For each query, iterate over the array and count the occurrences of the queried number.
2. **Optimized Approach Using Hashing**: Pre-store the frequencies of all elements and retrieve them instantly during queries.

### Brute Force Approach:
In this approach, for each query, we iterate over the entire array and count occurrences. This results in a time complexity of **O(Q * N)** where `Q` is the number of queries, and `N` is the size of the array.

**Pseudo Code for Brute Force Approach**:
```cpp
int f(int number, int arr[], int n) {
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == number) cnt += 1;
    }
    return cnt;
}
```

**Drawback**: As `N` and `Q` increase, the brute force approach becomes inefficient and may be unsuitable for large datasets.

---

### Optimized Approach Using Hashing:
In this approach, we use a hash array to pre-store the frequency of each element in the array. Once the hash table is populated, we can instantly retrieve the frequency of any queried number in **O(1)** time.

### Steps:
1. **Pre-Storing Frequencies**: Count the frequency of each element in the array and store it in a hash array.
2. **Fetching Frequencies**: During queries, directly access the pre-stored frequency in constant time.

**Code Implementation**:
```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Initialize hash array (assuming max element ≤ 12)
    int hash[13] = {0};
    for (int i = 0; i < n; i++) hash[arr[i]] += 1;

    int q;
    cout << "Enter number of queries: ";
    cin >> q;
    while (q--) {
        int number;
        cout << "Enter query number: ";
        cin >> number;
        
        // Fetch frequency
        if (number >= 0 && number <= 12)
            cout << "Frequency of " << number << " is: " << hash[number] << endl;
        else
            cout << "Out of bounds (0-12)\n";
    }

    return 0;
}
```

### Sample Input:
- Array: `[1, 3, 2, 1, 3]`
- Queries: `[1, 4, 2, 3, 12]`

### Output:
```
Frequency of 1: 2
Frequency of 4: 0
Frequency of 2: 1
Frequency of 3: 2
Frequency of 12: 0
```

### Explanation:
- **Hash Array**: The `hash[13]` array stores the frequency of each number from `0` to `12`.
- **Pre-computation**: The `hash` array is populated with frequencies from the input array.
- **Query Processing**: For each query, we can fetch the frequency directly in **O(1)** time.

---

## Time Complexity:
- **Brute Force Approach**: **O(N * Q)** where `N` is the array size and `Q` is the number of queries.
- **Optimized Hashing Approach**: **O(N + Q)** where `N` is used to populate the hash array, and `Q` is the time spent fetching the frequencies.

---

## Key Takeaways:
- **Efficiency**: Hashing allows us to process queries in constant time, making it much more efficient for repetitive queries compared to brute force.
- **Limitation**: For large values in the array (e.g., values larger than `10^9`), the hash array could be impractical due to memory limits. Alternative strategies would be needed in such cases.

## References:
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## Conclusion:
Hashing is a key technique in **Data Structures and Algorithms (DSA)**, allowing for efficient data retrieval. Understanding its application can significantly optimize the performance of programs that need to handle repetitive queries or large datasets.

---

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day66%20-%20Basic%20Hashing%20-%20Introduction%20to%20Hashing/Introduction_to_Hashing.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
