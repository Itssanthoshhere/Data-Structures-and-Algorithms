# Practiced a Question on Problems of Arrays [Easy] - Intersection of Two Sorted Arrays

Welcome to Day 88 of my C++ and DSA learning journey! Today, I explored the problem of finding the intersection of two sorted arrays. This problem is an excellent example of how the two-pointer technique can optimize performance in array-based operations.

## 📚 Topic Covered
- **Two-Pointer Technique:** Used to efficiently find the intersection of two sorted arrays by traversing both arrays simultaneously with minimal overhead.

## 📝 Problem Statement
### Problem: Intersection of Two Sorted Arrays
Given two sorted arrays, find the intersection of these arrays, i.e., the common elements present in both.

### Example
- **Input:**  
  `A = [1, 2, 4, 5, 6]`  
  `B = [2, 3, 5, 7]`  
- **Output:** `[2, 5]`  

### Explanation
The elements 2 and 5 are common in both arrays. Using the two-pointer approach allows us to efficiently traverse and identify these common elements.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(const vector<int>& A, const vector<int>& B) {
    int i = 0, j = 0;
    vector<int> intersection;

    // Traverse both arrays with two pointers
    while (i < A.size() && j < B.size()) {
        if (A[i] < B[j]) {
            i++; // Move pointer i forward
        } else if (B[j] < A[i]) {
            j++; // Move pointer j forward
        } else {
            intersection.push_back(A[i]); // Add common element
            i++;
            j++;
        }
    }

    return intersection;
}

int main() {
    vector<int> A = {1, 2, 4, 5, 6};
    vector<int> B = {2, 3, 5, 7};

    vector<int> result = findIntersection(A, B);

    // Displaying the result
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

## 🗝️ Key Learnings
- **Efficiency with Two-Pointer Technique:** This approach ensures we traverse the arrays only once, resulting in a time complexity of \(O(N + M)\), where \(N\) and \(M\) are the sizes of the two arrays.
- **Optimized Traversal:** Understanding how to effectively move pointers based on comparisons can drastically improve performance in array-based problems.
- **Handling Sorted Data:** Leveraging sorted data structures helps simplify the problem-solving process and enables more efficient solutions.

## 🔗 Additional Resources
- [Coding Ninjas Problem: Intersection of Two Arrays](https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day88%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20the%20Intersection/Find_the_Intersection.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to master the intricacies of C++ and DSA!
