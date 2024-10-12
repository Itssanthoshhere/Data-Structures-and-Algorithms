# 🚀 Day 47: Exploring Built-In Functions & Algorithms in C++ STL! 🚀

Today, I delved into some powerful **C++ Standard Template Library (STL)** functions that streamline various programming tasks. These built-in functions are incredibly useful, especially for competitive programming, allowing for efficient manipulation and analysis of data. Let’s break down the concepts and the code I worked on!

## 📚 What I Learned

1. **`__builtin_popcount`**: This function counts the number of `1`s in the binary representation of an integer. Ideal for bit manipulation tasks.
2. **`__builtin_popcountll`**: Similar to `__builtin_popcount` but works with `long long` integers, enabling handling of larger numbers.
3. **`next_permutation`**: Generates the next lexicographical permutation of a string. Perfect for creating all possible arrangements in an orderly fashion.
4. **`max_element` & `min_element`**: Quickly locates the maximum and minimum values in an array, reducing the need for loops and conditional checks.

## 🔍 Expected Output

```cpp
Number of set bits in 7 is: 3
Number of set bits in 165786578687 is: 19
All permutations of 123:
123
132
213
231
312
321
Maximum element in the array: 9
Minimum element in the array: 1
```

## 💻 Code Example

```cpp
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int num = 7;
    int cnt = __builtin_popcount(num); 
    cout << "Number of set bits in " << num << " is: " << cnt << endl;

    long long num_ll = 165786578687;
    int cnt_ll = __builtin_popcountll(num_ll); 
    cout << "Number of set bits in " << num_ll << " is: " << cnt_ll << endl;

    string s = "123";
    cout << "All permutations of " << s << ":" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    int a[] = {1, 3, 5, 7, 2, 9};
    int n = sizeof(a) / sizeof(a[0]);
    int maxi = *max_element(a, a + n);
    int mini = *min_element(a, a + n);

    cout << "Maximum element in the array: " << maxi << endl;
    cout << "Minimum element in the array: " << mini << endl;

    return 0;
}
```

## 💭 Reflections
Today's session highlighted the importance of STL functions in simplifying complex tasks and saving time. These built-in functions are especially useful in competitive programming, where time efficiency is crucial. By leveraging functions like `next_permutation`, `__builtin_popcount`, `max_element`, and `min_element`, we can focus more on problem-solving and less on implementing utility functions from scratch.

## 🔗 Resources
- **Striver's A2Z DSA Course/Sheet**: [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- **Full Code on GitHub**: [Built-In Functions](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day47%20-%20C%2B%2B%20STL%20-%20Built-in%20Functions%20%26%20Algorithms/STL_Built-inFunction.cpp)

---

### 📂 GitHub Repository

You can find the code implementation for Day 47 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
