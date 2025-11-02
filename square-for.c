
#include<stdio.h>
#include<math.h>
int main()
{
int num,i,power,result=1;
printf("Enter a number:");
scanf("%d",&num);
printf("Enter a power:");
scanf("%d",&power);

for(i=1;i<=power;i++)
{
result=num*result;
}
printf("The result is:%d\n",result);
return 0;
}
