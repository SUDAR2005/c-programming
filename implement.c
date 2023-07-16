//Implelement array to pointer and function using c
#include<stdio.h>
void changeArray(int array[])
{
    for(int i=0;i<5;i++)
    {
        scanf("%d",&array[i]);
    }
}
void main()
{
    int arr[]={1,2,3,4,5},i;
    changeArray(arr);
    for(i=0;i<5;i++)
    {
        printf("\n%d",arr[i]);
    }
    

}