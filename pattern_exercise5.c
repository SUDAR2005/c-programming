//C program to print ex 2 pattern
#include <stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the no of rows: \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j<=n)
                printf("  ");
            else
                printf("%d ",n+1-j);
        }
        for(j=1;j<i;j++)
        {
            printf("%d ",j+1);
        }
        printf("\n");
    }
}