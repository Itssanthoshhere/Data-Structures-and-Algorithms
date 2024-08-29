# Day 4: Continuing the Learning Journey of Switch Statement in C++

## 📚 Today's Practice Question

### Problem: Switch Case Statement
*Platform:* [GeeksforGeeks](https://www.geeksforgeeks.org/)

**Description:**

Given an integer `choice` denoting the choice of the user and a list containing either the single value `R` or two values `L` and `B` depending on the choice:
- If the user's choice is `1`, calculate the area of the circle with the given radius `R`.
- If the user's choice is `2`, calculate the area of the rectangle with the given length `L` and breadth `B`.

**Note:** Use `Math.PI` for the value of π.

**Examples:**

1. **Input:** `choice = 1, R = 5`  
   **Output:** `78.53981633974483`  
   **Explanation:** The choice is 1, so the area of the circle is calculated using the formula \( \pi \times R^2 \).

2. **Input:** `choice = 2, L = 5, B = 10`  
   **Output:** `50`  
   **Explanation:** The choice is 2, so the area of the rectangle is calculated using the formula \( L \times B \).

**Constraints:**

- \(1 \leq R, L, B \leq 100\)

**Expected Time Complexity:** O(1)  
**Expected Auxiliary Space:** O(1)

---

### 💻 𝐒𝐨𝐥𝐮𝐭𝐢𝐨𝐧 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡:

The problem requires calculating the area of a geometric shape based on the user's choice using a switch-case statement. 

- **Case 1:** If `choice = 1`, calculate the area of a circle using the formula \( \pi \times R^2 \).
- **Case 2:** If `choice = 2`, calculate the area of a rectangle using the formula \( L \times B \).
- The function returns the computed area depending on the choice.

This approach is efficient with O(1) time complexity as the operations are simple arithmetic calculations.

---

### 🛠 Solution

```cpp
class Solution {
public:
    double switchCase(int choice, vector<double> &arr) {
        double area = 0.0;
        switch (choice) {
            case 1:
                // Calculate the area of the circle
                if (arr.size() == 1) {
                    double radius = arr[0];
                    area = M_PI * radius * radius;
                }
                break;
            
            case 2:
                // Calculate the area of the rectangle
                if (arr.size() == 2) {
                    double length = arr[0];
                    double breadth = arr[1];
                    area = length * breadth;
                }
                break;
        }
        return area;
    }
};
```

---

### 🚀 What I Learned

- Practiced using the switch-case statement for decision-making based on user input.
- Calculated areas of different geometric shapes using the appropriate mathematical formulas.
- Reinforced my understanding of condition-based execution using the switch-case statement.

## 🔗 Additional Resources
- [GeeksforGeeks: Switch Case statement](https://www.geeksforgeeks.org/problems/java-switch-case-statement3529/1)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day%204%20-%20Understanding%20the%20Switch%20Statement%20in%20C%2B%2B).

---

# My 100 Days of Code Challenge
I’m documenting my journey through the Striver's A2Z DSA Course/Sheet, where I solve problems daily and solidify my understanding of C++ and Data Structures.

Feel free to follow along and share your thoughts!

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
