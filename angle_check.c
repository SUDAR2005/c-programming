//Check whether angle can be formed with given triangle
#include <stdio.h>
int triangle(int angle1,int angle2,int angle3)
{
    if(angle1+angle2+angle3==180)
        return 1;
    return 0;
}
void main()
{
    float a1,a2,a3,res;
    printf("Enter the angle1,angle2,angle3: \n");
    scanf("%f %f %f",&a1,&a2,&a3);
    res=triangle(a1,a2,a3);
    if(res)
        printf("Triangle");
    else
        printf("Not");
}