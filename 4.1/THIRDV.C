 #include<stdio.h>
 #include<conio.h>
 void main()
 {
 int a=50;
 int b=10;
 int c;
 clrscr();
 c=b;
 b=a;
 printf("Value of b is %d\n",b);
 a=c;
 printf("Value of a is %d",a);
 getch();
 }