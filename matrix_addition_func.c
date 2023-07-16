#include<stdio.h>
#include<stdlib.h>
int** add(int** ,int**,int,int );
int** generate_matrix(int,int);
void main()
{
    int row,col,i,j;
    printf("Enter the  number of rows and column: ");
    scanf("%d %d",&row,&col);
    int** matrix1=generate_matrix(row,col);
    int** matrix2=generate_matrix(row,col);
    int** result=add(matrix1,matrix2,row,col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",result[i][j]);
        }
        printf("\n");
    }
    free(matrix1);
    free(matrix2);
    free(result);
}
int** add(int** m1,int** m2,int row,int col)
{
    int i,j;
    int** result;
    result=malloc(sizeof(int)*row);
    for(i=0;i<row;i++)
    {
        result[i]=malloc(sizeof(int)*col);
        for(j=0;j<col;j++)
        {
            result[i][j]=m1[i][j]+m2[i][j];
        }
    }
    return result;
}
int** generate_matrix(int r,int c)
{
    int i,j;
    int**mat=malloc(sizeof(int)*r);
    for(i=0;i<r;i++)
    {
        mat[i]=malloc(sizeof(int)*c);
        for(j=0;j<c;j++)
        {
            printf("Enter element %d %d: ",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    return mat;
}
