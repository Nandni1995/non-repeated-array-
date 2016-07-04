#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[100],c,d;
clrscr();
printf("enter the number:");
scanf("%d",&c);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<c;i++)
{
d=0;
for(j=0;j<c;j++)
{
if(a[i]==a[j])
d++;
}
if(d>1)
printf("%d",a[i]);
break;
}
getch();
}
