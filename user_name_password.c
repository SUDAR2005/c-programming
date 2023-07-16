#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char UN[10][15]={"vignesh","jalal","vinoth","saroja","vasanth","guru","naveen"},PW[10][15]={"vig_94","jal_97","vin_09","saro_75","vas_45","gur_56","nav_09"},CM[10][15]={"machan","loosu paya","mapila","trustworthy","Good Soul","nanban","mama",};
    char user[15],pword[15];
    printf("Enter the user name: ");
    scanf("%s",user);
    printf("\nEnter the password: ");
    scanf("%s",pword);
    for(i=0;i<10;i++)
    {
        if((strcmp(user,UN[i])==0) && (strcmp(pword,PW[i])==0))
            printf("%s",CM[i]);
    }
}