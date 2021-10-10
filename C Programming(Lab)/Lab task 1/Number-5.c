#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    printf("Enter any character: ");
    scanf("%c",&ch);

    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("%c is an Alphabet",ch);
    else
        printf("%c is not an Alphabet",ch);

    return 0;
}
