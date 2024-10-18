#include <stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int pos;

    printf("The array is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nEnter the index of the element to delete: ");
    scanf("%d", &pos);

    printf("The array is: ");
    for (int i = 0; i < 5; i++)
    {
        if (i != pos)
        {
            printf("%d ", arr[i]);
        }
    }
}