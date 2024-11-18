#include <stdio.h>

int main()
{
    int i = 2, count = 10, first = 0, second = 1, next;

    printf("The First %d Fibonacci Numbers are: %d %d ", count, first, second);

    while (i <= count)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", next);
        i++;
    }
}