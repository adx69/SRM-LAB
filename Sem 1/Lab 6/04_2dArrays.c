// Write a program in C for a 2D array of size 3x3 and print the matrix

/*

Algorithm:

START
Step 1 → Declare a 2D array of size 3x3
Step 2 → Read the elements from the user
Step 3 → Print the matrix
STOP

*/

#include <stdio.h>

int main()
{
    int arr[3][3];
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}