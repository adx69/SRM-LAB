// Write a program in C to copy the elements of one array into another array

/*
Algorithm:

START
Step 1 → Declare two arrays of 5 elements
Step 2 → Read the elements from the user
Step 3 → Copy the elements of the first array into the second array
Step 4 → Print the elements of both arrays
STOP

*/

#include <stdio.h>

int main()
{
    int arr1[5], arr2[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("The elements in the first array are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr1[i]);
    }

    printf("\nThe elements in the second array are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}