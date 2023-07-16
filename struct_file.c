#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct 
{
    char Name[30],mail[30];
    int reg_num,class;
}student;
void getDetails(student* st,int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("Enter the student name: ");
        gets(st[i].Name);
         printf("Enter the mail: ");
        gets(st[i].mail);
        printf("Enter the register number: ");
        scanf("%d",&st[i].reg_num);
        getchar();
        printf("Enter the class: ");
        scanf("%d",&st[i].class);
        getchar();
    }
}

void main()
{
    int i;
    char line[100];
    FILE *fp;
    student st[3],ret_st[3];
    getDetails(st,3);
    fp=fopen("file.txt","r+");
    if(fp==NULL)
    {
        printf("\nCan't open the file");
    }
    for(i=0;i<3;i++)
    {
        fprintf(fp,"%s\t",st[i].Name);
        fprintf(fp,"%d\t",st[i].reg_num);
        fprintf(fp,"%d\n",st[i].class);
    }
    fclose(fp);
    fp=fopen("file.txt","r+");
    {
        i=0;
        while(fgets(line,sizeof(line),fp)!=NULL)
        {
            sscanf(line,"%[^\t] %d %d",ret_st[i].Name,&ret_st[i].reg_num,&ret_st[i].class);
            i++;
        }
        for(i=0;i<3;i++)
            printf("\n%s,%d,%d",ret_st[i].Name,ret_st[i].reg_num,ret_st[i].class);
    }
    fclose(fp);
}