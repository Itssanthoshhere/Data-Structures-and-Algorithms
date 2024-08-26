# Day 5: Arrays in C++ 📊

Welcome to Day 5 of my C++ and Data Structures & Algorithms (DSA) journey! Today, I dived into the world of arrays, which are fundamental data structures used to store multiple values in a single variable.

## 📝 Overview

### Key Concepts:
- Understanding the basics of arrays in C++.
- Working with one-dimensional (1D) and two-dimensional (2D) arrays.
- Accessing and manipulating array elements.

### Topics Covered:
- **1D Arrays:** Storing a list of elements in a single row.
- **2D Arrays:** Creating a matrix-like structure with rows and columns.
- **String Manipulation:** Accessing and working with characters in a string.

## 📂 Code Example

```cpp
#include <iostream>
using namespace std;

int main() {
    // 1D Array Example
    int arr[5];
    cout << "Enter 5 elements: ";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
    arr[3] += 10; // Modify an element in the array

    cout << "\nUpdated value at index 3: " << arr[3] << endl;
    
    // 2D Array Example
    int arr2D[3][5]; // 3 rows and 5 columns
    arr2D[1][3] = 78; // Assign a value to a specific position in the array
    
    cout << "Value at arr2D[1][3]: " << arr2D[1][3] << endl;
    
    // String Manipulation
    string s = "Santhosh";
    cout << "Character at index 2: " << s[2] << endl;
    
    // String Length
    int len = s.size();
    cout << "Length of string: " << len << endl;
    cout << "Last character: " << s[len - 1] << endl;
    
    return 0;
}
```

## 📘 Explanation

- **1D Arrays:**
  - Arrays are used to store a fixed-size sequential collection of elements of the same type. You can access individual elements using their index. For example, `arr[3]` accesses the fourth element of the array.
  
- **2D Arrays:**
  - A 2D array is essentially an array of arrays, creating a grid-like structure. You can access elements using two indices, one for the row and one for the column, like `arr2D[1][3]`.

- **String Manipulation:**
  - Strings in C++ are arrays of characters. You can access individual characters using the same indexing method as arrays. The `size()` function returns the length of the string.

### 🚀 What I Learned:
- How to declare and initialize 1D and 2D arrays in C++.
- How to access and modify elements in arrays.
- Basic string manipulation and how to work with characters within a string.

## 💡 Reflections

Working with arrays is an essential skill in programming. Arrays allow for efficient storage and access of data, which is crucial in many algorithms. Understanding how to manipulate arrays and strings will serve as a strong foundation for more complex data structures and algorithms.

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the world of C++ and DSA!
