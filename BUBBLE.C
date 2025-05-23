#include<stdio.h>
#include<conio.h>
void bubble(int a,int num);
void main()
{
int a[45],i,n;
clrscr();
printf("\n enter the limits");
scanf("%d",& n);
for(i=0;i<n;i++)
{
printf("\n enter elements %d", i+1);
scanf("%d",& a[i]);
}
bubble(a,n);
getch();
}
void bubble(int a,int num)
{
int i,j,temp;
for(i=0;i<num;i++)
{
 for (j=0;j<num-1;j++)
 {
  if(a[j]> a[j+1])
  {
    temp=a[j]

