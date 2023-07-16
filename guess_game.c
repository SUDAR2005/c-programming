//C program to built guess game without GUI
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int guess()
{
    int num,i,temp,num1;
    char opt;
    time_t t;
    printf("Enter the maximum limit: ");
    scanf("%d",&num);
    srand(time(&t));
    temp=rand()%(num+1);
    num1=num;
    printf("\nEnter numbers between 0 to %d",num);
    for(i=1;i<=5;i++)
    {
        printf("\nEnter your guess: ");
        scanf("%d",&num);
        if(num==temp)
        {
            printf("\nWow! you won!!");
            for(i=1;i<=2;i)
            {
                printf("\nDo you want to continue..?\npress Y for yes and N for no: ");
                scanf(" %c",&opt);
                if(opt=='y'|| opt=='Y')
                    return(guess());
                if(opt=='n'||opt=='N')
                    break;
                if(opt!='y'||opt!='Y'||opt!='N'||opt!='n')
                {
                    printf("Enter valid input");
                    i--;
                    continue;
                }
            }
                return 0;
        }
        else if(num>num1)
        {
            printf("\nEnter valid data:");
            i--;
            continue;
        }
        else
        {
            printf("\nGood try! Go for one more! you have %d try",(5-i));
            continue;
        }
    }
    for(i=1;i<=2;i){
    printf("\nAlas! You lost!\nthe number is %d\nDo you want to continue..?\npress Y for yes and N for no: ",temp);
    scanf(" %c",&opt);
    if(opt=='y'|| opt=='Y')
        return(guess());
    else if(opt!='y'||opt!='Y'||opt!='N'||opt!='n')
        {
        printf("Enter valid input");
        i--;
        continue;
        }
    else
        break;
    }
    return 1;
}
void main()
{
    guess();
}