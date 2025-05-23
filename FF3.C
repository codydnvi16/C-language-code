#include<stdio.h>
#include<conio.h>
void readfile(char name[]);
void writefile(char name[], char content[]);
void renamefile(char oldfile[], char newfile[]);
void removefile(char name[]);
void main()
{
int value;
char fnm[50],txt[50],oldfile[50],newfile[50];
clrscr();
do{
printf("\n 1.read");
printf("\n 2.write");
printf("\n 3.rename");
printf("\n 4.remove");
printf("\n 5.exit");
printf("\n enter your choice:");
scanf("%d", & value);
printf("\n your enter choice is: %d", value);

switch(value)
{
 case 1:
 printf("\n read");
 printf("\n enter file name:");
 scanf("%s",& fnm);
 readfile(fnm);
 break;

 case 2:
 printf("\n enter filename to write:");
 scanf("\n %s",& fnm);
 printf("\n enter content to write:");
 scanf("\n %s", txt);
 writefile(fnm,txt);
 break;

 case 3:
 printf("\n enter your existing filename");
 scanf("%s",& fnm);
 printf("\n enter oldfilenme to rename");
 scanf("%s", & oldfile);
 printf("\n enter newfile name ");
 scanf("%s", & newfile);
 renamefile(oldfile,newfile);
 break;

 case 4:
 printf("\n  enter filename to remove:");
 scanf("%s", &fnm);
 removefile(fnm);
 break;

 default:
 printf("\n exit due to press 5");

 }
 }

while(value !=5);
getch();
}
//----------------------------------------------------
void readfile(char name[])
{
 FILE*fp;
 char buffer[500];
 clrscr();
 fp=fopen(name,"r");
 if(fp==NULL)
 {
 printf("\n unable to open");
 }
 while(fgets(buffer,25,fp)!= NULL)
 {
 printf("\n %s",buffer);
 }
 fclose(fp);
 }
//------------------------------------------------------
 void writefile (char name[], char content[])
 {

  FILE*fp;
 clrscr();
 fp=fopen(name,"w");
 if(fp==NULL)
{
 printf("\n unable to create");
}
else{
fprintf(fp,"%s", content);
fclose(fp);
printf("\n done");
}
}
//---------------------------------------------------------
 void renamefile(char oldfile[], char newfile[])
{
  int value;
  clrscr();
  value=rename(oldfile,newfile);
  printf("\n %d", value);
  if(!value)
  {
  printf("\n file name change");
  }
  else{
  printf("\n no such directories");
  }
  }
  //--------------------------------------------------------
  void removefile(char name[])
  {
  if(remove(name)==NULL)
  {
   printf("\n file deleted");
}
else{
printf("\n error");
}
}