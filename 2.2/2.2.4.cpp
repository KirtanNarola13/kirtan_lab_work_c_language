#include<stdio.h>
#include<conio.h>
void main()
{
float p;
float r;
float t;
float inte;
clrscr();
printf("Enter the value of principal amount : ");
scanf("%f",&p);
printf("Enter the value of rate per annum : ");
scanf("%f",&r);
printf("Enter the value of time(year) : ");
scanf("%f",&t);
inte=(p*r*t)/100;
printf("The simple interest is %.2f",inte);

getch();
}
