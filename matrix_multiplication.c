//C program to do matrix multiplication
#include <stdio.h>
void main()
{
    int mat1[2][3],mat2[3][2],i,j,k;
    int res[2][2];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\nEnter matrix 1 element %d%d: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("\nEnter matrix 2 element %d%d: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }
    int it=sizeof(mat1)/sizeof(mat1[0]);
    printf("%d",it);
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            res[i][j]=0;
            for(k=0;k<2;k++)
            {
                res[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
        
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    
}