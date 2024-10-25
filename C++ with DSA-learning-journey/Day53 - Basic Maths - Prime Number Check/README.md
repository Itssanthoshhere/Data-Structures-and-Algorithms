# Prime Number Check in C++ 🔢

Welcome to Day 53 of my C++ journey! Today, I tackled an essential concept in basic mathematics: checking if a number is prime. This type of problem is critical in number theory, with applications in cryptography, algorithms, and competitive programming.

## 📝 Overview

### Key Concepts:
- Fundamental understanding of prime numbers.
- Using a loop-based approach for checking divisibility.
- Optimizing checks to make the solution efficient.

### Topics Covered:
- **Prime Number Definition**: Understanding what makes a number prime—having only two divisors: 1 and itself.
- **Loop-based Divisibility Check**: Implementing a method to check divisibility for each number from 1 up to n.
- **Optimization Insight**: Recognizing that divisibility checks only need to go up to the square root of n for efficiency.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number to check if it is prime: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
```

## 📘 Explanation

- **isPrime Function**:
  - The `isPrime(int n)` function checks if a given number is prime by testing if any number up to √n divides `n` without a remainder.
  - If `n` is divisible by any number from 2 to √n, it returns `false` (not prime); otherwise, it returns `true` (prime).
  
- **Main Function**:
  - Prompts the user to input a number `n`.
  - Calls the `isPrime(n)` function and displays whether the number is prime based on the result.

### 🚀 What I Learned:
- The significance of divisors in determining prime numbers.
- Efficient prime-checking by limiting the range of divisibility tests.
- Practical applications of prime number checks in fields like cryptography and hashing algorithms.

## 💡 Reflections

Today’s exercise was a great way to dive into the mathematical aspects of programming. The loop-based method for checking primes is a foundational technique, and optimizing it taught me the value of efficient algorithms in programming. Next up, I look forward to exploring more advanced number theory concepts.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned as I continue to explore more mathematical algorithms in C++!
