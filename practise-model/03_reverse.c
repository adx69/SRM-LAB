// Write a C program to reverse a given number using a do-while loop

#include <stdio.h>

int main() {
    int num, reversed_num = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    } while (num != 0);

    printf("Reversed number: %d\n", reversed_num);

    return 0;
}