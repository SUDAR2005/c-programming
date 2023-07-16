//Menu driven C program to find matrix is identity are not and transpose
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int row,col,i,j;char a;
    int** matrix;
    printf("Enter the number of rows: ");
    scanf("%d %d",&row,&col);
    printf("\nenter the thing to be found: ");
    scanf(" %c",&a);
    matrix=malloc(sizeof(int)*row);
    for(i=0;i<row;i++)
    {
        matrix[i]=malloc(sizeof(int)*col);
        for(j=0;j<col;j++)
        {
            printf("\nEnter the element %d%d: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    switch (a)
    {
    case ('i'):
    case ('I'):
    {
        if(row!=col)
        {
            printf("\nNot identity");
            break;
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++){
            if((i==j && matrix[i][j]!=1)||(i!=j && matrix[i][j]!=0))
            {
                printf("\nNot Identity");
                break;
            }
            }
        }
        printf("Identity");
        break;
    }
    case('t'):
    case('T'):
    {
        int tranpose[col][row];
        for(i=0;i<row;i++){
            for(j=0;j<col;j++)
            {
                tranpose[j][i]=matrix[i][j];
            }
        }
        for (i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d\t",tranpose[i][j]);
            }
            printf("\n");
        }
        
        }
    }
     free(matrix);
    }