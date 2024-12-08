# 🚀 Day 86: Solving Problems on Arrays [Easy] - Linear Search 🚀

Welcome to **Day 86** of my coding journey! Today, we explored the **Linear Search** algorithm, a simple and fundamental technique used to find an element in an array. It’s an easy approach where we traverse through the entire array and check if the element exists, returning its index if found.

## 📋 Problem Explanation

Given an array of integers, we need to search for a particular element. The task is to find the index of the element in the array if it exists, and return -1 if it's not found.

- **Example Input**: [1, 2, 3, 4, 5]
- **Search Element**: 4
- **Output**: 3 (Index where 4 is found)

In the worst case, we might need to check every element, which results in a time complexity of **O(N)**, where `N` is the length of the array.

## 💡 Solution Approach

### Brute Force Solution (Linear Search)
1. **Traversal**: Traverse each element of the array one by one.
2. **Check for Element**: If the current element matches the search element, return its index.
3. **Return -1**: If the element is not found after checking all the elements, return -1.

### Key Insights:
- **Time Complexity**: **O(N)**, because in the worst case, we might need to traverse the entire array.
- **Space Complexity**: **O(1)**, as we are not using any extra space except for the input array.

## 📌 Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i; // Element found at index i
        }
    }
    return -1; // Element not found
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 4;

    int index = linearSearch(arr, target);
    
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
```

### Example Output:
```
Element found at index: 3
```

## ⚙️ Complexity Analysis

1. **Time Complexity**: **O(N)** where N is the length of the array. We may need to traverse the entire array in the worst case.
2. **Space Complexity**: **O(1)**, as the algorithm does not require extra space apart from the input array.

## 🧩 Key Takeaways

- **Simplicity**: Linear search is straightforward to implement and understand.
- **Efficiency**: While simple, Linear Search is not the most efficient for large arrays as its time complexity is linear.
- **Use Case**: It's particularly useful for unsorted arrays or when the dataset is small.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 86 here: [GitHub - Day86 Linear Search](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day86%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Linear%20Search/Linear_Search.cpp)

---

## 🔗 Connect with Me
- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the world of algorithms and data structures in my DSA journey!
