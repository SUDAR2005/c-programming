//C program to find the repeated elements in array
#include <stdio.h>
void main()
{
    int i,j;
    char str[20],s,u=' ';
    printf("Enter the string:");
    scanf("%s",str);
    for(i=0;i<20;i++);{
        s=str[i];
        for(j=i;j<20;j++);{
            if(s==str[j] && u!=str[j])
            {
                printf("%c",str[i]);
            }
        }
    }
}