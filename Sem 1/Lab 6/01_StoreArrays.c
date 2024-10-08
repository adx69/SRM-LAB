// Write a program in C to store elements in an array and print them

/*
Algorithm:

START
Step 1 → Declare an array of 5 elements
Step 2 → Read the elements from the user
Step 3 → Print the elements
STOP

*/

#include <stdio.h>

int main()
{
    int arr[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are: ");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}