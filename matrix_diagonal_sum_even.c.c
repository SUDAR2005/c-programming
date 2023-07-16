#include<stdio.h>
void main()
{
    int size,sum=0;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int array[size][size],temp_array[size][size];
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        {  
            sum+=1;
            array[i][j]=sum;
        }
    if(size%2!=0)
    {
        for(int i=0;i<size;i++)
            for(int j=0;j<size;j++)
            {
                if(i%2!=0)
                {
                    temp_array[i][j]=array[i][size-j-1];
                }
                else
                {
                    temp_array[i][j]=array[i][j];
                }
            }
    }
    else
    {
        for(int i=0;i<size;i++)
          for(int j=0;j<size;j++)
                temp_array[i][j]=array[i][j];
    }
    for(int i=0;i<size;i++)
        for(int j=0;j<size;j++)
        {
            printf("%d\t",temp_array[i][j]);
        }
        printf("\n");
}