//C program to tokanize a sttring.

#include<stdio.h>
#include<string.h>

void main()
{
    char array[] = "This is the strring to be tokanized.\nhello";
    char *string = strtok(array," ");
    while(string!=NULL)
    {
        printf("%s\n",string);
        string = strtok(NULL," ");
    }
}