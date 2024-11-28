# Practiced a Question on Problems of Arrays [Easy] - Find the Largest Element in an Array

Welcome to Day 79 of my C++ and DSA learning journey! Today, I focused on solving a fundamental array problem related to finding the largest element in a given array. This exercise allowed me to explore both brute force and optimized approaches, sharpening my problem-solving skills.

## 📚 Topic Covered
- **Array Problems:** This task involved iterating through arrays and leveraging sorting and comparison techniques to determine the largest element efficiently.

## 📝 Problem Statement
### Problem: Find the Largest Element in an Array
Given an array `arr[]`, the task is to find and return the largest element in the array.

### Examples:
- **Input:** `arr = [1, 8, 7, 56, 90]`  
  **Output:** `90`  
  **Explanation:** The largest element in the array is `90`.  
- **Input:** `arr = [5, 5, 5, 5]`  
  **Output:** `5`  

## 💻 Code Implementation
### 🛠️ Solution 1: Brute Force (Using Sorting)
Sort the array in ascending order and return the last element as the largest.

```cpp
#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
```

⏳ **Time Complexity:** 𝑂(𝑁 𝑙𝑜𝑔 𝑁)  
💾 **Space Complexity:** 𝑂(1)  

---

### 🛠️ Solution 2: Optimized Approach (Iterative)
Iterate through the array and maintain a `max` variable to track the largest element.

```cpp
#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

⏳ **Time Complexity:** 𝑂(𝑁)  
💾 **Space Complexity:** 𝑂(1)  

## 🗝️ Key Learnings
- **Sorting vs Iteration:** Sorting is straightforward but increases time complexity. Iterative solutions are ideal for single-query scenarios due to their 𝑂(𝑁) time complexity.  
- **Tracking Values:** Maintaining a `max` variable is an effective strategy for problems that require finding extremum values in arrays.

## 🔗 Additional Resources
- [GeeksforGeeks: Largest Element in an Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](# Practiced a Question on Problems of Arrays [Easy] - Find the Largest Element in an Array

Welcome to Day 79 of my C++ and DSA learning journey! Today, I focused on solving a fundamental array problem related to finding the largest element in a given array. This exercise allowed me to explore both brute force and optimized approaches, sharpening my problem-solving skills.

## 📚 Topic Covered
- **Array Problems:** This task involved iterating through arrays and leveraging sorting and comparison techniques to determine the largest element efficiently.

## 📝 Problem Statement
### Problem: Find the Largest Element in an Array
Given an array `arr[]`, the task is to find and return the largest element in the array.

### Examples:
- **Input:** `arr = [1, 8, 7, 56, 90]`  
  **Output:** `90`  
  **Explanation:** The largest element in the array is `90`.  
- **Input:** `arr = [5, 5, 5, 5]`  
  **Output:** `5`  

## 💻 Code Implementation
### 🛠️ Solution 1: Brute Force (Using Sorting)
Sort the array in ascending order and return the last element as the largest.

```cpp
#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}
```

⏳ **Time Complexity:** 𝑂(𝑁 𝑙𝑜𝑔 𝑁)  
💾 **Space Complexity:** 𝑂(1)  

---

### 🛠️ Solution 2: Optimized Approach (Iterative)
Iterate through the array and maintain a `max` variable to track the largest element.

```cpp
#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> &arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
```

⏳ **Time Complexity:** 𝑂(𝑁)  
💾 **Space Complexity:** 𝑂(1)  

## 🗝️ Key Learnings
- **Sorting vs Iteration:** Sorting is straightforward but increases time complexity. Iterative solutions are ideal for single-query scenarios due to their 𝑂(𝑁) time complexity.  
- **Tracking Values:** Maintaining a `max` variable is an effective strategy for problems that require finding extremum values in arrays.

## 🔗 Additional Resources
- [GeeksforGeeks: Largest Element in an Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=largest-element-in-array)  
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day79%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Largest%20element%20in%20an%20Array/Find_the_Largest_element%20_in_an_array.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to dive deeper into C++ and DSA! 🚀y)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue to dive deeper into C++ and DSA! 🚀
