#include<stdio.h>

int main()
{
    float a,o;//a is order amount 
    int m;//m is membership type
    printf("enter order amount and membership:");//1 for premium and 0 for regular
    scanf("%f%d",&a,&m); 
    if(a>=500){
       if(m==1)
           printf("\nThe payable amount is %.2f",o=a-a*10/100);
       else
           printf("\nThe payable amount is %.2f",o=a);}
    else       
    printf("The payable amount is %d",o=a-50);
    return 0;
}    