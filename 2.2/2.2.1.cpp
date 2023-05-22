#include<conio.h>
#include<stdio.h>
void main()
{
float pi;
int red;
float cir;
clrscr();
pi=3.14;
printf("Enter the value of radius :  ");
scanf("%d",&red);
printf("The vlaue of Pi is %.2f\n",pi);
cir=pi*red;
printf("The area of a circle is %.2f",cir);
getch();

}
