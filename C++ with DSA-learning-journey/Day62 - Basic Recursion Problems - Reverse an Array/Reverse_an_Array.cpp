                                                                                                                                                                                                                 /*
// Reverse a given Array

- Two-Pointer Approach
- Single Pointer Approach

// 1. Two-Pointer Approach:
-> Pseudo Code
f(l, r) {
    if (l >= r) {
        return
    }
    swap(a[l], a[r])
    f(l + 1, r - 1)
}

int main() {
    arr
    f(0, n - 1)
}



// 2. Single Pointer Approach:
-> Pseudo Code
f(i) {
    if (i >= n / 2) {
        return
    }
    swap(a[i], a[n - i - 1])
    f(i + 1)
}

int main() {
    arr
    f(0)
}
                                                                                                                                                                                                                 */
