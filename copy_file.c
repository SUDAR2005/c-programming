#include<stdio.h>
void main()
{
    FILE *input,*output;
    char ch,array[200];
    input=fopen("files.txt","r+");
    output=fopen("output.txt","w+");
    if(input==NULL|| output==NULL)
    {
        printf("Can't open the file");
    }
    while(fgets(array,sizeof(array),input)!=NULL)
    {
        fputs(array,output);
    }
    fclose(input);
    fclose(output);
}