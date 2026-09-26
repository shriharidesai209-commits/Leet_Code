void moveZeroes(int* nums, int numsSize) {
    int lastNonZeroFoundAt = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            nums[lastNonZeroFoundAt++] = nums[i];
        }
    }
    for (int i = lastNonZeroFoundAt; i < numsSize; i++) {
        nums[i] = 0;
    }
}
/*
Test Case 1 - Typical Case

Input:
nums = [0, 1, 0, 3, 12]

Expected Output:
[1, 3, 12, 0, 0]
*/

/*
Test Case 2 - Edge Case

Input:
nums = [0, 0, 0]

Expected Output:
[0, 0, 0]
*/
