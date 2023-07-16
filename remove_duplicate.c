//C program to remove duplicate element
#include <stdio.h>
void main()
{
    int i,j,k,size,array[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(i=0;i<size;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<size;i++){
        for(j=i+1;j<size;j++){
            if(array[i]==array[j]){
                for(k=j;k<size;k++){
                    array[k]=array[k+1];
                }
            size--;
            k--;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",array[i]);
    }
}