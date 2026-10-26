#include<stdio.h>

int main()
{
    float order_amount, payable_amount;
    int membership;
    printf("1 for premium\n");
    printf("0 for regular");
    printf("\nEnter order amount and membership:");
    scanf("%f%d",&order_amount,&membership); 
    if(order_amount>=500){
       if(membership==1)
           payable_amount=order_amount-order_amount*10/100;
       else
           payable_amount=order_amount; }
    else 
    { payable_amount=order_amount+50;}
    printf("\nThe payable amount is %.2f",payable_amount);
    return 0;
}    
