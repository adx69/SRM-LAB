#include<stdio.h>
int main(){
    int a,b,sum;
    printf("Enter the first number:");
    scanf("%d",&a);

    printf("Enter the second number:");
    scanf("%d",&b);

    int *p=&a;
    int *q=&b;

    sum=*p+*q;
    printf("%d\n",sum);

    return 0;

}