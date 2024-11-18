#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Using ternary operator for comparisons
    printf("%s\n", (a == b) ? "a is equal to b" : "a is not equal to b");
    printf("%s\n", (a != b) ? "a is not equal to b" : "a is equal to b");
    printf("%s\n", (a > b) ? "a is greater than b" : "a is not greater than b");
    printf("%s\n", (a < b) ? "a is less than b" : "a is not less than b");

    return 0;
}