#include<stdio.h>
int main ()
{


float bp, da, hra, grpay; // bp is basic salery, da is dearness allowance,hra is house rent, grpay is gross pay 
printf("\n Enter Basic Salery of Ramesh");
scanf("%f", &bp);
da = 0.4*bp;
hra = 0.2*bp;
grpay = bp + da + hra;

printf(" Basic Salery of Ramesh = %f\n", bp);
printf(" Dearness Allowance of Ramesh = %f\n", da);
printf(" House Rent of Ramesh = %f\n", hra);
printf(" GrossPay of Ramesh = %f\n", grpay);





    return 0;
}