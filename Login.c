#include<stdio.h>

int main()
{   
      int u,p;//u is user ID and p is password 
      printf("enter the user ID and password:");
      scanf("%d%d",&u,&p);
      if(u==101){
         if(p==4321)
            printf("\nLogin successful");
         else
            printf("\nIncorrect password");}
      
      else
         printf("\nUser not found");
      
      return 0;
 }   
    