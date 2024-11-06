# Day 62: Basic Recursion - Reverse an Array 🚀

## Overview
On **Day 62** of our C++ and DSA learning journey, we explored recursion by focusing on **reversing an array**. This task is a great introduction to recursion as it simplifies array manipulation without the need for iterative loops. We looked into two primary recursive approaches:
1. **Two-Pointer Approach**
2. **Single Pointer Approach**

Both methods yield the same result, but each offers a different style and insight into recursive problem-solving.

## Approaches

### 1. Two-Pointer Approach
In this approach, we use two indices (left and right) to swap elements from the ends of the array, moving toward the center.

#### Pseudocode
```cpp
void reverse(int l, int r) {
    if (l >= r) {
        return; // Base condition
    }
    swap(a[l], a[r]);
    reverse(l + 1, r - 1); // Recursive call with updated indices
}
```

#### Explanation
- **Base Condition**: When `l` is greater than or equal to `r`, recursion stops as the array is fully reversed.
- **Recursive Step**: Swap elements at `l` and `r`, then call the function with `l` incremented and `r` decremented.

### 2. Single Pointer Approach
This method uses only a single index to swap elements from the beginning of the array with their corresponding elements from the end.

#### Pseudocode
```cpp
void reverse(int i) {
    if (i >= n / 2) {
        return; // Base condition
    }
    swap(a[i], a[n - i - 1]);
    reverse(i + 1); // Recursive call to process the next element
}
```

#### Explanation
- **Base Condition**: Recursion stops when `i` reaches the middle of the array.
- **Recursive Step**: Swap the current element with its mirrored element from the end and call the function for the next index.

## Example
For an input array `{1, 2, 3, 4, 5}`, both approaches will produce the reversed array `{5, 4, 3, 2, 1}`.

## Complexity Analysis
- **Time Complexity**: `O(N)` - Each recursive call processes an element.
- **Space Complexity**: `O(N)` - Stack space is required for recursive calls.

## Key Takeaways
- The **Two-Pointer Approach** provides a direct way to swap elements, making it suitable for problems involving pairs.
- The **Single Pointer Approach** simplifies the implementation with a single index, leading to a more concise solution.
- Recursion can make code for array manipulations cleaner and more intuitive by reducing the need for loops.

## Solution Code
The complete code for both methods is available on GitHub. Visit the repository to explore this and other recursion-based solutions:
[GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day62%20-%20Basic%20Recursion%20Problems%20-%20Reverse%20an%20Array/Reverse_an_Array.cpp)

## Resources
- [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
