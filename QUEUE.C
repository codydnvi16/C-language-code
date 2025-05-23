#include<stdio.h>
#include<conio.h>
#define size 5
int front =-1;
int rare=-1;
int q[size];
void enqueue();
void dequeue();
void display();
void main()

{
int choice;
clrscr();

do{
 printf("\n MENU");
 printf("\n 1.Enqueue");
 printf("\n 2.Dequeue");
 printf("\n 3.Display");
 printf("\n 4.exit");
 printf("\n Enter your choice:");
 scanf("%d", & choice);

 switch(choice)
{
 case 1:
 printf("\n Enqueue op");

 enqueue();
 break;

 case 2:
 printf("\n Dequeue op");
 dequeue();
 break;

 case 3:
 printf("\n Display");
 display();
 break;

 case 4:
 printf("\n Exit ");
 break;
 default:
 printf("\n exit press 4");
 }
 }
 while(choice!=4);
 getch();
 }
 void enqueue()
 {
 int x;
 printf("\n enter element:");
 scanf ("%d", & x);
  if (rare==size-1)
  {
   printf("\n rare is overflow");
   }
   else if (front==-1 && rare==-1)
   {
     front=rare=0;
     q[rare]=0;
     }
     else{
     rare++;
     q[rare]=x;
     }
     }
 void dequeue()
 {
  if (front==-1 && rare==-1)
  {
   printf("\n underflow");
   }
   else if (front == rare)
   {
    front=rare=-1;
    }
    else{
     front++;
     }
     }
 void display()
 {
 int i;
 if (front ==-1 && rare==-1)
 {
  printf("\n empty");
  }
       else{

  for(i=front;i<rare+1;i++)
  {
  printf("\n %d",q[i]);
  }
  }
 }