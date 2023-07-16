#include<stdio.h>
#define MAX_SIZE 30
typedef struct{
    char name[30],destination[30];
    float salary,bonus;
}employee;
void getEmployeeDetails(employee *em,int size)
{
    for(int i=0;i<size;i++)
    {
        printf("Enter the name of employee: ");
        gets(em[i].name);
        printf("Enter the destination: ");
        gets(em[i].destination);
        printf("Enter the salary of employee: ");
        scanf("%f",&em[i].salary);
        printf("Enter the bonnus amount in percentage: ");
        scanf("%f",&em[i].bonus);
        em[i].bonus=em[i].salary*em[i].bonus;
        getchar();
    }
}
void main()
{
    int size=3;
    employee em[size],*e;
    e=em;
    getEmployeeDetails(em,size);
    for(int i=0;i<size;i++)
    {
        printf("\nThe details of employee %d are",i+1);
        printf("\n%s\t%s\t%.3f\t%.3f",(e+i)->name,(e+i)->destination,(e+i)->salary,(e+i)->bonus);
    }
}