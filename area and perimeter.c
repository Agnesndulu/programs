//program to calculate the area and the perimeter of a rectangle
#include<stdio.h>
int main()
{
float area, length, width,perimeter;
printf("enter the length\n");
scanf("%f",&length);
printf("enter the width\n");
scanf("%f",&width);
area=length*width;
printf("area of the rectangle %.2f",area);
 perimeter =2*(length+width);
printf("perimeter of the rectangle %.2f\n",perimeter);

return 0;

}