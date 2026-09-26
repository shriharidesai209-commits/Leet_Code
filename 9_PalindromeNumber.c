#include <stdbool.h>

bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }

    int original = x;
    int remainder;
    long reversed = 0;

    while (x > 0) {
        remainder = x % 10;
        reversed = reversed * 10 + remainder;
        x = x / 10;
    }
    return (original == reversed);
}
/*
Test Case 1 - Typical Case

Input:
s = "madam"

Expected Output:
true
*/

/*
Test Case 2 - Edge Case

Input:
s = "a"

Expected Output:
true
*/
