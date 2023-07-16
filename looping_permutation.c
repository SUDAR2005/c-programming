//C program to print the permutations of string using loop 
#include <stdio.h>
void main()
{
    char str[4];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        printf("Enter element %d: ",i+1);
        scanf(" %c",&str[i]);
    }
    str[3]='\0';
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                if((str[i]!=str[j])&&((str[j]!=str[k]))&&((str[k]!=str[i])))
                    printf("%c %c %c\n",str[i],str[j],str[k]);
            }
        }
    }
}