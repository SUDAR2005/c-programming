//C program to find the sum of 10 even numbers
#include <stdio.h>
void main()
{
    int i=0,sum=0,num;
    while(i<10)
    {
        printf("\nEnter the number:");
        scanf("%d",&num);
        if(num%2!=0)
        {
            printf("Enter even number\n");
            continue;
        }
        if(num%2==0)
        {
            if(num%3==0)
            {
                sum+=num;
            }
            i++;
        }
    }
    printf("\nThe sum is %d",sum);
}