#include <stdio.h>
#include <conio.h>
void main()
{
int year,week,day,days;
printf("Enter any total Number of Days : ");
scanf("%d",&day);
year=day/365;
week=(day%365)/7;
days=(day%365)%7;
printf("Year = %d\n",year);
printf("Week = %d\n",week);
printf("Days = %d\n",days);
}
