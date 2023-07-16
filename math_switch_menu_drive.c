//Write a menu driven program to do various math operations
#include <stdio.h>
#include <math.h>
void main()
{
    double oprn1,oprn2;
    char a;
    printf("Follow the instructions below:\np=>power\ns=square root\nc=>ceil\nf=>floor\nl=>log\n");
    l:
    printf("Enter the operation to be performed\n");
    scanf("%c",&a);
    switch(a)
    {
    case('p'):
        printf("Enter base & power:");
        scanf("%lf %lf",&oprn1,&oprn2);
        printf("%.3f",pow(oprn1,oprn2));
        break;
    case('s'):
        printf("\nEnter the value:");
        scanf("%lf",&oprn1);
        printf("%.3f",sqrt(oprn1));
        break;
    case('l'):
        printf("\nEnter the value:");
        scanf("%lf",&oprn1);
        printf("%.3f",log(oprn1));
        break;
    default:
        printf("\nInvalid check your input");
        goto l;
    }
}