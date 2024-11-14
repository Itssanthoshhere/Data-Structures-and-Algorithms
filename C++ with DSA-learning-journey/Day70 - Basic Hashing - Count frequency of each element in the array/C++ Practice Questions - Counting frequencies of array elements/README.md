# Practiced a Question on Basic Hashing - Count Frequency of Elements in an Array in C++

Welcome to Day 70 of my C++ and DSA learning journey! Today, I tackled a problem focused on frequency counting within arrays. This task was a great way to deepen my understanding of hashing and in-place modifications to optimize space complexity.

## 📚 Topic Covered
- **Hashing and Frequency Counting:** This problem required efficient counting of elements in an array using hashing, allowing us to avoid extra space usage with in-place modifications.
  
## 📝 Problem Statement
### Problem: Count Frequency of Array Elements from 1 to N
Given an array of integers ranging from 1 to N, the objective is to count the frequency of each element within this range. The solution involves modifying the array in-place for space efficiency.

### Example
- **Input:** `n = 5`, `arr[] = [2, 3, 2, 3, 5]`
- **Output:** `[0, 2, 2, 0, 1]`
  
### Explanation
1. Element `1` appears `0` times.
2. Element `2` appears `2` times.
3. Element `3` appears `2` times.
4. Element `4` appears `0` times.
5. Element `5` appears `1` time.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

void countFrequency(int arr[], int n) {
    vector<int> freq(n, 0);

    // Count frequencies
    for (int i = 0; i < n; i++) {
        if (arr[i] <= n) {
            freq[arr[i] - 1]++;
        }
    }

    // Display the frequency of each element
    for (int i = 0; i < n; i++) {
        cout << freq[i] << " ";
    }
    cout << endl;
}

int main() {
    int n = 5;
    int arr[] = {2, 3, 2, 3, 5};
    countFrequency(arr, n);
    return 0;
}
```

## 🗝️ Key Learnings
- **In-Place Array Manipulation:** Modifying the array in-place for counting without additional data structures enhances space efficiency.
- **Efficient Frequency Counting:** Leveraging a frequency array provides an optimal way to store and display results based on the element values within a defined range.

## 🔗 Additional Resources
- [GeeksforGeeks: Frequency of Array Elements](https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/0)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day70%20-%20Basic%20Hashing%20-%20Count%20frequency%20of%20each%20element%20in%20the%20array/Counting_frequencies_of_array_elements.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
