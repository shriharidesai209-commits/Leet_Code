#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* longestCommonPrefix(char** strs, int strsSize) {
    if(strsSize==0)
    {
        return "";
    }
    for(int i=0;strs[0][i]!='\0';i++)
    {
        char ch=strs[0][i];
        for(int j=1;j<strsSize;j++)
        {
            if(strs[j][i]=='\0' || strs[j][i]!=ch)
            {
                strs[0][i]='\0';
                return strs[0];
            }
        }
    }
    return strs[0];
}
{
    int n;
    char *str[]={"flower", "flow", "flight"};
    n=sizeof(str)/sizeof(str[0]);
    char *out=longestCommonPrefix(&str, n);
    printf("%s", *out);
    return 0;
}