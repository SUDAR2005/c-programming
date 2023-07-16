//C program to differentiate btw structure and union
#include<stdio.h>
#include<stdlib.h>
typedef struct students
{
    char name[20];
    int id,age;
}s;
typedef union Students
{
    char name[20];
    int id,age;
}S;
typedef int i;
void main()
{
    S Stud;
    s stus2;
    printf("The memory allocated for structure is: %d",sizeof(s));
    printf("\nThe memory allocated for union is: %d",sizeof(S));
    scanf("\n%s",Stud.name);      //getting inputs for union
    scanf("\n%d",&Stud.id); 
    scanf("\n%d",&Stud.age);
    printf("\n%s",Stud.name);     //displaying output
    printf("\n%d",Stud.id);
    printf("\n%d",Stud.age);
    scanf("\n%s",Stud.name);       //changing one value in union
    printf("\n%s",Stud.name);     //after changed
    printf("\n%d",Stud.id);
    printf("\n%d",Stud.age);
}