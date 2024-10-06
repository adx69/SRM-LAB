#include <stdio.h>

int main()
{
    float radius;
    float area;
    printf("Enter Radius");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("The area is: %f", area);
    return 0;
}