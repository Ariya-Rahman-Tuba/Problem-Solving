# Q2 - Valid Anagram

## 🔗 Problem

**Platform:** NeetCode
**Difficulty:** Easy
**Topic:** String, Sorting

---

## 📌 Problem Summary

Given two strings `s` and `t`, return `true` if they are anagrams of each other.

Two strings are anagrams if they contain the same characters with the same frequency, regardless of their order.

---

## 🧪 Examples

### Example 1

```text
Input:
s = "racecar"
t = "carrace"

Output:
true
```

**Explanation:**
After sorting, both strings become the same.

---

### Example 2

```text
Input:
s = "jar"
t = "jam"

Output:
false
```

**Explanation:**
After sorting, the strings are different.

---

### Example 3

```text
Input:
s = "x"
t = "x"

Output:
true
```

**Explanation:**
Both strings are already the same.

---

## 💡 Key Idea

Anagrams contain the same characters with the same frequency.

If we **sort both strings**, all characters will be arranged in the same order.

Therefore:

* If sorted `s` == sorted `t` → they are anagrams → `true`
* Otherwise → they are not anagrams → `false`

---

## 🧠 Approach

1. Sort string `s` using `sort()`.
2. Sort string `t` using `sort()`.
3. Compare the two sorted strings.
4. If `s == t`, return `true`.
5. Otherwise, return `false`.

### Example

```text
s = "racecar"
t = "carrace"

After sorting:

s = "aaccerr"
t = "aaccerr"

s == t
Therefore → true
```

---

## 🛠️ Concepts Used

* String
* Sorting
* `sort()`
* String Comparison
* STL

---

## ⏱️ Complexity

**Time Complexity:** `O(n log n)`

Sorting both strings takes `O(n log n)` time.

**Space Complexity:** `O(1)` auxiliary space

The solution does not use an additional data structure.
The sorting operation may use some internal memory depending on the implementation.

---

## 📝 My Notes

* Anagram means same characters with the same frequency.
* Character order does not matter.
* Sorting both strings makes comparison easy.
* If the sorted strings are equal, they are anagrams.
* `sort(s.begin(), s.end())` sorts the string in ascending order.

---

## 🔄 Revision Checklist

* [ ] Understand what an anagram means
* [ ] Understand why sorting works
* [ ] Understand `sort(s.begin(), s.end())`
* [ ] Understand string comparison using `==`
* [ ] Understand `O(n log n)` time complexity
* [ ] Try solving without looking at the code

---
Link : https://neetcode.io/problems/is-anagram/question

## 💻 Solution

See the code in [`Solution.cpp`](Solution.cpp).
