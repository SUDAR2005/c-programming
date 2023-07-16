/*C program to count consecutive 5's in a given array and also count if the second array is 6*/
#include <stdio.h>
void main()
{
    int n,i,count=0;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
    {
        printf("Enter %d elements of array:",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(array[i]==5 && (array[i+1]==5||array[i+1]==6))
            count+=1;
    }
    printf("The expected result is %d",count);
}
