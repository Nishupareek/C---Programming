#include<stdio.h>
int main()
{
    float principalAmt, rateOfInterest, Time_Period, simpleInterest,monthlyEmi;
    printf("Please enter the Principal Amount : = ");
    scanf("%f", &principalAmt);
    printf("Please Enter Rate Of Interest : = ");
    scanf("%f", &rateOfInterest);
    printf("Please Enter the Time Period in Years : = ");
    scanf("%f", &Time_Period);
    simpleInterest = (principalAmt * rateOfInterest * Time_Period) / 100;
    printf("Simple Interest for Principal Amount %.2f is = %.2f\n", principalAmt, simpleInterest);
    monthlyEmi = (principalAmt+simpleInterest)/(Time_Period*12);
    printf("Monthly EMI for using simple interest is = %.2f\n",monthlyEmi);
    return 0;
}