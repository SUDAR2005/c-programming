//C program to print fibonnaci series upto n elements and print its sum
#include <stdio.h>
void main()
{
    int limit,temp,i,num1=0,num2=1,sum=0;
    printf("Enter the limit of series: ");
    scanf("%d",&limit);
    printf("The series is\n");
    printf("%d\n",num1);
    printf("%d\n",num2);
    sum=num1+num2;
    for(i=0;i<limit-2;i++)
    {
        temp=num1+num2;
        printf("%d\n",temp);
        sum+=temp;
        num1=num2;
        num2=temp;

    }
    printf("The sum is: %d",sum);
}