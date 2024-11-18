// using functions Write a program to read the sides of rectangle and print the area and perimeter of rectangle.

#include <stdio.h>

int area(int l, int b)
{
    return l * b;
}

int perimeter(int l, int b)
{
    return 2 * (l + b);
}

int main()
{
    int l, b;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d", &l, &b);
    printf("Area of rectangle with length %d and breadth %d is %d\n", l, b, area(l, b));
    printf("Perimeter of rectangle with length %d and breadth %d is %d\n", l, b, perimeter(l, b));
    return 0;
}