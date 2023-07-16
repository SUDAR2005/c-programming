//C program to print the permutaions of given string
#include <stdio.h>
#include <string.h>
void swap(char* ch1,char* ch2)
{
    char temp = *ch1;
    *ch1=*ch2;
    *ch2=temp;
}
void permute(char *str,int stno,int edno)
{
    int i;
    if(stno==edno)
        printf("%s\t",str);
    else
        {
            for(i=stno;i<=edno;i++)
            {
                swap((str+stno),(str+i));
                permute(str,stno+1,edno);
                swap((str+stno),(str+i));
            }
        }
}
void main()
{
    char str[]="abcefg";
    int len=strlen(str);
    permute(str,0,len-1);
}