#include <stdio.h>
#include <conio.h>
void main()
{
    float P,T,R,Fomula;
    printf("Enter any interest Principle Number : ");
    scanf("%f",&P);
    printf("Enter any Time Number : ");
    scanf("%f",&T);
    printf("Enter any Rate Number : ");
    scanf("%f",&R);
    Fomula=(P*T*R)/100;
    printf("The Simple Interest is : %.2f",Fomula);

}
