#include<stdio.h>

int main(){

    int a = 10, b = 20, c = 40, d = 30;

    // Pre-Increment Operator
    printf("Initial value of a: %d\n", a);
    printf("Value of a after pre-increment: %d\n", ++a);

    // Post-Increment Operator
    printf("Initial value of b: %d\n", b);
    printf("Value of b after post-increment: %d\n", b++);

    // Pre-Decrement Operator
    printf("Initial value of c: %d\n", c);
    printf("Value of c after pre-decrement: %d\n", --c);

    // Post-Decrement Operator
    printf("Initial value of d: %d\n", d);
    printf("Value of d after post-decrement: %d\n", d--);

    return 0;

}