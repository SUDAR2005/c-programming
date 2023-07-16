/*C program to print alphabet pattern
            A
          B A B
        C B A B C
      D C B A B C D
    E D C B A B C D E */
#include <stdio.h>
void main()
{
    int row,i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(j=0;j<row;j++)
        {
            if(i+j<4)
                printf("  ");
            else
                printf("%c ",(char)(64+row-j));
        }
        for(j=0;j<i;j++)
        {
            printf("%c ",(char)(66+j));
        }
        printf("\n");
    }
}