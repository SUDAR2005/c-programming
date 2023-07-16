//C program to find the simple interest
#include <stdio.h>
void main()
{
    float p,n,r;
    float si;
    printf("Enter the values of p,n and r:\n");
    scanf("%f %f %f",&p,&n,&r);
    si=(p*n*r)/100;
    printf("The simple interest is %.3f",si);
}