# Day 3: Conditional Statements in C++ 🚦

Welcome to Day 3 of my C++ and Data Structures & Algorithms (DSA) journey! Today, I focused on understanding conditional statements in C++, including `if`, `else if`, and nested `if` statements, which are essential for decision-making in programs.

## 📝 Overview

### Key Concepts:
- Introduction to `if-else` statements.
- Using `else if` for multiple conditions.
- Implementing nested `if-else` for complex decision-making.

### Topics Covered:
- **Basic `if-else`:** Checking conditions and executing code blocks based on those conditions.
- **`else if` Ladder:** Handling multiple conditions with sequential checks.
- **Nested `if-else`:** Making decisions within decisions by nesting `if-else` statements.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    // If-else example: Checking if a person is an adult
    cout << "If-else: " << endl;
    int age;
    cout << "Enter your Age: ";
    cin >> age;
    
    if (age >= 18) {
        cout << "You are an adult!" << endl;
    } else {
        cout << "You are not an adult!" << endl;
    }

    cout << "\n" << endl;

    // If-else if ladder: Grading system based on marks
    cout << "If-else if: " << endl;
    int marks;
    cout << "Enter the Marks: ";
    cin >> marks;
    
    if (marks < 25) {
        cout << "F"; 
    } else if (marks >= 25 && marks <= 44) {
        cout << "E";
    } else if (marks >= 45 && marks <= 49) {
        cout << "D";
    } else if (marks >= 50 && marks <= 59) {
        cout << "C";
    } else if (marks >= 60 && marks <= 79) {
        cout << "B";
    } else if (marks >= 80 && marks <= 100) {
        cout << "A";
    }

    cout << "\n" << endl;

    // Nested If-else: Checking job eligibility based on age
    cout << "Nested If-else: " << endl;
    cout << "Enter your Age: ";
    cin >> age;
    
    if (age < 18) {
        cout << "Not eligible for job";
    } else if (age <= 57) {
        cout << "Eligible for job";
        if (age >= 55) {
            cout << ", but retirement soon.";
        }
    } else {
        cout << "Retirement time";
    }

    return 0;
}
```

## 📘 Explanation

- **Basic `if-else`:** 
  - The `if` statement checks a condition (e.g., if `age >= 18`). If true, it executes the code inside the block. If false, it executes the code inside the `else` block.
  
- **`else if` Ladder:** 
  - The `else if` statement allows you to check multiple conditions in sequence. Each condition is evaluated in order, and the first true condition's block is executed.
  
- **Nested `if-else`:**
  - A more complex decision-making structure where an `if-else` statement is placed inside another `if-else` block. This allows for more nuanced decisions based on multiple criteria.

### 🚀 What I Learned:
- How to implement conditional logic using `if`, `else if`, and `else` in C++.
- The use of `else if` to handle multiple conditions.
- How to use nested `if-else` to make more complex decisions based on several factors.

## 💡 Reflections

Today's practice with conditional statements reinforced how essential decision-making logic is in programming. These constructs allow for flexible and powerful code that can react to different inputs in diverse ways.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to delve into C++ and DSA!
