#include<stdio.h>
#include<stdlib.h>
int maxProfit(int* prices, int pricesSize) {
   int min=0;
   int profit;
   int maxProfit=0;
   for(int i=0;i<pricesSize;i++)
   {
        if(prices[i]<prices[min])
        {
            min=i;
        }
        profit=prices[i]-prices[min];
        if(profit>maxProfit)
        {
            maxProfit=profit;
        }
   }
   return maxProfit;
}
/*
Test Case 1 - Typical Case

Input:
prices = [7, 1, 5, 3, 6, 4]

Expected Output:
5
*/

/*
Test Case 2 - Edge Case

Input:
prices = [7, 6, 4, 3, 1]

Expected Output:
0
*/
