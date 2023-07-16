/*C program that takes a string and two integers (n1, n2). Now reverse the sequence of characters of the string between n1 and n2.*/
#include <stdio.h>
char* swap(char str[],int pos1,int pos2)
{
    char temp;
    temp=str[pos1];
    str[pos1]=str[pos2];
    str[pos2]=temp;
    return str;
}
void main()
{
    char str1[50];
    printf("Enter the string: ");
    scanf("%[^\n]s",str1); //can also use gets(str1);
    printf("The required string is: %s",swap(str1,2,3));
}