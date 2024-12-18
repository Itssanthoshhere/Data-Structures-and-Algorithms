# 🚀 Day 88: Solve Problems on Arrays [Easy] - Intersection of Two Sorted Arrays 🚀

Welcome to **Day 88** of my coding journey! Today, we’re solving a classic problem on arrays — finding the intersection of two sorted arrays. This problem focuses on efficiently identifying common elements from both arrays while considering their frequencies in both arrays.

## 📋 Problem Explanation

Given two sorted arrays, the task is to find the intersection such that each element in the result appears as many times as it shows in both arrays. 

### Example:
- **Array 1**: [1, 2, 2, 4, 5]
- **Array 2**: [2, 2, 3, 4, 6]

The intersection of these arrays is: **[2, 2, 4]**

The challenge is to implement a solution that handles duplicate elements correctly and runs efficiently.

## 💡 Solution Approach

### Brute Force Approach
The brute force method involves iterating over each element of the first array and checking if it exists in the second array using nested loops.

#### Key Steps:
1. Traverse each element in Array A.
2. For each element in Array A, check if it exists in Array B and hasn't been visited yet.
3. If a match is found, add it to the result and mark it as visited.

#### Complexity:
- **Time Complexity**: **O(n1 × n2)**, where n1 and n2 are the sizes of Array A and Array B.
- **Space Complexity**: **O(n)** for the result array.

### Two-Pointers Approach (Optimal)
By utilizing the fact that both arrays are sorted, we can optimize the solution using two pointers.

#### Key Steps:
1. Initialize two pointers, `i` and `j`, for Array A and Array B respectively.
2. Compare the elements at `A[i]` and `B[j]`.
   - If `A[i] < B[j]`, increment `i` (move pointer in Array A).
   - If `B[j] < A[i]`, increment `j` (move pointer in Array B).
   - If they match, add the element to the result and increment both pointers.
3. Stop when either of the arrays is fully traversed.

#### Complexity:
- **Time Complexity**: **O(n1 + n2)**, where n1 and n2 are the sizes of Array A and Array B.
- **Space Complexity**: **O(1)** for the result array, if we don't need additional space beyond the result.

## 📌 Code Example

### Brute Force Solution (Nested Loops)

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersectionBruteForce(const vector<int>& A, const vector<int>& B) {
    vector<int> result;
    for (int i = 0; i < A.size(); ++i) {
        for (int j = 0; j < B.size(); ++j) {
            if (A[i] == B[j]) {
                result.push_back(A[i]);
                B[j] = -1;  // Mark as visited
                break;
            }
        }
    }
    return result;
}

int main() {
    vector<int> A = {1, 2, 2, 4, 5};
    vector<int> B = {2, 2, 3, 4, 6};
    vector<int> result = findIntersectionBruteForce(A, B);
    
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
```

### Optimized Solution (Two Pointers)

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersectionTwoPointers(const vector<int>& A, const vector<int>& B) {
    vector<int> result;
    int i = 0, j = 0;
    
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] > B[j]) {
            j++;
        } else {
            result.push_back(A[i]);
            i++;
            j++;
        }
    }
    return result;
}

int main() {
    vector<int> A = {1, 2, 2, 4, 5};
    vector<int> B = {2, 2, 3, 4, 6};
    vector<int> result = findIntersectionTwoPointers(A, B);
    
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Brute Force Approach**:
   - **Time Complexity**: **O(n1 × n2)**, where n1 and n2 are the sizes of the two arrays.
   - **Space Complexity**: **O(n)**, for storing the result array.

2. **Two-Pointer Approach**:
   - **Time Complexity**: **O(n1 + n2)**, where n1 and n2 are the sizes of the two arrays.
   - **Space Complexity**: **O(1)** for additional space.

## 🧩 Key Takeaways

- **Efficiency**: The two-pointer approach significantly improves performance compared to the brute-force approach, especially when working with large sorted arrays.
- **Space Optimization**: The two-pointer method doesn't require additional space except for the result, making it more efficient in terms of space.
- **Real-World Applications**: This technique can be applied to merge sorted arrays, finding common elements, and more.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 88 here: [GitHub - Day88 Intersection of Two Sorted Arrays](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day88%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20the%20Intersection/Find_the_Intersection.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
