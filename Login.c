#include<stdio.h>

int main()
{   
      int userId,password;
      printf("enter the user ID and password:");
      scanf("%d%d",&userId,&password);
      if(userId==101)
            { if(password==4321)
                printf("\nLogin successful");
              else
                printf("\nIncorrect password");}
      else
         printf("\nUser not found");
      
      return 0;
 }   
    
