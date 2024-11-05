# Sum of First N Terms of Cubes

This repository contains a solution to the problem of finding the sum of the first `n` terms in a series of cubes using recursion in C++. The problem is tackled by leveraging an efficient mathematical formula that calculates the sum of cubes up to the N-th term in constant time, without the need for iteration.

## Problem Statement

Given an integer `n`, calculate the sum of the series:

\[
1^3 + 2^3 + 3^3 + ... + n^3
\]

### Example

**Input:**  
- `n = 5`

**Output:**  
- `225` (Explanation: \(1^3 + 2^3 + 3^3 + 4^3 + 5^3 = 225\))

## Approach

The solution utilizes a mathematical formula that efficiently computes the sum of cubes up to `n` by:
1. Calculating the sum of the first `n` natural numbers: \( n \times \frac{(n + 1)}{2} \)
2. Squaring this result to get the sum of cubes: \( (\text{sum of first } n \text{ numbers})^2 \)

### Key Benefits
- **Time Complexity:** \(O(1)\)
- **Space Complexity:** \(O(1)\)

By using a mathematical approach instead of iterative methods, the solution becomes highly efficient, especially for large inputs.

## Code Explanation

The function `sumOfSeries` calculates the result as follows:

```cpp
long long sumOfSeries(long long n) {
    // Calculate sum of first n natural numbers
    long long sum = (n * (n + 1)) / 2;
    // Return the square of this sum, representing the sum of cubes
    return sum * sum;
}
```

1. **Sum of First N Natural Numbers**: The sum of the first `n` natural numbers is calculated using \( n \times \frac{(n + 1)}{2} \).
2. **Squaring the Result**: The square of this sum yields the sum of cubes up to `n`.

### Example Calculation
For `n = 5`:
- Sum of first 5 numbers: \( \frac{5 \times 6}{2} = 15 \)
- Sum of cubes: \( 15^2 = 225 \)

## Resources

- [GeeksforGeeks Problem Link](https://www.geeksforgeeks.org/problems/sum-of-first-n-terms5843/1)
- [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## Connect

Stay updated with my learning journey on [GitHub](https://github.com/Itssanthoshhere) and feel free to connect for insights and knowledge-sharing!
