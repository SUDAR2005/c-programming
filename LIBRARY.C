#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

void add_book();
void disp_book();
void disp_book_auth(int aut_ano);
void sortbyano();
int sort_fuction(const void*f,const void*ff);
void linkfloat();

struct library
{
  char book_title[20];
  char author_name[20];
  int accno;
  float price;
  int flag;
};
int count;
struct library book[10];

void  main()
{

 int choice;
 while(1)
 {
  printf("\n 1. Add book information");
  printf("\n 2. Display book information");
  printf("\n 3. List all books of given author ");
  printf("\n 4. List the title of specified book");
  printf("\n 5. List the count of books in the library");
  printf("\n 6. List the books in the order of accession number");
  printf("\n 7. Exit");
  printf(" \n Your choice?");
  scanf("%d",&choice);
  switch(choice)
  {
    case 1:
     add_book();
     break;
    case 2:
     disp_book();
     break;
    case 3:
     disp_book_auth(0);
     break;
    case 4:
     disp_book_auth(1);
     break;
   case 5:
     printf("\n The total number of books in the library is %d",count);
     break;
   case 6:
     sortbyano();
     break;
   case 7:
     exit(0);
   }
 }

 }

 void add_book()
 {
  if(count==9)
  {
   printf("\n No more space");
   return;
  }
  printf("\n Enter the details of the book ");
  printf("\n Name of the book");
  scanf("%s",book[count].book_title);
  printf("\n Name of the author :");
  scanf("%s",book[count].author_name);
  printf("\n Accesion number of the book");
  scanf("%s",book[count].accno);
  printf("\n price of the book :");
  scanf("%s",book[count].price);

  printf("\n Issued/Not issued (0/1): ");
  scanf("%d",book[count].flag);

  if((book[count].flag!=0) && (book[count].flag!=1))
  {
    printf("\n Improper status");
    return;


  }
  count++;
  printf("\n Book details entered");
 }
 void disp_book()
 {
  int i;
  printf("\n Details of %d books in the library .",count);
  for(i=0;i<count;i++)
  {
   printf("\n Name of the book :%s ",book[i].book_title);
   printf("\n Name of the author :%s ",book[i].author_name);
   printf("\n accession number of the book :%s ",book[i].accno);
   printf("\n price of the book :%s ",book[i].price);
   printf("\n status of the book");
   book[i].flag==0?printf("issued"):printf("Available");
   printf("\n\n");
   }
 }
 void disp_book_auth(int aut_ano)
 {
   char*nm[20];
   int accno;
   int i=0;
   int dec=0;

   if(aut_ano==0)
   {
    printf("\n EAnter the name of the author : ");
    scanf("%s",nm);
    printf("\n details of the book by the author %s in the library:",nm);

   }
   else
   {

     printf("\n Enter the accession number of the book:");
     scanf("%d",&accno);
     printf("\n Details of the book with accession no %d:",accno);

   }
   for(i=0;i<count;i++)
   {
   if((strcmp(nm,book[i].author_name)==0)&&
    (aut_ano==0))
    dec++;
   else
   {

      if(aut_ano==1)
      {
       if(book[i].accno==accno)
	 dec++;
       else
	 continue;
      }
      else
	break;

     }
     printf("\n Name of the book:%s",book[i].book_title);
     printf("\n Name of the author:%s",book[i].author_name);
     printf("\n accession number of the book:%s",book[i].accno);
     printf("\n price of the book:%s",book[i].price);
    printf("\n status of the book");
    book[i].flag==0?printf("issued"):printf("available");
    printf("\n\n");
    }
    if(dec==0)
      printf("\n No such books")     ;
 }
  void sortbyano()
  { int sort_function;
   qsort((struct library*)book,count,sizeof(book[0]),sort_function);
   printf("\n After sorting by accession number");
   disp_book();

  }

  int sort_function( const void*f,const void*ff)
  {
  return (((struct library*)f)->accno-((struct library*)ff)->accno);

  }

   void linkfloat()
   {
   float a=0,*b;
   b=&a;
   a=*b;
   }
