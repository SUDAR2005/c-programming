//C program to sort an array by pointers
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *arr,size,t;
    printf("Enter the number of items in an array: ");
    scanf("%d",&size);
    arr=(int*)calloc(size,sizeof(int));
    for(int i=0;i<size;i++)
    {
        printf("Enter the number of elements in %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                t=arr[i];
                arr[i]=arr[j];
                arr[j]=t;
            }
        }
    }
    for(int i=0;i<size;i++)
        printf("\nThe %d element is: %d",i+1,arr[i]);
    free(arr);
}