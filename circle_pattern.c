#include<stdio.h>
void main()
{
    int r,i,j;
    printf("Enter the radius of circle: ");
    scanf("%d",&r);
    for(i=-r;i<=r;i++)
    {
        for(j=-r;j<=r;j++)
        {
            if((i*i)+(j*j)<r*r)
                printf(". ");
            else
                printf("  ");
        }
        printf("\n");
    }
}