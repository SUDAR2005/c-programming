#include <stdio.h>
int* remove_duplicate(int array[],int length)
{
    int i,j,k;
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(array[i]==array[j])
            {
                for(k=j;k<length;k++)
                {
                    array[k]=array[k+1];
                }
            length--;
            k--;
            }
        }
    }
    return array;
}
void main()
{
    int test[]={1,8,8,4,5};
    int len,i,j,temp;
    len=*(&test+1)-test;
    printf("the size is: %d\n",len);
    for(i=0;i<len;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(test[i]>test[j])
            {
                temp=test[i];
                test[i]=test[j];
                test[j]=temp;
            }
        }
    } 
 printf("The elements of array are:");
 int test1[]=remove_duplicate(test,len);
for(i=0;i<len;i++)
{
   printf("%d\t",test1[i]);
}
printf("\nThe second maximum element is: %d",test[len-2]);
}
