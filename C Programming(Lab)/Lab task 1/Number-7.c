#include <stdio.h>
#include <conio.h>
#define PI 3.1416 //declare as a global variable
void main()
{
float radius,diameter,circum,area;
printf("Enter the radius whatever you want : ");
scanf("%f",&radius);
diameter=(2*radius);
circum=(2*PI*radius);
area=(PI*radius*radius);
printf("Diameter Of the circle is :%f\n",diameter);
printf("Circumference Of the circle is :%f\n",circum);
printf("Area Of the circle is :%f\n",area);
}
