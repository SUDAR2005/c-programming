/*c program to find the length of given string*/
#include <stdio.h>
int str_len(char str1[50])
{
    int i;
    for(i=0;i>=0;i++)
    {
        if(str1[i]=='\0')
            break;
    }
    return i;
}