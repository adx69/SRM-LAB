#include <stdio.h>

int main()
{
    int arr1[3][3], arr2[3][3], sum[3][3];
    int i, j;

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The sum of the two matrices is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}