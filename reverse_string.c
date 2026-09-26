#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverseString(char* s, int sSize) {
    char temp;
    int i=0;
    int j=sSize-1;
    while(i<j)
    {
          temp=s[i];
          s[i]=s[j];
          s[j]=temp; 
          i++;
          j--;
    }      
}
int main()
{
    int n;
    printf("Enter the size of the string: ");
    scanf("%d", &n);
    char *s=(char*)malloc((n+1)*sizeof(char));
    printf("Enter the string: ");
    scanf("%s", s);
    reverseString(s, n);
    printf("%s", s);
    return 0;
}
/*
Test Case 1 - Typical Case

Input:
s = "hello"

Expected Output:
"olleh"
*/

/*
Test Case 2 - Edge Case

Input:
s = "a"

Expected Output:
"a"
*/
