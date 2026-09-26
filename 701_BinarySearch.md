## Problem: Binary Search (Easy)
**Link:** https://leetcode.com/problems/binary-search/

### Approach
Implemented a classic two-pointer binary search using low and high bounds on a sorted array. In each iteration, we check the middle element, discard half of the search space depending on whether the target is larger or smaller, and repeat.

### Complexity
- Time: O(log n)
- Space: O(1)

### Notes
Careful with calculating the middle index (`low + (high - low) / 2`) to avoid potential integer overflow issues in languages like C/C++.