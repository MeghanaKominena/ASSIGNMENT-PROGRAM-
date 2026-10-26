#include<stdio.h>

int main()
{
    float order amount, payable amount;
    int membership;
    printf("1 for premium\n");
    printf("0 for regular");
    printf("\nEnter order amount and membership:");
    scanf("%f%d",&order amount,&membership); 
    if(order amount>=500){
       if(membership==1)
           payable amount=order amount-order amount*10/100;
           printf("\nThe payable amount is %.2f", payable amount);
       else
           payable amount=order amount;
           printf("\nThe payable amount is %.2f",payable amount);}
    else 
        payable amount=order amount-50;
       printf("\nThe payable amount is %.2f",payable amount);
    return 0;
}    
