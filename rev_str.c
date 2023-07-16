#include <stdio.h>
#include <string.h>
void main()
{
    int i,len,j;
    char str1[50],temp;
    printf("\nEnter the string to be reversed: ");
    scanf("%s",&str1);
    len=strlen(str1);
    j=len-1;
    printf("\nThe entered string is:%s", str1);
    for(i=0;i<j;i++)
    {
        temp=str1[i];
        str1[i]=str1[j];
        str1[j]=temp;
        j--;
    }
    printf("\nThe reversed string is %s", str1);
}