#include <stdio.h>
#include <string.h>
#define MAX_BOOK 3

struct dop {
    int date, day, year;
};

struct book {
    char title[15];
    char auth[15], pub[15];
    long int id;
    float cost;
    struct dop dp;
    int quant;
} B[MAX_BOOK];

// Function prototypes
void getBookDetails();
int retMaxInd();
void searchBook();
void searchYearBook();

int main() {
    int n;
    getBookDetails();
    n = retMaxInd();
    printf("The Costliest book is at index %d\n", n);
    printf("The book details are as follows:\n");
    printf("Title:%s\nAuthor:%s\nPublisher:%s\nDOP:%d/%d/%d\nQuantity:%d\n", B[n].title, B[n].auth, B[n].pub, B[n].dp.date, B[n].dp.day, B[n].dp.year, B[n].quant);
    searchBook();
    searchYearBook();
    return 0;
}

void getBookDetails() {
    int i;
    for (i = 0; i < MAX_BOOK; i++) 
    {
        printf("Enter the name of %d book:",i+1);
        gets(B[i].title);
        printf("Enter the name of author: \n");
        gets(B[i].auth);
        printf("Enter the name of publisher: \n");
        gets(B[i].pub);
        printf("\nEnter the cost of book: ");
        scanf("%f",&B[i].cost);
        printf("\nEnter the Date of Publishing as dd/mm/yyyy: ");
        scanf("%d %d %d",&B[i].dp.date,&B[i].dp.day,&B[i].dp.year);
        printf("\nEnter the quantity of books in library: ");
        scanf("%d",&B[i].quant);
    }
}
int retMaxInd() {
    int i, max = B[0].cost, n = 0;
    for (i = 1; i < MAX_BOOK; i++) {
        if (B[i].cost > max) {
            max = B[i].cost;
            n = i;
        }
    }
    return n;
}

void searchBook() {
    int n, i;
    char t[15];
l:
    printf("\nEnter 1 to search by title, 2 to search by author, 3 to search by publisher: ");
    scanf("%d", &n);
    switch (n) {
        case 1:
            printf("Enter the book title: ");
            scanf("%s",t);
            for (i = 0; i < MAX_BOOK; i++) {
            if(strcmp(B[i].title,t)==0)
            {
                printf("Title:%s\nAuthor:%s\nPublisher:%s\nDOP:%d/%d/%d\nQuantity:%d\n",B[i].title,B[i].auth,B[i].pub,B[i].cost,B[i].dp.date,B[i].dp.day,B[i].dp.year,B[i].quant);
            }
        }
        break;
    case(2):
        printf("Enter the book author\n");
        scanf("%s",t);
        for(i=0;i<MAX_BOOK;i++)
        {
            if(strcmp(B[i].auth,t)==0)
            {
                printf("Title:%s\nAuthor:%s\nPublisher:%s\nDOP:%d/%d/%d\nQuantity:%d\n",B[i].title,B[i].auth,B[i].pub,B[i].cost,B[i].dp.date,B[i].dp.day,B[i].dp.year,B[i].quant);
            }
        }
        break;
    case(3):
        printf("Enter the book publisher\n");
        scanf("%s",t);
        for(i=0;i<MAX_BOOK;i++)
        {
            if(strcmp(B[i].pub,t)==0)
            {
                printf("Title:%s\nAuthor:%s\nPublisher:%s\nDOP:%d/%d/%d\nQuantity:%d\n",B[i].title,B[i].auth,B[i].pub,B[i].cost,B[i].dp.date,B[i].dp.day,B[i].dp.year,B[i].quant);
            }
        }
        break;
    default:
        goto l;
        break;
    }
}
void searchYearBook()
{
    int y,i;
    printf("Enter the year:\n");
    scanf("%d",&y);
    for(i=0;i<MAX_BOOK;i++)
    {
        if(y==B[i].dp.year)
        {
            printf("Title:%s\nAuthor:%s\nPublisher:%s\nDOP:%d/%d/%d\nQuantity:%d",B[i].title,B[i].auth,B[i].pub,B[i].cost,B[i].dp.date,B[i].dp.day,B[i].dp.year,B[i].quant);
        }
    }
}