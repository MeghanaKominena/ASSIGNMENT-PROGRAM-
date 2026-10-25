#include<stdio.h>

int main()
{
   char n;
   printf("Enter a character n:");
   scanf("%c",&n);
   if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
      printf("Character is vowel");
   else
      printf("Character is not vowel");
   return 0;
 }  