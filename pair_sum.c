//C program to print pair values that sum up to 150
#include <stdio.h>
void main()
{
    int i,j;
    printf("The elements are:\n");
    for(i=0;i<=150;i++)
    {
        for(j=0;j<=150;j++)
        {
            if(i+j==150)
                printf("(%d,%d)\n",i,j);
        }
    }
}