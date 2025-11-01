#include<stdio.h>
int main()
{
int a,b,c=0;
printf("Enter 2 numbers A and B:");
scanf("%d %d",&a,&b);
c=a;
a=b;
b=c;
printf("The numbers have been swaped:A=%d and B=%d",a,b);
return 0;
}
