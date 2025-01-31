# 🚀 Day 100: Solve Problems on Arrays [Medium] - Rearrange Array Elements by Sign 🚀  

Welcome to **Day 100** of my coding journey! 🎉 Today, we are tackling an **array rearrangement problem**, where we need to arrange positive and negative numbers in alternating order while maintaining their relative order. Let's dive in!  

---

## 📋 Problem Statement  

Given an array **A** of size **N**, where the number of positive and negative elements is either **equal or unequal**, rearrange it so that:  
✅ Elements appear alternately as positive and negative.  
✅ The array starts with a **positive number**.  
✅ If there are leftover positive or negative elements, they should be placed at the end **without disrupting the relative order**.  

---

## 💡 Solution Approaches  

### 🛠 Solution 1: Brute-Force Approach  
#### **Steps:**  
1️⃣ Store positive and negative numbers separately in two vectors.  
2️⃣ Populate the array by placing positive numbers at even indices and negative numbers at odd indices.  

#### **Complexity Analysis:**  
⏳ **Time Complexity**: **O(N)** (since we iterate twice)  
💾 **Space Complexity**: **O(N)** (extra space for two separate lists)  

---

### 🛠 Solution 2: Optimized Approach  
#### **Steps:**  
✅ Uses **only one extra array** instead of two separate lists.  
✅ Directly places elements at their correct positions while iterating.  

#### **Complexity Analysis:**  
⏳ **Time Complexity**: **O(N)**  
💾 **Space Complexity**: **O(N)**  

---

## 📌 Code Implementation  

### **Brute-Force Solution (Using Separate Vectors)**  
```cpp
#include <iostream>
#include <vector>
using namespace std;

void rearrangeArray(vector<int>& arr) {
    vector<int> pos, neg;
    
    // Separate positive and negative numbers
    for (int num : arr) {
        if (num >= 0) pos.push_back(num);
        else neg.push_back(num);
    }

    int i = 0, j = 0, k = 0;
    while (i < pos.size() && j < neg.size()) {
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    // Add remaining elements (if any)
    while (i < pos.size()) arr[k++] = pos[i++];
    while (j < neg.size()) arr[k++] = neg[j++];
}

int main() {
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    rearrangeArray(arr);
    
    // Print rearranged array
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

---

### **Optimized Approach (Using Single Extra Array)**  
```cpp
#include <iostream>
#include <vector>
using namespace std;

void rearrangeOptimized(vector<int>& arr) {
    vector<int> result(arr.size());
    int posIndex = 0, negIndex = 1;

    for (int num : arr) {
        if (num >= 0) {
            result[posIndex] = num;
            posIndex += 2;
        } else {
            result[negIndex] = num;
            negIndex += 2;
        }
    }

    arr = result;  // Copy the rearranged result back
}

int main() {
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    rearrangeOptimized(arr);
    
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
```

---

## ⚙️ Complexity Analysis  

| **Approach**       | **Time Complexity** | **Space Complexity** |  
|--------------------|-------------------|-------------------|  
| **Brute-Force**    | O(N)              | O(N)              |  
| **Optimized**      | O(N)              | O(N)              |  

---

## 🔥 Key Takeaways  

✅ **Brute-force approach** separates elements and rearranges them but requires extra space.  
✅ **Optimized approach** maintains placement during iteration, improving efficiency.  
✅ **Handles cases** where the number of positive and negative elements is unequal by placing remaining elements at the end.  

---

## 🔗 Additional Resources  

- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)  

---

## 🛠️ Check out my code on GitHub  
You can find the complete code for **Day 100** here:  
🔗 [GitHub - Day100 Rearrange Array Elements by Sign](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day_100_Solve%20Problems%20on%20Arrays%20%5BMedium%5D%20-%20Rearrange%20Array%20Elements%20by%20Sign)  

---

## 🔗 Connect with Me  
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)  
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)  

🎯 Keep coding and pushing your limits! 🚀
