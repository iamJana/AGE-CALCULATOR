#include<stdio.h>
#include<stdlib.h>
int cy;
int cm;
int cd;
int by;
int bm;
int bd;
int year;
int month;
int day;
int mnth;

int main()
{
printf("-----------------------------------------------------------------------\n");
printf("	\tWELCOME TO JAES AGE CALCULATOR\n");
printf("				\t\t\tWritten by JANA\n");
printf("-----------------------------------------------------------------------\n");
printf("ENTER TODAY'S DATE::");
scanf("%d",&cd);
printf("\nENTER THIS MONTH::");
scanf("%d",&cm);
printf("\nENTER THIS YEAR::");
scanf("%d",&cy);
printf("\nENTER YOUR BIRTH DATE::");
scanf("%d",&bd);
printf("\nENTER BIRTH MONTH::");
scanf("%d",&bm);
printf("\nENTER BIRTH YEAR::");
scanf("%d",&by);
if(cd<bd)
{
cm=cm-1;
cd=cd+31;
day=cd-bd;
}
else
{
day=cd-bd;
}
if(cm<bm)
{
cy=cy-1;
cm=cm+12;
month=cm-bm;
}
else
{
month=cm+bm;
}

year=cy-by;
mnth=year*12;
mnth=mnth+month;

printf("-----------------------------------------------------------------------\n");
printf("	\t\t\tBY YEARS\t\t\t\n");
printf("-----------------------------------------------------------------------\n");
printf("\t\t\t%d years\n",year);
printf("\t\t\t%d months\n",month);
printf("\t\t\t%d days\n",day);
printf("-----------------------------------------------------------------------\n");
printf("	\t\t\tBY MONTH\t\t\t\n");
printf("-----------------------------------------------------------------------\n");
printf("\t\t\t%d months\n",mnth);
printf("\t\t\t%d days\n",day);
printf("-----------------------------------------------------------------------\n");

}
