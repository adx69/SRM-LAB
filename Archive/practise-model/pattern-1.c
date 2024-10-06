#include<stdio.h>

// make for loop to print * in in a pattern

int main(){
    int i, j, count;

    printf("Enter no of rows to be printed: ");
    scanf("%d", &count);

    for(i = 1; i <= count; i++){
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}