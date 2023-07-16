#include<stdio.h>
void main()
{
    int limit,first=0,last=1,t=0+1,sum=0+1;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("\nThe fibonnaci series is: ");
    printf("\n %d , %d,",first,last);
    while(t<=limit)
    {
        printf(" %d ,",t);
        sum+=t;
        first=last;
        last=t;
        t=first+last;

    }
    printf("The sum is: %d",sum);
}