# 🚀 Day 89: Solve Problems on Arrays [Easy] - Find the Missing Number 🚀

Welcome to **Day 89** of my coding journey! Today, I explored a classic problem in arrays: finding the missing number from a sequence. This problem has multiple approaches, each with unique strengths, and I’ve summarized them below.

---

## 📋 Problem Explanation

We are given an array of size **N-1** containing distinct integers in the range **1 to N**, and one number is missing. The task is to identify the missing number efficiently.

---

## 💡 Solution Approaches

### 1️⃣ Brute Force Approach
**Algorithm**:
- Iterate through numbers from **1 to N**.
- For each number, perform a linear search in the array to check its presence.
- If a number is not found, it’s the missing one.

**Complexity**:
- **Time**: \( O(N^2) \)
- **Space**: \( O(1) \)

---

### 2️⃣ Hashing Approach
**Algorithm**:
- Create a hash array of size **N+1** initialized to 0.
- Traverse the input array and update the hash array to mark present numbers.
- Identify the missing number by checking for zero frequency.

**Complexity**:
- **Time**: \( O(N) \)
- **Space**: \( O(N) \)

---

### 3️⃣ Summation Approach (Optimal)
**Algorithm**:
- Calculate the total sum of the first **N** natural numbers using the formula:  
  \( \text{Sum} = \frac{N \times (N + 1)}{2} \)
- Subtract the sum of the array elements from this total to find the missing number.

**Complexity**:
- **Time**: \( O(N) \)
- **Space**: \( O(1) \)

---

### 4️⃣ XOR Approach (Optimal)
**Algorithm**:
- XOR all numbers from **1 to N** with the elements of the array.
- The result will be the missing number because duplicates cancel out due to XOR properties.

**Complexity**:
- **Time**: \( O(N) \)
- **Space**: \( O(1) \)

---

## 📌 Code Example

### Summation Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int N) {
    int totalSum = N * (N + 1) / 2;
    int arraySum = 0;

    for (int num : arr) {
        arraySum += num;
    }

    return totalSum - arraySum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6}; // N = 6
    int N = 6;
    cout << "Missing Number: " << findMissingNumber(arr, N) << endl;
    return 0;
}
```

### XOR Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(const vector<int>& arr, int N) {
    int xor1 = 0, xor2 = 0;

    for (int i = 1; i <= N; i++) {
        xor1 ^= i;
    }

    for (int num : arr) {
        xor2 ^= num;
    }

    return xor1 ^ xor2;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6}; // N = 6
    int N = 6;
    cout << "Missing Number: " << findMissingNumber(arr, N) << endl;
    return 0;
}
```

---

## ⚙️ Complexity Analysis

1. **Brute Force**: \( O(N^2) \) time, \( O(1) \) space.
2. **Hashing**: \( O(N) \) time, \( O(N) \) space.
3. **Summation**: \( O(N) \) time, \( O(1) \) space.
4. **XOR**: \( O(N) \) time, \( O(1) \) space.

---

## 🧩 Key Takeaways

- The **Summation Approach** is simple and efficient but can face overflow issues for large \( N \).
- The **XOR Approach** is robust and avoids overflow, making it ideal for larger inputs.
- Understanding the properties of XOR and arithmetic sums is essential for designing optimal solutions.

---

## 🔗 Additional Resources
- **Striver’s A2Z DSA Sheet**: [Explore Now](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find today’s code here: [GitHub - Day 89](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day89%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20missing%20number%20in%20an%20array/Find_missing_number_in_an_array.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
