#include <stdio.h>

int main()
{
    float length;
    float breadth;
    float area;

    printf("Enter Length:");
    scanf("%f", &length);
    printf("Enter Breadth");
    scanf("%f", &breadth);

    area = length * breadth;

    printf("The area of Rectangle is: %f", area);

    return 0;
}