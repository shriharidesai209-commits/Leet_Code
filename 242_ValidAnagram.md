## Problem: Valid Anagram (Easy)
**Link:** https://leetcode.com/problems/valid-anagram/

### Approach
Used a frequency counter (an array of size 26 or a hash map) to record the occurrences of each character in the first string. We then iterate through the second string, decrementing the counts, and verify if all values end up at zero.

### Complexity
- Time: O(n)
- Space: O(1) since the character set is limited to a fixed alphabet size (26 lowercase English letters).

### Notes
Checking if the lengths of the two strings are equal right at the beginning provides an immediate optimization shortcut.