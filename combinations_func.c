/*Write functions for performing the following operations:
    a. Find factorial of a number
    b. Find quotient and reminder of the given two numbers
    c. Find the roots of the quadratic equation 
*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
float quad_res1,quad_res2,divi;
int quo,fact=1;
int factorial(int);
void division(int , float);
void quadratic(float a,float b,float c);
void main()
{
    int num1;
    float a,b,c,divisor;
    printf("Enter the number whose factorial quotient and reminder has to be found: ");
    scanf("%d",&num1);
    printf("\nEnter the values of a,b,c in quadrartic quadratic equation: ");
    scanf("%f %f %f",&a,&b,&c);
    printf("\nEnter the value for divisor:");
    scanf("%f",&divisor);
    division(num1,divisor);
    printf("\nThe factorial is : %d",factorial(num1));
    printf("\nthe quotient is:%d the remainder is:%d",quo,divi);
    quadratic(a,b,c);
    printf("\npossible soln1:%f soln2:%f",quad_res1,quad_res2);
}
int factorial(int num)
{
    int i,res=1;
    for(i=num;i<=1;i--)
    {
        res=res*i;
    }
    return res;
}
void division(int num,float divisor)
{
    quo=num/divisor;
    divi=num%(int)(divisor);
}
void quadratic(float a,float b,float c)
{
    if((b*b)-(4*a*c)<0)
    {
        printf("\nThere is no real soln");
        exit(0);
    }
    quad_res1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    quad_res2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
}