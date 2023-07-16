#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
void main()
{
    int row1, col1, row2, col2, i, j, k;
    int **mat1, **mat2;
    printf("Enter the row of matrix 1: ");
    scanf("%d", &row1);
    printf("Enter the column of matrix 1: ");
    scanf("%d", &col1);
    printf("Enter the row of matrix 2: ");
    scanf("%d", &row2);
    printf("Enter the column of matrix 2: ");
    scanf("%d", &col2);
    mat1 = (int**)malloc(row1 * sizeof(int*));
    mat2 = (int**)malloc(row2 * sizeof(int*));
    int res[row1][col2];
    for(i = 0; i < row1; i++)
    {
        mat1[i] = (int*)malloc(col1 * sizeof(int));
    }
    
    for(i = 0; i < row2; i++)
    {
        mat2[i] = (int*)malloc(col2 * sizeof(int));
    }
    
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    
    for(i = 0; i < row2; i++)
    {
        for(j = 0; j < col2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col2; j++)
        {
            res[i][j] = 0;
            for(k = 0; k < row1; k++)
            {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    
    printf("\nThe resulting matrix is:\n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    
    for(i = 0; i < row1; i++)
    {
        free(mat1[i]);
    }
    
    for(i = 0; i < row2; i++)
    {
        free(mat2[i]);
    }
    
    free(mat1);
    free(mat2);
}