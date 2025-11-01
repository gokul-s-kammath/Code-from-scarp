#include<stdio.h>
int main()
{
int num1,num2,num3;
float avg;
printf("Enter a number A:");
scanf("%d",&num1);
printf("Enter another number B:");
scanf("%d",&num2);
printf("Enter another number C:");
scanf("%d",&num3);
avg=(num1+num2+num3)/3;
printf("The avarage of these numbers are %f:",avg);
return 0;
}
