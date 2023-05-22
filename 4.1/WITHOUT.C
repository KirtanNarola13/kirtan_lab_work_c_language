#include<conio.h>
#include<stdio.h>
void main()
{
int a=10;
int b=20;
clrscr();
b=a;
printf("value of b is %d\n",b);
b=20;
a=b;
printf("Value of a is %d",a);
getch();
}