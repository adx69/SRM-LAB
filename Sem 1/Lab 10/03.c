// Write c code to perform Concatenation of two  Strings using with and without strcat function

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
        ;
    for (j = 0; str2[j] != '\0'; j++)
    {
        str1[i] = str2[j];
        i++;
    }
    str1[i] = '\0';
    printf("Concatenated string: %s\n", str1);
    return 0;
}