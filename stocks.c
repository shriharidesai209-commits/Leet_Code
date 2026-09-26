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
int main()
{
    int n;
    printf("Enter the size: ");
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    int profit=maxProfit(arr, n);
    printf("%d", profit);
}