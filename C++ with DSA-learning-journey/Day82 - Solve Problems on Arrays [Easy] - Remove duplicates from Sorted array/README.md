# 🚀 Day 82: Solve Problems on Arrays [Easy] - Remove Duplicates from Sorted Array 🚀  

Welcome to **Day 82** of my DSA journey! Today’s focus is on a fundamental array problem—removing duplicates from a sorted array. It’s an excellent opportunity to explore both brute force and optimal approaches for solving the problem efficiently.  

---

## 📋 Problem Explanation  

Given a sorted array, remove duplicate elements **in-place** such that each unique element appears only once. Return the new length of the modified array.  

### Example  
- **Input**: `[1, 1, 2, 2, 2, 3, 3]`  
- **Output**: `[1, 2, 3]`  
- **New Length**: `3`  

---

## 💡 Solution Approaches  

### 1️⃣ Brute Force Approach  

#### Intuition  
Use a `HashSet` to store unique elements since it inherently eliminates duplicates.  

#### Steps  
1. Traverse the array and insert elements into a `HashSet`.  
2. Copy elements from the `HashSet` back to the array.  
3. Return the size of the `HashSet` as the new length.  

#### Code Example  

```cpp
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    set<int> uniqueElements(nums.begin(), nums.end());
    int i = 0;
    for (int elem : uniqueElements) {
        nums[i++] = elem;
    }
    return uniqueElements.size();
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    int newLength = removeDuplicates(nums);
    cout << "New Length: " << newLength << endl;
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
```  

#### Complexity  
- **Time**: \(O(N \log N)\) (due to set insertion)  
- **Space**: \(O(N)\) (for the `HashSet`)  

---

### 2️⃣ Optimal Approach (Two Pointers)  

#### Intuition  
Since the array is sorted, duplicates will always be adjacent. Use two pointers (`i` and `j`) to overwrite duplicates in place.  

#### Steps  
1. Pointer `i` tracks the position of the last unique element.  
2. Pointer `j` traverses the array to find the next unique element.  
3. Replace duplicates in place by updating the array at `i + 1`.  

#### Code Example  

```cpp
#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &nums) {
    if (nums.empty()) return 0;

    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            nums[++i] = nums[j];
        }
    }
    return i + 1;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    int newLength = removeDuplicates(nums);
    cout << "New Length: " << newLength << endl;
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
```  

#### Complexity  
- **Time**: \(O(N)\)  
- **Space**: \(O(1)\)  

---

## ⚙️ Complexity Comparison  

| Approach          | Time Complexity | Space Complexity |  
|-------------------|-----------------|------------------|  
| **Brute Force**   | \(O(N \log N)\) | \(O(N)\)         |  
| **Two Pointers**  | \(O(N)\)        | \(O(1)\)         |  

---

## 🧩 Key Takeaways  

1. The brute force approach is straightforward but not space-efficient.  
2. The two-pointer technique leverages the sorted nature of the array, making it both time- and space-efficient.  
3. Understanding in-place modifications and traversal techniques is critical for solving array problems optimally.  

---

## 🔗 Additional Resources  

- [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

## 🛠️ Check out my code on GitHub  

You can find the complete code for **Day 82** here: [GitHub - Day 82 - Remove Duplicates](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day82%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Remove%20duplicates%20from%20Sorted%20array/Remove_the_duplicates_from_Sorted_array.cpp)  

---

## 🔗 Connect with Me  

- **LinkedIn**: [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub**: [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Stay tuned for more updates as I continue my journey of mastering DSA! 💪  
