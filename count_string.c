//c program to count the number of letters in word using recursion.
#include<stdio.h>
#include<string.h>
int i=0;
int count(char*);
void main()
{
    char S[100];
    printf("Enter the character: ");
    gets(S);
    printf("The number of characters is: %d",count(S));
    i=0;
}
int count(char* str)
{
    if(str[i]=='\0')
        return i;
    i++;
    return count(str);
}