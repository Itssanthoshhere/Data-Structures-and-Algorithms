# Practiced a Question on Bit Manipulation - Single Number in C++

Welcome to Day 91 of my C++ and DSA learning journey! Today, I tackled an intriguing problem on bit manipulation: finding a single number in a list where every other number appears twice. This problem helped deepen my understanding of XOR operations and their applications in efficiently solving problems.

---

## 📚 Topic Covered
- **Bit Manipulation:** Leveraging XOR operations to identify unique elements in an array.
- **Optimization Techniques:** Achieving an **O(n)** time complexity with constant space (**O(1)**).

---

## 📝 Problem Statement
### Problem: Single Number  
Given an array of integers where every element appears twice except for one, find the element that appears only once.

### Constraints
- The solution must be implemented with **O(n)** runtime complexity and **O(1)** space complexity.

---

## 💻 Code Implementation

```cpp
#include <iostream>
#include <vector>
using namespace std;

int singleNumber(const vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num; // XOR operation
    }
    return result;
}

int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "The single number is: " << singleNumber(nums) << endl;
    return 0;
}
```

---

## 🗝️ Key Learnings
1. **XOR Properties:**
   - `a ^ a = 0`: Numbers appearing in pairs cancel each other out.
   - `a ^ 0 = a`: XOR with zero leaves the number unchanged.
2. **Efficiency:** This approach ensures linear time complexity (**O(n)**) while keeping space usage minimal (**O(1)**).
3. **Practical Use Cases:** XOR operations are particularly useful in problems involving pairs and finding unique elements.

---

## 📊 Example Output
### Input: 
`nums = [4, 1, 2, 1, 2]`  
### Output: 
`4`  
### Explanation: 
Numbers appearing twice cancel each other out, leaving only the unique number.

---

## 🔗 Additional Resources
- [LeetCode: Single Number](https://leetcode.com/problems/single-number/)
- [Coding Ninjas: Find the Single Element](https://www.naukri.com/code360/problems/find-the-single-element_6680465?utm_source=striver&utm_medium=website&utm_campaign=codestudio_a_zcourse)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

---

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day91%20-%20Solve%20Problems%20on%20Arrays%20%5BEasy%5D%20-%20Find%20the%20number%20that%20appear%20once%2C%20%26%20after%20numbers%20twice/Find_the_number_that_appear_once_%26_after_numbers_twice.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue my journey in C++ and DSA! 🚀
