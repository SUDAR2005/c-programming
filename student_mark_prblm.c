//Get the studenta mark as input and make it as 100 if it is greater than 80 if the detail is invalild set as invalid
#include <stdio.h>
void main()
{
    int marks[5],i=0;
    while(i<5)
    {
        printf("Enter the mark %d: ",i+1);
        scanf("%d",&marks[i]);
        if(marks[i]>100 || marks[i]<0)
        {
            printf("Invalid Entry!\n");
            continue;
        }
        if(marks[i]>80 && marks[i]<100)
        {
            marks[i]=100;
        }
        i++;
    }
    printf("\nThe marks obtained by strudents in respective subjects are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",marks[i]);
    }
} 