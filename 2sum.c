#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j]==target)
            {
                int* answer=(int*)malloc(2*sizeof(int));
                answer[0]=i;
                answer[1]=j;
                *returnSize=2;
                return answer;
            }
        }
    }
    *returnSize=0;
}
int main()
{
    int numsSize;
    printf("Enter the size: ");
    scanf("%d", &numsSize);
    int* nums=(int*)malloc(numsSize *sizeof(int));
    printf("Enter the elements: ");
    for(int i=0;i<numsSize;i++)
    {
        scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);
    int returnSize;
    int* answer=twoSum(nums, numsSize, target, &returnSize);
    if(answer!=NULL)
    {
        printf("[%d, %d]", answer[0], answer[1]);
    }
    else
    {
        printf("No such elements found");
    }
    return 0;
}
/*
Test Case 1 - Typical Case

Input:
nums = [2, 7, 11, 15]
target = 9

Expected Output:
[0, 1]
*/

/*
Test Case 2 - Edge Case

Input:
nums = [3, 3]
target = 6

Expected Output:
[0, 1]
*/
