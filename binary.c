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
/*
Test Case 1 - Typical Case

Input:
nums = [-1, 0, 3, 5, 9, 12]
target = 9

Expected Output:
4
*/

/*
Test Case 2 - Edge Case

Input:
nums = [5]
target = 5

Expected Output:
0
*/
