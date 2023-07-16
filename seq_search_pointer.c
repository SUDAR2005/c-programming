//linear search operation using pointer
#include<stdio.h>
int LinearSearch(int*,int,int);
void main()
{
    int array[]={10,20,30},n,ind,s=sizeof(array)/sizeof(array[0]);
    int *ptr_arr=array;
    printf("\nEnter the element to be found:");
    scanf("%d",&n);
    ind=LinearSearch(ptr_arr,n,s);
    if(ind==-1)
        printf("\nThe number is not found in the given array");
    else
        printf("\nThe number exists %d index",ind);
}
int LinearSearch(int* arr,int find,int size)
{
    int i;
    for(i=0;i<size;i++)
        if(arr[i]==find)
            return i;
    return -1;
}