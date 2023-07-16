//C program to check whether the string is palindrome are not
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void main()
{
    char *str,*revstr;
    int size,i;
    printf("Enter the size of string: ");
    scanf("%d",&size);
    str=malloc((size+1)*sizeof(char));
    revstr=malloc((size+1)*sizeof(char));
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;i<size;i++)
    {
        revstr[size-i-1]=str[i];
    }
    revstr[size]='\0';
    if(strcmp(str,revstr)==0)
        printf("\nThe string is palindrome.");
    else
        printf("\nThe string is not palindrome.");
    free(str);
    free(revstr);
}