// Write c code to perform Deletion of a character in string without function a basic program

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, j;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to delete: ");
    scanf("%c", &ch);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
        }
    }
    printf("String after deleting '%c': %s\n", ch, str);
    return 0;
}