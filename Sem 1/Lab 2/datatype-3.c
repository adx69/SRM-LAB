#include <stdio.h>

int main() {

    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Using logical operators directly
    printf("%s\n", (a == b && a > 0) ? "a is equal to b and a is greater than 0" : "a is not equal to b and a is not greater than 0");
    printf("%s\n", (a == b || a > 0) ? "a is equal to b or a is greater than 0" : "a is not equal to b or a is not greater than 0");
    printf("%s\n", !(a == b) ? "a is not equal to b" : "a is equal to b");

    return 0;
}