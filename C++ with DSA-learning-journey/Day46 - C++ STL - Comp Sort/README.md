# 🚀 Day 46: Custom Comparator for Sorting in C++ 🚀

## 📜 Overview
Today, I explored the power of **custom comparators** in C++! By creating a custom comparator function, I was able to define specific sorting rules for an array of pairs, going beyond the usual ascending/descending order. This practice offers greater control over sorting behavior, making it adaptable for various data structures and more complex requirements. 🛠️

## 📚 Key Learnings
1. **Custom Comparator Function**: I defined a comparator function to control how pairs are sorted based on multiple conditions.
2. **Sorting Pairs by the Second Element**: Pairs are sorted by the second element in **ascending order**.
3. **Sorting by Multiple Conditions**: When two pairs have the same second element, they are sorted by the first element in **descending order**.

## 💻 Code Example
Below is the code I used to implement custom sorting with a comparator function:

```cpp
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if (p1.second < p2.second) {
        return true;
    } 
    if (p1.second > p2.second) {
        return false;
    } 
    // If second elements are the same, sort by first element in descending order
    return p1.first > p2.first;
}

int main() {
    // Define the array of pairs
    pair<int, int> a[] = {{4, 1}, {2, 1}, {1, 2}};
    int n = sizeof(a) / sizeof(a[0]);

    // Sort the array using the custom comparator
    sort(a, a + n, comp);

    // Output the sorted pairs
    cout << "Sorted pairs: ";
    for (int i = 0; i < n; i++) {
        cout << "{" << a[i].first << ", " << a[i].second << "} ";
    }
    cout << endl;

    return 0;
}
```

## 🔍 Expected Output
The output will display the sorted pairs as per the custom rules:
```
Sorted pairs: {4, 1} {2, 1} {1, 2}
```

## 💭 Reflections
This exercise illustrated the versatility and power of **custom comparators** in C++. They’re incredibly useful for tailoring sorting behavior to fit specific needs, especially when dealing with more complex data structures. This skill will be particularly valuable for future projects and challenges. 💪

## 🔗 Resources
- **Striver's A2Z DSA Course/Sheet**: [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
- **Full Code on GitHub**: [Custom Comparator Code](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day46%20-%20C%2B%2B%20STL%20-%20Comp%20Sort/STL_CompSort.cpp)

---

### 📂 GitHub Repository

You can find the code implementation for Day 46 and other days of my journey here: [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
