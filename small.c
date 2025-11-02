#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter a number:");
scanf("%d",&num1);
printf("Enter another number:");
scanf("%d",&num2);
if(num1>num2)
printf("The %d is smaller",num2);
else
printf("The %d is samller",num1);
return 0;
}
