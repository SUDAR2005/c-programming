#include <stdio.h>
#include <stdlib.h>
void main()
{
    int hr1,hr2,min;
    printf("Enter time in 24hrs format as hr min: ");
    scanf("%d\n",&hr1);
    scanf("%d",&min);
    if(min>60||hr1>24||hr1<0||min<0){
        printf("Invalid input");
        exit(0);
    }
    hr2=hr1-12;
    if(hr1<12)
    {
    if(hr1==0)
    {
        printf("Time is: 12 %d am",min);
    }
    else
    {
        printf("Time is: %d %d am",hr1,min);
    }
    }
    if(hr1>=12)
    {
        if(hr1==12){
            printf("Time is 12 %d pm",min);
        }
        else{
            printf("Time is %d %d pm",hr2,min);
        }
    }
}