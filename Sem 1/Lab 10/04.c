// Using C code demonstrate strcmp() , strcpy(), strlen()  function

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character if present
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("Length of first string: %lu\n", strlen(str1));
    printf("Length of second string: %lu\n", strlen(str2));
    if (strcmp(str1, str2) == 0)
    {
        printf("Both strings are equal\n");
    }
    else
    {
        printf("Both strings are not equal\n");
    }
    strcpy(str1, str2);
    printf("First string after copying second string: %s\n", str1);
    return 0;
}