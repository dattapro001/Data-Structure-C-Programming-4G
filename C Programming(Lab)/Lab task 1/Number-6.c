#include <stdio.h>
#include <conio.h>

void main()
{
	int km;

	printf("Enter any kilometers:");
	scanf("%d", &km);

	float miles =(km*0.621);

	printf("There are total %f Miles", miles);
}
