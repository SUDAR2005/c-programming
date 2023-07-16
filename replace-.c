//Find the letter 'a' and replace it with '-' (hyphen) in every words of the given set
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    int count,i,j;
    printf("Enter thew string: ");
    fgets(str,sizeof(str),stdin);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a')
        {
            str[i]='-';
        }
    }
    printf("\n%s",str);
}
