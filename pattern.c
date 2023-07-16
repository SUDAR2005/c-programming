//C program to print pattern
#include<stdio.h>
void main()
{
    int row,i,j;
    printf("\nEnter the rows:");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i+j<row-1)
            {
                printf(" \t");
            }
            else{
                printf("%d\t",row-j);
            }
        }

        for(j=1;j<=i;j++)
        {
            printf("%d\t",j+1);
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=row;j>i;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}