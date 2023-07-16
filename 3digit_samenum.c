//C program to print 3 digit numbers that starts and ends with same numbers
#include <stdio.h>
void main()
{
    int i,num;
    i=0;
    while(i<10)
    {
        printf("Enter the number: ");
        scanf("%d",&num);
        if(num<100 || num>999)
        {
            printf("Not valid\n");
            continue;
        }
        if(num>=100 && num<=999)
        {
            if((int)(num/100)==num%10)
            {
                printf("The number is: %d\n",num);
            }
            i++;
        }
    }
}