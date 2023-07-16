//C program to print diamond pattern for odd and even heights
#include <stdio.h>
void main()
{
    int height,i,j,row;
    printf("Enter the height: ");
    scanf("%d",&height);
    row=height/2;
    if(height%2==0)
    {
        for(i=1;i<=row;i++)
        {
            for(j=row;j>=i;j--)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
            for(j=1;j<i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for(i=1;i<=row;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("  ");
            }
            for(j=row;j>=i;j--)
            {
                printf("* ");
            }
            for(j=row-1;j>=i;j--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    if(height%2!=0)
        {
            row=row+1;
            for(i=1;i<=row;i++)
            {   
                for(j=row;j>=i;j--)
                {
                    printf("  ");
                }
                for(j=1;j<=i;j++)
                {
                    printf("* ");
                }
                for(j=1;j<i;j++)
                {
                    printf("* ");
                }
                printf("\n");
            }
            for(i=1;i<=row-1;i++)
            {
                for(j=1;j<=i+1;j++)
                {
                    printf("  ");
                }
                for(j=row-1;j>=i;j--)
                {
                    printf("* ");
                }
                for(j=row-2;j>=i;j--)
                {
                    printf("* ");
                }
                printf("\n");
            }
    }

}