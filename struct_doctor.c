//Structure for students who got pointers in c
#include<stdio.h>
struct doctor
{
    char name[20],branch[30];
    int year1,year2,date1,date2,month1,month2;
};
void main()
{
    int num,i,y1;
    printf("Enter the number of students: ");
    scanf("%d",&num);
    struct doctor doc[num],*doc1;
    doc1=doc;
    for(i=0;i<num;i++)
    {
        printf("\nEnter the student name: ");
        scanf("%s",(doc1+i)->name);
        printf("\nEnter the student's year of joining: ");
        scanf("%d/%d/%d",&(doc1+i)->date1,&(doc1+i)->month1,&(doc1+i)->year1);
        printf("\nEnter the student's year of leaving: ");
        scanf("%d/%d/%d",&(doc1+i)->date2,&(doc1+i)->month2,&(doc1+i)->year2);
        printf("\nEnter the branch of engineering: ");
        scanf("%s",(doc+i)->branch);
    }
    printf("\nEnter the year of passing:");
    scanf("%d",&y1);
    for(i=0;i<num;i++)
    {
        if(doc[i].year1==y1)
        {
            printf("\n%s",(doc1+i)->name);
            printf("\n%d/%d/%d",(doc1+i)->date1,(doc1+i)->month1,(doc1+i)->year1);
            printf("\n%d/%d/%d",(doc1+i)->date2,(doc1+i)->month2,(doc1+i)->year2);
            printf("\n%s",(doc+i)->branch);
             
        }
    }
}