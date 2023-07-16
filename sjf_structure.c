#include<stdio.h>
#include<conio.h>
typedef struct{
    int pid,at,bt;
}Process;
void getProcess(Process *p,int size)
{
    for(int i=0;i<size;i++){
    printf("Enter the process id,at,bt:");
    scanf("%d %d %d",p[i].pid,p[i].at,p[i].bt);
}
}
void FCFS(Process *p,int size)
{
    int ct[size],wt[size],tat[size],i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(p[j].at>p[j+1].at)
            {
                Process temp= p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        if(i==0)   
            ct[i]=p[i].bt;
        else
            ct[i]=ct[i-1]+p[i].bt;
        tat[i]=ct[i]-p[i].at;
        wt[i]=tat[i]-p[i].bt;
    }
}
void main()
{
    Process process[3];
    getProcess(process,3);
    FCFS(&process[0],3);

}