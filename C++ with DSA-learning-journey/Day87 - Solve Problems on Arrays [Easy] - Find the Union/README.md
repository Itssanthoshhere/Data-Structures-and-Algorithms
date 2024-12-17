# 🚀 Day 87: Solve Problems on Arrays [Easy] - Find the Union (Union of Two Sorted Arrays) 🚀  

Welcome to **Day 87** of my coding journey! Today, I explored an essential **array problem** - finding the **Union of Two Sorted Arrays**. This task emphasizes efficient traversal, handling duplicates, and leveraging data structures to achieve optimal solutions.

---

## 📋 Problem Explanation  

We are given two **sorted arrays**. The goal is to find the **union** of the arrays, i.e., all distinct elements that appear in either or both arrays, and return the result in **sorted order**.  

### Example:  
Input:  
`arr1 = [1, 2, 3, 4, 5]`, `arr2 = [2, 3, 5, 6]`  
Output:  
`[1, 2, 3, 4, 5, 6]`

---

## 💡 Solution Approaches  

### 1️⃣ **Using Map**  
- **Approach**: Use a `map` to store frequencies of elements from both arrays. The keys of the map automatically ensure uniqueness and sorting.  
- **Steps**:  
   1. Traverse both arrays and insert elements into a `map`.  
   2. Extract the keys as the union.  

- **Time Complexity**: `O((m + n) * log(m + n))` (logarithmic overhead due to map insertion).  
- **Space Complexity**: `O(m + n)` (size of the map).  

---

### 2️⃣ **Using Set (Brute Force)**  
- **Approach**: Combine both arrays into a single array and use a `set` to filter distinct elements.  
- **Steps**:  
   1. Insert all elements from both arrays into a `set`.  
   2. The `set` ensures uniqueness and keeps elements sorted.  

- **Time Complexity**: `O((m + n) * log(m + n))` (logarithmic due to set operations).  
- **Space Complexity**: `O(m + n)` (size of the set).  

---

### 3️⃣ **Two-Pointer Approach (Optimal)**  
- **Approach**: Utilize two pointers to traverse both sorted arrays and avoid unnecessary comparisons.  
- **Steps**:  
   1. Start pointers at the beginning of both arrays.  
   2. Compare elements and add the smaller one to the result. Skip duplicates.  
   3. Move the pointer(s) accordingly until both arrays are traversed.  

- **Why Optimal?**: Takes advantage of the sorted nature of the arrays to achieve **linear time complexity**.  

- **Time Complexity**: `O(m + n)` (linear traversal of both arrays).  
- **Space Complexity**: `O(m + n)` (to store the union).  

---

## 📌 Code Implementation  

### 🔥 Optimal Solution: Two-Pointer Approach

```cpp
#include <iostream>
#include <vector>
using namespace std;

// Function to find the union of two sorted arrays
vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    vector<int> unionArray;
    int i = 0, j = 0;

    // Traverse both arrays
    while (i < arr1.size() && j < arr2.size()) {
        // Add the smaller element to unionArray and avoid duplicates
        if (arr1[i] < arr2[j]) {
            if (unionArray.empty() || unionArray.back() != arr1[i]) {
                unionArray.push_back(arr1[i]);
            }
            i++;
        } 
        else if (arr1[i] > arr2[j]) {
            if (unionArray.empty() || unionArray.back() != arr2[j]) {
                unionArray.push_back(arr2[j]);
            }
            j++;
        } 
        else {
            // If both elements are equal, add only once
            if (unionArray.empty() || unionArray.back() != arr1[i]) {
                unionArray.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    // Add remaining elements from arr1
    while (i < arr1.size()) {
        if (unionArray.empty() || unionArray.back() != arr1[i]) {
            unionArray.push_back(arr1[i]);
        }
        i++;
    }

    // Add remaining elements from arr2
    while (j < arr2.size()) {
        if (unionArray.empty() || unionArray.back() != arr2[j]) {
            unionArray.push_back(arr2[j]);
        }
        j++;
    }

    return unionArray;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 5, 6};

    vector<int> result = findUnion(arr1, arr2);

    cout << "Union of arrays: ";
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
```

---

## ⚙️ Complexity Analysis  

1. **Time Complexity**: `O(m + n)`  
   - Both arrays are traversed only once.  

2. **Space Complexity**: `O(m + n)`  
   - Space is required for the union array.  

---

## 🧩 Key Takeaways  

- **Two-Pointer Approach** is the most efficient solution for sorted arrays, achieving linear time complexity.  
- Use `map` or `set` for simpler implementations but at the cost of higher logarithmic complexity.  
- Always **leverage the sorted nature of input** to optimize your solution.  

---

## 🔗 Additional Resources  

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  
- **GitHub Repository**: [Day 87 Code](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day87%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20the%20Union/Find_the_Union.cpp)  

---

## 🛠️ Tools & Techniques Used  
- **C++ STL**: `vector`, `map`, and `set`.  
- **Two-Pointer Algorithm** for optimized traversal.  

---
## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

I’m thrilled to keep progressing through more DSA problems! Stay tuned for the next update as I continue solving and learning. 🚀  
