#include <stdio.h>

int main()
{
    int m = 10, n, o;
    int *z = &m; 

    printf("z address of m  = %p\n", z); 
    printf("*z value of m = %i\n", *z); 
    printf("address of m = %p\n", &m); 
    printf("address of n = %p\n", &n);
    printf("address of o = %p\n", &o); 
    printf("address of z = %p\n", &z); 

    return 0;
}