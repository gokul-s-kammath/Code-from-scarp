#include<stdio.h>
int main()
{
int num1,num2,div;
printf("Enter a number:");
scanf("%d",&num1);
printf("Enter another number:");
scanf("%d",&num2);
div=num1%num2;
printf("The reminder is %d",div);
return 0;
}
