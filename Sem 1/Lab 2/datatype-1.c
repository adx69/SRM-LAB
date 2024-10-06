#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, mul, div;

    printf("Enter the First Number: ");
    scanf("%d", &a);

    printf("Enter the Second Number: ");
    scanf("%d", &b);

    sum = a + b;
    diff = a - b;
    mul = a * b;
    div = a / b;

    printf("The sum of The Numbers is %d \n", sum);
    printf("The Difference of The numbers is %d \n", diff);
    printf("The multiplication of The numbers is %d \n", mul);
    printf("The Division of the numbers is %d \n", div);

    return 0;
}