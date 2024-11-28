# 🚀 Day 80: Solving Problems on Arrays [Easy] - Second Largest Element in an Array without Sorting 🚀

Welcome to **Day 80** of my coding journey! Today, I tackled an interesting problem on arrays where the task is to find the second largest element in an array without sorting. This problem allows us to explore different approaches and optimize solutions for better performance.

## 📋 Problem Explanation

Given an unsorted array of integers, the goal is to find the **second largest** element without sorting the array. 

### Example:
- **Array**: `[10, 20, 4, 45, 99]`
- **Second Largest Element**: `45`

The challenge here is to solve this problem efficiently without using sorting, which typically has a time complexity of **O(N log N)**.

## 💡 Solution Approach

### Solution 1: Brute Force (Sorting)
This approach is the most straightforward but inefficient. The idea is to sort the array and directly pick the second largest element.

#### Approach:
1. Sort the array in ascending order.
2. The second largest element will be at the second-to-last index (`arr[n-2]`).

```cpp
sort(arr, arr + n);  
int second_largest = arr[n - 2];
```

#### Time Complexity: O(N log N) (due to sorting)
#### Space Complexity: O(1)

### Solution 2: Improved Approach (Two Passes)
This approach avoids sorting by making two passes over the array. In the first pass, we find the largest and smallest elements, and in the second pass, we find the second largest and second smallest elements.

#### Approach:
1. Traverse the array once to find the largest and smallest elements.
2. Traverse the array again to find the second largest and second smallest elements by excluding the largest and smallest found in the first pass.

```cpp
int largest = INT_MIN, second_largest = INT_MIN;
for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
        second_largest = largest;
        largest = arr[i];
    } else if (arr[i] > second_largest && arr[i] != largest) {
        second_largest = arr[i];
    }
}
```

#### Time Complexity: O(N) (two passes)
#### Space Complexity: O(1)

### Solution 3: Optimal Approach (Single Pass)
This is the most efficient solution, achieving the task in just one traversal of the array. We update the largest and second largest elements dynamically during the iteration.

#### Approach:
1. Traverse the array once.
2. For each element, use conditions to update the largest and second largest values.

```cpp
int largest = INT_MIN, second_largest = INT_MIN;
for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
        second_largest = largest;
        largest = arr[i];
    } else if (arr[i] > second_largest && arr[i] != largest) {
        second_largest = arr[i];
    }
}
```

#### Time Complexity: O(N) (single pass)
#### Space Complexity: O(1)

## 🔑 Key Takeaways:
- **Brute Force**: Simple but inefficient with O(N log N) complexity.
- **Improved Solution**: More efficient with two passes and O(N) time complexity.
- **Optimal Solution**: Achieves the best performance with a single pass and O(1) space complexity.

### Next Goal:
Continuing to improve my problem-solving skills with more complex array challenges to deepen my understanding of algorithms and data structures.

## 🔗 Striver's A2Z DSA Course/Sheet: 
[Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub:
[GitHub - Day 80: Second Largest Element in an Array](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day80%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Second%20Largest%20Elements%20in%20an%20Array/Second_Largest_Element_in_an_Array.cpp)

---

## 🔗 Connect with Me  

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more problem-solving insights as I continue my journey into the fascinating world of **C++ with DSA**! 🚀  
