#include<conio.h>
#include<stdio.h>
void main()
{
int a;

clrscr();
printf("Enter any number : ");
scanf("%d",&a);

if(a==0){
 printf("Number is neutral");
}
else if(a<0){
 printf("Number is nagative");
}
else{
printf("Number is positive");
}

getch();
}