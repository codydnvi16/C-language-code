#include<stdio.h>
#include<conio.h>
void createfile(char name[], char content[]);
void readfile(char name[]);
void updatefile(char name[], char data[],int position);
void deletefile(char name[]);
void main()
{
 int value,position;
 char fnm[54],txt[34],data[56];
 clrscr();

 do{
 printf("\n ---------------------");
 printf("\n MENU SELECT OPTION TO PERFORM");
 printf("\n ----------------------");
 printf("\n 1.CREATE FILE");
 printf("\n 2.READ FILE");
 printf("\n 3.UPDATE FILE");
 printf("\n 4.DELETE FILE");
 printf("\n 5. EXIT");
 printf("\n Press 5 for exit   ");
       printf("\n Enter your choice");
       scanf("%d",& value);
       printf("\n your enterd choice is %d", value);


switch(value)
{
 case 1:
 printf("\n\n\n Create mode");
 printf("\n Enter  a filename to create:");
 scanf("%s", & fnm);
 printf("\n enter a text to writen");
 scanf("%s",& txt);
 createfile(fnm,txt);
 break;

 case 2:
 printf("\n\n\n Readfile mode");
 printf("\n enter filename to read:");
 scanf("%s", & fnm);
 readfile(fnm);
 break;

 case 3:
 printf("\n\n\n Update mode ");
 printf("\n enter filename to update the data:");
 scanf("%s", & fnm);
 printf("\n enter positon from where to update:");
 scanf("%d", & position);
 printf("\n enter text to update:");
 scanf("%s",& data);
 updatefile(fnm,data,position);
 break;

 case 4:
 printf("\n\n Delete mode");
 printf("\n enter file name to delete:");
 scanf("%s", & fnm);
 deletefile(fnm);
 break;

 default:
 printf("\n exit due to press 5 ");

 }
 }
while(value!=5);
getch();
}
//-------------------------------------------
//create file
void createfile(char name[],char content[])
{
 FILE*fp;
 fp=fopen(name,"w");
 if(fp==NULL)
 {
  printf("\n file is unable to open");
  }
  else{
  fprintf(fp,"%s",content);
 printf("\n file writen successfully");
}
}
//----------------------------------------------
//readfile
void readfile(char name[])
{
 FILE*fp;
 char buff[200];
 clrscr();
 fp=fopen(name,"r");
 if(fp==NULL)
 {
  printf("\n error in opening");
}
while(fgets(buff,20,fp)!=NULL)
{
 printf("%s", buff);
}
}
//--------------------------------------------
//update the text
void updatefile(char name[], char data[],int position)
{
 FILE*fp;
 fp=fopen(name,"w");
 if(fp==NULL)
 {
  printf("\n error in updating file");
  }
  fseek (fp,position,SEEK_SET);
  fprintf(fp,"%s",data);
  printf("\n data update succesfully");
}
//--------------------------------------------
//delete file
void deletefile (char name[])
{
 char*fp=name;
 if(remove(fp)==NULL)
 {
  printf("\n deleted successfully");
  }
  else{
   printf("\n error ");
   }
   }








