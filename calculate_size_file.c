#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    int size;
    char filename[20];
    printf("Enter the file name: ");
    scanf("%s",filename);
    fp=fopen("mi.txt","r");
    fseek(fp,0,SEEK_END);
    size=ftell(fp);
    printf("\nThe size of file %s is %d",filename,size);
    fclose(fp);
}