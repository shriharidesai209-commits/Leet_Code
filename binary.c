#include<stdio.h>
#include<stdlib.h>
int search(int* nums, int numsSize, int target) {
    int low=0;
    int high=numsSize-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        {
            if(nums[mid]==target)
            return mid;
            if(nums[mid]<target)
            low=mid+1;
            else
            high=mid-1;
        }
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int *arr=(int*)malloc(n*sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<n;i++)
    scanf("%d", &arr[i]);
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);
    int result=search(arr, n, target);
    printf("%d", result);
    return 0;
}
