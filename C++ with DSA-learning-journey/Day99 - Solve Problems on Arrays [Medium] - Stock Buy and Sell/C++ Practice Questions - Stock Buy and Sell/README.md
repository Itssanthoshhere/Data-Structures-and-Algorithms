# 🏦 Practiced a Question on Arrays -Best Time to Buy and Sell Stock - C++ Implementation  

Welcome to **Day 99** of my C++ and DSA learning journey! 🚀 Today, I tackled an interesting **Array problem**: finding the best time to buy and sell a stock to maximize profit. This problem is a great example of **Greedy Algorithms** and **Dynamic Problem Solving**.  

---

## 📚 Topic Covered  
- **Arrays & Greedy Algorithms:** Finding the optimal buy-sell pair using a single pass.  
- **Time Complexity:** Efficient `O(N)` approach using a single loop.  
- **Stock Market Insights:** Understanding real-world applications of algorithmic trading.  

---

## 📝 Problem Statement  
### **Best Time to Buy and Sell Stock**  

Given an array `prices[]`, where `prices[i]` represents the stock price on the `i`-th day, we need to find **the maximum profit possible** by choosing a **single buy and sell** transaction. The buying day must come **before** the selling day. If no profit is possible, return `0`.  

### **Example Input & Output**  
#### Example 1:  
```
Input: prices = [7,1,5,3,6,4]  
Output: 5  
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6). Profit = 6 - 1 = 5.  
```

#### Example 2:  
```
Input: prices = [7,6,4,3,1]  
Output: 0  
Explanation: No profitable transactions possible.  
```

---

## 💻 Code Implementation (C++)

```cpp
#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX, maxProfit = 0;
    
    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    
    return maxProfit;
}

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << "Maximum Profit: " << maxProfit(prices) << endl;
    return 0;
}
```

---

## 🗝️ Key Learnings  
✔ **Efficient Approach:** Achieved `O(N)` time complexity using a **single pass**.  
✔ **Real-World Application:** Used in **financial markets** for **trading strategies**.  
✔ **Greedy Optimization:** Keeps track of **minimum price** and **maximum profit** dynamically.  

---

## 🔗 Additional Resources  
- [LeetCode: Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)  
- [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/)  
- [Stock Market Basics for Developers](https://www.investopedia.com/articles/basics/06/invest1000.asp)  

---

## 🛠️ Check out the Code  
You can find the **full solution** in my GitHub repository:  
🔗 [GitHub Repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day99%20-%20Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Stock%20Buy%20and%20Sell/Stock_Buy_and_Sell.cpp)  

---

## 🔗 Connect with Me  
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

Excited to explore **Sliding Window & Two Pointer** techniques next! 🚀 Stay tuned! 🔥  

---
