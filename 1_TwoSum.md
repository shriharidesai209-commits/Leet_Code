## Problem: Two Sum (Easy)
**Link:** https://leetcode.com/problems/two-sum/

### Approach
Used a hash map to store each number and its index as we iterate through the array. For every element, we check if its complement (target minus the current element) already exists in the map, allowing us to find the solution in a single pass.

### Complexity
- Time: O(n)
- Space: O(n)

### Notes
Handling the check before insertion ensures we don't use the same element twice. Watch out for edge cases like negative numbers or arrays with duplicate values.