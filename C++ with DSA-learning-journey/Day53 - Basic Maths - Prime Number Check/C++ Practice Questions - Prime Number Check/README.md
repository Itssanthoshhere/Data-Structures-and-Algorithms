# Practiced a Question on Basic Math - Jump Array - Minimum Jumps

Welcome to my C++ and DSA learning journey! Today, I focused on a jump-based array traversal problem known as the **Minimum Jumps** problem. This challenge allowed me to dive into greedy algorithms and array manipulation concepts.

## 📚 Topic Covered
- **Array Traversal & Greedy Algorithms:** Understanding and implementing an algorithm to traverse an array with minimum steps. Each element in the array represents the maximum jump length from that index.

## 📝 Problem Statement
### Problem: Minimum Jumps

Given an array of non-negative integers where each element represents the maximum jump distance from that index, find the minimum number of jumps needed to reach the last element. If it’s not possible to reach the end, return -1.

### Example
- **Input:** `arr[] = [1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9]`
- **Output:** `3`

### Explanation
The code calculates the minimum jumps required by tracking the maximum reachable distance while moving through the array. If the maximum distance is exceeded, it increments the jump count.

## 💻 Code Implementation
```cpp
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int minJumps(vector<int>& arr) {
    int n = arr.size();
    if (n == 0 || arr[0] == 0) return -1; // Cannot jump if start is zero
    
    int jumps = 1, maxReach = arr[0], steps = arr[0];

    for (int i = 1; i < n; i++) {
        if (i == n - 1) return jumps;
        maxReach = max(maxReach, i + arr[i]);
        steps--;
        
        if (steps == 0) {
            jumps++;
            if (i >= maxReach) return -1;
            steps = maxReach - i;
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int result = minJumps(arr);
    cout << "Minimum jumps needed: " << result << endl;
    return 0;
}
```

## 🗝️ Key Learnings
- **Greedy Algorithms:** Essential for minimizing steps in array traversal. Keeping track of the farthest reachable index at each step is crucial in such problems.
- **Edge Cases:** Understanding scenarios like the start being `0` and ensuring that the algorithm correctly handles cases where reaching the end is impossible.

## 🔗 Additional Resources
- [GeeksforGeeks: Minimum Jumps Problem](https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1)
- [Coding Ninjas: Jump Array Problems](https://www.naukri.com/code360/problems/check-prime_624674?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this problem in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day53%20-%20Basic%20Maths%20-%20Prime%20Number%20Check/Prime_Number_Check.cpp).

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to strengthen my problem-solving skills in C++ and DSA!
