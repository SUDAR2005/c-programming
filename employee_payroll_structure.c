                                        /*C program to find and display employee pay roll*/
#include<stdio.h>
#include<string.h>
#define MAX_EMPLOYEE 3
struct Employee
{
    char  name[15];
    float h_salary,allowance,bonus,g_salary,tax,n_salary;
}E[MAX_EMPLOYEE];
void getEmployeeDetails()
{
    int i;
    for(i=0;i<MAX_EMPLOYEE;i++)
    {
        printf("\nEnter the name of %d employee:",i+1);
        scanf("%s",E[i].name);
        printf("\nEnter the salary details");
        printf("\nEnter the hand on salary:");
        scanf("%f",&E[i].h_salary);
        printf("\nEnter the allowance:");
        scanf("%f",&E[i].allowance);
        printf("\nEnter the bonus:");
        scanf("%f",&E[i].bonus);
        E[i].g_salary = E[i].h_salary+E[i].allowance+E[i].bonus;
        printf("\nEnter the tax amount:");
        scanf("%f",&E[i].tax);
        E[i].n_salary = E[i].g_salary-E[i].tax;
        printf("\nThe gross salary is: %0.3f",E[i].g_salary);
        printf("\nThe net salary is:%0.3f",E[i].n_salary);
    }
}
void sortEmployee()
{
    int i,j;
    struct Employee t;
    for(i=0;i<MAX_EMPLOYEE-1;i++)
    {
        for(j=i+1;j<MAX_EMPLOYEE;j++)
        {
            if(strcmp(E[i].name,E[j].name)>0)
            {
                t=E[i];
                E[i]=E[j];
                E[j]=t;
            }
        }
    }
}
void printEmployeeDetails()
{
    int i;
    for(i=0;i<MAX_EMPLOYEE;i++)
    {
        printf("\nThe details of %d is:",i+1);
        printf("\n%s",E[i].name);
        printf("\n%0.2f",E[i].g_salary);
        printf("\n%0.2f",E[i].n_salary);
    }
}
void main()
{
    int i;
    getEmployeeDetails();
    sortEmployee();
    printEmployeeDetails();
}