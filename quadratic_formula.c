//C program to find quadratic root
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
void main()
{
    float a,b,c;
    printf("Enter the value of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    if(((b*b)-(4*a*c))<0)
    {
        printf("\nNo real roots.");
        exit(0);
    }
    printf("%f %f",(-b+sqrt((b*b)-(4*a*c)))/(2*a),(-b-sqrt((b*b)-(4*a*c)))/(2*a));
}