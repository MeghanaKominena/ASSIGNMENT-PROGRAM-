#include<stdio.h>

int main()
{
    int age, monthly income, credit score;
    printf("Enter age,monthly income and credit score\n:");
    scanf("%d%d%d",&age,&monthly income,& credit score);
    if(21<=age&&age<=60)
       printf("\nAge is valid");
    else
       printf("\nLoan rejected:age not in 21 to 60");
    if(monthly income>=25000)
       printf("\nMonthly salary is valid");
    else
       printf("\nLoan rejected:income below 25000");
    if(credit score>=700)
       printf("\ncredit score is valid" );
    else
       printf("\nLoan rejected:credit score below 700");
    if(21<age&&age<60&&monthly income>=25000&&credit score>=700)
       printf("\nLoan approved");
    else
       printf("\nLoan rejected");
    return 0;
 }   
    
