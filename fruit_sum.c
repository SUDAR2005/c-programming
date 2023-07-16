//Get 15 different vegetable color. Example: Mango - 'g' for green. Use switch-case and loop to display the total vegetable count in each color
#include <stdio.h>
void main()
{
    int green=0,red=0,pink=0,yellow=0;
    char color;
    printf("enter g for green r for red p for pink y for yellow\n");
    for(int i=0;i<15;i++)
    {
    l:
    printf("\nEnter the value:\n");
    scanf(" %c",&color);
    switch(color)
    {
        case('g'):
            green+=1;
            break;
        case('r'):
            red+=1;
            break;
        case('p'):
            pink+=1;
            break;
        case('y'):
            yellow+=1;
            break;
        default:
            printf("\nInvalid");
            goto l;
    }
}
printf("green:%d\tred:%d\tpink:%d\tyellow:%d",green,red,pink,yellow);

}