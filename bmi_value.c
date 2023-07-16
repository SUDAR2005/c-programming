//BMI calculator for the given data
#include <stdio.h>
float bmi(float ,float);
void main()
{
    float weight,height;
    printf("Enter the weight(in kg) and height(in meters):");
    scanf("%f %f",&weight,&height);
    printf("Your bmi is: %f",bmi(weight,height));
}
float bmi(float weight,float height)
{
    if(weight<0 || height<0 )
    {
        printf("Invalid input");
        exit(0);
    }
    return (weight/(height*height));
}