# 🚀 Day 8: Mastering Functions in C++ 🚀

Welcome to Day 8 of my C++ with DSA journey! Today's focus was on **functions**—a fundamental concept in programming that enhances code modularity, readability, and reusability.

## 📝 Table of Contents
1. [Overview](#overview)
2. [Key Concepts](#key-concepts)
3. [Code Examples](#code-examples)
    - [Basic Function Definition and Usage](#basic-function-definition-and-usage)
    - [Function with Return Value](#function-with-return-value)
    - [Pass by Value](#pass-by-value)
    - [Pass by Reference](#pass-by-reference)
    - [Array Handling in Functions](#array-handling-in-functions)
4. [Challenges Faced](#challenges-faced)
5. [Reflections](#reflections)
6. [Connect with Me](#connect-with-me)

## 🔍 Overview

Today, I explored the concept of functions in C++. Functions are essential for breaking down large codebases into manageable parts, making code easier to debug and maintain.

## 📚 Key Concepts

- **Function Basics:** Understanding how to define and use functions in C++.
- **Void Functions:** Functions that perform an action but do not return a value.
- **Return Functions:** Functions that return a value after performing an action.
- **Pass by Value:** Passing copies of variables to functions, leaving the original variables unchanged.
- **Pass by Reference:** Passing variables themselves to functions, allowing the function to modify the original variable.
- **Array Handling:** How arrays are passed by reference in functions.

## 💻 Code Examples

### Basic Function Definition and Usage

```cpp
#include <iostream>
using namespace std;

// Function to print a greeting message
void printName(string name) {
    cout << "Hey " << name << endl;
}

int main() {
    string name1;
    cin >> name1;
    printName(name1);

    string name2;
    cin >> name2;
    printName(name2);

    return 0;
}
```

### Function with Return Value

```cpp
// Function to calculate the sum of two numbers
int sum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2);

    return 0;
}
```

### Pass by Value

```cpp
// Function that demonstrates pass by value
void doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << num << endl;

    return 0;
}
```

### Pass by Reference

```cpp
// Function that demonstrates pass by reference
void Something(string &s) {
    s[0] = 't';
    cout << s << endl;
}

int main() {
    string s = "raj";
    Something(s);
    cout << s << endl;

    return 0;
}
```

### Array Handling in Functions

```cpp
// Function that modifies an array passed by reference
void Something(int arr[], int n) {
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main() {
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Something(arr, n);
    cout << "Value inside int main: " << arr[0] << endl;

    return 0;
}
```

## 🔧 Challenges Faced

- Understanding how different types of functions work and when to use each type.
- Grasping the differences between pass by value and pass by reference, especially with arrays.

## 💡 Reflections

Learning about functions has reinforced the importance of writing modular code. By breaking down tasks into smaller, manageable pieces, I can write cleaner, more efficient programs.

## 📞 Connect with Me

Feel free to connect with me on [LinkedIn](https://www.linkedin.com/in/thesanthoshvs/) or follow my journey on [GitHub](https://github.com/Itssanthoshhere) to stay updated with my progress.
