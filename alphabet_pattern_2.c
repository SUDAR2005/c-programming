/*C program to print the following pattern
            A
          B C D
        D E F G H
                    */
#include <stdio.h>
void main()
{
    int row,i,j,a=1;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<=row;j++)
        {
            if(i+j>=row)
            {
                printf("%c ",(char)(64+a));
                a++;
            }
            else
                printf("  ");
        }
        for(j=1;j<i;j++,a++)
        {
            printf("%c ",(char)(64+a));
        }
    printf("\n");
    }
}