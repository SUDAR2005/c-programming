//C code to create free space in a array
#include<stdio.h>
void main()
{
    int array[]={3,7,4,1,6},i;
    int pos,size=sizeof(array)/sizeof(int);
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    for(i=pos;i<size;i++)
    {
        array[i+1]=array[i];
    }
    array[pos]=4;
    for(i=0;i<size;++i)
    {
        printf("%d\n",array[i]);
    }
}