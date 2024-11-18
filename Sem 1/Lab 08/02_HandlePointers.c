#include <stdio.h>

int main()
{
    int* ab; 
    int m;   

    m = 29; 
    printf(" Address of m : %p\n", &m); 
    printf(" Value of m : %d\n\n", m); 

    ab = &m; 
    printf(" Now ab is assigned with the address of m.\n");
    printf(" Address of ab : %p\n", ab);      
    printf(" Content of ab : %d\n", *ab);   

    m = 34; 
    printf(" new value of m\n");
    printf(" Address of ab : %p\n", ab);      
    printf(" Content of ab : %d\n\n", *ab);   

    *ab = 7;
    printf(" Address of m : %p\n", &m);               
                                                      
                                                      
    printf(" Value of m : %d\n\n", m);                

    return 0;
}