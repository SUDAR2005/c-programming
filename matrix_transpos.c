//C program to find the transpose of given matrix
#include <stdio.h>
void main()
{
    int row,col,i,j;
    printf("Enter the nunmber of rows: ");
    scanf("%d %d",&row,&col);
    int mat[row][col],trans[col][row];
    if(row!=col)
    {
        printf("The matrix doesn't have transpose");
    }
    else
    {
        for(i=0;i<row;i++)
        {

            for(j=0;j<col;j++)
            {
                printf("Enter %d %d element: ",i+1,j+1);
                scanf("%d",&mat[i][j]);
                trans[j][i]=0;
                trans[j][i]=mat[i][j];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d\t",trans[i][j]);
            }
            printf("\n");
        }
    }

}