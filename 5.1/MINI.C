#include<conio.h>
#include<stdio.h>
void main()
{
int a;
int b;
clrscr();
printf("Enter the first number : ");
scanf("%d",&a);
printf("Enter the second number : ");
scanf("%d",&b);
if(a<b){
 printf("first number is minimum");
}
else {
 printf("second number is minimum");
}
getch();
}
