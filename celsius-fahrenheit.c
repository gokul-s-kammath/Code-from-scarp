#include<stdio.h> 
#include<math.h>
int main()
{
int feran,celsius;
printf("Enter the temperature:");
scanf("%d",&celsius);
feran = (celsius*9/5)+32;
printf("%d",feran);
return 0;
}
