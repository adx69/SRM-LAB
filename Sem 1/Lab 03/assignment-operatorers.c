// assignment operators

#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 40, d = 30;

    printf("a += 2: %d\n", a += 2);
    printf("b -= 2: %d\n", b -= 2);
    printf("c *= 2: %d\n", c *= 2);
    printf("d /= 2: %d\n", d /= 2);
    printf("a %%= 2: %d\n", a %= 2);

    return 0;
}