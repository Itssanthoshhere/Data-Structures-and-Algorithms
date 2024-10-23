# Practiced a Question on Basic Math - Sum of All Divisors from 1 to N in C++

Welcome to Day 52 of my C++ and DSA learning journey! Today, I tackled a fundamental number theory problem, focusing on the efficient calculation of divisors for numbers from 1 to N and summing them.

## 📚 Topic Covered
- **Basic Math:** Using divisor properties to calculate the sum of all divisors for numbers between 1 and N.
- **Number Theory Concepts:** Understanding how divisor calculations work and optimizing them for larger inputs.

## 📝 Problem Statement
### Problem: Sum of All Divisors from 1 to N

Given a number N, the task is to compute the sum of divisors for every number from 1 to N and return the overall sum.

### Example
- **Input:** N = 4
- **Output:** 15  

### Explanation
- The divisors of 1 are [1], sum = 1.
- The divisors of 2 are [1, 2], sum = 3.
- The divisors of 3 are [1, 3], sum = 4.
- The divisors of 4 are [1, 2, 4], sum = 7.
- Therefore, the total sum is 1 + 3 + 4 + 7 = 15.

## 💻 Code Implementation

```cpp
#include <iostream>
using namespace std;

int sumOfDivisors(int N) {
    int sum = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N / i; j++) {
            sum += i * j;
        }
    }
    return sum;
}

int main() {
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    cout << "Sum of all divisors from 1 to " << N << " is: " << sumOfDivisors(N) << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Efficient Calculations:** Instead of calculating divisors for each number individually, you can optimize by summing up multiples for better performance.
- **Divisor Properties:** Understanding how divisors are distributed helps in solving number theory problems more effectively.

## 🔗 Additional Resources
- [GeeksforGeeks: Sum of All Divisors Problem](https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day52%20-%20Basic%20Maths%20-%20Print%20all%20Divisors/Print_all_Divisors.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue exploring C++ and DSA!
