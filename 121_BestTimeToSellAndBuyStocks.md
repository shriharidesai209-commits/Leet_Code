## Problem: Best Time to Buy and Sell Stock (Easy-Medium)
**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach
Iterated through the price array while tracking the minimum price seen so far. At each step, calculated the profit if we were to sell on the current day, and continuously updated our maximum profit tracker.

### Complexity
- Time: O(n)
- Space: O(1)

### Notes
If prices keep dropping continuously, the minimum price updates downwards, and the max profit naturally defaults to zero.