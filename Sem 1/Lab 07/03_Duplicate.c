#include <stdio.h>
int main()
{
    int arr[5] = {5, 7, 9, 7, 5};
    int count = 0;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }
    printf(" The number of duplicate elements are %d", count);
    return 0;
    
}