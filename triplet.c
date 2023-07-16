//C program to find the triplet of numbers from the given numbers
#include <stdio.h>
void main()
{
int arr[]={1,2,3,4,5},sum,size;
size=sizeof(arr)/sizeof(int);
printf("Enter the number to be checked: ");
scanf("%d",&sum);
for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
        for(int k=j+1;j<size;k++){
            if(arr[i]+arr[j]+arr[k]==sum)
                printf("{%d,%d,%d}",arr[i],arr[j],arr[k]);
        }
    }
}
}
