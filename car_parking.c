//Design a car parking algorithm to show which row has maximum no of cars
#include<stdio.h>
#include<stdlib.h>
void findMaxRow(int**,int,int);
int findMax(int*,int);
void main()
{
    int row,col,**parking,i,j;
    printf("Enter the number of rows in car parking: ");
    scanf("%d",&row);
    printf("\nEnter the number of col in car parking: ");
    scanf("%d",&col);
    parking=(int**)calloc(row,sizeof(int));
    for(i=0;i<col;i++)
    {
        parking[i]=(int*)calloc(col,sizeof(int));
    }
    printf("\nEnter 1 for filled slot and 0 for empty slot");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            l:
            printf("\nEnter the slot %d %d detail: ",i+1,j+1);
            scanf("%d",&parking[i][j]);
            if(parking[i][j]!=0 && parking[i][j]!=1 )
            {
                printf("\nInvalid input.");
                 goto l;
            }
        }
    }
    findMaxRow(parking,row,col);

    for (i = 0; i < row; i++) {
        free(parking[i]);
    }
    free(parking);

}
void findMaxRow(int** matrix,int row,int col)
{
    int i,j,n,a[row];
    for(i=0;i<row;i++)
    {
        n=0;
        for(j=0;j<col;j++)
        {
            n+=matrix[i][j];
        }
        a[i]=n;
    }
    n=findMax(a,col);
    printf("The maximum cars are at row %d",n);

}
int findMax(int* mat,int col)
{
    int max=mat[0],i,index;
    for(i=1;i<col;i++)
    {
        if(max<mat[i])
            max=mat[i];
            index=i;
    }
    return index;
}