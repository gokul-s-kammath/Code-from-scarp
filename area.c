#include <stdio.h>
int main()
{
int width,length,area;
printf("Enter the length of the rectangle:");
scanf("%d",&length);
printf("Enter the width of the rectangle:");
scanf("%d",&width);
area = length * width;
printf("The area of the rectangle is %d",area);
return 0;
}
