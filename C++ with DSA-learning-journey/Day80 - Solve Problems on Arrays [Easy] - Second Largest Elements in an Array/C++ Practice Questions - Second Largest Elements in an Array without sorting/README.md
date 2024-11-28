# Practiced a Question on Second Largest Element in an Array in C++

Welcome to Day 80 of my C++ and DSA learning journey! Today, I worked on solving an interesting problem where I had to find the second largest element in an array. This task helped me practice problem-solving techniques and edge case handling, including arrays with duplicate elements or those without a valid second largest element.

## 📚 Topic Covered
- **Array Manipulation:** This problem focused on efficiently identifying the second largest element in an array of integers. It helped me practice traversing the array and keeping track of the largest and second largest values in a single pass.

## 📝 Problem Statement
### Problem: Second Largest Element in Array

Given an array of positive integers, the goal is to return the second largest element in the array. If it doesn’t exist, return -1.

### Example
- **Input:** arr[] = [12, 35, 1, 10, 34, 1]
- **Output:** 34  
  **Explanation:** The largest element is 35, and the second largest is 34.

- **Input:** arr[] = [10, 10, 10]
- **Output:** -1  
  **Explanation:** The largest element is 10, and no second largest exists.

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int largest = -1, secondLargest = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return secondLargest;
}

int main() {
    vector<int> arr = {12, 35, 1, 10, 34, 1};
    int result = findSecondLargest(arr);
    cout << "The second largest element is: " << result << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Single Traversal Efficiency:** The algorithm runs in O(n) time complexity, which is optimal for this problem. We traverse the array only once, making the solution efficient even for larger input sizes.
- **Edge Case Handling:** I learned how to handle edge cases like when the array contains duplicate elements or when it’s too small to have a second largest element.
- **Conditional Updates:** The key challenge was ensuring that the `secondLargest` variable gets updated properly when the largest element is found.

## 🔗 Additional Resources
- [GeeksforGeeks: Second Largest Element in Array](https://www.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest)
- [Coding Ninjas: Ninja and the Second Order Elements](https://www.naukri.com/code360/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse&leftPanelTabValue=PROBLEM)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day80%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Second%20Largest%20Elements%20in%20an%20Array/Second_Largest_Element_in_an_Array.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
