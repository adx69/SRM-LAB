//Write a program to read three integer number and print the sum of it using functions

#include <stdio.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Sum of %d, %d and %d is %d\n", a, b, c, sum(a, b, c));
    return 0;
}