## Problem: Longest Common Prefix (Easy)
**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach
Sorted the array of strings alphabetically, which allows us to only compare the first and the last strings in the array. Since a common prefix must be shared by all strings, the common prefix of the entire array will be the common prefix of these two extreme elements.

### Complexity
- Time: O(n log n * m) due to sorting, where n is the number of strings and m is length.
- Space: O(1) auxiliary space.

### Notes
Always check for edge cases like an empty array or a single string input to prevent index out of bounds errors.