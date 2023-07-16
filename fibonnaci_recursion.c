#include <stdio.h>
#include <stdlib.h>
void fibonnaci(int);
int count,a=0,b=1;
void main()
{
    printf("Enter the number:");
    scanf("%d",&count);
    printf("%d\t",a);
    count--;
    fibonnaci(count);
}
void fibonnaci(int c)
{
    int temp;
    if(count==0)
        exit(0);
    temp=a;
    a=b;
    b=temp+b;
    printf("%d\t",a);
    count=count-1;
    return(fibonnaci(count));
}