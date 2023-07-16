/* write a C script to print square and cube of given numbers by getting the number of rows as input from the user*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i,row;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        printf("\n%d\t%d\t%d",i,i*i,i*i*i);
    }
}