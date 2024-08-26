# Day 2: Exploring Data Types in C++ 📊

Welcome to Day 2 of my C++ and Data Structures & Algorithms (DSA) journey! Today, I focused on understanding the fundamental data types in C++ and how to work with strings and characters.

## 📝 Overview

### Key Concepts:
- Introduction to basic data types in C++.
- Working with strings and characters.
- Using `cin` and `getline()` for input.

### Topics Covered:
- **Data Types:** `int`, `float`, `long`, `boolean`, `char`, `string`.
- **Input Methods:** Using `cin` for simple inputs and `getline()` for reading full strings.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    /*
    Data types in C++:
    - int: Integer type
    - float: Floating-point type
    - long: Extended size integer type
    - boolean: Boolean type (true/false)
    - char: Character type
    - string: String type
    */

    cout << "\n";
    cout << "Data Types: " << endl;
    
    // Demonstrating string input and output
    cout << "1. String: " << endl;
    string s1, s2;
    cin >> s1 >> s2; // Reads strings until the first space
    cout << s1 << " " << s2 << endl;

    cout << "\n";

    // Demonstrating character input and output
    cout << "2. Char: " << endl;
    char ch;
    cin >> ch;
    cout << ch << endl;

    cout << "\n";
    
    // Direct assignment of a character
    char c = 'g';
    cout << c << endl;

    return 0;
}
```

## 📘 Explanation

- **Data Types:**
  - **`int`:** Used to store integer values.
  - **`float`:** Used for floating-point numbers (decimal values).
  - **`long`:** An extended-size integer type.
  - **`boolean`:** Stores boolean values, `true` or `false`.
  - **`char`:** Stores single characters.
  - **`string`:** A sequence of characters (more complex strings).

- **Input Methods:**
  - **`cin`:** Handles input for basic data types and strings up to the first space.
  - **`getline()`:** Reads an entire line, including spaces.

### 🚀 What I Learned:
- How to declare and use various data types in C++.
- The difference between using `cin` and `getline()` for string input.
- Working with characters and strings in C++.

## 💡 Reflections

Understanding the various data types and how to manipulate them is critical for developing efficient and effective C++ programs. Today’s exercises highlighted the importance of knowing when to use different input methods based on the context of the data.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
