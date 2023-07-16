#include<stdio.h>
#include<string.h>
typedef struct{
    char book[30],authour[30];
    int price,no;
}book;
void getDetails(book *b,int size)
{
    for(int i=0;i<size;i++)
    {
    printf("\nEnter book name: ");
    gets(b[i].book);
    printf("\nEnter authour name: ");
    gets(b[i].authour);
    printf("\nEnter the number of price: ");
    scanf("%d",&b[i].price);
    printf("\nEnter the number of books: ");
    scanf("%d",&b[i].no);
    getchar();
    }
}
void main()
{
    book Book[3],ret_b[3];
    getDetails(Book,3);
    /*for(int i=0;i<3;i++)
    {
       printf("\nThe details of %d book is: ",i+1);
       puts(Book[i].authour);
       puts(Book[i].book);
       printf("%d",Book[i].price);
       printf("\n%d",Book[i].no); 
    }*/
    FILE *fp;
    fp=fopen("sudar.txt","w+");
    for(int i=0;i<3;i++)
    {
        fprintf(fp,"%s\t",Book[i].book);
        fprintf(fp,"%s\t",Book[i].authour);
        fprintf(fp,"%d\t",Book[i].price);
        fprintf(fp,"%d\n",Book[i].no);
    }
    fclose(fp);
    fp=fopen("sudar.txt","r");
    int i;
    char buffer[100];
    while(fgets(buffer,sizeof(buffer),fp))
    {
        sscanf(buffer,"%[^/t] %[^/t] %d %d",ret_b[i].book,ret_b[i].authour,&ret_b[i].price,&ret_b[i].no);
        i++;
    }

}