//C program to search for position of element in array
#include<stdio.h>
void main()
{
    int array[10],num,i;
    printf("Enter the number to be found: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&array[i]);
    }
    for(i=0;i<num;i++)
    {
        if(num==array[i])
        {
            printf("The position is: %d",i+1);
            break;
        }
    }
}