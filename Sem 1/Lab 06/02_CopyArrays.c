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