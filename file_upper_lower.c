#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    FILE *fp1,*fp2;
    char fname1[20],fname2[20],ch;
    printf("Enter the name of file to be changed: ");
    gets(fname1);
    printf("Enter the destination file name: ");
    gets(fname2);
    fp1=fopen(fname1,"r+");
    fp2=fopen(fname2,"w");
    while((ch=fgetc(fp1))!=EOF)
    {
        if(isupper(ch))
            fputc(tolower(ch),fp2);
        else if(islower(ch))
            fputc(toupper(ch),fp2);
        else
            fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}