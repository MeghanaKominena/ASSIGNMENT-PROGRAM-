#include<stdio.h>

int main()
{
    int a,s,c;//a is age,s is monthly income and c is credit score
    printf("\nEnter age,monthly income and credit score\n:");
    scanf("%d%d%d",&a,&s,&c);
    if(21<=a&&a<=60)
       printf("\nAge is valid");
    else
       printf("\nLoan rejected:age not in 21 to 60");
    if(s>=25000)
       printf("\nMonthly salary is valid");
    else
       printf("\nLoan rejected:income below 25000");
    if(c>=700)
       printf("\ncredit score is valid" );
    else
       printf("\nLoan rejected:credit score below 700");
    if(21<a&&a<60&&s>=25000&&c>=700)
       printf("\nLoan approved");
    else
       printf("\nLoan rejected");
    return 0;
 }   
    