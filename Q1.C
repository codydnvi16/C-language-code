#include<stdio.h>
#include<conio.h>
void quick(int a[] ,int low,int high);
int partition(int a[],int low,int high);
void main()
{
 int a[34],i,n;
 clrscr();
 printf("\n enter elemt:");
 scanf("%d", & n);
 for (i=0;i<n;i++)
 {
  printf("\n elemets:");
  scanf("%d",& a[i]);
  }
  quick(a,0,n-1);
  printf("\n sorted list:");
  for (i=0;i<n;i++)
  {
   printf("\n %d", a[i]);
   }
   getch();
   }
 void quick(int a[],int low,int high)
 {
  if (low<high)
  {
   int pivot_index=partiton(a,low,high);
   quick(a,low,pivot_index-1);
   quick(a,pivot_index+1,low);
   }
   }
   int partiton(int a[],int low,int high)
   {
    int pivot=a[high];
    int i=low-1,j,temp;
    for (j=low;j<high;j++)
    {

     if (a[j]>a[pivot])
     {
      i++;
      temp=a[i];
      a[i]=a[j];
      a[j]=temp;
      }
      }
      temp=a[i=1];
      a[i+1]=a[high];
      a[high]=temp;
      return i+1;
      }

