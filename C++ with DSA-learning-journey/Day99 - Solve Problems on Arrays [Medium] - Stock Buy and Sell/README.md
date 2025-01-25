# 🚀 Day 99: Solve Problems on Arrays [Medium] - Stock Buy And Sell 🚀  

Welcome to **Day 99** of my coding journey! Today, I tackled the **Stock Buy and Sell** problem, an essential problem in **array-based problem solving** that strengthens **dynamic decision-making and optimization** techniques.  

## 📋 Problem Explanation  

You are given an array `arr[]`, where `arr[i]` represents the stock price on the `i`th day. You need to determine the **maximum profit** you can achieve by buying and selling the stock **exactly once**.  

**Example:**  
```cpp
Input: arr[] = {7, 1, 5, 3, 6, 4}
Output: 5  // Buy at 1, Sell at 6
```  
```cpp
Input: arr[] = {7, 6, 4, 3, 1}
Output: 0  // No profitable transaction
```  

## 💡 Solution Approaches  

### 🔹 Brute-Force Approach  

1. Iterate over all possible pairs `(i, j)` where `i < j`.  
2. Calculate the profit `arr[j] - arr[i]` for each pair.  
3. Keep track of the **maximum profit** encountered.  

**Complexity Analysis:**  
- **Time Complexity:** `O(N²)`  
- **Space Complexity:** `O(1)`  

**Drawback:** This approach is inefficient for large datasets due to nested loops.  

### 🔹 Optimized Approach (Kadane’s Inspired)  

1. Traverse the array while keeping track of the **minimum price seen so far**.  
2. At each step, compute the profit as `arr[i] - min_price` and update the **maximum profit**.  

**Complexity Analysis:**  
- **Time Complexity:** `O(N)`  
- **Space Complexity:** `O(1)`  

🔹 **Advantage:** This method requires just a single pass, making it optimal for large inputs. 🚀  

---

## 📌 Code Implementation  

### 🔹 Brute-Force Approach (O(N²))  
```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxProfitBruteForce(vector<int>& prices) {
    int maxProfit = 0;
    for (int i = 0; i < prices.size(); i++) {
        for (int j = i + 1; j < prices.size(); j++) {
            maxProfit = max(maxProfit, prices[j] - prices[i]);
        }
    }
    return maxProfit;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit (Brute-Force): " << maxProfitBruteForce(arr) << endl;
    return 0;
}
```  

### 🔹 Optimized Approach (O(N))  
```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxProfitOptimized(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = min(minPrice, price);  
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
}

int main() {
    vector<int> arr = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit (Optimized): " << maxProfitOptimized(arr) << endl;
    return 0;
}
```  

---

## ⚙️ Complexity Analysis  

| Approach      | Time Complexity | Space Complexity |  
|--------------|----------------|------------------|  
| Brute-Force  | `O(N²)`         | `O(1)`          |  
| Optimized    | `O(N)`          | `O(1)`          |  

---

## 🧩 Key Takeaways  

- **Nested loops** in brute-force make it inefficient for large inputs.  
- **Tracking the minimum price dynamically** ensures an efficient **O(N)** approach.  
- This problem helped me understand **array traversal, dynamic problem-solving, and greedy algorithms**.  

---

## 🔗 Additional Resources  

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

---

## 🛠️ Check out my code on GitHub  

Find the complete **Day 99 - Stock Buy And Sell** implementation here:  
🔗 [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day99%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Stock%20Buy%20and%20Sell/Stock_Buy_and_Sell.cpp)  

---

## 🔗 Connect with Me  

- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Let's discuss **problem-solving strategies and efficient coding techniques**! 🚀  

---
