# 🚀 Day 67: Mastering Basic Hashing - Character Hashing in C++ 🚀

Welcome to **Day 67** of my coding journey! Today, we’re diving into **Character Hashing** in C++, an efficient technique for quickly counting character occurrences in a string. Character hashing can significantly optimize performance in applications where we need to handle multiple queries on character frequency.

## 📋 Problem Explanation

Given a string (e.g., `"abcdabefc"`) and several character queries, such as `a`, `c`, and `z`, our task is to return the frequency of each queried character. Here’s an example:

- **Query**: `'a'` → **Result**: 2
- **Query**: `'z'` → **Result**: 0

Using brute force, we could iterate through the string each time for every query, which results in a time complexity of **O(Q * N)**. Instead, by leveraging character hashing, we can optimize this down to **O(1)** for each query.

## 💡 Solution Approach

### Brute Force Solution
1. For each query, loop through the string and count occurrences of the character.
2. **Drawback**: This method is **O(Q * N)**, where `Q` is the number of queries and `N` is the string's length.

### Optimized Solution Using Character Hashing
Character hashing is an efficient alternative. By precomputing and storing character frequencies in a hash array, we can access each frequency in constant time.

### Implementation Strategies
1. **Lowercase Characters Only**:
   - Use a `hash[26]` array, where each index represents a letter from `'a'` to `'z'`.
   - Compute frequency with `hash[s[i] - 'a']++`.
2. **Mixed Case Characters (Uppercase and Lowercase)**:
   - Use a `hash[256]` array to cover all ASCII characters.
   - Map each character to its ASCII value and update the frequency with `hash[s[i]]++`.
   - This approach handles both lowercase and uppercase characters.

## 📌 Code Example

### Lowercase Letters Only

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void countCharacterFrequencies(const string &s, vector<int> &hash) {
    for (char c : s) {
        hash[c - 'a']++;
    }
}

int main() {
    string s = "abcdabefc";
    vector<int> hash(26, 0);
    countCharacterFrequencies(s, hash);

    // Example queries
    char queries[] = {'a', 'c', 'z'};
    for (char query : queries) {
        cout << "Frequency of '" << query << "': " << hash[query - 'a'] << endl;
    }
    return 0;
}
```

### Mixed Case (All ASCII)

```cpp
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void countCharacterFrequencies(const string &s, vector<int> &hash) {
    for (char c : s) {
        hash[c]++;
    }
}

int main() {
    string s = "AbcDAbEfC";
    vector<int> hash(256, 0);
    countCharacterFrequencies(s, hash);

    // Example queries
    char queries[] = {'A', 'c', 'z'};
    for (char query : queries) {
        cout << "Frequency of '" << query << "': " << hash[query] << endl;
    }
    return 0;
}
```

## ⚙️ Complexity Analysis

1. **Preprocessing**:
   - **Time Complexity**: **O(N)**, where `N` is the length of the string.
   - **Space Complexity**:
     - Lowercase only: **O(26)** for `hash[26]`.
     - Mixed case: **O(256)** for `hash[256]`.
2. **Query Handling**:
   - Each query runs in **O(1)** by accessing the frequency directly in the `hash` array.
3. **Overall Complexity**:
   - **Time Complexity**: **O(N + Q)**, where `Q` is the number of queries.
   - **Space Complexity**: **O(26)** or **O(256)** based on the hash array size.

## 🧩 Key Takeaways

- **Efficiency**: Character hashing significantly improves performance when querying character occurrences.
- **Flexibility**: ASCII-based indexing allows us to handle both lowercase and mixed-case strings.
- **Scalability**: This approach can be expanded for other types of character or integer-based hashing.

---

## 🔗 Additional Resources
- **Striver's A2Z DSA Course**: [Striver's A2Z DSA Course Sheet](https://takeuforward.org/strivers-a2z-dsa-course/strivers-a2z-dsa-course-sheet-2)

## 🛠️ Check out my code on GitHub
You can find the complete code for Day 67 here: [GitHub - Day67 Character Hashing](https://github.com/Itssanthoshhere/Data-Structures-and-Algorithms/blob/main/C%2B%2B%20with%20DSA-learning-journey/Day67%20-%20Basic%20Hashing%20-%20Character%20Hashing/Character_Hashing.cpp)

---

## 🔗 Connect with Me
- **LinkedIn:** [Santhosh VS](https://www.linkedin.com/in/thesanthoshvs/)
- **GitHub:** [Itssanthoshhere](https://github.com/Itssanthoshhere)

Stay tuned for more updates as I continue to explore the depths of C++ and DSA!
