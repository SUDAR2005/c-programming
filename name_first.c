#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    char name[2][10][30]={{"Vignesh ","mohammad ","selva ","siddhik "},{"kumar ","jalal ","siddhik ","rajan "}};
    int i;
    for(i=0;i<4;i++)
        {
            printf("\nThe %d name is: %s",i+1,strcat(name[0][i],name[1][i]));
        }
        
}    
