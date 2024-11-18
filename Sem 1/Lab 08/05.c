#include<stdio.h>
int main(){
    int arr[100],count;
    printf("Enter the number of elements:");
    scanf("%d",&count);

    for(int i=0;i<count;i++){
        printf("Enter number %d:",i+1);
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < count; i++) {
        printf(" element %d : %d \n", i, *(arr + i)); 
    }
    return 0;
}