#include<stdio.h>
void main()
{
int n,i,j,k;
printf("Enterthe n value : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=n;j>=i;j--)
printf(" ");
for(j=0;j<=i;j++)
{
if((j==0)||(j==i))
k=1;
else
k=k*(i-j+1)/j;
printf("%3d",k);
}
printf("\n");
}
}