## Problem: Reverse String (Easy)
**Link:** https://leetcode.com/problems/reverse-string/

### Approach
Applied a two-pointer technique starting at both ends of the character array (left at index 0 and right at the final index). We swap the elements at these pointers and move them toward the center until they meet.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
The problem explicitly requires modifying the input array in-place with O(1) extra memory, which this approach satisfies completely.