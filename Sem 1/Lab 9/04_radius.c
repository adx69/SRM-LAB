// using functions Write a program to read the radius of circle and print the area and perimeter of circle.

#include <stdio.h>

float area(float r)
{
    return 3.14 * r * r;
}

float perimeter(float r)
{
    return 2 * 3.14 * r;
}

int main()
{
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of circle with radius %f is %f\n", r, area(r));
    printf("Perimeter of circle with radius %f is %f\n", r, perimeter(r));
    return 0;
}
