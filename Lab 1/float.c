#include <stdio.h>

int main()
{
    float a = 5.5;
    float b = 10.5;
    float sum = a + b;
    printf("The sum of %f and %f is %f\n", a, b, sum);
    printf("The sum of %.2f and %.2f is %.2f\n", a, b, sum);
    return 0;
}