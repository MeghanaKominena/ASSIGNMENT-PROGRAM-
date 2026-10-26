#include<stdio.h>
int main ()
{
    int a;
    printf("The marks of a student:");
    scanf("%d",&a);
    if(a>=90&&a<=100)
       printf("The grade is O");
    else if(a>=80&&a<=89)
          printf("The grade is A+");
       else if(a>=70&&a<=79)
               printf("The grade is A");
            else if(a>=60&&a<=69)
                  printf("The grade is B");
                 else if(a>=50&&a<=59)
                         printf("The grade is C");
                       else if(a<50&&a>=0)
                               printf("FAIL");
                            else 
                               printf("Invalid mark");
   return 0;                            
           
 }  
