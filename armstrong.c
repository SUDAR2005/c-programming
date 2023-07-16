#include<stdio.h>
#include<math.h>
void main()
{
    int num,res,temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        res+=pow((num%10),3);
        num/=10;
    }
    if(res=temp)
        printf("\nYes");
    else
        printf("\nNo");
}