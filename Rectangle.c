#include<stdio.h>
int main()
{
   float length,breadth,area,perimeter;
   printf("The length and breadth of a rectangle:");
   scanf("%f%f",&length,&breadth);
   area=length*breadth;
   printf("\nThe area of a rectangle is %f",area);
   perimeter=2*(length+breadth);
   printf("\nThe perimeter of a rectangle is %f",perimeter);
   return 0;
  }         
