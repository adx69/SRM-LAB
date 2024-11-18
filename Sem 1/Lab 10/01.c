// Write c code to insert a  character into a String at given position

#include <stdio.h>

int main() {
    char str[100], ch;
    int pos, i, len;

    printf("Enter a string: ");
    gets(str);

    printf("Enter a character to insert: ");
    scanf("%c", &ch);

    printf("Enter the position to insert: ");
    scanf("%d", &pos);

    for (len = 0; str[len] != '\0'; len++);

    for (i = len; i >= pos; i--) {
        str[i + 1] = str[i];
    }

    str[pos] = ch;

    printf("The string after inserting the character is: %s\n", str);

    return 0;
}