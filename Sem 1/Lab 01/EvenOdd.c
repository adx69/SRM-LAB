#include <stdio.h>

int main()
{
    int number;

    printf("Enter the numeber:");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("The Number is even");
    else
        printf("The number is odd");

    return 0;
}