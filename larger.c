#include<stdio.h>
int main()
{
int num1,num2;
printf("Enter a number:");
scanf("%d",&num1);
printf("Enter another number:");
scanf("%d",&num2);
if(num1>num2)
printf("The %d is larger",num1);
else
printf("The %d is larger",num2);
return 0;
}
