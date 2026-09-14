# Q1 - Contains Duplicate

## 🔗 Problem

**Platform:** LeetCode
**Difficulty:** Easy
**Topic:** Array, Set

---

## 📌 Problem Summary

Given an integer array `nums`, return `true` if any value appears more than once in the array.

If every value is unique, return `false`.

---

## 🧪 Examples

### Example 1

```text
Input:
nums = [1, 2, 3, 3]

Output:
true
```

**Explanation:**
The value `3` appears more than once.

### Example 2

```text
Input:
nums = [1, 2, 3, 4]

Output:
false
```

**Explanation:**
Every value appears only once.

---

## 💡 Key Idea

A `set` stores only **unique values**.

So, if the original array size and the `set` size are different, it means there were duplicate values.

---

## 🧠 Approach

1. Put all elements of `nums` into a `set`.
2. The `set` automatically removes duplicate values.
3. Compare the size of `nums` with the size of the `set`.
4. If the sizes are different → duplicate exists → return `true`.
5. If the sizes are the same → no duplicate exists → return `false`.

---

## 🛠️ Concepts Used

* Array
* Set
* Duplicate Detection
* `vector`
* `set` STL

---

## ⏱️ Complexity

**Time Complexity:** `O(n log n)`

**Space Complexity:** `O(n)`

---

## 📝 My Notes

* `set` keeps only unique elements.
* If `nums.size() != set.size()`, there is at least one duplicate.
* This solution is based on comparing the number of original elements with the number of unique elements.

---

## 🔄 Revision Checklist

* [ ] Understand why `set` removes duplicates
* [ ] Understand `nums.size() != set.size()`
* [ ] Understand Time Complexity
* [ ] Understand Space Complexity
* [ ] Try solving again without looking at the code

---

## 💻 Solution

See the code in [`Solution.cpp`](Solution.cpp).
