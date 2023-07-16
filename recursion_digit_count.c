//C program to find the  number of digits using recursion
#include <stdio.h>
int count_digit(int num)
{
    static int digit=0;
    if(num!=0)
    {
        digit+=1;
        count_digit(num%10);
    }
    return digit;
}
int main()
{
    int a,b;
    printf("Enter the number: ");
    scanf("%d",&a);
    b=count_digit(a);
    printf("%d",b);
    return 0;
}