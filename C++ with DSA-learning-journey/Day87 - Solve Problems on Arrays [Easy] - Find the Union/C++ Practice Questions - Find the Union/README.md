# Practiced a Question on Problems of Arrays [Easy] - Merge 2 Sorted Arrays

Welcome to Day 87 of my C++ and DSA learning journey! Today, I tackled a classic and interesting problem involving arrays: merging two sorted arrays into a unique sorted union. This problem helped me explore efficient merging techniques and further refine my understanding of the **two-pointer approach**.

---

## 📚 Topic Covered
- **Arrays and Two Pointers Technique:**  
   I learned how to merge two sorted arrays while ensuring no duplicate elements. This approach works efficiently in linear time.

---

## 📝 Problem Statement

### Problem: Merge Two Sorted Arrays (Union of Arrays with Unique Elements)

Given two sorted arrays `a` and `b`, the task is to return the **union** of these arrays. The union must:
1. Be **sorted** in ascending order.
2. Contain **unique elements** only.

---

### Example

**Input:**  
`a = [1, 2, 3, 4, 6]`  
`b = [2, 3, 5]`  

**Output:**  
`[1, 2, 3, 4, 5, 6]`  

---

### Explanation  
Using the **two-pointer technique**, we traverse both arrays simultaneously:
1. Compare elements from both arrays.
2. Push the smallest element into the result while skipping duplicates using `result.back()` for comparison.
3. Continue until both arrays are fully traversed.

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &a, vector<int> &b) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
        } 
        else if (a[i] > b[j]) {
            if (result.empty() || result.back() != b[j])
                result.push_back(b[j]);
            j++;
        } 
        else { // a[i] == b[j]
            if (result.empty() || result.back() != a[i])
                result.push_back(a[i]);
            i++;
            j++;
        }
    }

    // Add remaining elements from array a
    while (i < a.size()) {
        if (result.empty() || result.back() != a[i])
            result.push_back(a[i]);
        i++;
    }

    // Add remaining elements from array b
    while (j < b.size()) {
        if (result.empty() || result.back() != b[j])
            result.push_back(b[j]);
        j++;
    }

    return result;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 6};
    vector<int> b = {2, 3, 5};

    vector<int> result = mergeSortedArrays(a, b);

    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
```

---

## 🗝️ Key Learnings

1. **Two-Pointer Technique:**  
   The two-pointer approach ensures an efficient linear time complexity **O(m + n)**, where `m` and `n` are the sizes of the two arrays.  

2. **Avoiding Duplicates:**  
   Using `result.back()` ensures that only unique elements are added to the result array without using additional data structures.

3. **Edge Cases:**  
   - Arrays containing duplicate values.  
   - One array being empty.  
   - Different lengths of arrays.

---

## 🔗 Additional Resources
- [Coding Ninjas Problem Link](https://www.naukri.com/code360/problems/sorted-array_6613259?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

---

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day87%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20the%20Union/Find_the_Union.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Let's keep learning and growing together! 🚀  

---
