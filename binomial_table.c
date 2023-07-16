/* C script to print binomial table*/
#include <stdio.h>
int fact(int a)
{
    int i,result=1;
    if(a<=1){
        return 1;
    }
    else
    {
        for(i=a;i>=1;i--)
        {
            result*=i;    
        }
        return result;    
    } 
}
void main()
{
    int row,i,j;
    printf("Enter the No. of rows: ");
    scanf("%d",&row);
    for(i=0;i<=row;i++)
    {
        printf("%d\t",i);
    }
    printf("\n");
    for(i=0;i<=row;i++)
    {
        printf("%d\t",i);
        for(j=0;j<=i;j++)
        {
            printf("%d\t",fact(i)/(fact(j)*fact(i-j)));
        }
        printf("\n");
    }

}
