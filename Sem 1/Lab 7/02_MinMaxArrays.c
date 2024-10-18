#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 4, 3};
    int max = arr[0], min = arr[0]; 

    for (int i = 1; i < 4; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The maximum and minimum numbers are %d and %d\n", max, min);
    return 0;
}