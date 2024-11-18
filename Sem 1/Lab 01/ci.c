//make  a c program that takes input and calculate simple interest

#include <stdio.h>

int main()
{
    float p, r, t, si;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time period: ");
    scanf("%f", &t);
    si = (p * r * t) / 100;
    printf("The simple interest is: %f", si);
    return 0;
}
