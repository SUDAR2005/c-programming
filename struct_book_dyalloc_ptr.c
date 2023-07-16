//C program to find the result using pointer
#include<stdio.h>
#include<stdlib.h>
struct bookdetails
{
    char *name,*title,*writer;
    int id,no,price;
};
void main()
{
    int number,i;
    printf("Enter the number of books in library: ");
    scanf("%d",&number);
    struct bookdetails *arrbook=(struct bookdetails*)malloc(number*sizeof(struct bookdetails));
    for(i=0;i<number;i++)
    {
        arrbook[i].name=(char*)calloc(20,sizeof(char));
        arrbook[i].title=(char*)calloc(20,sizeof(char));
        arrbook[i].writer=(char*)calloc(20,sizeof(char));
        printf("\nEnter the name of book: ");
        scanf("%s",arrbook[i].name);
        printf("\nEnter the book title: ");
        scanf("%s",arrbook[i].title);
        printf("\nEnter the writer's name: ");
        scanf("%s",arrbook[i].writer);
        printf("\nEnter the book id: ");
        scanf("%d",&arrbook[i].id);
        printf("\nEnter the price of book: ");
        scanf("%d",&arrbook[i].price);
        printf("\nEnter the number of books: ");
        scanf("%d",&arrbook[i].no);
    }
     for(i=0;i<number;i++)
    {
        printf("\nthe name of book: %s",arrbook[i].name);
        printf("\nthe book title: %s",arrbook[i].title);
        printf("\nthe writer's name: %s",arrbook[i].writer);
        printf("\nthe book id: %d",arrbook[i].id);
        printf("\nthe price of book: %d",arrbook[i].price);
        printf("\nthe number of books: %d",arrbook[i].no);
    }
    for(i=0;i<number;i++)
    {
        free(arrbook[i].name);
        free(arrbook[i].title);
        free(arrbook[i].writer);
    }
    free(arrbook);
}