#include<stdio.h>

int main()
{
   int a;
   printf("Read the age of the person a:");
   scanf("%d",&a);
   if(a>=18)
     printf("Eligible to vote");
   else
     printf("Not eligible to vote");
   return 0;  
 }  