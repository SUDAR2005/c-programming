//Program to find armstrong number using C
#include <stdio.h>
void main()
{
    int num,temp,res=0,i,last;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;
    while (num!=0)
    {
        last=num%10;
        res+=last*last*last;
        num=num/10;
    }
    if(res==temp)
        printf("yes");
    else
        printf("no");
}