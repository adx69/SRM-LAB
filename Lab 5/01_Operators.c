// 1.Write a single C program demonstrating the usage of Arithmetic operators , Relational operators, Logical operators, Bitwise operators a.	Compile time input

#include <stdio.h>

int main()
{
    int num1, num2, result;

    // Arithmetic operators
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Arithmetic operators
    printf("Arithmetic operators:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtraction: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplication: %d * %d = %d\n", num1, num2, num1 * num2);
    printf("Division: %d / %d = %d\n", num1, num2, num1 / num2);
    printf("Modulus: %d %% %d = %d\n", num1, num2, num1 % num2);

    // Relational operators
    printf("Relational operators:\n");
    printf("%d > %d = %d\n", num1, num2, num1 > num2);
    printf("%d < %d = %d\n", num1, num2, num1 < num2);
    printf("%d >= %d = %d\n", num1, num2, num1 >= num2);
    printf("%d <= %d = %d\n", num1, num2, num1 <= num2);
    printf("%d == %d = %d\n", num1, num2, num1 == num2);
    printf("%d != %d = %d\n", num1, num2, num1 != num2);

    // Logical operators
    printf("Logical operators:\n");
    printf("AND: %d && %d = %d\n", num1, num2, num1 && num2);
    printf("OR: %d || %d = %d\n", num1, num2, num1 || num2);
    printf("NOT: !%d = %d\n", num1, !num1);

    // Bitwise operators
    printf("Bitwise operators:\n");
    printf("AND: %d & %d = %d\n", num1, num2, num1 & num2);
    printf("OR: %d | %d = %d\n", num1, num2, num1 | num2);
    printf("XOR: %d ^ %d = %d\n", num1, num2, num1 ^ num2);

    return 0;
}