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
| 1 | [Two Sum](codes/2sumbruteforce.cpp) | Brute Force | O(n²) | O(1) | - |
| 2 | [Two Sum](codes/2sumbetter.cpp) | Better | O(n) | O(n) | Hash Map |
| 3 | [Two Sum](codes/2sumoptimal.cpp) | Optimal | O(n) | O(n) | Hash Map (2-Pass) |
| 4 | [Sort 0s, 1s, and 2s](codes/sortanarray0-1-2bruteforce.cpp) | Brute Force | O(n log n) | O(1) | sort() |
| 5 | [Sort 0s, 1s, and 2s](codes/sortanarray0-1-2better.cpp) | Better | O(n) | O(1) | Counting |
| 6 | [Sort 0s, 1s, and 2s](codes/sortanarray0-1-2optimal.cpp) | Optimal | O(n) | O(1) | Dutch National Flag |
| 7 | [Majority Element (>n/2)](codes/majorityelementbruteforce.cpp) | Brute Force | O(n²) | O(1) | - |
| 8 | [Majority Element (>n/2)](codes/majorityelementbetter.cpp) | Better | O(n) | O(n) | Hash Map |
| 9 | [Majority Element (>n/2)](codes/majorityelementoptimal.cpp) | Optimal | O(n) | O(1) | Moore's Voting Algorithm |
| 10 | [Maximum Subarray Sum](codes/maximumsubarraysumbruteforce.cpp) | Brute Force | O(n³) | O(1) | - |
| 11 | [Maximum Subarray Sum](codes/maximumsubarraysumbetter.cpp) | Better | O(n²) | O(1) | - |
| 12 | [Maximum Subarray Sum](codes/maximumsubarraysumoptimal.cpp) | Optimal | O(n) | O(1) | Kadane’s Algorithm |
| 13 | [Rearrange Array by Sign](codes/rearrangearraybysign.cpp) | Optimal | O(n) | O(n) | Two-Pointer |
| 14 | [Alternate Positive Negative (Start Positive)](codes/rearrangearraybysignalternate.cpp) | Optimal | O(n) | O(n) | Two-Pointer |
| 15 | [Next Permutation](codes/nextpermutationbetter.cpp) | Better | O(n) | O(1) | STL `next_permutation()` |
| 16 | [Next Permutation](codes/nextpermutationoptimal.cpp) | Optimal | O(n) | O(1) | Lexicographical Algorithm |
| 17 | [Leaders in an Array](codes/leadersinanarraybruteforce.cpp) | Brute Force | O(n²) | O(n) | Nested Loop |
| 18 | [Leaders in an Array](codes/leadersinanarrayoptimal.cpp) | Optimal | O(n) | O(n) | Reverse Traversal |
| 19 | [Longest Consecutive Sequence](codes/longestconsecutivesequencebruteforce.cpp) | Brute Force | O(n²) | O(1) | find() |
| 20 | [Longest Consecutive Sequence](codes/longestconsecutivesequencebetter.cpp) | Better | O(n log n) | O(1) | Sorting |
| 21 | [Longest Consecutive Sequence](codes/longestconsecutivesequenceoptimal.cpp) | Optimal | O(n) | O(n) | Hash Set |
| 22 | [Set Matrix Zero](codes/setmatriceszerobruteforce.cpp) | Brute Force | O(n³) | O(1) | Mark & Replace |
| 22 | [Set Matrix Zero](codes/setmatriceszerobetter.cpp) | Better | O(n × m) | O(n + m) | Row-Col Flags |
| 22 | [Set Matrix Zero](codes/setmatriceszerooptimal.cpp) | Optimal | O(n × m) | O(1) | Matrix Marking |
| 23 | [Rotate Matrix by 90°](codes/rotatematrixby90bruteforce.cpp) | Brute Force | O(n²) | O(n²) | Index Mapping |
| 24 | [Rotate Matrix by 90°](codes/rotatematrixby90optimal.cpp) | Optimal | O(n²) | O(1) | Transpose + Reverse |
| 25 | [Spiral Matrix](codes/spiralofmatrix.cpp) | Optimal | O(n × m) | O(1) | Boundary Traversal |



---

## ✅ Problems with Explanation

### 1. Two Sum
Given an array and a target, return indices of the two numbers such that they add up to the target.

- **Brute Force:** Check every pair.
- **Better:** Use a Hash Map to store visited elements.
- **Optimal:** Use Hash Map while iterating to find complement.

---

### 2. Sort 0s, 1s, and 2s
Sort the array containing only 0s, 1s, and 2s.

- **Brute Force:** Use sort function.
- **Better:** Use counting approach.
- **Optimal:** Use Dutch National Flag algorithm.

---

### 3. Majority Element (> n/2 times)
Find the element that appears more than n/2 times.

- **Brute Force:** Count every element.
- **Better:** Use a Hash Map.
- **Optimal:** Use Moore’s Voting Algorithm.

---

### 4. Maximum Subarray Sum
Find the contiguous subarray with the maximum sum.

- **Brute Force:** Generate all subarrays.
- **Better:** Precompute subarray sums.
- **Optimal:** Kadane’s Algorithm.

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

### 8. Leaders in an Array

An element is a **leader** if it is greater than all the elements to its right.

**Example:**
- Input: `[10, 22, 12, 3, 0, 6]`
- Output: `[22, 12, 6]`  
(22 is greater than all elements to its right, same with 12 and 6)

---

**Brute Force**  
- Traverse each element and check all elements to its right.
- **Time:** O(n²)  
- **Space:** O(n)  
- **Algorithm:** Nested Loop

---

**Optimal**  
- Traverse from right to left while maintaining a running maximum.
- Add element to result if it is greater than the current max.
- **Time:** O(n)  
- **Space:** O(n)  
- **Algorithm:** Reverse Traversal


---
### 9. Longest Consecutive Sequence

Given an unsorted array of integers, find the length of the longest sequence of consecutive elements.

**Example:**  
Input: `[4,100,102,3,2,1,101,1,1,104]`  
Output: `4`  
Explanation: The longest consecutive sequence is `[1,2,3,4]`

---

**Brute Force**  
- For every element, check if `current + 1` exists in array using `find()`
- **Time:** O(n²)  
- **Space:** O(1)  
- **Algorithm:** Linear Search with `find()`

---

**Better**  
- Sort the array first  
- Skip duplicates  
- Count sequence lengths by comparing adjacent elements  
- **Time:** O(n log n)  
- **Space:** O(1)  
- **Algorithm:** Sorting

---

**Optimal**  
- Use a Hash Set to store elements  
- For each element, start a count only if `(element - 1)` is **not** in the set  
- **Time:** O(n)  
- **Space:** O(n)  
- **Algorithm:** Hash Set (Unordered Set)

---

### 10. Set Matrix Zero

Given an `n x m` matrix, if any element is 0, set its **entire row and column** to 0.

**Example:**
**Input:**
```
1 1 1 1
1 0 0 1
1 1 0 1
1 1 1 1
```
**Output:**
```
1 0 0 1
0 0 0 0
0 0 0 0
1 0 0 1
```
---

**Brute Force**  
- When you find a `0`, mark the whole row and column with `-1` first.  
- In a second pass, convert all `-1` to `0`.

- **Time:** O(n³)  
- **Space:** O(1)  
- **Algorithm:** Mark & Replace

---

**Better**  
- Use two arrays `row[]` and `col[]` to store which rows/columns need to be zeroed.
- After marking, update the matrix accordingly.

- **Time:** O(2 × n × m)  
- **Space:** O(n + m)  
- **Algorithm:** Row-Col Flags


---

**Optimal**  
- Use the first row and column of the matrix to store flags.
- Use an extra variable `col0` to separately track if the first column needs to be zero.

- **Time:** O(n × m)  
- **Space:** O(1)  
- **Algorithm:** Matrix Marking



---

### 11. Rotate Matrix by 90 Degrees (Clockwise)

Rotate an `n x n` matrix 90° clockwise.

**Example:**
```
INPUT       OUTPUT
1 2 3       7 4 1
4 5 6  ->   8 5 2
7 8 9       9 6 3
```

---

**Brute Force**  
- Create new matrix  
- Place `a[i][j]` → `ans[j][n-1-i]`  
- **Time:** O(n²)  
- **Space:** O(n²)  
- **Algorithm:** Index Mapping  


---

**Optimal**  
- Step 1: Transpose  
- Step 2: Reverse every row  
- **Time:** O(n²)  
- **Space:** O(1)  
- **Algorithm:** Transpose + Reverse  


---
### 12. Spiral Matrix

Print elements of the matrix in **spiral order** (clockwise).

**Example:**
```
Input:
1 2 3
4 5 6
7 8 9

Output:
1 2 3 6 9 8 7 4 5
```
---

**Optimal**  
- Traverse using four boundaries: `top`, `bottom`, `left`, `right`  
- Update boundaries after traversing each edge  
- **Time:** O(n × m)  
- **Space:** O(1)  
- **Algorithm:** Boundary Traversal (Spiral Order)

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


