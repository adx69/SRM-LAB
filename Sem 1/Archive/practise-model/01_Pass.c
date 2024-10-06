// Write a C program that prompts the user to enter a password. Use a do-while loop to keep asking for the password until the correct one is entered for beginers

#include <stdio.h>

int main() {
    int password = 123;
    int user_password;

    do {
        printf("Enter the password: ");
        scanf("%d", &user_password);
        
    } while (user_password != password);

    printf("Correct password\n");
    return 0;
}