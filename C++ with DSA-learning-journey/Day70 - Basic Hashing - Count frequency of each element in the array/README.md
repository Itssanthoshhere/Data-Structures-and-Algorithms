# 🚀 Day 70: Basic Hashing - Counting Frequency of Each Element in an Array 🚀

Welcome to **Day 70** of my coding journey! Today, we are diving into **Basic Hashing** by implementing a solution to count the occurrences of each element in an array. Hashing helps us solve this problem efficiently and prepares us for more complex challenges in data processing.

## 📋 Problem Statement

Given an array, count the occurrences of each element. Here are a couple of examples:

### ✨ Examples

- **Example 1:**
  - **Input**: `{10, 5, 10, 15, 10, 5}`
  - **Output**:
    ```
    10 - 3
    5  - 2
    15 - 1
    ```
  - **Explanation**: `10` appears `3` times, `5` appears `2` times, and `15` appears `1` time.

- **Example 2:**
  - **Input**: `{2, 2, 3, 4, 4, 2}`
  - **Output**:
    ```
    2 - 3
    3 - 1
    4 - 2
    ```

This is a commonly asked problem in coding interviews, and hashing provides two main approaches to solve it efficiently.

## 🔹 Solution 1: Using Two Loops (Naive Approach)

This approach uses two loops and a `visited` array to track counted elements.

### Approach:
1. For each element, use another loop to find matching elements.
2. Track the count and mark elements as visited.
3. Print each unique element with its count.

- **Time Complexity**: `O(N^2)`  
- **Space Complexity**: `O(N)`

## 🔹 Solution 2: Using a HashMap/Unordered Map (Optimized Approach)

In this approach, we use a **hash map** to store each element and its frequency, allowing efficient lookups.

### Approach:
1. Create a hash map with `element -> frequency` pairs.
2. For each element in the array, update the frequency count.
3. Print each element and its frequency.

- **Time Complexity**: `O(N)`  
- **Space Complexity**: `O(N)`

## 💡 Key Insights

- **Naive Approach**: Useful for understanding basic array manipulations but can be inefficient for larger arrays.
- **Optimized Hash Map Approach**: Highly efficient, frequently used in coding interviews for counting frequency problems.

---

## 🔗 Additional Resources

- **Striver's A2Z DSA Course/Sheet**: [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Code on GitHub

Find the complete code for **Day 70** here: [GitHub - Day 70 Frequency Counting](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day70%20-%20Basic%20Hashing%20-%20Count%20frequency%20of%20each%20element%20in%20the%20array/Counting_frequencies_of_array_elements.cpp)

---

## 🔗 Connect with Me

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
