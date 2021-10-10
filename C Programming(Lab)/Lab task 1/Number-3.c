#include <stdio.h>
#include <string.h>
void main()
{
   char ch[50];
   int i;
   printf("Enter any string : ");
   gets(ch);
    for(i=0;ch[i]!='\0';i++)
        {
      if(ch[i]>='a'&&ch[i]<='z')
      {
         ch[i] = ch[i] - 32;
      }
   }
   printf("Upper Case =>%s",ch);
}

