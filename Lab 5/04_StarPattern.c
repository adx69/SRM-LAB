#include <stdio.h>

int main()
{
    int i, j, count = 5;

    for (i = 1; i <= count; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}