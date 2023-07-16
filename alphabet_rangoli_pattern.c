//C program to print alphabeet rangoli pattern:
#include <stdio.h>
void main()
{
    int row,i,j,n;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=i;j<row;j++)
        {
            printf("--");
        }
        for(j=1;j<=i;j++)
        {
            printf("%c ",(char)(65+row-j));
        }
        for(j=1;i>j;j++)
        {
            printf("%c ",(char)(65+row-(i-j)));
        }
        for(j=row;j>i;j--)
        {
            printf("--");
        }

    printf("\n");
    }
    for(i=1;i<row;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("--");
        }
        for(j=i;j<row;j++)
        {
            printf("%c ",(char)(64+row+i-j));
        }
        for(j=i;j<row-1;j++)
        {
            printf("%c ",(char)(66+j));
        }
        for(j=1;j<=i;j++)
        {
            printf("--");
        }
    printf("\n");
    }
    }

    
