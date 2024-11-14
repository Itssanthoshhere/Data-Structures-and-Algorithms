# 🚀 Day 69: Basic Hashing - Understanding Collision & The Division Method in Hashing 🚀

Today, we dive into **hashing**, specifically focusing on the concept of *collision* and the **Division Method**. Hashing maps data into a fixed-size structure, enhancing the efficiency of data retrieval. This technique is crucial for real-time applications where fast lookups are needed.

## 🔍 How Hashing Works
Hashing has several popular methods, among which three are commonly used:
1. **Division Method**
2. **Folding Method**
3. **Mid-Square Method**

For coding interviews and exercises, the **Division Method** is especially useful. We’ll focus on understanding this approach.

## 🧩 The Division Method in Action
Let's illustrate the Division Method with an example:

Given an array `[2, 5, 16, 28, 139]`, a straightforward hash array would need to be as large as the largest element (i.e., 139). Instead, using the Division Method allows us to efficiently store values within a smaller array.

### Steps for the Division Method:
1. **Choose a Modulo Value:** We select `10` as our divisor.
2. **Hashing Rule:** Hash each element by computing `element % 10` to store results within the remainder range.

Example:
- `2 % 10` → Index 2
- `28 % 10` → Index 8
- `139 % 10` → Index 9

This approach enables us to store data without needing a large hash table.

## 💡 Collision & Handling It with Linear Chaining
A **collision** occurs when multiple elements hash to the same index. For instance, in the array `[2, 5, 16, 28, 139, 38, 48, 28, 18]`, elements like `28`, `38`, `48`, and `18` will all map to the same index.

### Solution: Linear Chaining
We resolve collisions by:
- Maintaining a **chain** (linked list) at each index to store multiple values mapping to the same location.
- This ensures each element has a unique place in the hash table.

## 🔍 Worst-Case Scenarios
In rare cases, all elements may hash to the same index, leading to a **collision-heavy** table. An example array like `[8, 18, 28, 38, 48, ...]` with `mod 10` results in each element falling at the same index, degrading the time complexity to `O(N)`. Though uncommon, it's essential to understand.

## 🧩 Key Takeaways
- **Hashing** enhances storage and retrieval using modular arithmetic.
- **Collisions** can be managed with Linear Chaining for data integrity.
- Maps in languages like **C++** and **Java** can limit key data types in unordered maps (e.g., no `pair<int, int>` keys).

## 📘 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)
  
## 🛠️ Code Repository
- **GitHub Link**: https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)
