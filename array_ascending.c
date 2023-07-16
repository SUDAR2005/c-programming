//C program to print array in ascending order
#include <stdio.h>
void main()
{
    int arr[5],temp=0,i,j,count;
    printf("Enter the count: ");
    scanf("%d",&count);
    for(i=0;i<count;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<count;++i)
    {
        for(j=i+1;j<count;++j)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
     for(i=0;i<count;i++)
    {
        printf("\n%d",arr[i]);
    }

}