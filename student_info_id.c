#include <stdio.h>
#include <string.h>

#define NUM_STUDENTS 3

struct Student_details{
    char name[15];
    double m1, m2, m3, m4, m5, total, avg;
};
void main()
{
    int i, j, n = 0, a, b;
    double max = 0.0;
    struct Student_details S[NUM_STUDENTS], t;
    for(i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Enter the %d Student name : ", i + 1);
        scanf("%s", S[i].name);
        
        printf("\nEnter the marks in 5 subjects: ");
        scanf("%lf %lf %lf %lf %lf", &S[i].m1, &S[i].m2, &S[i].m3, &S[i].m4, &S[i].m5);
        
        S[i].total = S[i].m1 + S[i].m2 + S[i].m3 + S[i].m4 + S[i].m5;
        S[i].avg = S[i].total / 5;
    }
    for(i = 0; i < NUM_STUDENTS; i++)
    {
        printf("The details of %d student is: \n", i + 1);
        printf("\n%s\n", S[i].name);
        printf("\nMark 1=%f,\tMark2=%f,\tMark3=%f,\tMark4=%f,\tMark5=%f\n", S[i].m1, S[i].m2, S[i].m3, S[i].m4, S[i].m5);
        printf("\nThe total is %f\n", S[i].total);
        printf("\nThe average is %f\n", S[i].avg);
    }
    
    max = S[0].avg;
    for(i = 1; i < NUM_STUDENTS; i++)
     
    {
        if(S[i].avg > max)
        {
            max = S[i].avg;
            n = i;
        }
    }
    
    printf("\nThe maximum mark is obtained by %s: %f\n", S[n].name, S[n].total);
    
    for(i = 0; i < NUM_STUDENTS - 1; i++)
    {
        for(j = i + 1; j < NUM_STUDENTS; j++)
        {
            if(strcmp(S[i].name, S[j].name) > 0)
            {
                t = S[i];
                S[i] = S[j];
                S[j] = t;
            }
        }
    }
    printf("\nThe sorted names are: ");
    for(i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%s\n", S[i].name);
    }
}
