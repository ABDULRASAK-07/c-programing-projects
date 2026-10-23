#include<stdio.h>
#include <conio.h>
int main()
{
float num1 , num2 ;
char op;
clrscr();
printf("calculator\n");
printf("enter num1 :");
scanf("%f",&num1);
printf("enter num2 ;");
scanf("%f",&num2);
printf("enter operation +,-,*,/:");
scanf(" %c",&op);
switch(op)
{
case '+':
printf("addition=%f",num1+num2);
break;
case '-':
printf("sub=%f",num1 - num2);
break;
case '*':
printf("mul=%f",num1 * num2);
break;
case '/':
printf("div=%f",num1 / num2);
break;
}
getch();
return 0;
}