//C program to generate matrix using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
int** generate(int row,int col)
{
    int **matrix,i,j;
    matrix=(int**)malloc(sizeof(int*)*row);
    for(i=0;i<row;i++)
    {
        matrix[i]=(int*)malloc(sizeof(int)*col);
        for(j=0;j<col;j++)
        {
            printf("Enter element %d%d",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    return matrix;
}
void main()
{
    int i,j;
    int** matrix;
    matrix=generate(3,4);
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d",matrix[i][j]);
        }
    }
    free(matrix);
}