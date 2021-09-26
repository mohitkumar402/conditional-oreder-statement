# conditional-oreder-statement
#include <stdio.h>
int main()
{

int b,f,p,s,Burger,French,Pizza,Sandwiches;
char ch,B,F,P,S;
printf("1=Burger\n2=French Fries\n3=pizza\n4=Sandwiches\n");
printf("Enter your order \nplease Enter the choice 1,2,3,4\n");

scanf(" %d",&ch);
switch(ch)

{
case 1:
printf("your order is Burger\n");
printf("please enter your quantity");

scanf("%d",&b);
Burger=200*b;

printf("your total charges is: %d",Burger);
break;
case 2:
printf("your order is French \n");
printf("please enter your quantity");

scanf("%d",&f);
French=50*f;

printf("your total charges is: %d",French);
break;
case 3:
printf("your order is Pizza\n");
printf("please enter your quantity");

scanf("%d",&p);
Pizza=500*p;

printf("your total charges is: %d",Pizza);
break;
case 4:
printf("your order is Sandwiches\n");
printf("please enter your quantity ");

scanf("%d",&s);
Sandwiches=150*s;

printf("your total charges is: %d",Sandwiches);
break;

default:
printf("invalid  choice");

break;
}
}
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
  1=Burger
2=French Fries
3=pizza
4=Sandwiches
Enter your order
please Enter the choice 1,2,3,4
2
your order is French
please enter your quantity5
your total charges is: 250
--------------------------------
Process exited after 10.75 seconds with return value 26
Press any key to continue . .
