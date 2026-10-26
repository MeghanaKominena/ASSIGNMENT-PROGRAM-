#include<stdio.h>
int main()
{
   char m;
   printf("Enter a character m:");
   scanf("%c",&m);
   if(m=='a'||m=='e'||m=='i'||m=='o'||m=='u'||m=='A'||m=='E'||m=='I'||m=='O'||m=='U')
   {printf("Character is vowel");}
   else
   {printf("Character is not vowel");}
   return 0;
 }  
