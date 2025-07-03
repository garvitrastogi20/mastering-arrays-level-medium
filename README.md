# 🧠 LeetCode Medium-Level Array Problems

This repository contains solutions to medium-level array problems from [LeetCode](https://leetcode.com/), with each problem implemented using **Brute Force**, **Better**, and **Optimal** approaches.

Each solution includes:
- Code in C++
- Step-by-step implementations
- Time and Space complexities
- Specific algorithms used for optimal solutions

---

## 📚 Table of Contents

| S.No | Problem | Approach | Time Complexity | Space Complexity | Algorithm Used |
|------|---------|----------|-----------------|------------------|----------------|
| 1 | Two Sum | Brute Force | O(n²) | O(1) | - |
| 2 | Two Sum | Better | O(n) | O(n) | Hash Map |
| 3 | Two Sum | Optimal | O(n) | O(n) | Hash Map |
| 4 | Sort 0s, 1s, and 2s | Brute Force | O(n log n) | O(1) | sort() |
| 5 | Sort 0s, 1s, and 2s | Better | O(n) | O(1) | Counting |
| 6 | Sort 0s, 1s, and 2s | Optimal | O(n) | O(1) | Dutch National Flag |
| 7 | Majority Element (>n/2) | Brute Force | O(n²) | O(1) | - |
| 8 | Majority Element (>n/2) | Better | O(n) | O(n) | Hash Map |
| 9 | Majority Element (>n/2) | Optimal | O(n) | O(1) | Moore's Voting Algorithm |
| 10 | Maximum Subarray Sum | Brute Force | O(n³) | O(1) | - |
| 11 | Maximum Subarray Sum | Better | O(n²) | O(1) | - |
| 12 | Maximum Subarray Sum | Optimal | O(n) | O(1) | Kadane’s Algorithm |
| 13 | Rearrange Array by Sign | Optimal | O(n) | O(n) | Two-Pointer |
| 14 | Alternate Positive Negative (Start Positive) | Optimal | O(n) | O(n) | Two-Pointer |
| 15 | Next Permutation | Better | O(n) | O(1) | STL `next_permutation()` |
| 16 | Next Permutation | Optimal | O(n) | O(1) | Lexicographical Algorithm |

---

## ✅ Problems with Explanation

### 1. Two Sum
(…same as above…)

---

### 2. Sort 0s, 1s, and 2s
(…same as above…)

---

### 3. Majority Element (>n/2 times)
(…same as above…)

---

### 4. Maximum Subarray Sum
(…same as above…)

---

### 5. Rearrange Array by Sign
- Rearrange elements so that positives and negatives appear alternately starting with any sign.
- Remaining elements (if any) are appended at the end.

**Optimal**  
- Time: O(n)  
- Space: O(n)  
- Algorithm: Two-Pointer

---

### 6. Alternate Positive Negative (Start Positive)
- Rearrange elements to alternate signs but always start with a **positive number**.
- Extra positive/negative values are appended at the end **without changing order**.

**Optimal**  
- Time: O(n)  
- Space: O(n)  
- Algorithm: Two-Pointer

---

### 7. Next Permutation

Generate the next lexicographically greater permutation of an array. If not possible, return the smallest (i.e., sorted) permutation.

**Example:**
- Input: `[2, 1, 5]`
- Output: `[2, 5, 1]`

---

**Better (STL Solution)**  
Uses built-in `next_permutation()` from `<algorithm>`.

- **Time:** O(n)  
- **Space:** O(1)  
- **Algorithm:** STL

---

**Optimal (Custom Logic)**  
Steps:
1. Find the **first decreasing element** from the end: `a[i] < a[i+1]`
2. Find the **just larger element** to the right of `a[i]`
3. **Swap** both and **reverse** the suffix starting at `i+1`

- **Time:** O(n)  
- **Space:** O(1)  
- **Algorithm:** Lexicographical Permutation (Custom)

---

## 🛠️ Tech Stack

- Language: **C++**
- Platform: **LeetCode**
- Editor: **VS Code**

---

## 📌 Notes

- This repo will be regularly updated with more problems.
- Each `.cpp` file is structured clearly with comments.
- Brute → Better → Optimal format is followed for learning progression.

---

## 📄 License

This project is licensed under the MIT License.
