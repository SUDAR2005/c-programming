#include<stdio.h>
#include<string.h>
char* arrange(char* arr)
{
    int i,j,num1=0,num2=0,length;
    char temp;
    length=strlen(arr);
    for(i=0;i<length;i++)
    {
    for(j=i+1;j<length;j++)
    {
        num1=(int)arr[i];
        num2=(int)arr[j];
        if(num1>num2)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    }
    return arr;
}