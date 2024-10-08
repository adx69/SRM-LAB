// Write a program in C for addition of two Matrices of same size.

/*
Algorithm:

START
Step 1 → Declare two 2D arrays of size 3x3
Step 2 → Read the elements of the first matrix from the user
Step 3 → Read the elements of the second matrix from the user
Step 4 → Add the elements of the two matrices
Step 5 → Print the sum of the two matrices
STOP
*/

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