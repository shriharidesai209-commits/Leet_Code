## Problem: Move Zeroes (Easy)
**Link:** https://leetcode.com/problems/move-zeroes/

### Approach
Used a two-pointer approach where one pointer iterates through the array to find non-zero elements, and the other pointer tracks the insertion index. Whenever a non-zero element is found, it is swapped into place, and all remaining positions at the end are filled with zeros.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
This approach ensures an in-place modification of the array without using extra memory for a secondary array.