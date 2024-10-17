# Practiced a Question on Basic Math - Counting Digits that Evenly Divide N in C++

Welcome to Day 48 of my C++ and DSA learning journey! Today, I practiced an interesting problem that helped me dive deeper into basic mathematical concepts. The problem, **Counting Digits that Evenly Divide N**, required analyzing an integer `N` and identifying how many of its digits evenly divide `N` without leaving a remainder.

## 📚 Topic Covered
- **Basic Math:** Understanding how to manipulate and extract digits from an integer using basic mathematical operations like division and modulus.
- **Conditional Logic in Loops:** The problem involved iterating over digits and using conditions to check if a digit divides `N` without leaving a remainder.

## 📝 Problem Statement
### Problem: Count Digits that Evenly Divide N

Given an integer `N`, the task is to count how many of the digits in `N` can evenly divide `N`. A digit `d` divides `N` evenly if `N % d == 0`. 

### Example
- **Input:** N = 12
- **Output:** 2
- **Explanation:** The digits 1 and 2 both divide 12 evenly, so the output is 2.

## 💻 Code Implementation
```cpp
#include <iostream>
using namespace std;

int evenlyDivides(int N) {
    int cnt = 0;
    int temp = N;
    while (temp > 0) {
        int digit = temp % 10;
        temp /= 10;
        if (digit != 0 && N % digit == 0) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int N;
    cout << "Enter the number N: ";
    cin >> N;
    cout << "Count of digits that evenly divide " << N << ": " << evenlyDivides(N) << endl;
    return 0;
}
```

### Explanation:
- We use a while loop to iterate through the digits of the number `N`.
- In each iteration, the modulus operator (`%`) is used to extract the last digit, and we check if that digit divides `N` evenly.
- We increment the count for each digit that satisfies the condition.
- Finally, the count is returned and printed.

## 🗝️ Key Learnings
- **Digit Extraction:** Learned how to extract digits from a number using modulus and integer division.
- **Edge Case Handling:** Ensured that we don't attempt division by zero by adding a condition to skip the digit 0.
- **Basic Looping and Conditions:** Practiced how loops and conditions work together to solve mathematical problems effectively in C++.

## 🔗 Additional Resources
- [GeeksforGeeks Problem Link](https://www.geeksforgeeks.org/problems/count-digits5716/1)
- [Coding Ninja Problem Link](https://www.naukri.com/code360/problems/number-of-digits_4538242?interviewProblemRedirection=true&search=number%20of%20digit&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day48%20-%20Baisc%20Maths%20-%20Count%20Digits/C%2B%2B%20Practice%20Questions%20-%20Count%20Digits).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore and improve my skills in C++ and DSA!
