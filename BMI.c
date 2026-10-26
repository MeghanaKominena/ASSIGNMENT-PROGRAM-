#include<stdio.h>
int main ()
{
    float weight,height,b;//weight in kg,height in metres 
    printf("The weight and height of a person:");
    scanf("%f%f",&weight,&height);
    b=weight/(height*height);
    printf("The BMI of a person is %.2f",b);
    if(b<18.5)
       printf("\nThe person is underweight");
    else if(b>=18.5&&b<25)
            printf("\nThe person is normal");
         else if(b>=25&&b<30)
            printf("\nThe person is overweight"); 
              else 
                 printf("\nThe person is obese");   
    return 0;                  
 }  
