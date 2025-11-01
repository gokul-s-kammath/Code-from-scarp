#include<stdio.h>
int main()
{
int p,r,t,simple;
printf("Enter the principle value\n");
scanf("%d",&p);
printf("Enter the rate in percentage\n ");
scanf("%d",&r);
printf("Enter the time(in years) \n");
scanf("%d",&t);
simple=p*r*t;
printf("The principle value is:%d",simple);
return 0;
}
