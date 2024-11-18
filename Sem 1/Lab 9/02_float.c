// using function Write a program to read three float number and print the sum of it.

#include <stdio.h>

float sum(float a, float b, float c)
{
    return a + b + c;
}

int main()
{
    float a, b, c;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);
    printf("Sum of %f, %f and %f is %f\n", a, b, c, sum(a, b, c));
    return 0;
}