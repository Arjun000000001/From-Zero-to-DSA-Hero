# 🧠 Brute Force Approach to Find Unique Element (C++)

## 📌 Problem Statement:

> Given an array where every element appears **twice** except one element,  
> find that **single unique element** using a brute-force approach.

---

## 📋 Example:

```cpp
Input:  [2, 3, 5, 4, 5, 3, 4]
Output: 2
```

🧠 Why?  
Only `2` appears once. All others appear exactly twice.

---

## ⚙️ Brute Force Logic:

- Loop through each element `arr[i]`
- For each element, loop again and compare it with every other element `arr[j]`
- If a duplicate is found (`arr[i] == arr[j]`), mark as not unique
- If after full check no duplicate is found → that’s our unique element

---

## 🧾 C++ Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int uniqueElement = -1;

    for (int i = 0; i < n; i++) {
        bool isUnique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }

        if (isUnique) {
            uniqueElement = arr[i];
            break;
        }
    }

    cout << "The element that appears only once is: " << uniqueElement << endl;

    return 0;
}
```

---

## 🔍 Key Concepts:

### ✅ Why `j = 0`?
We must compare `arr[i]` with **all other elements**, including elements **before** it.

If we start with `j = i + 1`, we’ll miss earlier duplicates — leading to incorrect output.

```cpp
if (i != j && arr[i] == arr[j])
```
→ This ensures we don’t compare the same index (`i == j`), but still check all other positions.

---

## ⏱️ Time Complexity:

```
O(n^2)  → Two nested loops
```

Not ideal for large arrays — use XOR for optimized solution (O(n)).

---

## ✅ Suitable For:

- Understanding logic flow
- Practicing nested loops and conditionals
- Interview roun
