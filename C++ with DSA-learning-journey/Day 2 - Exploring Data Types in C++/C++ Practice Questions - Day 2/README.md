# Day 2: Continuing the Learning Journey of Data Types in C++

## 📚 Today's Practice Question

### Problem: Data Type Size
*Platform:* [GeeksforGeeks](https://www.geeksforgeeks.org/)

**Description:**

Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help. Given a data type, help Geek in finding the size of it in bytes.

**Data Types:**
- Character
- Integer
- Long
- Float
- Double

**Examples:**

1. **Input:** `Character`  
   **Output:** `1`  
   **Explanation:** For Java, it would be 2 bytes.

2. **Input:** `Integer`  
   **Output:** `4`

**Your Task:**

Complete the function `dataTypeSize()` which takes a string as input and returns the size of the data type in bytes.

---

### 🛠 Solution

```cpp
class Solution {
public:
    int dataTypeSize(string str) {
        if (str == "Character") {
            return 1;  // Size of char in C++
        } else if (str == "Integer") {
            return 4;  // Size of int in C++
        } else if (str == "Long") {
            return sizeof(long);  // Size of long, typically 4 or 8 bytes
        } else if (str == "Float") {
            return 4;  // Size of float in C++
        } else if (str == "Double") {
            return 8;  // Size of double in C++
        } else {
            return -1;  // Return -1 for unknown data types
        }
    }
};
```

---

### 🚀 What I Learned

- Practiced identifying and returning the size of different data types in C++.
- Reinforced understanding of basic data types and their memory allocation.

## 🔗 Additional Resources
- [GeeksforGeeks: Data Type](https://www.geeksforgeeks.org/problems/data-type-1666706751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=data-type)
- [Striver's A2Z DSA Course/Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out the Code
You can find the complete code for this day in my [GitHub repository](https://github.com/Itssanthoshhere/DSA/tree/main/C%2B%2B%20with%20DSA-learning-journey/Day%202%20-%20Exploring%20Data%20Types%20in%20C%2B%2B).

---

# My 100 Days of Code Challenge
I’m documenting my journey through the Striver's A2Z DSA Course/Sheet, where I solve problems daily and solidify my understanding of C++ and Data Structures.

Feel free to follow along and share your thoughts!

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
